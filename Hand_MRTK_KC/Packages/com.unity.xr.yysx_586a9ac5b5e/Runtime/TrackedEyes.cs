using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class TrackedEyes : MonoBehaviour
{
    [SerializeField]
    InputAction EyePositionAction, EyeRotationAction;
    Vector3 EyePoistion;
    Quaternion EyeRotation;

    //private void OnEnable()
    //{
    //    BindActions();
    //}

    //private void OnDisable()
    //{
    //    UnbindActions();
    //}

    // Start is called before the first frame update
    void Start()
    {
        BindActions();
    }

    // Update is called once per frame
    void Update()
    {
        transform.localPosition = EyePoistion;
        transform.localRotation = EyeRotation;
    }

    private void OnDestroy()
    {
        UnbindActions();
    }

    void BindActions() {
        if ( EyePositionAction != null ) {
            EyePositionAction.performed += OnPositionPerformed;
            EyePositionAction.Enable();
        }

        if ( EyeRotationAction != null ) {
            EyeRotationAction.performed += OnRotationPerformed;
            EyeRotationAction.Enable();
        }
    }

    void UnbindActions() {
        if ( EyePositionAction != null ) {
            EyePositionAction.performed -= OnPositionPerformed;
            EyePositionAction.Disable();
        }

        if ( EyeRotationAction != null ) {
            EyeRotationAction.performed -= OnRotationPerformed;
            EyeRotationAction.Disable();
        }
    }


    void OnPositionPerformed(InputAction.CallbackContext context)
    {
        EyePoistion = context.ReadValue<Vector3>();
    }

    void OnRotationPerformed(InputAction.CallbackContext context)
    {
        EyeRotation = context.ReadValue<Quaternion>();
    }


}
