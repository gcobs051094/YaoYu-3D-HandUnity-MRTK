using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.YYSX.XRSDK.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Scripting;

namespace Microsoft.MixedReality.Toolkit.Input
{
    public class YYSXHandVisualizer :BaseHandVisualizer
    {


        public SkinnedMeshRenderer HandRenderer;

        public GameObject HisenceHandMode;
        public List<Transform> jointsTransform = new List<Transform>(25);

        private void Awake() {

            //jointsTransform[0] = HisenceHandMode.transform.Find("b_l_wrist");

            //jointsTransform[2] = HisenceHandMode.transform.Find("b_l_wrist/b_l_thumb0");
            //jointsTransform[3] = HisenceHandMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1");
            //jointsTransform[4] = HisenceHandMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1/b_l_thumb2");
            //jointsTransform[5] = HisenceHandMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1/b_l_thumb2/b_l_thumb3");
            //jointsTransform[6] = HisenceHandMode.transform.Find("b_l_wrist/b_l_thumb0/b_l_thumb1/b_l_thumb2/b_l_thumb3/l_thumb_finger_tip_marker");

            //jointsTransform[6] = HisenceHandMode.transform.Find("b_l_wrist/b_l_index1");
            //jointsTransform[7] = HisenceHandMode.transform.Find("b_l_wrist/b_l_index1/b_l_index2");
            //jointsTransform[8] = HisenceHandMode.transform.Find("b_l_wrist/b_l_index1/b_l_index2/b_l_index3");
            //jointsTransform[9] = HisenceHandMode.transform.Find("b_l_wrist/b_l_index1/b_l_index2/b_l_index3/l_index_finger_tip_marker");

            //jointsTransform[10] = HisenceHandMode.transform.Find("b_l_wrist/b_l_middle1");
            //jointsTransform[11] = HisenceHandMode.transform.Find("b_l_wrist/b_l_middle1/b_l_middle2");
            //jointsTransform[12] = HisenceHandMode.transform.Find("b_l_wrist/b_l_middle1/b_l_middle2/b_l_middle3");
            //jointsTransform[13] = HisenceHandMode.transform.Find("b_l_wrist/b_l_middle1/b_l_middle2/b_l_middle3/l_middle_finger_tip_marker");

            //jointsTransform[14] = HisenceHandMode.transform.Find("b_l_wrist/b_l_ring1");
            //jointsTransform[15] = HisenceHandMode.transform.Find("b_l_wrist/b_l_ring1/b_l_ring2");
            //jointsTransform[16] = HisenceHandMode.transform.Find("b_l_wrist/b_l_ring1/b_l_ring2/b_l_ring3");
            //jointsTransform[17] = HisenceHandMode.transform.Find("b_l_wrist/b_l_ring1/b_l_ring2/b_l_ring3/l_ring_finger_tip_marker");

            //jointsTransform[18] = HisenceHandMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1");
            //jointsTransform[19] = HisenceHandMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1/b_l_pinky2");
            //jointsTransform[20] = HisenceHandMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1/b_l_pinky2/b_l_pinky3");
            //jointsTransform[21] = HisenceHandMode.transform.Find("b_l_wrist/b_l_pinky0/b_l_pinky1/b_l_pinky2/b_l_pinky3/l_pinky_finger_tip_marker");


        }

        YYSXArticulatedHand YYSXArticulatedHand;

        protected override void Start() {
            base.Start();

            if ( Controller != null ) {
                YYSXArticulatedHand = Controller as YYSXArticulatedHand;
                if ( YYSXArticulatedHand != null ) {
                    YYSXArticulatedHand.UpdateJointWorldPositionByMesh += UpdateMeshAndReturnJointPosition;
                }
            }
        }

        private void OnDestroy() {
            if ( YYSXArticulatedHand != null ) {
                YYSXArticulatedHand.UpdateJointWorldPositionByMesh -= UpdateMeshAndReturnJointPosition;
            }
        }

