using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.YYSX.XRSDK.Input
{
    public class YYSXHMDDefinition :BaseInputSourceDefinition
    {
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="handedness">The handedness that this definition represents.</param>
        public YYSXHMDDefinition(Handedness handedness) : base(handedness) {
            if ( (handedness != Handedness.Left) &&
                (handedness != Handedness.Right) ) {
                throw new System.ArgumentException($"Unsupported Handedness ({handedness}). The ViveWandControllerDefinition supports Left and Right.");
            }
        }

        /// <inheritdoc />
        protected override MixedRealityInputActionMapping[] DefaultMappings => new[]
        {
            new MixedRealityInputActionMapping("Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),
            new MixedRealityInputActionMapping("Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),
            new MixedRealityInputActionMapping("Grip Press", AxisType.SingleAxis, DeviceInputType.GripPress),
        };
    }
}