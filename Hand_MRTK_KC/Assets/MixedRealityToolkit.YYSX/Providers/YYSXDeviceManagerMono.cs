using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.YYSX.XRSDK.Input
{
    public class YYSXDeviceManagerMono :MonoBehaviour
    {
        public Action<bool> OnApplicationPauseEvent;
        Coroutine delay;
        // Start is called before the first frame update
        void Start() {

        }

        // Update is called once per frame
        void Update() {

        }

        private void OnApplicationPause(bool pause) {
            if ( delay != null ) {
                StopCoroutine(delay);
                delay = null;
            }

            if ( pause ) {
                OnApplicationPauseEvent?.Invoke(pause);
            }
            else {
                delay = StartCoroutine(delayFunc(50, pause));
            }
        }


        IEnumerator delayFunc(int delayframeCount, bool pause) {
            while ( delayframeCount -- >0 ) {
                yield return null;
            }
            OnApplicationPauseEvent?.Invoke(pause);
            delay = null;
        }

    }
}
