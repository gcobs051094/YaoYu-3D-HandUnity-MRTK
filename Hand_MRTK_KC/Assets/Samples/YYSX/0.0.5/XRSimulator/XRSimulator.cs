using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Layouts;
using UnityEngine.InputSystem.LowLevel;
using UnityEngine.InputSystem.XR;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation;

namespace UnityEngine
{

    public class XRSimulator :MonoBehaviour {
        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty HMDForward;

        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty HMDBack;

        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty HMDLeft;

        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty HMDRight;

        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty Mouse0;
        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty Mouse1;
        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty MouseAxis;

        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty Reset;

        [SerializeField]
        [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
        InputActionProperty ControllerPress;

        [Range(0.1f, 10f)]
        public float speed = 0.8f;

#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)
        XRSimulatedHMDState m_HMDState;
        XRSimulatedControllerState m_LeftControllerState;
        XRSimulatedControllerState m_RightControllerState;

        XRSimulatedHMD m_HMDDevice;
        XRSimulatedController m_LeftControllerDevice;
        XRSimulatedController m_RightControllerDevice;

        Vector3 RightControllerDeltaPosition = new Vector3(0.2f,-0.1f,0.4f);
        Vector3 LeftControllerDeltaPosition = new Vector3(-0.2f, -0.1f, 0.4f);

#endif


        private void Awake() {
#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)
            m_HMDState.Reset();
            m_LeftControllerState.Reset();
            m_RightControllerState.Reset();

            // Adding offset to the controller when starting simulation to move them away from the Camera position

            if ( HMDForward != null ) {
                HMDForward.action.Enable();
            }
            if ( HMDBack != null ) {
                HMDBack.action.Enable();
            }
            if ( HMDLeft != null ) {
                HMDLeft.action.Enable();
            }
            if ( HMDRight != null ) {
                HMDRight.action.Enable();
            }
            if ( Mouse0 != null ) {
                Mouse0.action.Enable();
            }
            if ( Mouse1 != null ) {
                Mouse1.action.Enable();
            }
            if ( MouseAxis != null ) {
                MouseAxis.action.Enable();
            }
            if ( Reset != null ) {
                Reset.action.Enable();
            }
            if ( ControllerPress != null ) {
                ControllerPress.action.Enable();
            }
            AddDevices();
#endif
        }


        private void OnDestroy() {
            RemoveDevices();
        }


        private void Update() {
            ProcessPoseInput();
            ProcessControlInput();

#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)
            if ( m_HMDDevice != null ) {
                InputState.Change(m_HMDDevice, m_HMDState);
            }

            if ( m_LeftControllerDevice != null ) {
                InputState.Change(m_LeftControllerDevice, m_LeftControllerState);
            }

            if ( m_RightControllerDevice != null ) {
                InputState.Change(m_RightControllerDevice, m_RightControllerState);
            }
#endif
        }

        void ProcessPoseInput() {
#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)

            m_HMDState.isTracked = true;
            m_LeftControllerState.isTracked = true;
            m_RightControllerState.isTracked = true;


            m_LeftControllerState.trackingState = (int)(InputTrackingState.Position | InputTrackingState.Rotation);
            m_RightControllerState.trackingState = (int)(InputTrackingState.Position | InputTrackingState.Rotation);
            m_HMDState.trackingState = (int)(InputTrackingState.Position | InputTrackingState.Rotation);


            Vector3 localUp = Matrix4x4.Rotate(m_HMDState.centerEyeRotation).MultiplyVector(Vector3.up);
            Vector3 localDown = Matrix4x4.Rotate(m_HMDState.centerEyeRotation).MultiplyVector(Vector3.down);
            Vector3 localLeft = Matrix4x4.Rotate(m_HMDState.centerEyeRotation).MultiplyVector(Vector3.left);
            Vector3 localRight = Matrix4x4.Rotate(m_HMDState.centerEyeRotation).MultiplyVector(Vector3.right);
            Vector3 localForward = Matrix4x4.Rotate(m_HMDState.centerEyeRotation).MultiplyVector(Vector3.forward);
            Vector3 localBack = Matrix4x4.Rotate(m_HMDState.centerEyeRotation).MultiplyVector(Vector3.back);

            //Debug.Log(localUp+" "+ localDown+" " + localLeft + " " + localRight + " " + localForward + " " + localBack);

            if ( HMDForward != null && HMDForward.action.IsPressed() ) {
                m_HMDState.centerEyePosition = m_HMDState.devicePosition = Matrix4x4.TRS(localForward * Time.deltaTime * speed, Quaternion.identity, Vector3.one).MultiplyPoint(m_HMDState.centerEyePosition);
            } else if ( HMDBack != null && HMDBack.action.IsPressed() ) {
                m_HMDState.centerEyePosition = m_HMDState.devicePosition = Matrix4x4.TRS(localBack * Time.deltaTime * speed, Quaternion.identity, Vector3.one).MultiplyPoint(m_HMDState.centerEyePosition);
            }

            if ( HMDLeft != null && HMDLeft.action.IsPressed() ) {
                m_HMDState.centerEyePosition = m_HMDState.devicePosition = Matrix4x4.TRS(localLeft * Time.deltaTime * speed, Quaternion.identity, Vector3.one).MultiplyPoint(m_HMDState.centerEyePosition);
            } else if ( HMDRight != null && HMDRight.action.IsPressed() ) {
                m_HMDState.centerEyePosition = m_HMDState.devicePosition = Matrix4x4.TRS(localRight * Time.deltaTime * speed, Quaternion.identity, Vector3.one).MultiplyPoint(m_HMDState.centerEyePosition);
            }

            if ( (Mouse0 != null && Mouse0.action.IsPressed()) || (Mouse1 != null && Mouse1.action.IsPressed()) ) {
                // m_HMDState.centerEyeRotation = m_HMDState.deviceRotation =  Matrix4x4.Rotate(Quaternion.Euler(1f,0,0)).rotation * m_HMDState.centerEyeRotation;
                //Vector3 xx = new Vector3( MouseAxis.action.ReadValue<Vector2>().y * Time.deltaTime * -50, MouseAxis.action.ReadValue<Vector2>().x * Time.deltaTime * 50, 0);
                //Debug.Log(xx * 100);



                m_HMDState.centerEyeRotation = Quaternion.AngleAxis(MouseAxis.action.ReadValue<Vector2>().x * Time.deltaTime * 50, localUp) * m_HMDState.centerEyeRotation;
                m_HMDState.centerEyeRotation = Quaternion.AngleAxis(MouseAxis.action.ReadValue<Vector2>().y * Time.deltaTime * 50, localLeft) * m_HMDState.centerEyeRotation;


                Vector3 eular = m_HMDState.centerEyeRotation.eulerAngles;
                eular.z = 0;
                m_HMDState.centerEyeRotation = m_HMDState.deviceRotation = Quaternion.Euler(eular);



                //消除z的旋转
                //m_HMDState.centerEyeRotation = m_HMDState.deviceRotation = Quaternion.AngleAxis(-m_HMDState.centerEyeRotation.eulerAngles.z, Vector3.forward) * m_HMDState.centerEyeRotation;

                //Matrix4x4 rotationMatrix4x4 = Matrix4x4.Rotate(Quaternion.Euler(xx));


                //// method 1
                //m_HMDState.centerEyeRotation = m_HMDState.deviceRotation = rotationMatrix4x4.rotation * m_HMDState.centerEyeRotation;

                //消除z的旋转
                //Matrix4x4 delatZ = Matrix4x4.Rotate(Quaternion.Euler(0, 0, -m_HMDState.centerEyeRotation.eulerAngles.z));
                //m_HMDState.centerEyeRotation = m_HMDState.deviceRotation = delatZ.rotation * m_HMDState.centerEyeRotation;

            }


            if ( Reset != null && Reset.action.IsPressed() ) {
                m_HMDState.centerEyeRotation = m_HMDState.deviceRotation = Quaternion.identity;
                m_HMDState.centerEyePosition = m_HMDState.devicePosition = Vector3.zero;
            }

            m_LeftControllerState.devicePosition = Matrix4x4.TRS(m_HMDState.centerEyePosition, m_HMDState.centerEyeRotation,Vector3.one).MultiplyPoint(LeftControllerDeltaPosition);
            m_RightControllerState.devicePosition = Matrix4x4.TRS(m_HMDState.centerEyePosition, m_HMDState.centerEyeRotation, Vector3.one).MultiplyPoint(RightControllerDeltaPosition);
            m_LeftControllerState.deviceRotation = m_HMDState.centerEyeRotation;
            m_RightControllerState.deviceRotation = m_HMDState.centerEyeRotation;


#endif
        }

        void ProcessControlInput() {
#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)
            if ( ControllerPress != null && ControllerPress.action.WasPressedThisFrame() ) {
                m_RightControllerState.WithButton( ControllerButton.TriggerButton,true);
                m_RightControllerState.WithButton(ControllerButton.GripButton, true);
                m_LeftControllerState.WithButton( ControllerButton.TriggerButton,true);
                m_LeftControllerState.WithButton(ControllerButton.GripButton, true);
            }
            if ( ControllerPress != null && ControllerPress.action.WasReleasedThisFrame() ) {
                m_RightControllerState.WithButton(ControllerButton.TriggerButton, false);
                m_RightControllerState.WithButton(ControllerButton.GripButton, false);
                m_LeftControllerState.WithButton(ControllerButton.TriggerButton, false);
                m_LeftControllerState.WithButton(ControllerButton.GripButton, false);
            }
#endif
        }


        void AddDevices() {
#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)

            // Simulated HMD
            var descHMD = new InputDeviceDescription {
                product = nameof(XRSimulatedHMD),
                capabilities = new XRDeviceDescriptor {
                    characteristics = InputDeviceCharacteristics.HeadMounted | InputDeviceCharacteristics.TrackedDevice,
                }.ToJson(),
            };

            m_HMDDevice = InputSystem.InputSystem.AddDevice(descHMD) as XRSimulatedHMD;
            if ( m_HMDDevice == null )
                Debug.LogError($"Failed to create {nameof(XRSimulatedHMD)}.", this);

            // Simulated Left-Hand Controller
            var descLeftHand = new InputDeviceDescription {
                product = nameof(XRSimulatedController),
                capabilities = new XRDeviceDescriptor {
                    deviceName = $"{nameof(XRSimulatedController)} - {InputSystem.CommonUsages.LeftHand}",
                    characteristics = InputDeviceCharacteristics.HeldInHand | InputDeviceCharacteristics.TrackedDevice | InputDeviceCharacteristics.Controller | InputDeviceCharacteristics.Left,
                }.ToJson(),
            };

            m_LeftControllerDevice = InputSystem.InputSystem.AddDevice(descLeftHand) as XRSimulatedController;
            if ( m_LeftControllerDevice != null )
                InputSystem.InputSystem.SetDeviceUsage(m_LeftControllerDevice, InputSystem.CommonUsages.LeftHand);
            else
                Debug.LogError($"Failed to create {nameof(XRSimulatedController)} for {InputSystem.CommonUsages.LeftHand}.", this);

            // Simulated Right-Hand Controller
            var descRightHand = new InputDeviceDescription {
                product = nameof(XRSimulatedController),
                capabilities = new XRDeviceDescriptor {
                    deviceName = $"{nameof(XRSimulatedController)} - {InputSystem.CommonUsages.RightHand}",
                    characteristics = InputDeviceCharacteristics.HeldInHand | InputDeviceCharacteristics.TrackedDevice | InputDeviceCharacteristics.Controller | InputDeviceCharacteristics.Right,
                }.ToJson(),
            };

            m_RightControllerDevice = InputSystem.InputSystem.AddDevice(descRightHand) as XRSimulatedController;
            if ( m_RightControllerDevice != null )
                InputSystem.InputSystem.SetDeviceUsage(m_RightControllerDevice, InputSystem.CommonUsages.RightHand);
            else
                Debug.LogError($"Failed to create {nameof(XRSimulatedController)} for {InputSystem.CommonUsages.RightHand}.", this);
#endif

        }

        protected virtual void RemoveDevices() {
#if ENABLE_VR || (UNITY_GAMECORE && INPUT_SYSTEM_1_4_OR_NEWER)
            if ( m_HMDDevice != null && m_HMDDevice.added )
                InputSystem.InputSystem.RemoveDevice(m_HMDDevice);

            if ( m_LeftControllerDevice != null && m_LeftControllerDevice.added )
                InputSystem.InputSystem.RemoveDevice(m_LeftControllerDevice);

            if ( m_RightControllerDevice != null && m_RightControllerDevice.added )
                InputSystem.InputSystem.RemoveDevice(m_RightControllerDevice);
#endif
        }
    }
}
