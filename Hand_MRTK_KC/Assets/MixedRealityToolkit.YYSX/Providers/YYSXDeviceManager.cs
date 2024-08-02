using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.XRSDK;
using Microsoft.MixedReality.Toolkit.XRSDK.Input;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.Scripting;
using UnityEngine.XR;

namespace Microsoft.MixedReality.Toolkit.YYSX.XRSDK.Input
{
    [Preserve]
    [MixedRealityDataProvider(
    typeof(IMixedRealityInputSystem),
    SupportedPlatforms.Android,
    "YYSX XRSDK Device Manager",
    supportedUnityXRPipelines: SupportedUnityXRPipelines.XRSDK)]
    public class YYSXDeviceManager :XRSDKDeviceManager 
    {
        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="inputSystem">The <see cref="Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem"/> instance that receives data from this provider.</param>
        /// <param name="name">Friendly name of the service.</param>
        /// <param name="priority">Service priority. Used to determine order of instantiation.</param>
        /// <param name="profile">The service's configuration profile.</param>
        public YYSXDeviceManager(
            IMixedRealityInputSystem inputSystem,
            string name = null,
            uint priority = DefaultPriority,
            BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) {
        }

        private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] XRSDKDeviceManager.Update");
        private readonly List<InputDevice> inputDeviceHand = new List<InputDevice>();
        private readonly List<InputDevice> inputDeviceController = new List<InputDevice>();
        private readonly List<InputDevice> removeInputDevices = new List<InputDevice>();

        YYSXDeviceManagerMono YYSXDeviceManagerMono;

        const string libName = "yyss_unityxrprovider_impl";

        [DllImport(libName)]
        private extern static void yyss_unityxr_setHand(bool isOn);
        private static void YYSS_unityxr_setHand(bool isOn) {
            if ( Application.platform == RuntimePlatform.Android ) {
                Debug.Log("yyss_unityxr_setHand:" + isOn);
                yyss_unityxr_setHand(isOn);
            }
        }

