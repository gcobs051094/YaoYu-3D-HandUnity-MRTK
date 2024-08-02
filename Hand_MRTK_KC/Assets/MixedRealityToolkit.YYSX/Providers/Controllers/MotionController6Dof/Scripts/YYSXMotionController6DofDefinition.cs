using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.YYSX.XRSDK.Input
{
    public class YYSXMotionController6DofDefinition :BaseInputSourceDefinition
    {
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="handedness">The handedness that this definition represents.</param>
        public YYSXMotionController6DofDefinition(Handedness handedness) : base(handedness) {
            if ( (handedness != Handedness.Left) &&
                (handedness != Handedness.Right) ) {
                throw new System.ArgumentException($"Unsupported Handedness ({handedness}). The ViveWandControllerDefinition supports Left and Right.");
            }
        }

        //修改玩必须重启UnityEditor 否则不生效
        protected override MixedRealityInputActionMapping[] DefaultLeftHandedMappings => new[]
        {
            new MixedRealityInputActionMapping("Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),//有
            new MixedRealityInputActionMapping("Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),//有

            new MixedRealityInputActionMapping("Grip Press", AxisType.SingleAxis, DeviceInputType.GripPress), //有
            new MixedRealityInputActionMapping("Trigger Position", AxisType.SingleAxis, DeviceInputType.Trigger),

            new MixedRealityInputActionMapping("Trigger Touch", AxisType.Digital, DeviceInputType.TriggerTouch), // 0-1 无
            new MixedRealityInputActionMapping("Trigger Press (Select)", AxisType.Digital, DeviceInputType.Select), //有

            new MixedRealityInputActionMapping("Touchpad Position", AxisType.DualAxis, DeviceInputType.Touchpad),
            new MixedRealityInputActionMapping("Touchpad Touch", AxisType.Digital, DeviceInputType.TouchpadTouch),
            new MixedRealityInputActionMapping("Touchpad Press", AxisType.Digital, DeviceInputType.TouchpadPress),
            new MixedRealityInputActionMapping("Menu Press", AxisType.Digital, DeviceInputType.Menu),//有
            new MixedRealityInputActionMapping("Thumbstick Position", AxisType.DualAxis, DeviceInputType.ThumbStick),//有
            new MixedRealityInputActionMapping("Thumbstick Press", AxisType.Digital, DeviceInputType.ThumbStickPress),
        };

    }
}