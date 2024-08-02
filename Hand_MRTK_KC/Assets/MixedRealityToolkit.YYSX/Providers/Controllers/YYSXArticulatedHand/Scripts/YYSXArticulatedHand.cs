using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.XRSDK.Input;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.XR;

namespace Microsoft.MixedReality.Toolkit.YYSX.XRSDK.Input
{
    /// <summary>
    /// XR SDK implementation of Windows Mixed Reality articulated hands.
    /// </summary>
    [MixedRealityController(
        SupportedControllerType.ArticulatedHand,
        new[] { Handedness.Left, Handedness.Right },
        supportedUnityXRPipelines: SupportedUnityXRPipelines.XRSDK)]
    public class YYSXArticulatedHand :GenericXRSDKController, IMixedRealityHand
    {
        /// <summary>
        /// Constructor.
        /// </summary>
        public YYSXArticulatedHand(
            TrackingState trackingState,
            Handedness controllerHandedness,
            IMixedRealityInputSource inputSource = null,
            MixedRealityInteractionMapping[] interactions = null)
            : base(trackingState, controllerHandedness, inputSource, interactions, new ArticulatedHandDefinition(inputSource, controllerHandedness)) {
            handDefinition = Definition as ArticulatedHandDefinition;

            //handMeshProvider = (controllerHandedness == Handedness.Left) ? WindowsMixedRealityHandMeshProvider.Left : WindowsMixedRealityHandMeshProvider.Right;
            //handMeshProvider.SetInputSource(inputSource);

        }

        private readonly ArticulatedHandDefinition handDefinition;
        //private readonly WindowsMixedRealityHandMeshProvider handMeshProvider;

        private MixedRealityPose[] jointPoses = null;

        private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
        private readonly List<Bone> fingerBones = new List<Bone>();

        // The rotation offset between the reported grip pose of a hand and the palm joint orientation.
        // These values were calculated by comparing the platform's reported grip pose and palm pose.
        //private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
        //private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
        private static readonly Quaternion rightPalmOffset = Quaternion.identity;
        private static readonly Quaternion leftPalmOffset = Quaternion.Euler(0,0,180);

        protected bool IsPinching => handDefinition.IsPinching;

        // Pinch was also used as grab, we want to allow hand-curl grab not just pinch.
        // Determine pinch and grab separately
        protected bool IsGrabbing => handDefinition.IsGrabbing;

#if WINDOWS_UWP && WMR_ENABLED
        private readonly List<object> states = new List<object>();
#endif // WINDOWS_UWP && WMR_ENABLED





        #region IMixedRealityHand Implementation

        /// <inheritdoc/>
        public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) {
            if ( jointPoses != null ) {
                pose = jointPoses[(int)joint];
                return pose != default(MixedRealityPose);
            }

            pose = MixedRealityPose.ZeroIdentity;
            return false;
        }

        #endregion IMixedRealityHand Implementation

        /// <inheritdoc/>
        public override bool IsInPointingPose => handDefinition.IsInPointingPose;

        #region Update data functions

