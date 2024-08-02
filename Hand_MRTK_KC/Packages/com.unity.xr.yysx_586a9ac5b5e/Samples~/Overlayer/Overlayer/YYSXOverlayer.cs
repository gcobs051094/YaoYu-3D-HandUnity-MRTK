using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR;

public class YYSXOverlayer : MonoBehaviour
{

    XRDisplaySubsystem yysxdisplay;

    public YYSXOverlayerCamera YYSXOverlayerCamera_Left;
    public YYSXOverlayerCamera YYSXOverlayerCamera_Right;

    List<XRDisplaySubsystem.XRRenderPass> XRRenderPassList;
    Matrix4x4 leftDelta, rightDelta;

    // Start is called before the first frame update
    void Start()
    {
        if ( Application.platform == RuntimePlatform.Android ) {

            yysxdisplay = GetXRdisplay();
            if ( yysxdisplay == null ) {
                Debug.Log("YYSXOverlayer:yysxdisplay == null");
                return;
            }
            Debug.Log("YYSXOverlayer:yysxdisplay.isrunning:" + yysxdisplay.running);

            GetXRRenderPassList(yysxdisplay);

            if ( XRRenderPassList == null ) {
                Debug.Log("YYSXOverlayer:XRRenderPassList == null");
                return;
            }
            Debug.Log("YYSXOverlayer:XRRenderPassList:" + XRRenderPassList.Count);

        } else {
            XRRenderPassList = new List<XRDisplaySubsystem.XRRenderPass>();
            XRRenderPassList.Add(new XRDisplaySubsystem.XRRenderPass() { renderTargetDesc = new RenderTextureDescriptor(Screen.width, Screen.height) });
            XRRenderPassList.Add(new XRDisplaySubsystem.XRRenderPass() { renderTargetDesc = new RenderTextureDescriptor(Screen.width, Screen.height) });
        }

        YYSXNativeAPI_Camera.YYSX_unityxr_getHeadToEye(ref leftDelta, ref rightDelta);

        if ( XRRenderPassList.Count > 0 && YYSXOverlayerCamera_Left ) {
            YYSXOverlayerCamera_Left.SetUp(0, XRRenderPassList[0], leftDelta);
        }
        if ( XRRenderPassList.Count > 1 && YYSXOverlayerCamera_Right ) {
            YYSXOverlayerCamera_Right.SetUp(1, XRRenderPassList[1], rightDelta);
        }

    }

    XRDisplaySubsystem GetXRdisplay() {
        XRDisplaySubsystem ds = null;
        List<XRDisplaySubsystem> displaySubsystems = new List<XRDisplaySubsystem>();
        SubsystemManager.GetSubsystems<XRDisplaySubsystem>(displaySubsystems);
        foreach ( var displaysubsytem in displaySubsystems ) {
            if ( displaysubsytem.subsystemDescriptor.id == "YYSX Display" ) {
                ds = displaysubsytem;
                break;
            }
        }
        return ds;
    }



    void GetXRRenderPassList(XRDisplaySubsystem subsystem) {
        if ( subsystem == null ) {
            Debug.Log("subsystem == null");
            return;
        }

        int passcount = subsystem.GetRenderPassCount();
        if ( XRRenderPassList == null ) {
            XRRenderPassList = new List<XRDisplaySubsystem.XRRenderPass>();
        }
        XRRenderPassList.Clear();

        for ( int i = 0; i < passcount; i++ ) {
            XRDisplaySubsystem.XRRenderPass xrrenderpass;
            subsystem.GetRenderPass(i,out xrrenderpass);
            XRRenderPassList.Add(xrrenderpass);
        }

    }


    private void Update() {

        if ( yysxdisplay == null )
            return;

        GetXRRenderPassList(yysxdisplay);

        YYSXNativeAPI_Camera.YYSX_unityxr_getHeadToEye(ref leftDelta, ref rightDelta);

        if ( XRRenderPassList.Count > 0 && YYSXOverlayerCamera_Left ) {
            YYSXOverlayerCamera_Left.UpdateFOV(0, XRRenderPassList[0], leftDelta);
        }
        if ( XRRenderPassList.Count > 1 && YYSXOverlayerCamera_Right ) {
            YYSXOverlayerCamera_Right.UpdateFOV(1, XRRenderPassList[1], rightDelta);
        }

    }
}
