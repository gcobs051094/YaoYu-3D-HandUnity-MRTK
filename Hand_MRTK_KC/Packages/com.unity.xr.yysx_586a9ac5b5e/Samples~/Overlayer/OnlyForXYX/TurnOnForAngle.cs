using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.InputSystem.XR;

public class TurnOnForAngle : MonoBehaviour
{
    Matrix4x4 leftDelta, rightDelta;

    XROrigin xrOrigin;
   // public Transform AtwOffset;
    public Transform AtwCamera;

    public YYSXOverlayer YYSXOverlayer;

    public Transform OverlayOffSet;
    public Transform OverlayLeftCamera;
    public Transform OverlayRightCamera;

    private Vector3 atwOffsetInitP;
    private Quaternion atwOffsetInitR;
    private Vector3 overlayOffsetInitP;
    private Quaternion overlayOffsetInitR;


    public Pose LastestAtwLocalPose;
    public Pose LastestAtwGlobalPose;

    private void OnEnable() {
        Application.onBeforeRender += onBeforeRender;
    }

    private void OnDisable() {
        Application.onBeforeRender -= onBeforeRender;
    }


    AndroidJavaClass javaclass;

    AndroidJavaObject javaobject;

    private void Start() {



        YYSXOverlayer = FindObjectOfType<YYSXOverlayer>();
        if ( YYSXOverlayer ) {
            YYSXOverlayerCamera[] overlayers = YYSXOverlayer.GetComponentsInChildren<YYSXOverlayerCamera>();
            foreach ( var overlay in overlayers ) {
                if ( overlay.transform.name == "RightCamera" ) {
                    OverlayRightCamera = overlay.transform;
                } else if ( overlay.transform.name == "LeftCamera" ) {
                    OverlayLeftCamera = overlay.transform;
                }
            }
            OverlayOffSet = YYSXOverlayer.transform.Find("OffSet");
        }

        xrOrigin = FindObjectOfType<XROrigin>();
        if ( xrOrigin ) {
            Transform AtwOffset = xrOrigin.transform.Find("Camera Offset");
            Camera main = xrOrigin.GetComponentInChildren<Camera>();
            AtwCamera = main == null ? null : main.transform;

            //if ( Application.isEditor && AtwCamera ) {
            //    TrackedPoseDriver tk = AtwCamera.GetComponent<TrackedPoseDriver>();
            //    if ( tk )
            //        tk.enabled = false;
            //}
            if ( Application.isEditor ) {
               // OverlayRightCamera.gameObject.GetComponent<Camera>().cullingMask = 0;
            }
            
        }

        if ( isCanDO() == false )
            return;

        YYSXNativeAPI_Camera.YYSX_unityxr_getHeadToEye(ref leftDelta, ref rightDelta);

        //atwOffsetInitP = AtwOffset.transform.localPosition;
        //atwOffsetInitR = AtwOffset.transform.localRotation;

        overlayOffsetInitP = OverlayOffSet.transform.localPosition;
        overlayOffsetInitR = OverlayOffSet.transform.localRotation;


        //TurnOnAngle(true);
        //StartCoroutine(xxx());

    }

    Matrix4x4 tempMatrix;
    Matrix4x4 HeadTRS;

    //public List<Transform> overlayGameObjects;


    //[DllImport("native_interface")]
    //extern static int native_to_0dof();



    //[DllImport("native_interface")]
    //extern static int native_to_indoor_3dof();