        private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] YYSXXRSDKArticulatedHand.UpdateController");



        /// <inheritdoc />
        public override void UpdateController(InputDevice inputDevice) {
            if ( !Enabled ) { return; }

            using ( UpdateControllerPerfMarker.Auto() ) {
                
                //base.UpdateController(inputDevice);

                UpdateHandData(inputDevice);

                //for ( int i = 0; i < Interactions?.Length; i++ ) {
                //    switch ( Interactions[i].InputType ) {
                //        case DeviceInputType.IndexFinger:
                //            handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
                //            break;
                //        case DeviceInputType.ThumbStick:
                //            handDefinition?.UpdateCurrentTeleportPose(Interactions[i]);
                //            break;
                //    }
                //}
            }
        }

        //12 - 05 12:56:22.797  5415  5454 I Unity   : 3521 || Thumb:bone - 0: xㄩ-0.2009383 | -0.3001369 | -0.4834843 | w:0.7342072 | 0.573498 | -0.1874838 | -0.3112713
        //12 - 05 12:56:22.798  5415  5454 I Unity   : 3521 || Thumb:bone - 1: xㄩ-0.2077346 | -0.2077346 | -0.2077346 | w:0.8278694 | 0.3502744 | -0.4370715 | 0.03014462
        //12 - 05 12:56:22.798  5415  5454 I Unity   : 3521 || Thumb:bone - 2: xㄩ-0.2077346 | -0.2077346 | -0.2077346 | w:0.945105 | 0.2633701 | 0.1810002 | -0.06820306
        //12 - 05 12:56:22.799  5415  5454 I Unity   : 3521 || Thumb:bone - 3: xㄩ-0.2157074 | -0.2157074 | -0.2157074 | w:0.981981 | -0.08247217 | 0.05591899 | -0.1605766
        //12 - 05 12:56:22.799  5415  5454 I Unity   : 3521 || Thumb:bone - 4: xㄩ-0.230393 | -0.230393 | -0.230393 | w:0.9941791 | 0.08292678 | -0.06263668 | 0.02841848

        //12 - 05 12:56:22.799  5415  5454 I Unity   : 3521 || Index:bone - 0: xㄩ-0.2410054 | -0.2410054 | -0.2410054 | w:1 | 0 | 0 | 0
        //12 - 05 12:56:22.799  5415  5454 I Unity   : 3521 || Index:bone - 1: xㄩ-0.2532482 | -0.2532482 | -0.2532482 | w:0.9871841 | 0.03754012 | -0.03913061 | -0.1500902
        //12 - 05 12:56:22.800  5415  5454 I Unity   : 3521 || Index:bone - 2: xㄩ-0.2737265 | -0.2737265 | -0.2737265 | w:0.9521425 | -0.02618658 | -0.001011437 | -0.3045287
        //12 - 05 12:56:22.800  5415  5454 I Unity   : 3521 || Index:bone - 3: xㄩ-0.2797746 | -0.2797746 | -0.2797746 | w:0.9941251 | -0.01687248 | 0.02417655 | -0.1041448
        //12 - 05 12:56:22.801  5415  5454 I Unity   : 3521 || Index:bone - 4: xㄩ-0.2841533 | -0.2841533 | -0.2841533 | w:1 | 0 | 0 | 0

        //12 - 05 12:56:22.801  5415  5454 I Unity   : 3521 || Middle:bone - 0: xㄩ-0.2641675 | -0.2641675 | -0.2641675 | w:0.9738169 | -0.01438656 | 0.0353293 | -0.2241109
        //12 - 05 12:56:22.802  5415  5454 I Unity   : 3521 || Middle:bone - 1: xㄩ-0.2864473 | -0.2864473 | -0.2864473 | w:0.9392777 | -0.01276726 | 0.0002373499 | -0.3429203
        //12 - 05 12:56:22.802  5415  5454 I Unity   : 3521 || Middle:bone - 2: xㄩ-0.2900076 | -0.2900076 | -0.2900076 | w:0.9635065 | -0.06748463 | -0.01076857 | -0.2588148
        //12 - 05 12:56:22.802  5415  5454 I Unity   : 3521 || Middle:bone - 3: xㄩ-0.2855839 | -0.2855839 | -0.2855839 | w:1 | 0 | 0 | 0
        //12 - 05 12:56:22.803  5415  5454 I Unity   : 3521 || Middle:bone - 4: xㄩ-0.2674246 | -0.2674246 | -0.2674246 | w:0.9529338 | -0.07088035 | 0.07283958 | -0.2856353

        //12 - 05 12:56:22.803  5415  5454 I Unity   : 3521 || Ring:bone - 0: xㄩ-0.2846645 | -0.2846645 | -0.2846645 | w:0.9385198 | -0.04011924 | -0.008687471 | -0.3427764
        //12 - 05 12:56:22.803  5415  5454 I Unity   : 3521 || Ring:bone - 1: xㄩ-0.2850796 | -0.2850796 | -0.2850796 | w:0.9900355 | -0.01104592 | -0.02966443 | -0.1372142
        //12 - 05 12:56:22.804  5415  5454 I Unity   : 3521 || Ring:bone - 2: xㄩ-0.2825035 | -0.2825035 | -0.2825035 | w:1 | 0 | 0 | 0
        //12 - 05 12:56:22.804  5415  5454 I Unity   : 3521 || Ring:bone - 3: xㄩ-0.2665569 | -0.2665569 | -0.2665569 | w:0.932937 | 0.06430254 | 0.04706876 | -0.3511101
        //12 - 05 12:56:22.804  5415  5454 I Unity   : 3521 || Ring:bone - 4: xㄩ-0.2748968 | -0.2748968 | -0.2748968 | w:0.9791237 | -0.05496277 | 0.03412116 | -0.1926958

        //12 - 05 12:56:22.805  5415  5454 I Unity   : 3521 || Pinky:bone - 0: xㄩ-0.275426 | -0.275426 | -0.275426 | w:0.9877531 | 0.001231115 | -0.04851601 | -0.1482855
        //12 - 05 12:56:22.805  5415  5454 I Unity   : 3521 || Pinky:bone - 1: xㄩ-0.2732713 | -0.2732713 | -0.2732713 | w:1 | 0 | 0 | 0
        //12 - 05 12:56:22.805  5415  5454 I Unity   : 3521 || Pinky:bone - 2: xㄩ-0.2532482 | -0.2316213 | 0.4649414 | w:0 | 0 | 0 | 0
        //12 - 05 12:56:22.806  5415  5454 I Unity   : 3521 || Pinky:bone - 3: xㄩ-0.2641675 | -0.2467432 | 0.4637992 | w:0 | 0 | 0 | 0
        //12 - 05 12:56:22.806  5415  5454 I Unity   : 3521 || Pinky:bone - 4: xㄩ0.9626842 | 17 | 25 | w:0 | 0 | 0 | 0

        private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] YYSXXRSDKArticulatedHand.UpdateHandData");



        /// <summary>
        /// Update the hand data from the device.
        /// </summary>
        /// <param name="interactionSourceState">The InteractionSourceState retrieved from the platform.</param>
        private void UpdateHandData(InputDevice inputDevice) {
            using ( UpdateHandDataPerfMarker.Auto() ) {
#if WINDOWS_UWP && WMR_ENABLED
                XRSubsystemHelpers.InputSubsystem?.GetCurrentSourceStates(states);

                foreach (SpatialInteractionSourceState sourceState in states)
                {
                    if (sourceState.Source.Handedness.ToMRTKHandedness() == ControllerHandedness)
                    {
                        handMeshProvider?.UpdateHandMesh(sourceState);
                        break;
                    }
                }
#endif // WINDOWS_UWP && WMR_ENABLED



                if ( inputDevice.TryGetFeatureValue(CommonUsages.handData, out Hand hand) ) {
                    if ( jointPoses == null ) {
                        jointPoses = new MixedRealityPose[ArticulatedHandPose.JointCount];
                    }

                    foreach ( HandFinger finger in handFingers ) {
                        if ( hand.TryGetFingerBones(finger, fingerBones) ) {
                            for ( int i = 0; i < fingerBones.Count; i++ ) {
                                Bone bone = fingerBones[i];

                                bool positionAvailable = bone.TryGetPosition(out Vector3 position);
                                bool rotationAvailable = bone.TryGetRotation(out Quaternion rotation);

                                // If either position or rotation is available, use both pieces of data given.
                                // This might result in using a zeroed out position or rotation. Most likely,
                                // either both are available or both are unavailable.
                                if ( positionAvailable || rotationAvailable ) {
                                    // We want input sources to follow the playspace, so fold in the playspace transform here to
                                    // put the controller pose into world space.
                                    position = MixedRealityPlayspace.TransformPoint(position);
                                    rotation = MixedRealityPlayspace.Rotation * rotation;

                                    jointPoses[ConvertToArrayIndex(finger, i)] = new MixedRealityPose(position, rotation);

                                    //Debug.Log(Time.frameCount+" || "+ finger+":bone-"+i+": xㄩ"+ position.x+"|"+ position.y+ "|" + position.z+ "| w:" + rotation.w+ "|" + rotation.x + "|" + rotation.y + "|" + rotation.z);

                                }
                            }

                        }
                    }


                    // Unity doesn't provide a palm joint, so we synthesize one here
                    MixedRealityPose palmPose = jointPoses[(int)TrackedHandJoint.Wrist];
                    palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
                    Debug.Log("Pose:" + palmPose.Rotation);
                    jointPoses[(int)TrackedHandJoint.Palm] = palmPose;

                    UpdateJointWorldPositionByMesh?.Invoke(jointPoses);


                    handDefinition?.UpdateHandJoints(jointPoses);


                    for ( int i = 0; i < Interactions?.Length; i++ ) {
                        var interactionMapping = Interactions[i];
                        switch ( interactionMapping.InputType ) {
                            case DeviceInputType.SpatialGrip:
                                if ( TryGetJoint(TrackedHandJoint.Palm, out MixedRealityPose currentGripPose) ) {
                                    interactionMapping.PoseData = currentGripPose;

                                    if ( interactionMapping.Changed ) {
                                        CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, currentGripPose);

                                        // Spatial Grip is also used as the basis for the source pose when device data is not provided
                                        // We need to rotate it by an offset to properly represent the source pose.
                                        MixedRealityPose CurrentControllerPose = currentGripPose;
                                        //CurrentControllerPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);

                                        CoreServices.InputSystem?.RaiseSourcePoseChanged(InputSource, this, CurrentControllerPose);
                                        IsPositionAvailable = IsRotationAvailable = true;
                                    }
                                }
                                break;
                            case DeviceInputType.Select:
                            case DeviceInputType.TriggerPress:
                            case DeviceInputType.GripPress:
                                interactionMapping.BoolData = YYSX_IsPinching;//|| IsGrabbing;

                                if ( interactionMapping.Changed ) {
                                    if ( interactionMapping.BoolData ) {
                                        CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
                                    } else {
                                        CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
                                    }
                                }
                                break;
                            case DeviceInputType.SpatialPointer:
                                handDefinition?.UpdatePointerPose(interactionMapping);
                                break;
                            // Gotta do this only for non-AR devices
                            case DeviceInputType.ThumbStick:
                                handDefinition?.UpdateCurrentTeleportPose(interactionMapping);
                                break;
                            case DeviceInputType.IndexFinger:
                                handDefinition?.UpdateCurrentIndexPose(interactionMapping);
                                break;
                        }
                    }

                    // Update the controller velocity based on the hand definition's calculations
                    handDefinition?.UpdateVelocity();
                    Velocity = (handDefinition?.Velocity).Value;
                    AngularVelocity = (handDefinition?.AngularVelocity).Value;



                }
            }
        }

        //KC調整
        private float m_ExitPinchDistance = 0.048f;
        private float m_EnterPinchDistance = 0.047f;
        //private float m_ExitPinchDistance = 0.075f;
        //private float m_EnterPinchDistance = 0.053f;

        /// <summary>
        /// A bool tracking whether the hand definition is pinch or not
        /// </summary>
        private bool m_isPinching = false;
        private bool YYSX_IsPinching {
            get {
                if ( jointPoses != null ) {
                    float distance = Vector3.Distance(jointPoses[(int)TrackedHandJoint.ThumbTip].Position, jointPoses[(int)TrackedHandJoint.IndexTip].Position);
                    float angle = IndexGrabbingAngle(handDefinition.Handedness);
                    //KC調整
                    if ( m_isPinching &&  (distance > m_ExitPinchDistance || angle<25)) {
                        m_isPinching = false;
                    } else if ( !m_isPinching && (( distance < m_EnterPinchDistance) || angle>35) ) {
                        m_isPinching = true;
                    }
                    /*
                    if ( m_isPinching &&  (distance > m_ExitPinchDistance || angle<10)) {
                        m_isPinching = false;
                    } else if ( !m_isPinching && (( distance < m_EnterPinchDistance) || angle>20) ) {
                        m_isPinching = true;
                    }
                    */
                    //Debug.Log(Time.frameCount+"  wangcq327 ---ss:" + m_isPinching + "|" + distance + "|" + angle);
                } else {
                    m_isPinching = false;
                }


                return m_isPinching;
            }
        }

        public  float IndexGrabbingAngle(Handedness hand) {
            if ( HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist, hand, out var wristPose) &&
                HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, hand, out var indexTipPose) &&
                HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexKnuckle, hand, out var indexKnucklePose) ) {
                // compare wrist-knuckle to wrist-tip
                Vector3 wristToIndexTip = indexTipPose.Position - wristPose.Position;
                Vector3 wristToIndexKnuckle = indexKnucklePose.Position - wristPose.Position;
                //Debug.Log("wangcq327 ---ss:" + Vector3.Angle(wristToIndexTip, wristToIndexKnuckle) );

                return Vector3.Angle(wristToIndexTip, wristToIndexKnuckle);
            }
            return 0;
        }


        public Action<MixedRealityPose[]> UpdateJointWorldPositionByMesh;

        /// <summary>
        /// Converts a Unity finger bone into an MRTK hand joint.
        /// </summary>
        /// <remarks>
        /// <para>For HoloLens 2, Unity provides four joints per finger, in index order of metacarpal (0) to tip (4).
        /// The first joint for the thumb is the wrist joint. Palm joint is not provided.</para>
        /// </remarks>
        /// <param name="finger">The Unity classification of the current finger.</param>
        /// <param name="index">The Unity index of the current finger bone.</param>
        /// <returns>The current Unity finger bone converted into an MRTK joint.</returns>
        private int ConvertToArrayIndex(HandFinger finger, int index) {
            TrackedHandJoint trackedHandJoint;

            switch ( finger ) {
                case HandFinger.Thumb: trackedHandJoint = (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1; break;
                case HandFinger.Index: trackedHandJoint = TrackedHandJoint.IndexMetacarpal + index; break;
                case HandFinger.Middle: trackedHandJoint = TrackedHandJoint.MiddleMetacarpal + index; break;
                case HandFinger.Ring: trackedHandJoint = TrackedHandJoint.RingMetacarpal + index; break;
                case HandFinger.Pinky: trackedHandJoint = TrackedHandJoint.PinkyMetacarpal + index; break;
                default: trackedHandJoint = TrackedHandJoint.None; break;
            }

            return (int)trackedHandJoint;
        }

        #endregion Update data functions

    }
}
