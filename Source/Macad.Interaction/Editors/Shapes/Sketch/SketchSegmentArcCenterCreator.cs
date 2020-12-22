﻿using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentArcCenterCreator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentArc _Segment;
        HintCircle _PreviewLine;
        readonly HintLine[] _HintLines = new HintLine[2];
        Coord2DHudElement _Coord2DHudElement;
        LabelHudElement _LabelHudElement;
        SketchEditorSegmentElement _Element;
        readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>(3);
        readonly int[] _MergePointIndices = new int[3];
        int _PointsCompleted = 0;
        Pnt2d _CenterPoint;
        double _LastEndParameter = 0;
        bool _ArcDirection = false;

        //--------------------------------------------------------------------------------------------------

        public bool Start(SketchEditorTool sketchEditorTool)
        {
            _SketchEditorTool = sketchEditorTool;

            _PointAction = new SketchPointAction(sketchEditorTool);
            if (!_SketchEditorTool.WorkspaceController.StartToolAction(_PointAction, false))
                return false;
            _PointAction.Previewed += _OnActionPreview;
            _PointAction.Finished += _OnActionFinished;

            _Coord2DHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<Coord2DHudElement>(this);

            _SketchEditorTool.StatusText = "Select center point for circular arc.";

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            if (_PreviewLine != null)
            {
                _PreviewLine.Remove();
                _PreviewLine = null;
            }
            for (int i = 0; i < _HintLines.Length; i++)
            {
                if (_HintLines[i] != null)
                    _HintLines[i].Remove();
                _HintLines[i] = null;
            }
            _Element?.Remove();

            _PointAction.ConstraintPoint -= _PointActionOnConstraintPoint;

            _PointAction.Stop();

            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            _Coord2DHudElement = null;
            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_LabelHudElement);
            _LabelHudElement = null;
        }

        //--------------------------------------------------------------------------------------------------

        public bool Continue(int continueWithPoint)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (_PointsCompleted)
                {
                    case 1:
                        if (_PreviewLine == null)
                        {
                            _PreviewLine = new HintCircle(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        }
                        if (_HintLines[0] == null)
                        {
                            _HintLines[0] = new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        }
                        var p1 = _CenterPoint;
                        var p2 = _PointAction.Point;
                        var circ = new gce_MakeCirc2d(p1, p2).Value();
                        _PreviewLine.Set(circ, _SketchEditorTool.Sketch.Plane);
                        _HintLines[0].Set(_CenterPoint, _PointAction.Point, _SketchEditorTool.Sketch.Plane);

                        if (_LabelHudElement == null)
                            _LabelHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                        _LabelHudElement?.SetValue("Radius: " + circ.Radius().ToRoundedString());
                        break;

                    case 2:
                        if (_HintLines[1] == null)
                        {
                            _HintLines[1] = new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        }
                        _HintLines[1].Set(_CenterPoint, _PointAction.Point, _SketchEditorTool.Sketch.Plane);

                        if (_Segment != null)
                        {
                            _CalcArcRimPoints(_PointAction.Point);
                            _Element.OnPointsChanged(_Points, null);
                        }
                        break;
                }

                _Coord2DHudElement?.SetValues(_PointAction.Point.X, _PointAction.Point.Y);
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool _CalcArcRimPoints(Pnt2d endPoint)
        {
            // Project end point on circle
            var startPoint = _Points[0];
            if ((startPoint.Distance(endPoint) <= 0) || (endPoint.Distance(_CenterPoint) <= 0) || (startPoint.Distance(_CenterPoint) <= 0))
                return false;

            var xAxis = new Ax2d(_CenterPoint, new Dir2d(new Vec2d(_CenterPoint, startPoint)));
            var radius = _CenterPoint.Distance(startPoint);
            var circ = new gp_Circ2d(xAxis, radius, _ArcDirection);
            var projEndPoint = new Geom2dAPI_ProjectPointOnCurve(endPoint, new Geom2d_Circle(circ)).NearestPoint();

            // Check if we should toggle the direction
            var endParameter = ElCLib.Parameter(circ, projEndPoint);
            // If the last parameter was very small (~PI/2), and the current is very high (~PI*1.5), toggle direction
            if (((_LastEndParameter < 1) && (endParameter > 5))
                || ((endParameter < 1) && (_LastEndParameter > 5)))
            {
                _ArcDirection = !_ArcDirection;
                circ = new gp_Circ2d(xAxis, radius, _ArcDirection);
                endParameter = ElCLib.Parameter(circ, projEndPoint);
            }
            _LastEndParameter = endParameter;

            // Calc rim point
            var rimPoint = ElCLib.Value(endParameter/2, circ);

            _Points[1] = projEndPoint;
            _Points[2] = rimPoint;
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (_PointsCompleted)
                {
                    case 0:
                        _CenterPoint = _PointAction.Point;
                        _PointsCompleted++;

                        _SketchEditorTool.StatusText = "Select start point for circular arc.";

                        _PointAction.Reset();
                        break;

                    case 1:
                        if (_CenterPoint.Distance(_PointAction.Point) < 0.001)
                        {
                            // Minimum length not met
                            _PointAction.Reset();
                            return;
                        }

                        if (_PreviewLine != null)
                        {
                            _PreviewLine.Remove();
                            _PreviewLine = null;
                        }

                        _Points.Add(0, _PointAction.Point);
                        _MergePointIndices[0] = _PointAction.MergeCandidateIndex;
                        _PointsCompleted++;

                        _Points.Add(1, _PointAction.Point);
                        _Points.Add(2, _PointAction.Point);
                        _Segment = new SketchSegmentArc(0, 1, 2);

                        _Element = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segment, _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
                        _Element.IsCreating = true;
                        _Element.OnPointsChanged(_Points, null);

                        _SketchEditorTool.StatusText = "Select end point for circular arc.";

                        _PointAction.Reset();
                        _PointAction.ConstraintPoint += _PointActionOnConstraintPoint;
                        break;

                    case 2:
                        if (!_CalcArcRimPoints(_PointAction.Point)
                            || _Points[0].Distance(_Points[2]) < 0.001)
                        {
                            // Minimum length not met
                            _PointAction.Reset();
                            return;
                        }

                        _PointAction.Stop();

                        _MergePointIndices[1] = _PointAction.MergeCandidateIndex;
                        _MergePointIndices[2] = -1;

                        _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
                        break;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _PointActionOnConstraintPoint(SketchPointAction sender, ref Pnt2d point)
        {
            if (_PointsCompleted == 2)
            {
                _CalcArcRimPoints(point);
                point = _Points[1];
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}