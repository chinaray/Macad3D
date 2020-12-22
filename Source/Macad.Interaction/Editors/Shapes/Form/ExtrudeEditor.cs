﻿using Macad.Common;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class ExtrudeEditor : Editor<Extrude>
    {
        ExtrudePropertyPanel _Panel;

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<ExtrudePropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }
                
        static ExtrudeEditor()
        {
            RegisterEditor<ExtrudeEditor>();
        }

    }
}