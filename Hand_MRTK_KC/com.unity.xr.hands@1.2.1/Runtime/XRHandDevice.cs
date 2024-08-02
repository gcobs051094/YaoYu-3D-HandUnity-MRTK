using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Controls;
using UnityEngine.InputSystem.Layouts;
using UnityEngine.InputSystem.XR;
using UnityEngine.Scripting;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace UnityEngine.XR.Hands
{
    /// <summary>
    /// An <see cref="InputDevice"/> that surfaces common controller data
    /// populated by hand joint poses. Devices will only be created if
    /// hand-tracking is enabled in the build settings for the target platform.
    /// </summary>
    /// <remarks>
    /// The <see cref="TrackedDevice.devicePosition"/> and
    /// <see cref="TrackedDevice.deviceRotation"/> inherited from <see cref="TrackedDevice"/>
    /// represent the wrist pose.
    ///
    /// Use the [XROrigin](xref:Unity.XR.CoreUtils.XROrigin) in the scene to position and orient the device
    /// and gesture poses properly. If you are using this data to set the Transform of a GameObject in
    /// the scene hierarchy, you can set the local position and rotation of the Transform and make
    /// it a child of the <c>CameraOffset</c> object below the <c>XROrigin</c>. Otherwise, you can use the
    /// Transform of the <c>CameraOffset</c> to transform the data into world space.
    /// </remarks>
    #if UNITY_EDITOR
    [InitializeOnLoad]
    #endif
    [Preserve, InputControlLayout(displayName = "XR Hand Device", commonUsages = new[] { "LeftHand", "RightHand" })]
    public class XRHandDevice : TrackedDevice
    {
        /// <summary>
        /// The left-hand <see cref="InputDevice"/> that contains
        /// <see cref="InputControl"/>s that surface common controller data
        /// populated by hand joint poses.
        /// </summary>
        public static XRHandDevice leftHand { get; internal set; }

        /// <summary>
        /// The right-hand <see cref="InputDevice"/> that contains
        /// <see cref="InputControl"/>s that surface common controller data
        /// populated by hand joint poses.
        /// </summary>
        public static XRHandDevice rightHand { get; internal set; }

        /// <summary>
        /// Position of the grip pose, representing the palm.
        /// When transformed relative to the [XROrigin](xref:Unity.XR.CoreUtils.XROrigin),
        /// the position will be in the correct position in the scene relative to the user.
        /// </summary>
        [Preserve, InputControl]
        public Vector3Control gripPosition { get; private set; }

        /// <summary>
        /// Rotation of the grip pose, representing the palm.
        /// When transformed relative to the [XROrigin](xref:Unity.XR.CoreUtils.XROrigin),
        /// the rotation will be in the correct orientation in the scene relative to the user.
        /// </summary>
        [Preserve, InputControl]
        public QuaternionControl gripRotation { get; private set; }

        /// <summary>
        /// Position of the poke pose, representing the index finger's tip. 
        /// When transformed relative to the [XROrigin](xref:Unity.XR.CoreUtils.XROrigin),
        /// the position will be in the correct position in the scene relative to the user.
        /// </summary>
        [Preserve, InputControl]
        public Vector3Control pokePosition { get; private set; }

        /// <summary>
        /// Rotation of the poke pose, representing the index finger's tip.
        /// When transformed relative to the [XROrigin](xref:Unity.XR.CoreUtils.XROrigin),
        /// the rotation will be in the correct orientation in the scene relative to the user.
        /// </summary>
        [Preserve, InputControl]
        public QuaternionControl pokeRotation { get; private set; }

        /// <summary>
        /// Position of the pinch pose, representing the thumb's tip.
        /// When transformed relative to the [XROrigin](xref:Unity.XR.CoreUtils.XROrigin),
        /// the position will be in the correct position in the scene relative to the user.
        /// </summary>
        [Preserve, InputControl]
        public Vector3Control pinchPosition { get; private set; }

        /// <summary>
        /// Rotation of the pinch pose, representing the thumb's tip.
        /// When transformed relative to the [XROrigin](xref:Unity.XR.CoreUtils.XROrigin),
        /// the rotation will be in the correct orientation in the scene relative to the user.
        /// </summary>
        [Preserve, InputControl]
        public QuaternionControl pinchRotation { get; private set; }


        [InputControl(synthetic = false)]
        public ButtonControl Ispinch { get; private set; }


        private static bool m_IsHisceneJointStruct = true;
        /// <summary>
        /// Perform final initialization tasks after the control hierarchy has been put into place.
        /// </summary>
        protected override void FinishSetup()
        {
            base.FinishSetup();
            gripPosition = GetChildControl<Vector3Control>("gripPosition");
            gripRotation = GetChildControl<QuaternionControl>("gripRotation");
            pokePosition = GetChildControl<Vector3Control>("pokePosition");
            pokeRotation = GetChildControl<QuaternionControl>("pokeRotation");
            pinchPosition = GetChildControl<Vector3Control>("pinchPosition");
            pinchRotation = GetChildControl<QuaternionControl>("pinchRotation");
            Ispinch = GetChildControl<ButtonControl>("Ispinch");

            var deviceDescriptor = XRDeviceDescriptor.FromJson(description.capabilities);
            if (deviceDescriptor != null)
            {
                if ((deviceDescriptor.characteristics & InputDeviceCharacteristics.Left) != 0)
                    InputSystem.InputSystem.SetDeviceUsage(this, InputSystem.CommonUsages.LeftHand);
                else if ((deviceDescriptor.characteristics & InputDeviceCharacteristics.Right) != 0)
                    InputSystem.InputSystem.SetDeviceUsage(this, InputSystem.CommonUsages.RightHand);
            }
        }

        internal static XRHandDevice Create(
            XRHandSubsystem subsystem,
            Handedness handedness,
            XRHandSubsystem.UpdateSuccessFlags updateSuccessFlags,
            XRHandSubsystem.UpdateType updateType)
        {
            var extraCharacteristics = handedness == Handedness.Left ? InputDeviceCharacteristics.Left : InputDeviceCharacteristics.Right;

            var desc = new InputDeviceDescription
            {
                product = k_DeviceProductName,
                capabilities = new XRDeviceDescriptor
                {
                    characteristics = InputDeviceCharacteristics.HandTracking | InputDeviceCharacteristics.TrackedDevice | extraCharacteristics,
                    inputFeatures = new List<XRFeatureDescriptor>
                    {
                        new XRFeatureDescriptor
                        {
                            name = "grip_position",
                            featureType = FeatureType.Axis3D
                        },
                        new XRFeatureDescriptor
                        {
                            name = "grip_rotation",
                            featureType = FeatureType.Rotation
                        },
                        new XRFeatureDescriptor
                        {
                            name = "poke_position",
                            featureType = FeatureType.Axis3D
                        },
                        new XRFeatureDescriptor
                        {
                            name = "poke_rotation",
                            featureType = FeatureType.Rotation
                        },
                        new XRFeatureDescriptor
                        {
                            name = "pinch_position",
                            featureType = FeatureType.Axis3D
                        },
                        new XRFeatureDescriptor
                        {
                            name = "pinch_rotation",
                            featureType = FeatureType.Rotation
                        }
                        ,
                        new XRFeatureDescriptor
                        {
                            name = "Is_pinch",
                            featureType = FeatureType.Axis1D
                        }
                    }
                }.ToJson()
            };
            var handDevice = InputSystem.InputSystem.AddDevice(desc) as XRHandDevice;
            if (handDevice != null)
            {
                if ( m_IsHisceneJointStruct ) {
                    subsystem.updatedHands += handDevice.OnUpdatedHandsForHiscene;
                } else {
                    subsystem.updatedHands += handDevice.OnUpdatedHands;
                }

                handDevice.m_Handedness = handedness;
                if ( m_IsHisceneJointStruct ) {
                    handDevice.OnUpdatedHandsForHiscene(subsystem, updateSuccessFlags, updateType);
                } else {
                    handDevice.OnUpdatedHands(subsystem, updateSuccessFlags, updateType);
                }
            }

            return handDevice;
        }

        void OnUpdatedHands(XRHandSubsystem subsystem, XRHandSubsystem.UpdateSuccessFlags updateSuccessFlags, XRHandSubsystem.UpdateType updateType)
        {
            XRHand hand;
            bool isValid;
            if (m_Handedness == Handedness.Left)
            {
                hand = subsystem.leftHand;
                var success = XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose | XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints;
                isValid = (updateSuccessFlags & success) == success;
            }
            else
            {
                hand = subsystem.rightHand;
                var success = XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose | XRHandSubsystem.UpdateSuccessFlags.RightHandJoints;
                isValid = (updateSuccessFlags & success) == success;
            }

            if (!m_WasValid && !isValid)
                return;

            if ( m_WasValid && !isValid ) {
                //InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, false);
                InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.None);
                m_WasValid = false;
                return;
            }

            if ( !m_WasValid && isValid ) {
                //InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, true);
                InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.Position | InputTrackingState.Rotation);
                m_WasValid = true;
            }

            if (hand.GetJoint(XRHandJointID.Wrist).TryGetPose(out var wristPose))
            {
                InputSystem.InputSystem.QueueDeltaStateEvent(devicePosition, wristPose.position);
                InputSystem.InputSystem.QueueDeltaStateEvent(deviceRotation, wristPose.rotation);
            }

            if (hand.GetJoint(XRHandJointID.Palm).TryGetPose(out var palmPose))
            {
                InputSystem.InputSystem.QueueDeltaStateEvent(gripPosition, palmPose.position);
                InputSystem.InputSystem.QueueDeltaStateEvent(gripRotation, palmPose.rotation);
            }

            if (hand.GetJoint(XRHandJointID.IndexDistal).TryGetPose(out var indexTipPose))
            {
                InputSystem.InputSystem.QueueDeltaStateEvent(pokePosition, indexTipPose.position);
                InputSystem.InputSystem.QueueDeltaStateEvent(pokeRotation, indexTipPose.rotation);

                InputSystem.InputSystem.QueueDeltaStateEvent(pinchPosition, indexTipPose.position);
                InputSystem.InputSystem.QueueDeltaStateEvent(pinchRotation, indexTipPose.rotation);
            }

            //if (hand.GetJoint(XRHandJointID.ThumbTip).TryGetPose(out var thumbTipPose))
            //{
            //    InputSystem.InputSystem.QueueDeltaStateEvent(pinchPosition, thumbTipPose.position);
            //    InputSystem.InputSystem.QueueDeltaStateEvent(pinchRotation, thumbTipPose.rotation);
            //}
           InputSystem.InputSystem.QueueDeltaStateEvent(Ispinch, IsIndexGrabbing(hand));
        }
        void OnUpdatedHandsForHiscene(XRHandSubsystem subsystem, XRHandSubsystem.UpdateSuccessFlags updateSuccessFlags, XRHandSubsystem.UpdateType updateType) {
            //if ( InitHisceneTransform() == false )
            //    return;
            InitHisceneTransform();

            XRHand hand;
            bool isValid;
            if ( m_Handedness == Handedness.Left ) {
                hand = subsystem.leftHand;
                var success = XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose | XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints;
                isValid = (updateSuccessFlags & success) == success;
            } else {
                hand = subsystem.rightHand;
                var success = XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose | XRHandSubsystem.UpdateSuccessFlags.RightHandJoints;
                isValid = (updateSuccessFlags & success) == success;
            }

            if ( !m_WasValid && !isValid )
                return;

            if ( m_WasValid && !isValid ) {
                //InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, false);
                InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.None);
                m_WasValid = false;
                return;
            }

            if ( !m_WasValid && isValid ) {
                //InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, true);
                InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.Position | InputTrackingState.Rotation);
                m_WasValid = true;
            }

            //if ( HisenceHandJointsLeft[0] == null )
            //    return;

            if ( m_Handedness == Handedness.Left ) {
                InputSystem.InputSystem.QueueDeltaStateEvent(devicePosition, HisenceHandJointsLeft[0].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(deviceRotation, HisenceHandJointsLeft[0].rotation);
            } else {
                InputSystem.InputSystem.QueueDeltaStateEvent(devicePosition, HisenceHandJointsRight[0].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(deviceRotation, HisenceHandJointsRight[0].rotation);
            }

            if ( m_Handedness == Handedness.Left ) {
                InputSystem.InputSystem.QueueDeltaStateEvent(gripPosition, HisenceHandJointsLeft[10].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(gripRotation, HisenceHandJointsLeft[10].rotation);
            } else {
                InputSystem.InputSystem.QueueDeltaStateEvent(gripPosition, HisenceHandJointsRight[10].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(gripRotation, HisenceHandJointsRight[10].rotation);
            }

            if ( m_Handedness == Handedness.Left ) {
                InputSystem.InputSystem.QueueDeltaStateEvent(pokePosition, HisenceHandJointsLeft[9].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(pokeRotation, HisenceHandJointsLeft[9].rotation);

                InputSystem.InputSystem.QueueDeltaStateEvent(pinchPosition, HisenceHandJointsLeft[9].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(pinchRotation, HisenceHandJointsLeft[9].rotation);
            } else {
                InputSystem.InputSystem.QueueDeltaStateEvent(pokePosition, HisenceHandJointsRight[9].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(pokeRotation, HisenceHandJointsRight[9].rotation);

                InputSystem.InputSystem.QueueDeltaStateEvent(pinchPosition, HisenceHandJointsRight[9].position);
                InputSystem.InputSystem.QueueDeltaStateEvent(pinchRotation, HisenceHandJointsRight[9].rotation);
            }

            //if (hand.GetJoint(XRHandJointID.ThumbTip).TryGetPose(out var thumbTipPose))
            //{
            //    InputSystem.InputSystem.QueueDeltaStateEvent(pinchPosition, thumbTipPose.position);
            //    InputSystem.InputSystem.QueueDeltaStateEvent(pinchRotation, thumbTipPose.rotation);
            //}
            InputSystem.InputSystem.QueueDeltaStateEvent(Ispinch, IsIndexGrabbingHiscene(m_Handedness));
        }

        static bool IsIndexGrabbing(XRHand hand) {
            if ( !(hand.GetJoint(XRHandJointID.Wrist).TryGetPose(out var wristPose) &&
                  hand.GetJoint(XRHandJointID.ThumbTip).TryGetPose(out var ThumbTipPose) &&
                  hand.GetJoint(XRHandJointID.IndexTip).TryGetPose(out var tipPose) &&
                  hand.GetJoint(XRHandJointID.IndexIntermediate).TryGetPose(out var IntermediatePose)) ) {
                return false;
            }

            var TipToIntermediate = tipPose.position -IntermediatePose.position ;
            var wristToProximal = IntermediatePose.position - wristPose.position;
            return Vector3.Angle(TipToIntermediate, wristToProximal) > 50 ? true : false;

            //return wristToProximal.sqrMagnitude >= wristToTip.sqrMagnitude;

            //if ( Vector3.Distance(ThumbTipPose.position, tipPose.position) < 0.015f || Vector3.Distance(ThumbTipPose.position, DistalPose.position) < 0.015f )
            //    return true;

            //return false;
        }

        static bool IsIndexGrabbingHiscene(Handedness handness) {
            //if ( !(hand.GetJoint(XRHandJointID.Wrist).TryGetPose(out var wristPose) &&
            //      hand.GetJoint(XRHandJointID.ThumbTip).TryGetPose(out var ThumbTipPose) &&
            //      hand.GetJoint(XRHandJointID.IndexTip).TryGetPose(out var tipPose) &&
            //      hand.GetJoint(XRHandJointID.IndexIntermediate).TryGetPose(out var IntermediatePose)) ) {
            //    return false;
            //}

            if ( handness == Handedness.Left ) {
                var TipToIntermediate = HisenceHandJointsLeft[9].position - HisenceHandJointsLeft[7].position;
                var wristToProximal = HisenceHandJointsLeft[7].position - HisenceHandJointsLeft[0].position;
                return Vector3.Angle(TipToIntermediate, wristToProximal) > 50 ? true : false;
            } else {
                var TipToIntermediate = HisenceHandJointsRight[9].position - HisenceHandJointsRight[7].position;
                var wristToProximal = HisenceHandJointsRight[7].position - HisenceHandJointsRight[0].position;
                return Vector3.Angle(TipToIntermediate, wristToProximal) > 50 ? true : false;
            }

            //return wristToProximal.sqrMagnitude >= wristToTip.sqrMagnitude;

            //if ( Vector3.Distance(ThumbTipPose.position, tipPose.position) < 0.015f || Vector3.Distance(ThumbTipPose.position, DistalPose.position) < 0.015f )
            //    return true;

            //return false;
        }

        static XRHandDevice() => Initialize();

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void Initialize()
        {
#if ENABLE_INPUT_SYSTEM
            InputSystem.InputSystem.RegisterLayout<XRHandDevice>(
                matches: new InputDeviceMatcher()
                .WithProduct(k_DeviceProductName));
#endif // ENABLE_INPUT_SYSTEM
        }

        const string k_DeviceProductName = "XRHandDevice";

        Handedness m_Handedness;
        bool m_WasValid;


        static Transform[] HisenceHandJointsLeft = new Transform[22];
        static Transform[] HisenceHandJointsRight = new Transform[22];
        static bool isInitHisceneTransformFinish = false;
        static bool InitHisceneTransform() {
            if ( isInitHisceneTransformFinish )
                return true;

            bool issucess = true;
            GameObject leftMode = GameObject.Find("HisHand_L");
            if ( leftMode ) {
                HisenceHandJointsLeft[0] = leftMode.transform.Find("b_l_wrist");

                HisenceHandJointsLeft[1] = leftMode.transform.Find("b_l_wrist/b_l_thumb0");
                HisenceHandJointsLeft[2] = leftMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1");
                HisenceHandJointsLeft[3] = leftMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1/b_l_thumb2");
                HisenceHandJointsLeft[4] = leftMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1/b_l_thumb2/b_l_thumb3");
                HisenceHandJointsLeft[5] = leftMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1/b_l_thumb2/b_l_thumb3/l_thumb_finger_tip_marker");

                HisenceHandJointsLeft[6] = leftMode.transform.Find("b_l_wrist/b_l_index1");
                HisenceHandJointsLeft[7] = leftMode.transform.Find("b_l_wrist/b_l_index1/b_l_index2");
                HisenceHandJointsLeft[8] = leftMode.transform.Find("b_l_wrist/b_l_index1/b_l_index2/b_l_index3");
                HisenceHandJointsLeft[9] = leftMode.transform.Find("b_l_wrist/b_l_index1/b_l_index2/b_l_index3/l_index_finger_tip_marker");

                HisenceHandJointsLeft[10] = leftMode.transform.Find("b_l_wrist/b_l_middle1");
                HisenceHandJointsLeft[11] = leftMode.transform.Find("b_l_wrist/b_l_middle1/b_l_middle2");
                HisenceHandJointsLeft[12] = leftMode.transform.Find("b_l_wrist/b_l_middle1/b_l_middle2/b_l_middle3");
                HisenceHandJointsLeft[13] = leftMode.transform.Find("b_l_wrist/b_l_middle1/b_l_middle2/b_l_middle3/l_middle_finger_tip_marker");

                HisenceHandJointsLeft[14] = leftMode.transform.Find("b_l_wrist/b_l_ring1");
                HisenceHandJointsLeft[15] = leftMode.transform.Find("b_l_wrist/b_l_ring1/b_l_ring2");
                HisenceHandJointsLeft[16] = leftMode.transform.Find("b_l_wrist/b_l_ring1/b_l_ring2/b_l_ring3");
                HisenceHandJointsLeft[17] = leftMode.transform.Find("b_l_wrist/b_l_ring1/b_l_ring2/b_l_ring3/l_ring_finger_tip_marker");

                HisenceHandJointsLeft[18] = leftMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1");
                HisenceHandJointsLeft[19] = leftMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1/b_l_pinky2");
                HisenceHandJointsLeft[20] = leftMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1/b_l_pinky2/b_l_pinky3");
                HisenceHandJointsLeft[21] = leftMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1/b_l_pinky2/b_l_pinky3/l_pinky_finger_tip_marker");

                Debug.Log("Left hand mode init finish");
            } else {
                issucess = false;
            }

            GameObject rightMode = GameObject.Find("HisHand_R");
            if ( rightMode ) {
                HisenceHandJointsRight[0] = rightMode.transform.Find("b_r_wrist");

                HisenceHandJointsRight[1] = rightMode.transform.Find("b_r_wrist/b_r_thumb0");
                HisenceHandJointsRight[2] = rightMode.transform.Find("b_r_wrist/b_r_thumb0/b_r_thumb1");
                HisenceHandJointsRight[3] = rightMode.transform.Find("b_r_wrist/b_r_thumb0/b_r_thumb1/b_r_thumb2");
                HisenceHandJointsRight[4] = rightMode.transform.Find("b_r_wrist/b_r_thumb0/b_r_thumb1/b_r_thumb2/b_r_thumb3");
                HisenceHandJointsRight[5] = rightMode.transform.Find("b_r_wrist/b_r_thumb0/b_r_thumb1/b_r_thumb2/b_r_thumb3/r_thumb_finger_tip_marker");

                HisenceHandJointsRight[6] = rightMode.transform.Find("b_r_wrist/b_r_index1");
                HisenceHandJointsRight[7] = rightMode.transform.Find("b_r_wrist/b_r_index1/b_r_index2");
                HisenceHandJointsRight[8] = rightMode.transform.Find("b_r_wrist/b_r_index1/b_r_index2/b_r_index3");
                HisenceHandJointsRight[9] = rightMode.transform.Find("b_r_wrist/b_r_index1/b_r_index2/b_r_index3/r_index_finger_tip_marker");

                HisenceHandJointsRight[10] = rightMode.transform.Find("b_r_wrist/b_r_middle1");
                HisenceHandJointsRight[11] = rightMode.transform.Find("b_r_wrist/b_r_middle1/b_r_middle2");
                HisenceHandJointsRight[12] = rightMode.transform.Find("b_r_wrist/b_r_middle1/b_r_middle2/b_r_middle3");
                HisenceHandJointsRight[13] = rightMode.transform.Find("b_r_wrist/b_r_middle1/b_r_middle2/b_r_middle3/r_middle_finger_tip_marker");

                HisenceHandJointsRight[14] = rightMode.transform.Find("b_r_wrist/b_r_ring1");
                HisenceHandJointsRight[15] = rightMode.transform.Find("b_r_wrist/b_r_ring1/b_r_ring2");
                HisenceHandJointsRight[16] = rightMode.transform.Find("b_r_wrist/b_r_ring1/b_r_ring2/b_r_ring3");
                HisenceHandJointsRight[17] = rightMode.transform.Find("b_r_wrist/b_r_ring1/b_r_ring2/b_r_ring3/r_ring_finger_tip_marker");

                HisenceHandJointsRight[18] = rightMode.transform.Find("b_r_wrist/b_r_pinky0/b_r_pinky1");
                HisenceHandJointsRight[19] = rightMode.transform.Find("b_r_wrist/b_r_pinky0/b_r_pinky1/b_r_pinky2");
                HisenceHandJointsRight[20] = rightMode.transform.Find("b_r_wrist/b_r_pinky0/b_r_pinky1/b_r_pinky2/b_r_pinky3");
                HisenceHandJointsRight[21] = rightMode.transform.Find("b_r_wrist/b_r_pinky0/b_r_pinky1/b_r_pinky2/b_r_pinky3/r_pinky_finger_tip_marker");

                Debug.Log("right hand mode init finish");
            } else {
                issucess = false;
            }
            
            isInitHisceneTransformFinish = issucess;

            return issucess;
        }

    }
}
