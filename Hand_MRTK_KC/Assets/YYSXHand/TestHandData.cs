using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestHandData : MonoBehaviour
{
    public List<Vector3> handP;
    public List<Quaternion> handQ;

    public GameObject prefabCube;

    // Start is called before the first frame update
    void Start()
    {
        handP = new List<Vector3>();
        handP.Add(new Vector3(-0.041717f, 0.009949f, -0.243994f));//1
        handP.Add(new Vector3(-0.062356f, -0.033939f, -0.259029f));//2
        handP.Add(new Vector3(-0.031248f, -0.025286f, -0.257651f));//3
        handP.Add(new Vector3(-0.004238f, -0.014547f, -0.256085f));
        handP.Add(new Vector3(0.013726f, 0.000117f, -0.254389f));
        handP.Add(new Vector3(0.027670f, 0.010356f, -0.253156f));
        handP.Add(new Vector3(-0.041550f, -0.016221f, -0.250318f));
        handP.Add(new Vector3(-0.015265f, 0.023254f, -0.236697f));
        handP.Add(new Vector3(-0.000991f, 0.046399f, -0.234800f));
        handP.Add(new Vector3(0.008130f, 0.060226f, -0.239352f));//10
        handP.Add(new Vector3(0.016081f, 0.072244f, -0.243318f));
        handP.Add(new Vector3(-0.050499f, -0.011496f, -0.250649f));
        handP.Add(new Vector3(-0.032934f, 0.031395f, -0.237340f));
        handP.Add(new Vector3(-0.025592f, 0.060459f, -0.241055f));
        handP.Add(new Vector3(-0.020794f, 0.077285f, -0.246911f));
        handP.Add(new Vector3(-0.016709f, 0.091391f, -0.252217f));
        handP.Add(new Vector3(-0.057433f, -0.009349f, -0.252228f));
        handP.Add(new Vector3(-0.049516f, 0.031695f, -0.240696f));
        handP.Add(new Vector3(-0.045836f, 0.058652f, -0.243119f));
        handP.Add(new Vector3(-0.042785f, 0.073926f, -0.249459f));//20
        handP.Add(new Vector3(-0.040006f, 0.085519f, -0.256624f));
        handP.Add(new Vector3(-0.064189f, -0.009046f, -0.254550f));
        handP.Add(new Vector3(-0.064411f, 0.028634f, -0.244979f));
        handP.Add(new Vector3(-0.068690f, 0.048667f, -0.241572f));
        handP.Add(new Vector3(-0.070505f, 0.061613f, -0.242722f));
        handP.Add(new Vector3(-0.071404f, 0.072805f, -0.246064f));


        handQ = new List<Quaternion>();
        handQ.Add(new Quaternion(0.771226f, -0.217624f, -0.071276f, 0.593945f));
        handQ.Add(new Quaternion(0.771226f, -0.217624f, -0.071276f, 0.593945f));
        handQ.Add(new Quaternion(0.720847f, 0.158945f, -0.666334f, 0.105430f));
        handQ.Add(new Quaternion(0.697478f, 0.255288f, -0.635682f, 0.210380f));
        handQ.Add(new Quaternion(0.703581f, 0.235745f, -0.643186f, 0.188969f));


        handQ.Add(new Quaternion(0.703581f, 0.235745f, -0.643186f, 0.188969f));
        handQ.Add(new Quaternion(0.755018f, -0.272259f, -0.146279f, 0.578295f));
        handQ.Add(new Quaternion(0.705786f, -0.247147f, -0.153763f, 0.645865f ));
        handQ.Add(new Quaternion(0.592496f, -0.219142f, -0.191577f, 0.751148f));
        handQ.Add(new Quaternion(0.592491f, -0.219141f, -0.191578f, 0.751152f));


        handQ.Add(new Quaternion(0.592491f, -0.219141f, -0.191578f, 0.751152f));
        handQ.Add(new Quaternion(0.771226f, -0.217624f, -0.071276f, 0.593945f));
        handQ.Add(new Quaternion(0.656314f, -0.142881f, -0.033863f, 0.740061f));
        handQ.Add(new Quaternion(0.587299f, -0.139269f, -0.046540f, 0.795938f));
        handQ.Add(new Quaternion(0.582978f, -0.139015f, -0.047294f, 0.799109f));


        handQ.Add(new Quaternion(0.582978f, -0.139015f, -0.047294f, 0.799109f));
        handQ.Add(new Quaternion(0.780401f, -0.161004f, 0.004377f, 0.604180f));
        handQ.Add(new Quaternion(0.673275f, -0.123333f, 0.025391f, 0.728591f));
        handQ.Add(new Quaternion(0.565620f, -0.125663f, 0.008025f, 0.814996f));
        handQ.Add(new Quaternion(0.505068f, -0.125914f, -0.001103f, 0.853844f));


        handQ.Add(new Quaternion(0.505068f, -0.125914f, -0.001103f, 0.853844f));
        handQ.Add(new Quaternion(0.782460f, -0.102917f, 0.079990f, 0.608905f));
        handQ.Add(new Quaternion(0.769862f, -0.034845f, 0.166164f, 0.615214f));
        handQ.Add(new Quaternion(0.690244f, -0.054585f, 0.160764f, 0.703377f));
        handQ.Add(new Quaternion(0.615912f, -0.070495f, 0.154451f, 0.769303f));


        handQ.Add(new Quaternion(0.615912f, -0.070495f, 0.154451f, 0.769303f));



        for(int i=0;i<26; i++) {

            GameObject xx = Instantiate<GameObject>(prefabCube);// GameObject.CreatePrimitive(PrimitiveType.Cube);
            xx.transform.SetParent(transform, false);
            xx.transform.localPosition = handP[i];
            xx.transform.localRotation = new Quaternion(-handQ[i].x,- handQ[i].y, handQ[i].z, handQ[i].w) * Quaternion.Euler(new Vector3(90, 0, 0));
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
