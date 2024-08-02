using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlendOverlayer : MonoBehaviour
{
    public Material blendMaterial;
    public Texture OverlayerTexture;
    private void OnRenderImage(RenderTexture source, RenderTexture destination) {
        if ( blendMaterial ) {
            blendMaterial.mainTexture = OverlayerTexture;
            blendMaterial.SetTexture("_BlendTex", OverlayerTexture);
            Graphics.Blit(source, destination, blendMaterial);
        }
    }
}
