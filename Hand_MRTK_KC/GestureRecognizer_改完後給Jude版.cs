using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine.Events;
using System;
using UnityEngine.UI;
using TMPro;

public class GestureRecognizer : MonoBehaviour
{
    MixedRealityPose pose;
    float m_PlamAngel = 0.0f;
    List<Vector3> poseList_L = new List<Vector3>();
    List<Vector3> poseList_R = new List<Vector3>();
    string stringGesture_L = "", stringGesture_R = "";
    string stringHandedness_L = "", stringHandedness_R = "";
    TextMeshPro GestureText_L = null, GestureText_R = null;

    [Header("Objects")]
    [SerializeField] private GameObject worldCamera = default;
    [SerializeField] private float plamAngel = 0.0f;
    [SerializeField] private GameObject Gesture_L, Gesture_R;


    [SerializeField]
    private UnityEvent<bool, bool, string> m_ShowGestureEvent;

    // Start is called before the first frame update
    void Start()
    {
        GestureText_L = Gesture_L.GetComponent<TextMeshPro>();
        GestureText_R = Gesture_R.GetComponent<TextMeshPro>();
    }

    // Update is called once per frame
    void Update()
    {
        MixedRealityPose pose;
        List<Vector3> poseList_L = new List<Vector3>();
        List<Vector3> poseList_R = new List<Vector3>();
        string stringGesture_L = "", stringGesture_R = "";
        string stringHandedness_L = "", stringHandedness_R = "";

        //Left Hand
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, Handedness.Left, out pose))
        {
            stringHandedness_L = "Left";

        }
        else stringHandedness_L = "notDetect";
        //Right Hand
        if (HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, Handedness.Right, out pose))
        {
            stringHandedness_R = "Right";

        }
        else stringHandedness_R = "notDetect";
        //Left Hand
        if (stringHandedness_L == "Left")
        {
            poseList_L = JointList(poseList_L, Handedness.Left);
            stringGesture_L = Recognize(Handedness.Left, poseList_L, HandAngle(poseList_L), PlamDirection(poseList_L));
            if (GestureText_L != null)
            {
                GestureText_L.text = stringGesture_L + "\n" +
                                    string.Join(", \n", HandAngle(poseList_L)) + "\n" +
                                    PlamDirection(poseList_L).ToString("0.000") + "\n" +
                                    m_PlamAngel.ToString();
            }
        }
        else if (stringHandedness_L == "notDetect")
        {
            stringGesture_L = "notDetect";
            if (GestureText_L != null)
            {
                GestureText_L.text = stringGesture_L;
            }
        }
        if (m_ShowGestureEvent != null)
        {
            m_ShowGestureEvent.Invoke(true, false, stringGesture_L);
        }
        //Right Hand
        if (stringHandedness_R == "Right")
        {
            poseList_R = JointList(poseList_R, Handedness.Right);
            stringGesture_R = Recognize(Handedness.Right, poseList_R, HandAngle(poseList_R), PlamDirection(poseList_R));
            if (GestureText_R != null)
            {
                GestureText_R.text = stringGesture_R + "\n" +
                                    string.Join(", \n", HandAngle(poseList_R)) + "\n" +
                                    PlamDirection(poseList_R).ToString("0.000") + "\n" +
                                    m_PlamAngel.ToString();
            }
        }
        else if (stringHandedness_L == "notDetect")
        {
            stringGesture_R = "notDetect";
            if (GestureText_R != null)
            {
                GestureText_R.text = stringGesture_R;
            }
        }
        if (m_ShowGestureEvent != null)
        {
            m_ShowGestureEvent.Invoke(false, false, stringGesture_R);
        }
    }

    List<Vector3> JointList(List<Vector3> poseList, Handedness m_Handedness)
    {
        //Total: 21 Point
        //Wrist
        HandJointUtils.TryGetJointPose(TrackedHandJoint.Wrist, m_Handedness, out pose);
        poseList.Add(pose.Position);
        //Thumb
        HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbMetacarpalJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        //Null
        poseList.Add(Vector3.zero);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbProximalJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbDistalJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.ThumbTip, m_Handedness, out pose);
        poseList.Add(pose.Position);
        //Index
        HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexKnuckle, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexMiddleJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexDistalJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.IndexTip, m_Handedness, out pose);
        poseList.Add(pose.Position);
        //Middle
        HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleKnuckle, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleMiddleJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleDistalJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.MiddleTip, m_Handedness, out pose);
        poseList.Add(pose.Position);
        //Ring
        HandJointUtils.TryGetJointPose(TrackedHandJoint.RingKnuckle, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.RingMiddleJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.RingDistalJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.RingTip, m_Handedness, out pose);
        poseList.Add(pose.Position);
        //Pinky
        HandJointUtils.TryGetJointPose(TrackedHandJoint.PinkyKnuckle, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.PinkyMiddleJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.PinkyDistalJoint, m_Handedness, out pose);
        poseList.Add(pose.Position);
        HandJointUtils.TryGetJointPose(TrackedHandJoint.PinkyTip, m_Handedness, out pose);
        poseList.Add(pose.Position);

        return poseList;
    }

    private float Vector3DAngle(float v1_x, float v1_y, float v1_z, float v2_x, float v2_y, float v2_z)
    {
        double angle = 0;
        try
        {
            angle = Math.Acos((v1_x * v2_x + v1_y * v2_y + v1_z * v2_z)
                    / ((Math.Sqrt(Math.Pow(v1_x, 2) + Math.Pow(v1_y, 2) + Math.Pow(v1_z, 2)))
                        * (Math.Sqrt(Math.Pow(v2_x, 2) + Math.Pow(v2_y, 2) + Math.Pow(v2_z, 2))))) * Mathf.Rad2Deg;
        }
        catch (Exception ex)
        {
            angle = 100000.0;
        }
        return (float)angle;
    }

    //        
    private float[] HandAngle(List<Vector3> hand)
    {
        float[] angleList = new float[5];

        double angle = Vector3DAngle(hand[0].x - hand[3].x, hand[0].y - hand[3].y, hand[0].z - hand[3].z,
                                        hand[4].x - hand[5].x, hand[4].y - hand[5].y, hand[4].z - hand[5].z);
        angleList[0] = (float)angle;

        //
        angle = Vector3DAngle(hand[0].x - hand[7].x, hand[0].y - hand[7].y, hand[0].z - hand[7].z,
                                    hand[8].x - hand[9].x, hand[8].y - hand[9].y, hand[8].z - hand[9].z);
        angleList[1] = (float)angle;

        //
        angle = Vector3DAngle(hand[0].x - hand[11].x, hand[0].y - hand[11].y, hand[0].z - hand[11].z,
                                    hand[12].x - hand[13].x, hand[12].y - hand[13].y, hand[12].z - hand[13].z);
        angleList[2] = (float)angle;

        //
        angle = Vector3DAngle(hand[0].x - hand[15].x, hand[0].y - hand[15].y, hand[0].z - hand[15].z,
                                    hand[16].x - hand[17].x, hand[16].y - hand[17].y, hand[16].z - hand[17].z);
        angleList[3] = (float)angle;

        //
        angle = Vector3DAngle(hand[0].x - hand[19].x, hand[0].y - hand[19].y, hand[0].z - hand[19].z,
                                    hand[20].x - hand[21].x, hand[20].y - hand[21].y, hand[20].z - hand[21].z);
        angleList[4] = (float)angle;

        //Debug.Log("        : " + string.Join(", ", angleList));
        return angleList;
    }

    private Vector3 PlamDirection(List<Vector3> hand)
    {
        var a = hand[0];       //wrist
        var b = hand[6];       //index1
        var c = hand[10];       //middle1

        var side1 = b - a;
        var side2 = c - a;

        var perp = Vector3.Cross(side1, side2);
        var perpLength = perp.magnitude;
        perp /= perpLength;

        return perp;
    }

    private string Recognize(Handedness m_Handedness, List<Vector3> positions, float[] angleList, Vector3 perp)
    {
        bool test = false;
        foreach (float element in angleList)
        {
            if (element == 10000.0)
            {
                test = true;
                break;
            }
        }

        string OutputGesture = "";

        if (!test)
        {
            Vector3 observationDirection = worldCamera.transform.forward;


            if (m_Handedness.Equals(Handedness.Left))
            {
                Quaternion rotation = Quaternion.Euler(180, 0, 180);
                perp = rotation * perp;
            }

            float dotProduct = Vector3.Dot(perp, observationDirection);

            m_PlamAngel = Mathf.Acos(dotProduct) * Mathf.Rad2Deg;

            if (m_PlamAngel <= plamAngel)
            {
                if ((angleList[0] >= 8 && angleList[0] <= 40)
                && (angleList[1] >= 130)
                && (angleList[2] >= 120)
                && (angleList[3] >= 110)
                && (angleList[4] >= 120))
                {
                    if (m_Handedness.Equals("Left"))
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "home";
                        }
                        else OutputGesture = "nothing";
                    }
                    else
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "home";
                        }
                        else OutputGesture = "nothing";
                    }
                }
                else if (angleList[0] <= 40
                    && (angleList[1] <= 80)
                    && (angleList[2] >= 100)
                    && (angleList[3] >= 100)
                    && (angleList[4] >= 100))
                {
                    if (m_Handedness.Equals("Left"))
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "seven";
                        }
                        else OutputGesture = "nothing";
                    }
                    else
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "seven";
                        }
                        else OutputGesture = "nothing";
                    }
                }

                ////
                else if ((angleList[0] >= 30 && angleList[0] <= 150)
                    && (angleList[1] <= 60)
                    && (angleList[2] <= 60)
                    && (angleList[3] >= 70)
                    && (angleList[4] >= 70))
                {
                    if (m_Handedness.Equals("Left"))
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "two";
                        }
                        else OutputGesture = "nothing";
                    }
                    else
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "two";
                        }
                        else OutputGesture = "nothing";
                    }
                }
                else if ((angleList[0] >= 30 && angleList[0] <= 150)
                    && (angleList[1] <= 60)
                    && (angleList[2] <= 60)
                    && (angleList[3] <= 70)
                    && (angleList[4] <= 70))
                {
                    if (m_Handedness.Equals("Left"))
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "four";
                        }
                        else OutputGesture = "nothing";
                    }
                    else
                    {
                        if (dotProduct > 0.0f)
                        {
                            OutputGesture = "four";
                        }
                        else OutputGesture = "nothing";
                    }
                }
                else
                {
                    OutputGesture = "nothing";
                }
            }
            /*
            //手背
            else if (pinchAngel >= 110)
            {
                if ((angleList[0] >= 30 && angleList[0] <= 150)
                   && (angleList[1] <= 60)
                   && (angleList[2] <= 60)
                   && (angleList[3] >= 70)
                   && (angleList[4] >= 70))
                {
                    if (m_Handedness.Equals("Left"))     //    t  k ⥿
                    {
                        if (dotProduct < 0.0f)
                        {
                            OutputGesture = "two";
                        }
                        else OutputGesture = "nothing";
                    }
                    else
                    {
                        if (dotProduct < 0.0f)
                        {
                            OutputGesture = "two";
                        }
                        else OutputGesture = "nothing";
                    }
                }
                else if (angleList[0] <= 40
                    && (angleList[1] >= 90)
                    && (angleList[2] >= 80)
                    && (angleList[3] >= 60)
                    && (angleList[4] <= 80))
                {
                    if (m_Handedness.Equals("Left"))     //    t  k ⥿
                    {
                        if (dotProduct < 0.0f)
                        {
                            OutputGesture = "six";
                        }
                        else OutputGesture = "nothing";
                    }
                    else
                    {
                        if (dotProduct < 0.0f)
                        {
                            OutputGesture = "six";
                        }
                        else OutputGesture = "nothing";
                    }
                }
                else
                {
                    OutputGesture = "nothing";
                }
            }
            */
            else OutputGesture = "nothing";
        }

        return OutputGesture;
    }
}
