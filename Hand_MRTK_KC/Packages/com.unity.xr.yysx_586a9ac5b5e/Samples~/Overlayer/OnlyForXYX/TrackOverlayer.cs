using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrackOverlayer : MonoBehaviour
{
    public static List<TrackOverlayer> TrackOverlayerInstances;


    private void OnEnable() {
        if ( TrackOverlayerInstances == null )
            TrackOverlayerInstances = new List<TrackOverlayer>();
        TrackOverlayerInstances.Add(this);
    }

    private void OnDisable() {
        TrackOverlayerInstances.Remove(this);
    }
}