    [BeforeRenderOrder(1000)]
    private void onBeforeRender() {
        //if ( Application.isEditor == false )
        //    return;

        if ( Application.isPlaying == false  )
            return;

        if ( isCanDO() == false ) {
            return;
        }

        

        if ( Application.isEditor ) {

            //Mhw
            //HeadTRS = Matrix4x4.TRS(YYSXOverlayer.transform.localPosition, YYSXOverlayer.transform.localRotation, Vector3.one);
            HeadTRS = Matrix4x4.TRS(AtwCamera.transform.localPosition, AtwCamera.transform.localRotation, Vector3.one);
            //Mch
            //leftDelta

            //Mcw == Mhw * Mch （先从camera坐标系->head坐标系 （Mch），再从head坐标系转到World坐标系（Mhw），注意不是Mch * Mhw）
            tempMatrix = HeadTRS * leftDelta;

            if ( tempMatrix.ValidTRS() ) {
                AtwCamera.transform.localRotation = tempMatrix.rotation;
                //AtwCamera.transform.localPosition = new Vector3(tempMatrix[12], tempMatrix[13], tempMatrix[14]);
            } else {
                Debug.Log("Invaild TRS !!!,Error:\n" + tempMatrix);
            }
        }


        if ( leftDelta.ValidTRS() && rightDelta.ValidTRS() ) {
            OverlayLeftCamera.transform.localRotation = leftDelta.rotation;
            OverlayLeftCamera.transform.localPosition = new Vector3(leftDelta[12], leftDelta[13], leftDelta[14]);

            OverlayRightCamera.transform.localRotation = rightDelta.rotation;
            OverlayRightCamera.transform.localPosition = new Vector3(rightDelta[12], rightDelta[13], rightDelta[14]);
        }



        if ( isTurnOnAngle ) {
            //上抬

            //Mcw
            HeadTRS = Matrix4x4.TRS(AtwCamera.transform.localPosition, AtwCamera.transform.localRotation, Vector3.one);

            //Mhc
            //leftDelta.inverse

            //Transform往上，ATW camera transform并不是最后的view，view通过unityxr 基于transform计算
            tempMatrix = leftDelta.inverse * HeadTRS;
            if ( tempMatrix.ValidTRS() ) {
                AtwCamera.transform.localRotation = tempMatrix.rotation;
                //AtwCamera.transform.localPosition = new Vector3(tempMatrix[12], tempMatrix[13], tempMatrix[14]);
            }

            if ( Application.platform == RuntimePlatform.WindowsEditor ) {
                OverlayLeftCamera.transform.rotation = AtwCamera.transform.rotation;
                OverlayLeftCamera.transform.position = AtwCamera.transform.position;
                OverlayRightCamera.transform.rotation = AtwCamera.transform.rotation;
                OverlayRightCamera.transform.position = AtwCamera.transform.position;
            } else {
                YYSXOverlayer.transform.localRotation = AtwCamera.transform.localRotation;
                YYSXOverlayer.transform.localPosition = AtwCamera.transform.localPosition;

                //字往下，和最终view矩阵一样

                //foreach ( var ob in TrackedCenterEye.TrackedCenterEyeInstances ) {
                //    tempMatrix = Matrix4x4.TRS(ob.transform.localPosition, ob.transform.localRotation, Vector3.one);
                //    tempMatrix = leftDelta.inverse * tempMatrix;

                //    ob.transform.localRotation = tempMatrix.rotation;
                //    ob.transform.localPosition = new Vector3(tempMatrix[12], tempMatrix[13], tempMatrix[14]);
                //}

            }

            tempMatrix = Matrix4x4.TRS(AtwCamera.transform.position, AtwCamera.transform.rotation, Vector3.one);
            if ( Application.platform == RuntimePlatform.Android ) {
                tempMatrix = tempMatrix * leftDelta;
            }
            if ( TrackOverlayer.TrackOverlayerInstances != null ) {

                foreach ( var ob in TrackOverlayer.TrackOverlayerInstances ) {
                    ob.transform.localRotation = tempMatrix.rotation;
                    ob.transform.localPosition = new Vector3(tempMatrix[12], tempMatrix[13], tempMatrix[14]);
                }
            }


        } else {
            //还原


            if ( Application.platform == RuntimePlatform.WindowsEditor ) {
                OverlayLeftCamera.transform.rotation = AtwCamera.transform.rotation;
                OverlayLeftCamera.transform.position = AtwCamera.transform.position;
                OverlayRightCamera.transform.rotation = AtwCamera.transform.rotation;
                OverlayRightCamera.transform.position = AtwCamera.transform.position;
            } else {
                YYSXOverlayer.transform.localRotation = AtwCamera.transform.localRotation;
                YYSXOverlayer.transform.localPosition = AtwCamera.transform.localPosition;

                //字往下，和最终view矩阵一样

                //foreach ( var ob in TrackedCenterEye.TrackedCenterEyeInstances ) {
                //    tempMatrix = Matrix4x4.TRS(ob.transform.localPosition, ob.transform.localRotation, Vector3.one);
                //    tempMatrix = tempMatrix * leftDelta.inverse;

                //    ob.transform.localRotation = tempMatrix.rotation;
                //    ob.transform.localPosition = new Vector3(tempMatrix[12], tempMatrix[13], tempMatrix[14]);
                //}

            }



            //Mcw
            //tempMatrix = Matrix4x4.TRS(AtwCamera.transform.localPosition, AtwCamera.transform.localRotation, Vector3.one);
            tempMatrix = Matrix4x4.TRS(AtwCamera.transform.position, AtwCamera.transform.rotation, Vector3.one);
            if ( Application.platform == RuntimePlatform.WindowsEditor ) {
                tempMatrix = tempMatrix * leftDelta.inverse;
            }
            if ( TrackOverlayer.TrackOverlayerInstances != null ) {

                foreach ( var ob in TrackOverlayer.TrackOverlayerInstances ) {
                    ob.transform.localRotation = tempMatrix.rotation;
                    ob.transform.localPosition = new Vector3(tempMatrix[12], tempMatrix[13], tempMatrix[14]);
                }
            }
        }

        LastestAtwLocalPose.position = AtwCamera.transform.localPosition;
        LastestAtwLocalPose.rotation = AtwCamera.transform.localRotation;

        LastestAtwGlobalPose.position = AtwCamera.transform.position;
        LastestAtwGlobalPose.rotation = AtwCamera.transform.rotation;

    }

    bool isCanDO() {
        if (AtwCamera == null || OverlayLeftCamera == null || OverlayRightCamera == null || OverlayOffSet==null ) {
            Debug.LogError("AtwOffset == null || OverlayLeftCamera == null || OverlayRightCamera == null !!!!!!!");
            return false;
        }

        return true; 
    }

    IEnumerator xxx() {
        bool isOn = false;
        while ( true ) {
            TurnOnAngle(isOn);
            isOn = !isOn;
            yield return new WaitForSeconds(5);
        }
    }

    public bool isTurnOnAngle = false;

    public void TurnOnAngle(bool isOn) {
        isTurnOnAngle = isOn;
        //TrackedPoseDriver.isNull = isOn;
        if ( isOn ) {
            // CallBridge.callAndroid(Request.Build().Name("SlamChangeModeNative.changeSlamMode").Param("mode", 2));

        } else {
            // CallBridge.callAndroid(Request.Build().Name("SlamChangeModeNative.changeSlamMode").Param("mode", 0));

        }

    }
}
