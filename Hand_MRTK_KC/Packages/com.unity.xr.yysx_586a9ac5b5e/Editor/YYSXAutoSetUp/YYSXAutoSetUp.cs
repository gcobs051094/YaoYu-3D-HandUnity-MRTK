using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.PackageManager.UI;
using UnityEngine;
using UnityEngine.Scripting;

//wangcq327
// write reference :com.unity.xr.interaction.toolkit@2.3.1\Editor\Inputs\Simulation\XRDeviceSimulatorSettingsEditor.cs



public class YYSXAutoSetUp
{
    const string k_PackageName = "com.unity.xr.yysx";
    const string k_PackageDisplayName = "XRSimulator";
    const string k_XRDeviceSimulatorName = "XRSimulator";
    const string k_ImportSampleTitle = "Importing " + k_XRDeviceSimulatorName + " sample.";
    const string k_ImportSampleMessage = "The " + k_XRDeviceSimulatorName + " sample is going to be imported from the " + k_PackageDisplayName + " package, press \"Ok\" to continue.";

    public int callbackOrder => throw new System.NotImplementedException();


    /// <summary>
    /// See <see cref="RuntimeInitializeLoadType.AfterSceneLoad"/>.
    /// </summary>
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad), Preserve]
    public static void Initialize() {
        // Will execute the static constructor as a side effect.
    }

    [Preserve]
    static YYSXAutoSetUp() {
        if ( Application.isPlaying ) {

            XRDeviceSimulatorSettings ins = Resources.Load<XRDeviceSimulatorSettings>("XRDeviceSimulatorSettings");
            if ( ins && ins.automaticallyInstantiateSimulatorPrefab ) {

                var simulatorInstance = Object.Instantiate(ins.simulatorPrefab);
                // Strip off (Clone) from the name
                simulatorInstance.name = ins.simulatorPrefab.name;
                Object.DontDestroyOnLoad(simulatorInstance);
            }

        }
    }


    //[MenuItem("GameObject/YYSX/Create", false, 0)]
    static void Create() {
        ScriptableObject instance = ScriptableObject.CreateInstance<XRDeviceSimulatorSettings>(); 
        AssetDatabase.CreateAsset(instance, "Assets/XRDeviceSimulatorSettings.asset");
    }

    //[MenuItem("GameObject/YYSX/SDK SetUp", false, 0)]
    [MenuItem("YYSX/SDK SetUp")]

    static void YYSXSetUP() {

        if ( YYSXInteralSetUp() ) {
            DisplayWhenSettingsOK();
        }
    }


    static bool YYSXInteralSetUp() {

        if ( !LoadXRInteractionToolkitSampleAsset() ) {
            EditorUtility.DisplayDialog("LoadXRInteractionToolkitSampleAsset Result", "[ Error ]: LoadXRInteractionToolkitSampleAsset Failed", "Ok");
            return false;
        }
        if ( !LoadXRDeviceSimulatorSampleAsset() ) {
            EditorUtility.DisplayDialog("LoadXRDeviceSimulatorSampleAsset Result", "[ Error ]: LoadXRDeviceSimulatorSampleAsset Failed", "Ok");
            return false;
        }

        if ( !SDKSettings.CheckSettings() ) {
            SDKSettings.SetSettings();
            return false;
        }
        return true;
    }
    public static void DisplayWhenSettingsOK() {
        EditorUtility.DisplayDialog("YYSX SDK SetUP Result", "[ Success ]: SDK Set Up Finish", "Ok");
    }


    static bool LoadXRDeviceSimulatorSampleAsset() { 

        var packageSamples = Sample.FindByPackage(k_PackageName, string.Empty);
        if ( packageSamples == null ) {
            Debug.LogError($"Couldn't find samples of the {k_PackageName} package for importing the {k_XRDeviceSimulatorName} sample; aborting.");
            return false;
        }

        var foundXRDeviceSimulatorSample = false;

        foreach ( var packageSample in packageSamples ) {
            //if ( packageSample.displayName != k_XRDeviceSimulatorName )
            //    continue;
            if ( packageSample.displayName != k_XRDeviceSimulatorName && packageSample.displayName != "BoxWorld" )
                continue;

            if ( !packageSample.isImported ) {
                //if ( EditorUtility.DisplayDialog(k_ImportSampleTitle, k_ImportSampleMessage, "Ok", "Cancel") ) {
                    packageSample.Import(Sample.ImportOptions.OverridePreviousImports); // copy from samples~
                //} else {
                    //m_AutomaticallyInstantiateSimulatorPrefab.boolValue = false;
                  //  return true;
                //}
            }
            if ( packageSample.displayName == k_XRDeviceSimulatorName ) {
                foundXRDeviceSimulatorSample = true;
            }
            //break;
        }

        if ( !foundXRDeviceSimulatorSample ) {
            Debug.LogError($"Couldn't find {k_XRDeviceSimulatorName} sample in the {k_PackageDisplayName} package; aborting.");
            return false;
        }

        const string searchFilter = "\"" + k_XRDeviceSimulatorName + "\"";
        var foundXRDeviceSimulatorAsset = false;
        foreach ( var guid in AssetDatabase.FindAssets(searchFilter) ) {
            var assetPath = AssetDatabase.GUIDToAssetPath(guid);
            var simulatorPrefab = AssetDatabase.LoadAssetAtPath<GameObject>(assetPath);
            //if ( simulatorPrefab != null && simulatorPrefab.TryGetComponent<UnityEngine.XRSimulator>(out _) ) {
            //    m_SimulatorPrefab.objectReferenceValue = simulatorPrefab;
            foundXRDeviceSimulatorAsset = true;
            //var obj = PrefabUtility.InstantiatePrefab(simulatorPrefab) as GameObject;
            //}
        }

        if ( !foundXRDeviceSimulatorAsset ) {
            Debug.LogError($"Couldn't find the {k_XRDeviceSimulatorName} prefab; has the asset been renamed?");
            //EditorUtility.DisplayDialog("Result", foundXRDeviceSimulatorAsset ? "[ Success ]: SetUp OK!" : "[ Error ]: Not found Assets", "Ok");
        }
        return foundXRDeviceSimulatorAsset;
    }


    //[MenuItem("GameObject/YYSX/AutoSetUpXRInteractionToolkitSample", false, 0)]
    static bool LoadXRInteractionToolkitSampleAsset() {
        var k_PackageName = "com.unity.xr.interaction.toolkit";
        string k_PackageDisplayName = "Starter Assets";
        var k_AssetsName = "Starter Assets";
        string k_ImportSampleTitle = "Importing " + k_AssetsName + " sample."; 
        string k_ImportSampleMessage = "The " + k_AssetsName + " sample is going to be imported from the " + k_PackageDisplayName + " package, press \"Ok\" to continue.";



        var packageSamples = Sample.FindByPackage(k_PackageName, string.Empty);
        if ( packageSamples == null ) {
            Debug.LogError($"Couldn't find samples of the {k_PackageName} package for importing the {k_AssetsName} sample; aborting.");
            return false;
        }

        var foundXRDeviceSimulatorSample = false;

        foreach ( var packageSample in packageSamples ) {
            if ( packageSample.displayName != k_AssetsName )
                continue;

            if ( !packageSample.isImported ) {
                //if ( EditorUtility.DisplayDialog(k_ImportSampleTitle, k_ImportSampleMessage, "Ok", "Cancel") ) {
                    packageSample.Import(Sample.ImportOptions.OverridePreviousImports); // copy from samples~
                //} else {
                //    //m_AutomaticallyInstantiateSimulatorPrefab.boolValue = false;
                //    return false;
                //}
            }

            foundXRDeviceSimulatorSample = true;
            break;
        }

        if ( !foundXRDeviceSimulatorSample ) {
            Debug.LogError($"Couldn't find {k_AssetsName} sample in the {k_PackageDisplayName} package; aborting.");
            //EditorUtility.DisplayDialog("Result", $"Couldn't find {k_AssetsName} sample in the {k_PackageDisplayName} package; aborting.", "Ok");
            
        }
        return foundXRDeviceSimulatorSample;

    }

    public void OnPreprocessBuild(BuildReport report) {
        YYSXInteralSetUp();
    }
}
