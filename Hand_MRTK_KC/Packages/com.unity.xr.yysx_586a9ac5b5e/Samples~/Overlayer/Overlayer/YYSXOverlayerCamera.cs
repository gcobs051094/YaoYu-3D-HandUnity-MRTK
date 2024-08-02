using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.XR;


[RequireComponent(typeof(Camera))]
public class YYSXOverlayerCamera : MonoBehaviour
{
    XRDisplaySubsystem.XRRenderPass renderPass;
    int passIndex;
    private const int bufferCount = 6;
    private int[] eyeTextureIds = new int[bufferCount];
    private RenderTexture[] eyeTextures = new RenderTexture[bufferCount];
    private int currentTextureIndex = 0;
    Camera overlayercamera;
    bool isSetup = false;

    Matrix4x4 eyeToHead;


    //private void P() {
    //    if ( Application.platform == RuntimePlatform.Android ) {
    //        XRDisplaySubsystem.XRRenderParameter renderParameter;
    //        renderPass.GetRenderParameter(overlayercamera, 0, out renderParameter);
    //        overlayercamera.projectionMatrix = renderParameter.projection;
    //        Debug.Log(Time.frameCount+"|"+passIndex + "|view:\n" + renderParameter.view);
    //    }
    //}

    public void SetUp(int passIndex,XRDisplaySubsystem.XRRenderPass renderPass,Matrix4x4 _eyeToHead) {
        this.renderPass = renderPass;
        this.passIndex = passIndex;

        overlayercamera = GetComponent<Camera>();
        if ( overlayercamera == null )
            overlayercamera = gameObject.AddComponent<Camera>();
        overlayercamera.enabled = false;


        //camera.targetTexture = new RenderTexture(renderPass.renderTargetDesc);
        InitializeBuffers();


        if ( Application.platform == RuntimePlatform.Android ) {
            XRDisplaySubsystem.XRRenderParameter renderParameter;
            renderPass.GetRenderParameter(overlayercamera, 0, out renderParameter);
            overlayercamera.projectionMatrix = renderParameter.projection;
            Debug.Log(passIndex+"|view:\n"+ renderParameter.view);
        }
        this.eyeToHead = _eyeToHead;

        //if ( eyeToHead.ValidTRS() ) {
        //    overlayercamera.transform.localRotation = eyeToHead.rotation;
        //    overlayercamera.transform.localPosition = new Vector3(eyeToHead[12], eyeToHead[13], eyeToHead[14]);
        //    //Debug.Log("VaildTRS:\n" + eyeToHead);
        //} else {
        //    Debug.Log("Invaild TRS !!!,Error:\n" + eyeToHead);
        //}

        overlayercamera.targetTexture = eyeTextures[currentTextureIndex];
        overlayercamera.enabled = true;

        //Debug.Log("YYSXOverlayerCamera:width:" + overlayercamera.targetTexture.width + "|height:" + overlayercamera.targetTexture.height + "|cameraprojectM:\n" + renderParameter.projection);
        isSetup = true;
    }


    void InitializeBuffers() {
        if ( Application.platform == RuntimePlatform.Android ) {
            for ( int i = 0; i < bufferCount; ++i ) {
                if ( eyeTextures[i] != null )
                    eyeTextures[i].Release();

                eyeTextures[i] = new RenderTexture(renderPass.renderTargetDesc);
                eyeTextures[i].Create();
                eyeTextureIds[i] = eyeTextures[i].GetNativeTexturePtr().ToInt32();
                Debug.Log("Create Render Texture with ID: " + eyeTextureIds[i] + " Width: " + eyeTextures[i].width + " Height: " + eyeTextures[i].height + " AA: " + eyeTextures[i].antiAliasing);

            }
        } else {
            for ( int i = 0; i < bufferCount; ++i ) {
                if ( eyeTextures[i] != null )
                    eyeTextures[i].Release();

                eyeTextures[i] = new RenderTexture(Screen.width,Screen.height,24);
                eyeTextures[i].Create();
                eyeTextureIds[i] = eyeTextures[i].GetNativeTexturePtr().ToInt32();
                //Debug.Log("Create Render Texture with ID: " + eyeTextureIds[i] + " Width: " + eyeTextures[i].width + " Height: " + eyeTextures[i].height + " AA: " + eyeTextures[i].antiAliasing);
            }
        }
    }

    [DllImport("yyss_unityxrprovider_impl")]
    static extern void SetLeftOverlayersTextureID(int passindex, int textureID);


    private void OnPreRender() {
        //Debug.Log("==============>OnPreRender:"+passIndex);
        if ( isSetup == false )
            return;
        currentTextureIndex = ++currentTextureIndex % bufferCount;
        var targetTexture = eyeTextures[currentTextureIndex];
        if ( targetTexture == null ) return;

        overlayercamera.targetTexture = targetTexture;

        if ( blendOverlayer ) {
            blendOverlayer.OverlayerTexture = overlayercamera.targetTexture;
        }

        if( Application.platform == RuntimePlatform.Android )
            SetLeftOverlayersTextureID(passIndex, eyeTextureIds[currentTextureIndex]);

        targetTexture.DiscardContents();
    }

    public Material overlayerBlend;
    BlendOverlayer blendOverlayer;
    private void Start() {
        if ( Application.platform != RuntimePlatform.Android  && passIndex ==0) {
            XROrigin xrorigin = FindObjectOfType<XROrigin>();
            if ( xrorigin != null ) {
                Camera xrCamera = xrorigin.GetComponentInChildren<Camera>();

                if ( xrCamera && overlayerBlend ) {
                    blendOverlayer = xrCamera.GetComponent<BlendOverlayer>();
                    if ( blendOverlayer == null ) {
                        blendOverlayer = xrCamera.gameObject.AddComponent<BlendOverlayer>();
                    }
                    blendOverlayer.blendMaterial = overlayerBlend;
                }
            }
        }
    }

    public void UpdateFOV(int passIndex, XRDisplaySubsystem.XRRenderPass renderPass, Matrix4x4 _eyeToHead) {
        
        if ( isSetup == false )
            return;

        this.renderPass = renderPass;
        this.passIndex = passIndex;

        if ( Application.platform == RuntimePlatform.Android ) {
            XRDisplaySubsystem.XRRenderParameter renderParameter;
            renderPass.GetRenderParameter(overlayercamera, 0, out renderParameter);
            overlayercamera.projectionMatrix = renderParameter.projection;
            //Debug.Log(passIndex + "|view:\n" + renderParameter.view);
        }
        this.eyeToHead = _eyeToHead;
    }

}
