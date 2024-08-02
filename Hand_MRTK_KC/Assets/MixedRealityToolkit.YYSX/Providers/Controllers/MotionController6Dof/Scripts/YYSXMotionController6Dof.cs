using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.XRSDK.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.YYSX.XRSDK.Input
{
    [MixedRealityController(
    SupportedControllerType.WindowsMixedReality,
    //new[] { Handedness.Left, Handedness.Right },
         new[] { Handedness.Left, Handedness.Right  },
    "Textures/MotionController",
    supportedUnityXRPipelines: SupportedUnityXRPipelines.XRSDK)]
    public class YYSXMotionController6Dof :GenericXRSDKController
    {
        public YYSXMotionController6Dof(
            TrackingState trackingState,
            Handedness controllerHandedness,
            IMixedRealityInputSource inputSource = null,
            MixedRealityInteractionMapping[] interactions = null)
            : base(trackingState, controllerHandedness, inputSource, interactions, new WindowsMixedRealityControllerDefinition(controllerHandedness)) { }
    }

}