using System.Collections.Generic;

using UnityEngine.XR;
using UnityEngine.XR.Management;
using UnityEngine.InputSystem.XR;
using UnityEngine.InputSystem.Layouts;
using UnityEngine;
using System.Runtime.InteropServices;
using System;
using System.Collections;
using UnityEngine.InputSystem;
using UnityEngine.XR.Hands;
using UnityEngine.XR.Hands.ProviderImplementation;

#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.XR.Management;
#endif

namespace YYSX
{

    /// <summary>
    /// YYSX loader implentation showing how to create simple loader.
    /// NOTE: You have to rename this class to make it appear in the loader list for
    /// XRManager.
    /// </summary>
#if UNITY_EDITOR
    [XRSupportedBuildTarget(BuildTargetGroup.Standalone, new BuildTarget[]{ BuildTarget.StandaloneWindows, BuildTarget.StandaloneWindows64})]
    [XRSupportedBuildTarget(BuildTargetGroup.Android)]
#endif
    public class YYSXLoader : XRLoaderHelper
    {
        static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
        static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();

        static List<XRHandSubsystemDescriptor> s_HandSubsystemDescriptors = new List<XRHandSubsystemDescriptor>();
        XRHandProviderUtility.SubsystemUpdater m_Updater;

        YYSXSettings settings;

        /// <summary>Return the currently active Input Subsystem intance, if any.</summary>
        public XRInputSubsystem inputSubsystem
        {
            get { return GetLoadedSubsystem<XRInputSubsystem>(); }
        }
        public XRDisplaySubsystem displaySubsystem
        {
            get { return GetLoadedSubsystem<XRDisplaySubsystem>(); }
        }

        YYSXSettings GetSettings()
        {
            // When running in the Unity Editor, we have to load user's customization of configuration data directly from
            // EditorBuildSettings. At runtime, we need to grab it from the static instance field instead.
#if UNITY_EDITOR
            UnityEditor.EditorBuildSettings.TryGetConfigObject(YYSXConstants.k_SettingsKey, out settings);
#else
            settings = YYSXSettings.s_RuntimeInstance;
#endif
            return settings;
        }
        XRDisplaySubsystem dispInst;
        XRInputSubsystem trackingInst;
        XRHandSubsystem xrHandSubsystem;

        #region XRLoader API Implementation

        /// <summary>Implementaion of <see cref="XRLoader.Initialize"/></summary>
        /// <returns>True if successful, false otherwise</returns>
        public override bool Initialize()
        {
            Debug.Log("YYSXLoader: Initialize");
            settings = GetSettings();
            if (settings == null)
            {
                // TODO: Pass settings off to plugin prior to subsystem init.
                Debug.Log("YYSX Initialize: settings == null ERROR!!");
            }
            LayoutMatcherRegister();
            InputSystem.RegisterLayout<HandLeftLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX LHand"));
            InputSystem.RegisterLayout<HandRightLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX RHand"));

            CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "YYSX Display");
            CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "YYSX Input");



            if ( settings != null && settings.ActiveHand ) {
                YYSXXRHandProvider.Register();

                Debug.Log("YYSXLoader: settings.ActiveHand:"+ settings.ActiveHand+"|");
                CreateSubsystem<XRHandSubsystemDescriptor, XRHandSubsystem>(s_HandSubsystemDescriptors, "YYSXXRHandProvider");
                var currentHandSubsystems = new List<XRHandSubsystem>();
               
                SubsystemManager.GetSubsystems(currentHandSubsystems);
                foreach ( var handSubsystem in currentHandSubsystems ) {
                    //if ( handSubsystem.running )
                    //    handSubsystem.Stop();

                    if ( handSubsystem.subsystemDescriptor.id == "YYSXXRHandProvider" ) {
                        Debug.Log("YYSXLoader: s_XRHandSubsystem add m_Updater");
                        m_Updater = new XRHandProviderUtility.SubsystemUpdater(handSubsystem);
                        xrHandSubsystem = handSubsystem;
                    }
                }
            }

