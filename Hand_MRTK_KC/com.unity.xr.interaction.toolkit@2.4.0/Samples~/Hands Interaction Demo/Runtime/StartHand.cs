using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class StartHand : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("YYSS_StartHand 3..........");
        Invoke("YYSS_StartHand", 3);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnDestroy() {
        YYSS_StopHand();
    }

    const string libName = "yyss_unityxrprovider_impl";

    [DllImport(libName)]
    private extern static void yyss_unityxr_setHand(bool isOn);
    public static void YYSS_unityxr_setHand(bool isOn) {
        Debug.Log("yyss_unityxr_setHand:" + isOn);
        if ( Application.platform == RuntimePlatform.Android ) {
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