        [DllImport(libName)]
        private extern static void GetHandsDataNative();
        private static void YYSS_GetHandsDataNative() {
            if ( Application.platform == RuntimePlatform.Android ) {
                GetHandsDataNative();
            }
        }
        public override void Enable() {
            base.Enable();

            inputDeviceHand.Clear();
            inputDeviceController.Clear();

            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Controller, inputDeviceController);
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HandTracking, inputDeviceHand);

            YYSS_unityxr_setHand(true);

            YYSXDeviceManagerMono = new GameObject(nameof(YYSXDeviceManagerMono)).AddComponent<YYSXDeviceManagerMono>();
            YYSXDeviceManagerMono.OnApplicationPauseEvent += OnApplicationPauseEvent;

        }

        private void OnApplicationPauseEvent(bool pause) {
            if ( pause ) {
                YYSS_unityxr_setHand(false);
            } else {
                YYSS_unityxr_setHand(true);
            }
        }

        public override void Disable() {
            base.Disable();
            YYSS_unityxr_setHand(false);

            if ( YYSXDeviceManagerMono != null ) {
                YYSXDeviceManagerMono.OnApplicationPauseEvent -= OnApplicationPauseEvent;
                YYSXDeviceManagerMono.Destroy(YYSXDeviceManagerMono);
            }
        }

        /// <inheritdoc/>
        public override void Update() {
            using ( UpdatePerfMarker.Auto() ) {
                if ( !IsEnabled ) {
                    return;
                }

                //base.Update();

                if ( XRSubsystemHelpers.InputSubsystem == null || !XRSubsystemHelpers.InputSubsystem.running ) {
                    return;
                }


                YYSS_GetHandsDataNative();

                //logicOne();
                logicTwo();
            }
        }

        void logicTwo() {
            removeInputDevices.Clear();

            foreach ( InputDevice device in inputDeviceHand ) {
                device.TryGetFeatureValue(CommonUsages.isTracked, out bool isTracked);
                //Debug.Log("wangcq ====>isTracked device:" + device.name+"|"+ isTracked);
                if ( isTracked ) {
                    GenericXRSDKController controller = GetOrAddController(device);

                    if ( controller != null ) {
                        // Remove devices from our previously tracked list as we update them.
                        // This will allow us to remove all stale devices that were tracked
                        // last frame but not this one.
                        controller.UpdateController(device);
                    }
                } else {
                    removeInputDevices.Add(device);
                }
            }

            foreach ( InputDevice device in inputDeviceController ) {
                device.TryGetFeatureValue(CommonUsages.isTracked, out bool isTracked);
                //Debug.Log("wangcq ====>isTracked device:" + device.name + "|" + isTracked);
                if ( isTracked ) {
                    GenericXRSDKController controller = GetOrAddController(device);

                    if ( controller != null ) {
                        // Remove devices from our previously tracked list as we update them.
                        // This will allow us to remove all stale devices that were tracked
                        // last frame but not this one.
                        controller.UpdateController(device);
                    }
                } else {
                    removeInputDevices.Add(device);
                }
            }

            foreach ( InputDevice device in removeInputDevices ) {
                //Debug.Log("wangcq ====>remove device:"+device.name);

                RemoveController(device);
            }
        }
        void logicOne() {
            removeInputDevices.Clear();

            foreach ( InputDevice device in inputDeviceHand ) {
                device.TryGetFeatureValue(CommonUsages.isTracked, out bool isTracked);
                //Debug.Log("wangcq ====>isTracked device:" + device.name+"|"+ isTracked);
                if ( isTracked ) {
                    GenericXRSDKController controller = GetOrAddController(device);

                    if ( controller != null ) {
                        // Remove devices from our previously tracked list as we update them.
                        // This will allow us to remove all stale devices that were tracked
                        // last frame but not this one.
                        controller.UpdateController(device);
                    }
                } else {
                    removeInputDevices.Add(device);
                }
            }

            if ( removeInputDevices.Count == 2 ) {
                foreach ( InputDevice device in inputDeviceController ) {
                    device.TryGetFeatureValue(CommonUsages.isTracked, out bool isTracked);
                    //Debug.Log("wangcq ====>isTracked device:" + device.name + "|" + isTracked);
                    if ( isTracked ) {
                        GenericXRSDKController controller = GetOrAddController(device);

                        if ( controller != null ) {
                            // Remove devices from our previously tracked list as we update them.
                            // This will allow us to remove all stale devices that were tracked
                            // last frame but not this one.
                            controller.UpdateController(device);
                        }
                    } else {
                        removeInputDevices.Add(device);
                    }
                }
            } else {
                removeInputDevices.AddRange(inputDeviceController);
            }

            foreach ( InputDevice device in removeInputDevices ) {
                //Debug.Log("wangcq ====>remove device:"+device.name);

                RemoveController(device);
            }
        }

        protected override SupportedControllerType GetCurrentControllerType(InputDevice inputDevice) {

            //Debug.Log("wangcq327 ---:"+ inputDevice.name);

            //return inputDevice.name switch {
            //    "YYSX HMD" => SupportedControllerType.GenericUnity,
            //    "YYSX Controller" => SupportedControllerType.WindowsMixedReality,
            //    "YYSX LHand" => SupportedControllerType.ArticulatedHand,
            //    "YYSX RHand" => SupportedControllerType.ArticulatedHand,
            //    _ => base.GetCurrentControllerType(inputDevice),
            //};

            if ( inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking) ) {
                if ( inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Left) ||
                    inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Right) ) {
                    // If it's a hand with a reported handedness, assume articulated hand
                    return SupportedControllerType.ArticulatedHand;
                }
            }

            if ( inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller) ) {
                return SupportedControllerType.WindowsMixedReality;
            }

            return base.GetCurrentControllerType(inputDevice);
        }

        protected override Type GetControllerType(SupportedControllerType supportedControllerType) {

            switch ( supportedControllerType ) {
                //case SupportedControllerType.GenericUnity:
                //    return typeof(YYSXHMD);
                case SupportedControllerType.WindowsMixedReality:
                    return typeof(YYSXMotionController6Dof);
                case SupportedControllerType.ArticulatedHand:
                    return typeof(YYSXArticulatedHand);
                default:
                    return base.GetControllerType(supportedControllerType);
            }
        }
        protected override InputSourceType GetInputSourceType(SupportedControllerType supportedControllerType) {

            switch ( supportedControllerType ) {
                //case SupportedControllerType.GenericUnity:
                //    return InputSourceType.Head;
                case SupportedControllerType.WindowsMixedReality:
                    return InputSourceType.Controller;
                case SupportedControllerType.ArticulatedHand:
                    return InputSourceType.Hand;
                default: 
                    return base.GetInputSourceType(supportedControllerType);
            }
        }


    }

}