            return true;

        }


        /// <summary>Implementaion of <see cref="XRLoader.Start"/></summary>
        /// <returns>True if successful, false otherwise</returns>
        public override bool Start()
        {
            Debug.Log("YYSXLoader: Start");
            //if (Application.platform == RuntimePlatform.Android)
            //{
            //    AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            //    AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            //    NativeAPI_SetActivity(activity.GetRawObject());
            //}
           
            StartSubsystem<XRDisplaySubsystem>();
            StartSubsystem<XRInputSubsystem>();

            XRDisplaySubsystem display = GetLoadedSubsystem<XRDisplaySubsystem>();
            if (display != null && settings != null)
            {
                if ( settings.stereoRenderingModeAndroid == YYSXSettings.StereoRenderingModeAndroid.MultiPass && (display.supportedTextureLayouts | XRDisplaySubsystem.TextureLayout.SeparateTexture2Ds) != 0 ) {
                    display.textureLayout = XRDisplaySubsystem.TextureLayout.SeparateTexture2Ds;
                } else if ( settings.stereoRenderingModeAndroid == YYSXSettings.StereoRenderingModeAndroid.Multiview && (display.supportedTextureLayouts | XRDisplaySubsystem.TextureLayout.Texture2DArray) != 0 ) {
                    display.textureLayout = XRDisplaySubsystem.TextureLayout.Texture2DArray;
                } else {
                    Debug.Log("YYSX Use RenderingMode:" + settings.stereoRenderingModeAndroid + " NOT Support !,Please check DisplayProvider::GfxThread_Start renderingCaps.noSinglePassRenderingSupport !");
                    return false;
                }

                //display.singlePassRenderingDisabled =  (settings.stereoRenderingModeAndroid == YYSXSettings.StereoRenderingModeAndroid.MultiPass) ? true : false;
                //display.textureLayout = (settings.stereoRenderingModeAndroid == YYSXSettings.StereoRenderingModeAndroid.MultiPass) ? XRDisplaySubsystem.TextureLayout.SeparateTexture2Ds : XRDisplaySubsystem.TextureLayout.Texture2DArray;
                Debug.Log("YYSX Use RenderingMode:"+ settings.stereoRenderingModeAndroid + "|support:" + display.supportedTextureLayouts + "|current:" + display.textureLayout);
            }

            StartSubsystem<XRHandSubsystem>();
            m_Updater?.Start();

            return true;
        }

        /// <summary>Implementaion of <see cref="XRLoader.Stop"/></summary>
        /// <returns>True if successful, false otherwise</returns>
        public override bool Stop()
        {
            StopSubsystem<XRDisplaySubsystem>();
            StopSubsystem<XRInputSubsystem>();

            m_Updater?.Stop();
            StopSubsystem<XRHandSubsystem>();
            return true;
        }

        /// <summary>Implementaion of <see cref="XRLoader.Deinitialize"/></summary>
        /// <returns>True if successful, false otherwise</returns>
        public override bool Deinitialize()
        {
            DestroySubsystem<XRDisplaySubsystem>();
            DestroySubsystem<XRInputSubsystem>();

            m_Updater?.Destroy();
            m_Updater = null;
            xrHandSubsystem = null;
            DestroySubsystem<XRHandSubsystem>();
            return base.Deinitialize();
        }

#if UNITY_EDITOR
        [InitializeOnLoadMethod]
#endif
        static void LayoutMatcherRegister()
        {
            UnityEngine.InputSystem.InputSystem.RegisterLayout<XRController>(
                      matches: new InputDeviceMatcher()
                          .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
                          .WithProduct("YYSX Controller")
                          );

            UnityEngine.InputSystem.InputSystem.RegisterLayoutMatcher<XRHMD>(
              new InputDeviceMatcher()
                  //.WithInterface(XRUtilities.InterfaceMatchAnyVersion)
                  .WithProduct("YYSX HMD")
                  );

  //          UnityEngine.InputSystem.InputSystem.RegisterLayoutMatcher<HandLayout>(
  //new InputDeviceMatcher()
  //    //.WithInterface(XRUtilities.InterfaceMatchAnyVersion)
  //    .WithProduct("YYSX Hand")
  //    );

        }

        #endregion

#if UNITY_EDITOR
        [InitializeOnLoad]
#endif
        static class InputLayoutLoader
        {
            static InputLayoutLoader()
            {
                RegisterInputLayouts();
            }

            public static void RegisterInputLayouts()
            {
                InputSystem.RegisterLayout<HandLeftLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX LHand"));
                InputSystem.RegisterLayout<HandRightLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX RHand"));
            }
        }


    }
}