        protected override bool UpdateHandJoints() {
            if ( base.UpdateHandJoints() == false ) {

                HandRenderer.enabled = false;
                return false;
            } else {

                IMixedRealityInputSystem inputSystem = CoreServices.InputSystem;
                MixedRealityHandTrackingProfile handTrackingProfile = inputSystem?.InputSystemProfile != null ? inputSystem.InputSystemProfile.HandTrackingProfile : null;

                // Only render the hand mesh if visualization is enabled and the hand joints are tracked
                bool renderHandmesh = handTrackingProfile != null
                    && handTrackingProfile.EnableHandMeshVisualization
                    && MixedRealityHand.TryGetJoint(TrackedHandJoint.Palm, out _);
                HandRenderer.enabled = renderHandmesh;


                //if ( renderHandmesh ) {

                //     for ( int i = 1; i < ArticulatedHandPose.JointCount; i++ ) {
                //    //for ( int i = 1; i < ArticulatedHandPose.JointCount; i++ ) {
                //        TrackedHandJoint handJoint = (TrackedHandJoint)i;

                //        if ( GetJointTransform(handJoint) == null )
                //            continue;

                //        // Skip this hand joint if the event data doesn't have an entry for it
                //        if ( !MixedRealityHand.TryGetJoint(handJoint, out MixedRealityPose handJointPose) ) {
                //            continue;
                //        }

                //        if ( handJoint == TrackedHandJoint.Wrist ) {
                //            GetJointTransform(handJoint).localRotation = handJointPose.Rotation;
                //            GetJointTransform(handJoint).localPosition = handJointPose.Position;
                //        }
                //        else if ( (int)handJoint > (int)TrackedHandJoint.Palm ) {
                //            GetJointTransform(handJoint).localRotation = handJointPose.Rotation;
                //        }


                //    }
                //}


            }

            return true;


        }

        Transform GetJointTransform(TrackedHandJoint handJoint) {
            if ( jointsTransform == null || jointsTransform.Count < ((int)handJoint) )
                return null;

            if ( jointsTransform[(int)handJoint] == null )
                return null;

            return jointsTransform[(int)handJoint];
        }


        private void UpdateMeshAndReturnJointPosition(MixedRealityPose[] jointPoses) {

            if ( jointPoses == null )
                return;

            if ( HandRenderer ) {

                //HisenceHandMode.transform.localScale = new Vector3();

                for ( int i = 1; i < ArticulatedHandPose.JointCount; i++ ) {
                    //for ( int i = 1; i < ArticulatedHandPose.JointCount; i++ ) {
                    TrackedHandJoint handJoint = (TrackedHandJoint)i;

                    if ( GetJointTransform(handJoint) == null )
                        continue;

                    MixedRealityPose handJointPose = jointPoses[(int)handJoint];

                    if ( handJoint == TrackedHandJoint.Wrist ) {
                        GetJointTransform(handJoint).rotation = handJointPose.Rotation; //worldR
                        GetJointTransform(handJoint).position = handJointPose.Position; //worldP
                    } else if ( (int)handJoint > (int)TrackedHandJoint.Palm ) {
                        GetJointTransform(handJoint).localRotation = handJointPose.Rotation;

                        //Debug.Log("UpdateMeshAndReturnJointPosition "+ Time.frameCount + " || "  + ":bone-" + handJointPose + " OldR:"+ handJointPose.Rotation+" || OldP:"+ handJointPose.Position+" || NewP:"+ GetJointTransform(handJoint).position);
                        //returnJointWorldPosition
                        //handJointPose.Position = GetJointTransform(handJoint).position;
                        jointPoses[(int)handJoint].Position = GetJointTransform(handJoint).position;
                        jointPoses[(int)handJoint].Rotation = GetJointTransform(handJoint).rotation;
                    }
                }

            }
        }

    }
}
