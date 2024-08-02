using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class StartHand : MonoBehaviour
{
    // Start is called before the first frame update
    //void Start()
    //{
    //    Invoke("YYSS_StartHand", 3);
    //}

    private void OnEnable() {
        //Invoke("YYSS_StartHand", 3);
        YYSS_StartHand();
    }


    private void OnDisable() {
        YYSS_StopHand();

    }
    // Update is called once per frame
    void Update()
    {
        
    }

    // private void OnApplicationPause(bool pause) {
    //     if ( pause == true ) {
    //         YYSS_StopHand();
    //     } else {
    //         Invoke("YYSS_StartHand", 3);
    //     }
    // }

    //private void OnDestroy() {
    //    YYSS_StopHand();
    //}

    const string libName = "yyss_unityxrprovider_impl";

    [DllImport(libName)]
    private extern static void yyss_unityxr_setHand(bool isOn);
    public static void YYSS_unityxr_setHand(bool isOn) {
        if ( Application.platform == RuntimePlatform.Android ) {
            Debug.Log("yyss_unityxr_setHand:" + isOn);
            yyss_unityxr_setHand(isOn);
        }
    }


    public void YYSS_StartHand() {
        YYSS_unityxr_setHand(true);
    }

    public static void YYSS_StopHand() {
        YYSS_unityxr_setHand(false);
    }
}
