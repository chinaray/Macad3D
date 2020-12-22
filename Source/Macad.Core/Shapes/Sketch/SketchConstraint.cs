﻿using System;
using System.Collections.Generic;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    [SerializeType]
    public abstract class SketchConstraint : BaseObject
    {
        [SerializeMember]
        public int[] Points { get; protected set; }

        [SerializeMember]
        public int[] Segments { get; protected set; }

        //--------------------------------------------------------------------------------------------------

        public virtual double Parameter
        {
            get
            {
                throw new NotImplementedException();
            }
            set
            {
                throw new NotImplementedException();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public abstract SketchConstraint Clone();

        //--------------------------------------------------------------------------------------------------

        public abstract bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver);

        //--------------------------------------------------------------------------------------------------

        protected bool ComputeCirclePoints(Dictionary<int, Pnt2d> points, SketchSegment segment, Pln plane, out Pnt center, out Pnt rim, out double radius)
        {
            center = Pnt.Origin;
            rim = Pnt.Origin;

            Pnt2d? centerPoint2d = null;
            Pnt2d? rimPoint2d = null;
            radius = 0;

            if (segment is SketchSegmentCircle)
            {
                var circleSegment = (SketchSegmentCircle)segment;
                centerPoint2d = points[circleSegment.CenterPoint];
                rimPoint2d = points[circleSegment.RimPoint];
                radius = circleSegment.Radius(points);
            }
            else if (segment is SketchSegmentArc)
            {
                var arcRimSegment = (SketchSegmentArc)segment;
                centerPoint2d = arcRimSegment.Center(points);
                rimPoint2d = points[arcRimSegment.RimPoint];
                radius = arcRimSegment.Radius(points);
            }

            if (centerPoint2d == null)
                return false;

            center = ElSLib.Value(centerPoint2d.Value.X, centerPoint2d.Value.Y, plane);
            rim = ElSLib.Value(rimPoint2d.Value.X, rimPoint2d.Value.Y, plane);

            return true;
        }
    }
}