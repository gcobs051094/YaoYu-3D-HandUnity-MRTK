#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF;
// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.Bone>
struct InputProcessor_1_t1B867C38628FAD36851704361A9075C78FC620A0;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<UnityEngine.XR.Hands.Processing.IXRHandProcessor>
struct List_1_t8463D6E8766F823573C7FF81CA9AC38D1F351FFF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct List_1_tE4111BEC044D13259EFD4EC5907636C855887179;
// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.Bone>[]
struct InputProcessor_1U5BU5D_t5CD886D72C9A397221BED521C6A36D135C95FB6E;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0;
// UnityEngine.XR.Hands.XRHandSubsystem[]
struct XRHandSubsystemU5BU5D_t50FB94CEB7EB1A2A292728A49A7B732A8CF8C50F;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor[]
struct XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// UnityEngine.InputSystem.XR.BoneControl
struct BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// HandLeftLayout
struct HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795;
// HandRightLayout
struct HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// TrackedCenterEye
struct TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2;
// TrackedEyes
struct TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1;
// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// YYSX.YYSXLoader
struct YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0;
// YYSX.YYSXSettings
struct YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater
struct SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StereoRenderingModeAndroid_t88AC397EB0904E7DCC2EB8DED80790149EEF7A88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureLayout_t0EC0EDCC4AA008BE68C36C26A9FF71E5406BD76D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13E1D71D60811B421E33CFF3A74970D9FB942BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral1556F2660EF1D76A0FF37B40DA2DA14EFFA61323;
IL2CPP_EXTERN_C String_t* _stringLiteral22171254FFF9C191F87916BDB5644B6998AEC5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral2643FD5D1E0174298A2B5100A712398C653E6790;
IL2CPP_EXTERN_C String_t* _stringLiteral2A6D8D8CB45AD9B73BEF3A68AFA2DB03A915A344;
IL2CPP_EXTERN_C String_t* _stringLiteral38A6D35C9FAFA8824E02B5F6A2B144E81AEF2F9A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B0A0195BE2AFE1CB6B1DA38C699A53FEF07CDAA;
IL2CPP_EXTERN_C String_t* _stringLiteral3CCE03569024409EF24CEFB3053D84A7209D496F;
IL2CPP_EXTERN_C String_t* _stringLiteral3E789C4ECFB31D4E381088794F20E4210B932807;
IL2CPP_EXTERN_C String_t* _stringLiteral3F4EB970739760AB66EA1B5A3F290D062F8D479B;
IL2CPP_EXTERN_C String_t* _stringLiteral4C96CEC96114A056A2D37A6D1A74A9261B17A3C9;
IL2CPP_EXTERN_C String_t* _stringLiteral4FCBC514477D48C5A88109633E87F50C22E3D3E1;
IL2CPP_EXTERN_C String_t* _stringLiteral57333706A2E84D96E57047D1A5C159EAE846434C;
IL2CPP_EXTERN_C String_t* _stringLiteral616F6B00E3D2D87A47D9CC0B31D42341CDAF7F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral6205DE79A4BCC2A90609D74072B13A876AF0629A;
IL2CPP_EXTERN_C String_t* _stringLiteral634199C717EE98E01048FF3B4CE64F0019A04BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral63CDB5C5FD4E7FFBF88D93A805597500EF9FBF0F;
IL2CPP_EXTERN_C String_t* _stringLiteral688376735036F2C22EA2BBD30A74CB937D64A325;
IL2CPP_EXTERN_C String_t* _stringLiteral688F2B0C686B81E0AD84AA8739224DC9C4BB2207;
IL2CPP_EXTERN_C String_t* _stringLiteral7D859022937FF9FF23CCC58E07C64904462474DB;
IL2CPP_EXTERN_C String_t* _stringLiteral811E6AC30EC1613FA3FAE990A7C015690DDAA526;
IL2CPP_EXTERN_C String_t* _stringLiteral83F320C9897BA3F54DAE1A7E933AC768BEEA0B1D;
IL2CPP_EXTERN_C String_t* _stringLiteral859F44009B6F91E0FD8BE8569525121722CA74F2;
IL2CPP_EXTERN_C String_t* _stringLiteral9253CF9BF225BBE7AE85368416FC34C37F5CA791;
IL2CPP_EXTERN_C String_t* _stringLiteral93C0FA635D5BF81107D0393CEB341BF5256FBF18;
IL2CPP_EXTERN_C String_t* _stringLiteral99C3BBB9082B1C2E72AA3DDDD8ADCA5B9903F174;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA8BA1BB774D7DB9C3B73A6C8BF762860D409D6FC;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6A077784BCA1FF068E9935C659F03ABD8384F1;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D8E8A0D3D7464E0AD77F3278A7C6C345E66E24;
IL2CPP_EXTERN_C String_t* _stringLiteralB719FBF7B3402D2A2B0D4CBF0D70BF882F202DD5;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA2F05C66F010A20B792D1735E78B6476359DB3;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2A3D38E1E13A69E3830EAEF4BDD2EECAC98EA3;
IL2CPP_EXTERN_C String_t* _stringLiteralC8AB9A59BDBDFB6BB27898D7003F09943218DF1D;
IL2CPP_EXTERN_C String_t* _stringLiteralCA802170F28C7C37360D03D58C7F4D946ED79E8B;
IL2CPP_EXTERN_C String_t* _stringLiteralCB0A8694910F93868397EA22691C35A0F33F335C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9A1D2AFD875C810C508CC79CFA57122D6D56F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralD9C2ECF28074C247BB167520057DF559F7A8F009;
IL2CPP_EXTERN_C String_t* _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245;
IL2CPP_EXTERN_C String_t* _stringLiteralE45934FE710BC6D7ADCEDB0E2C0119DB3D9CC5C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D351A9DD0F201AEDE4363FF61542D9843F9DB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF91DEF8B30A943F44E30715BCE83DBFFA38ACBCA;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m86E1F3F8308D0DEAD0F6F76BA76F94DC8B2073AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4BFD43202E0F65FD83D7D593613C1B5FBA029A4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5C4BDC63A264792548752CA2A57757318F00EF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayoutMatcher_TisXRHMD_t2AB69188B210850F78044E5288C17FD173DB9B98_mC1819E32BA7EB2E3EB818E607F900E5A2858A2EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisXRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2_m16A61592171679837D037AB4D23A4EDDFC028BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3B7B2239AF0A875059EB2D6A3C6628DF8BBC3B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m80B420587E83801A6C5F75FED3B6CEF1693D2C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_subsystemDescriptor_m95ABAFCF2F776A54F6CBD73A8F1117D47B9F40B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedCenterEye_OnLeftPositionPerformed_mDF7E7B4A9B217AD8C004C1CF208C09EEE4CB8CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedCenterEye_OnLeftRotationPerformed_m3DDE75D7FFA249B75E61DF76E040DF48678B8B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedCenterEye_OnRightPositionPerformed_m6B6AFBB50608AA7718194CEDBB712A5173B198CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedEyes_OnPositionPerformed_m8501A79CD101A8A979220D9A55174A4473406CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackedEyes_OnRotationPerformed_mAEF5F99282EBAE5BA7DC5CF39C627712AC1BCF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m7E16A79528E93F9D7ED0B3DDC6430C3BAB7FB9B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_mD02249690B3516A6FA4F58E727AAAD550853216A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m21003E207349C4DEAF16458DBF7FD87B0F24569E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m361195389C5CEBF26AAC2BA34C76FF4113FC886C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7FEF553013EC1FE78D3ED27EAA9780D8532C7696 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct List_1_tE4111BEC044D13259EFD4EC5907636C855887179  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRHandSubsystemU5BU5D_t50FB94CEB7EB1A2A292728A49A7B732A8CF8C50F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// YYSX.YYSXConstants
struct YYSXConstants_t4F1203815D8F37E14F202BADE1425EEC07429E73  : public RuntimeObject
{
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater
struct SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548  : public RuntimeObject
{
	// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::m_Subsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___m_Subsystem_0;
};

// YYSX.YYSXLoader/InputLayoutLoader
struct InputLayoutLoader_t4E2078FE39D0D11B3FD18A1A28CC9137B4EF3F48  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Hands.XRHandSubsystem>
struct Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE4111BEC044D13259EFD4EC5907636C855887179* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.InputSystem.XR.Bone>>
struct InlinedArray_1_tCBB0B493F330EB525B8BC9CFC3F107CAA76A7DDE 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t1B867C38628FAD36851704361A9075C78FC620A0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5CD886D72C9A397221BED521C6A36D135C95FB6E* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<System.Boolean>
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>
struct NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndexInMap
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value_1;
};

// UnityEngine.InputSystem.XR.Bone
struct Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 
{
	// System.UInt32 UnityEngine.InputSystem.XR.Bone::m_ParentBoneIndex
	uint32_t ___m_ParentBoneIndex_0;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Bone::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_1;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Bone::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73  : public SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 
{
	// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint> UnityEngine.XR.Hands.XRHand::m_Joints
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::m_RootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::m_Handedness
	int32_t ___m_Handedness_2;
	// System.Boolean UnityEngine.XR.Hands.XRHand::<isTracked>k__BackingField
	bool ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_pinvoke
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_com
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.InputSystem.XR.Bone>
struct InputControl_1_tA729D33AC5D46954DC53858EA2B44E2E860427EB  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tCBB0B493F330EB525B8BC9CFC3F107CAA76A7DDE ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	float ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	float ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1  : public IntegratedSubsystem_1_t8312865F01EEA1EDE4B24A973E47ADD526616848
{
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___displayFocusChanged_2;
};

// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C  : public SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2
{
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_LeftHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_LeftHand_4;
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_RightHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_RightHand_5;
	// Unity.Collections.NativeArray`1<System.Boolean> UnityEngine.XR.Hands.XRHandSubsystem::m_JointsInLayout
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___m_JointsInLayout_6;
	// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::<updateSuccessFlags>k__BackingField
	int32_t ___U3CupdateSuccessFlagsU3Ek__BackingField_7;
	// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::updatedHands
	Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* ___updatedHands_8;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingAcquired
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingAcquired_9;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingLost
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingLost_10;
	// System.Boolean UnityEngine.XR.Hands.XRHandSubsystem::isTrackLeftHand
	bool ___isTrackLeftHand_11;
	// System.Boolean UnityEngine.XR.Hands.XRHandSubsystem::isTrackRightHand
	bool ___isTrackRightHand_12;
	// System.Boolean UnityEngine.XR.Hands.XRHandSubsystem::isOnlyOneHand
	bool ___isOnlyOneHand_13;
	// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::preprocessJoints
	Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* ___preprocessJoints_14;
	// System.Collections.Generic.List`1<UnityEngine.XR.Hands.Processing.IXRHandProcessor> UnityEngine.XR.Hands.XRHandSubsystem::m_Processors
	List_1_t8463D6E8766F823573C7FF81CA9AC38D1F351FFF* ___m_Processors_15;
	// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::handsUpdated
	Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* ___handsUpdated_16;
};

// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34  : public IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B
{
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_DeviceIdsCache_4;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// YYSX.YYSXSettings
struct YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// YYSX.YYSXSettings/StereoRenderingModeAndroid YYSX.YYSXSettings::m_StereoRenderingModeAndroid
	int32_t ___m_StereoRenderingModeAndroid_5;
	// System.Boolean YYSX.YYSXSettings::m_ActiveHand
	bool ___m_ActiveHand_6;
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_30;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_31;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_32;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_33;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_34;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_35;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_36;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_37;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_38;
};

// UnityEngine.InputSystem.XR.BoneControl
struct BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC  : public InputControl_1_tA729D33AC5D46954DC53858EA2B44E2E860427EB
{
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.XR.BoneControl::<parentBoneIndex>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CparentBoneIndexU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.XR.BoneControl::<position>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CpositionU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.XR.BoneControl::<rotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CrotationU3Ek__BackingField_30;
};

// HandLeftLayout
struct HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl HandLeftLayout::<istracked>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CistrackedU3Ek__BackingField_44;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone0>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone0U3Ek__BackingField_45;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone1>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone1U3Ek__BackingField_46;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone2>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone2U3Ek__BackingField_47;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone3>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone3U3Ek__BackingField_48;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone4>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone4U3Ek__BackingField_49;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone5>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone5U3Ek__BackingField_50;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone6>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone6U3Ek__BackingField_51;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone7>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone7U3Ek__BackingField_52;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone8>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone8U3Ek__BackingField_53;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone9>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone9U3Ek__BackingField_54;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone10>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone10U3Ek__BackingField_55;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone11>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone11U3Ek__BackingField_56;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone12>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone12U3Ek__BackingField_57;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone13>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone13U3Ek__BackingField_58;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone14>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone14U3Ek__BackingField_59;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone15>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone15U3Ek__BackingField_60;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone16>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone16U3Ek__BackingField_61;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone17>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone17U3Ek__BackingField_62;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone18>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone18U3Ek__BackingField_63;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone19>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone19U3Ek__BackingField_64;
	// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::<bone20>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone20U3Ek__BackingField_65;
};

// HandRightLayout
struct HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl HandRightLayout::<istracked>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CistrackedU3Ek__BackingField_44;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone0>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone0U3Ek__BackingField_45;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone1>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone1U3Ek__BackingField_46;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone2>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone2U3Ek__BackingField_47;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone3>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone3U3Ek__BackingField_48;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone4>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone4U3Ek__BackingField_49;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone5>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone5U3Ek__BackingField_50;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone6>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone6U3Ek__BackingField_51;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone7>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone7U3Ek__BackingField_52;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone8>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone8U3Ek__BackingField_53;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone9>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone9U3Ek__BackingField_54;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone10>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone10U3Ek__BackingField_55;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone11>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone11U3Ek__BackingField_56;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone12>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone12U3Ek__BackingField_57;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone13>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone13U3Ek__BackingField_58;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone14>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone14U3Ek__BackingField_59;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone15>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone15U3Ek__BackingField_60;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone16>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone16U3Ek__BackingField_61;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone17>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone17U3Ek__BackingField_62;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone18>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone18U3Ek__BackingField_63;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone19>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone19U3Ek__BackingField_64;
	// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::<bone20>k__BackingField
	BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___U3Cbone20U3Ek__BackingField_65;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_39;
};

// TrackedCenterEye
struct TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputAction TrackedCenterEye::leftEyePoistionAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___leftEyePoistionAction_4;
	// UnityEngine.InputSystem.InputAction TrackedCenterEye::rightEyePositionAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___rightEyePositionAction_5;
	// UnityEngine.InputSystem.InputAction TrackedCenterEye::leftEyeRotationAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___leftEyeRotationAction_6;
	// UnityEngine.Vector3 TrackedCenterEye::leftEyePoistion
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftEyePoistion_7;
	// UnityEngine.Vector3 TrackedCenterEye::rightEyePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightEyePosition_8;
	// UnityEngine.Quaternion TrackedCenterEye::leftEyeRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftEyeRotation_9;
};

// TrackedEyes
struct TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.InputSystem.InputAction TrackedEyes::EyePositionAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___EyePositionAction_4;
	// UnityEngine.InputSystem.InputAction TrackedEyes::EyeRotationAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___EyeRotationAction_5;
	// UnityEngine.Vector3 TrackedEyes::EyePoistion
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___EyePoistion_6;
	// UnityEngine.Quaternion TrackedEyes::EyeRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EyeRotation_7;
};

// YYSX.YYSXLoader
struct YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
	// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater YYSX.YYSXLoader::m_Updater
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* ___m_Updater_8;
	// YYSX.YYSXSettings YYSX.YYSXLoader::settings
	YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* ___settings_9;
	// UnityEngine.XR.XRDisplaySubsystem YYSX.YYSXLoader::dispInst
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* ___dispInst_10;
	// UnityEngine.XR.XRInputSubsystem YYSX.YYSXLoader::trackingInst
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* ___trackingInst_11;
	// UnityEngine.XR.Hands.XRHandSubsystem YYSX.YYSXLoader::xrHandSubsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___xrHandSubsystem_12;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t80B6AEA854B63F06CAE27E51662BBC06D752BFF0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct List_1_tE4111BEC044D13259EFD4EC5907636C855887179_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRHandSubsystemU5BU5D_t50FB94CEB7EB1A2A292728A49A7B732A8CF8C50F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// YYSX.YYSXConstants

// YYSX.YYSXConstants

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater

// YYSX.YYSXLoader/InputLayoutLoader

// YYSX.YYSXLoader/InputLayoutLoader

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Hands.XRHandSubsystem>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Hands.XRHandSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// UnityEngine.InputSystem.InputDevice

// UnityEngine.InputSystem.InputDevice

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.XRDisplaySubsystem

// UnityEngine.XR.XRDisplaySubsystem

// UnityEngine.XR.Hands.XRHandSubsystem

// UnityEngine.XR.Hands.XRHandSubsystem

// UnityEngine.XR.XRInputSubsystem

// UnityEngine.XR.XRInputSubsystem

// YYSX.YYSXSettings
struct YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_StaticFields
{
	// YYSX.YYSXSettings YYSX.YYSXSettings::s_RuntimeInstance
	YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* ___s_RuntimeInstance_4;
};

// YYSX.YYSXSettings

// UnityEngine.InputSystem.XR.BoneControl

// UnityEngine.InputSystem.XR.BoneControl

// HandLeftLayout

// HandLeftLayout

// HandRightLayout

// HandRightLayout

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.Management.XRLoaderHelper

// UnityEngine.XR.Management.XRLoaderHelper

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;
};

// UnityEngine.InputSystem.Controls.ButtonControl

// TrackedCenterEye

// TrackedCenterEye

// TrackedEyes

// TrackedEyes

// YYSX.YYSXLoader
struct YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> YYSX.YYSXLoader::s_InputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___s_InputSubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> YYSX.YYSXLoader::s_DisplaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___s_DisplaySubsystemDescriptors_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor> YYSX.YYSXLoader::s_HandSubsystemDescriptors
	List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* ___s_HandSubsystemDescriptors_7;
};

// YYSX.YYSXLoader
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TControl UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_gshared (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C* __this, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystems<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystems_TisRuntimeObject_mB633541A66EAE1B89E7819DD3468958B65E38FD4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_subsystems, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_subsystemDescriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayoutMatcher<System.Object>(UnityEngine.InputSystem.Layouts.InputDeviceMatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayoutMatcher_TisRuntimeObject_m9AABA3E092D5851A20296697A79EC3BB79950FB2_gshared (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___0_matcher, const RuntimeMethod* method) ;

// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void HandLeftLayout::set_istracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_istracked_m4E3ECF81CC939716454FD18C3B1D6995774D5495_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.XR.BoneControl>(System.String)
inline BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void HandLeftLayout::set_bone0(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone0_m698A2240EC7F9E8AF223D5DA41C2051DE1D341EC_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone1(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone1_m68693D0F945FB92FC9DF2A4FE60697BEEB6476FC_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone2(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone2_m66DD79FCD29789C39F8F093C18BCF793E6A653CD_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone3(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone3_m971AE8E244DAD916423F5ED7BB46026044028304_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone4(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone4_mDF5671C0F0C644BF4DE02D548426452CAAE50D79_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone5(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone5_m374BEE82342B1923270054272DD05F2E79A5D7A3_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone6(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone6_m4A40ACBA02DCAB0EF0EC1AC3B69D57C927C91E7B_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone7(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone7_m12D4E790A7EAFAA2891B4E6CAFDDBF3CD0F4CDE9_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone8(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone8_m861C8A7486A69C00D6DCC17E5351A3570DFD7AEA_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone9(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone9_m24149E40574FC541EEDE4690F9D9AD14E1F52741_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone10(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone10_m46F780D4CC45E53BB3F5EC925892A5D480BE613C_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone11(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone11_m73CD58E9ED78DF0520F9AAA0D5CF9BDA18A46E4B_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone12(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone12_m3CD8218527DE2F4388F33B41E18B11B03C0DCE12_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone13(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone13_mDE7808BB7F7F26B4BEC8C299653FD9DA729087F1_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone14(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone14_mB6BDF00557FF2B320FDDD64D8DDA8A42A037FE93_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone15(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone15_m373A47EE11EC10DB3B1DC7F8389091E38CD2E31C_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone16(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone16_mBDA3073BAA9E48A778135FE65F4A8B04C694A5ED_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone17(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone17_mEF3FAF72F8E5E77C9ADB4B929BD703DA761C88E5_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone18(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone18_m61AB2BA606B656899FBAC00611263CF3FAF4BC94_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone19(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone19_m9B4C97689F1EFC4BCCA5B7590C6525CFD45AB35E_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandLeftLayout::set_bone20(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone20_mF0A9DAFCBEB6EAFA16B005A7B8B5F8F09AA08BA0_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_istracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_istracked_m5930F4BC79969752FCDCC5F7D6E60F14A33721AA_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone0(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone0_mDEC7956D07DA7944342913C919E203F08FA98C25_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone1(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone1_m2C19165B7F4FDA884FD1554A70909CC2DBC3B7ED_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone2(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone2_m6D5E85096FF6783730C1AC2F1DE013CBD6AA9284_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone3(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone3_m763AC6EB37C95A9D9C7923FB0758649D9C650098_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone4(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone4_mE5FA05A9A61B21D6F01DDFBFA18B8E6C969F2B02_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone5(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone5_m02AC66DEF88772BE28269D944F377CF5F00E5613_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone6(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone6_m828B11C23FEB2C4932856319CBBC87DF57C1409D_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone7(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone7_mE7AB03760096449D6427A0DF0725B64472935098_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone8(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone8_mF467CF4550B31F032729E88BFE24B5053C13562D_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone9(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone9_mAE5E0865834541677EC097C52E7BD4B1E444F965_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone10(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone10_m8101AE149E6E2EC45E692EFECD0B43CD9D656638_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone11(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone11_m435E0F72211079F07B400C86A6F3429414E55508_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone12(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone12_m92035C2CEB6F8ADDD281DA99353919B686C96CFD_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone13(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone13_mB6AEC69246B7CFAF5C8E7A22B9CD6191F5DE5965_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone14(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone14_mBA1C8BE61224D1CD57F1E7654A64B5A95F873155_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone15(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone15_m9258A036B670A575367E4B9938E70B698658CFDE_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone16(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone16_mE267EE200949ABD2C81C9EB196092EC483B6A1B4_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone17(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone17_m09DEC41D5D8A7A0CEF8EA0707C96BFBB93BC53B1_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone18(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone18_mAD9B1B49E040DD9FBA915B6740CF718F8CFD4CCF_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone19(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone19_mAC93F0827D5636B0B5DD75DCB5D347720E29F28B_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void HandRightLayout::set_bone20(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone20_m2315F29A103F450BA54052B36058AB472E35F168_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) ;
// System.Void TrackedCenterEye::BindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_BindActions_mD6237B28CC0743D869D118810E85450F314BC8AA (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void TrackedCenterEye::UnbindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_UnbindActions_m71F49B31697066C81FB1A883F92CA718E6679099 (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction__ctor_m2C9BD26403717DAA628B90D4CD2A4057233A1A44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions::AddBinding(UnityEngine.InputSystem.InputAction,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 InputActionSetupExtensions_AddBinding_m22E4A437A2AD06C6326D8BEB45114B5DBD2F7168 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___0_action, String_t* ___1_path, String_t* ___2_interactions, String_t* ___3_processors, String_t* ___4_groups, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void TrackedEyes::BindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_BindActions_mF73CD588C8F8C057A48CEE80F2638343C221D7BD (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) ;
// System.Void TrackedEyes::UnbindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_UnbindActions_m2D330CDE3F0F48E327B55D2D04D4C771E8C0A70D (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// YYSX.YYSXSettings YYSX.YYSXLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* YYSXLoader_GetSettings_mD627353B79EADAC34B9808C3EEED454AE7D116BB (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void YYSX.YYSXLoader::LayoutMatcherRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXLoader_LayoutMatcherRegister_mDF6F0C9E63F882834FB502D660D67DC9F4B42334 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithProduct(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* __this, String_t* ___0_pattern, bool ___1_supportRegex, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(T)
inline void Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C* __this, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C*, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555, const RuntimeMethod*))Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_gshared)(__this, ___0_value, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<HandLeftLayout>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared)(___0_name, ___1_matches, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<HandRightLayout>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared)(___0_name, ___1_matches, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean YYSX.YYSXSettings::get_ActiveHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YYSXSettings_get_ActiveHand_m22A417E63ECBDC95D7F8381662BE689D30C6C5F8_inline (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) ;
// System.Void YYSXXRHandProvider::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_Register_m5C813CE962FE56888B76FB80A9543AFC38CC7B86 (const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.XRHandSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m7E16A79528E93F9D7ED0B3DDC6430C3BAB7FB9B1 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>::.ctor()
inline void List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4 (List_1_tE4111BEC044D13259EFD4EC5907636C855887179* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE4111BEC044D13259EFD4EC5907636C855887179*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystems<UnityEngine.XR.Hands.XRHandSubsystem>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m80B420587E83801A6C5F75FED3B6CEF1693D2C73 (List_1_tE4111BEC044D13259EFD4EC5907636C855887179* ___0_subsystems, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE4111BEC044D13259EFD4EC5907636C855887179*, const RuntimeMethod*))SubsystemManager_GetSubsystems_TisRuntimeObject_mB633541A66EAE1B89E7819DD3468958B65E38FD4_gshared)(___0_subsystems, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystem>::GetEnumerator()
inline Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717 List_1_GetEnumerator_m3B7B2239AF0A875059EB2D6A3C6628DF8BBC3B0A (List_1_tE4111BEC044D13259EFD4EC5907636C855887179* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717 (*) (List_1_tE4111BEC044D13259EFD4EC5907636C855887179*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Hands.XRHandSubsystem>::Dispose()
inline void Enumerator_Dispose_m86E1F3F8308D0DEAD0F6F76BA76F94DC8B2073AE (Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Hands.XRHandSubsystem>::get_Current()
inline XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* Enumerator_get_Current_m5C4BDC63A264792548752CA2A57757318F00EF65_inline (Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717* __this, const RuntimeMethod* method)
{
	return ((  XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* (*) (Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::get_subsystemDescriptor()
inline XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* SubsystemWithProvider_3_get_subsystemDescriptor_m95ABAFCF2F776A54F6CBD73A8F1117D47B9F40B0_inline (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2* __this, const RuntimeMethod* method)
{
	return ((  XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* (*) (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2*, const RuntimeMethod*))SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline)(__this, method);
}
// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::.ctor(UnityEngine.XR.Hands.XRHandSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater__ctor_mDFF3EED82E3F9CA7181F9C12537F4313D9A306C1 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Hands.XRHandSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m4BFD43202E0F65FD83D7D593613C1B5FBA029A4B (Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared)(__this, method);
}
// YYSX.YYSXSettings/StereoRenderingModeAndroid YYSX.YYSXSettings::get_stereoRenderingModeAndroid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YYSXSettings_get_stereoRenderingModeAndroid_m23E1B25F6362C8237B0E41F62DD337AFBD20A627_inline (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.XRDisplaySubsystem/TextureLayout UnityEngine.XR.XRDisplaySubsystem::get_supportedTextureLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDisplaySubsystem_get_supportedTextureLayouts_m3FC3B0A25D73FBD48AC95DDFB11C5DAEFD51F0DB (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_textureLayout(UnityEngine.XR.XRDisplaySubsystem/TextureLayout)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_textureLayout_mE0390E5525CBC1CFBA94D7ED494084E06631B51C (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.XRDisplaySubsystem/TextureLayout UnityEngine.XR.XRDisplaySubsystem::get_textureLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDisplaySubsystem_get_textureLayout_m966B7714CDC86D10146E5FA8C6CDB00C5A06C642 (XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.Hands.XRHandSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m21003E207349C4DEAF16458DBF7FD87B0F24569E (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Start_mEC50F9FCA9412717D6599F92D2A68A925C393ADD (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.Hands.XRHandSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m361195389C5CEBF26AAC2BA34C76FF4113FC886C (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Destroy_mBC988E2883F74DF50B81AEEDA2A7C32AFDEC85A5 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.Hands.XRHandSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_mD02249690B3516A6FA4F58E727AAAD550853216A (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.Management.XRLoaderHelper::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithInterface(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 InputDeviceMatcher_WithInterface_m58A8A1CF9A77598D0F904E13A86F48B3464725E4 (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* __this, String_t* ___0_pattern, bool ___1_supportRegex, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<UnityEngine.InputSystem.XR.XRController>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisXRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2_m16A61592171679837D037AB4D23A4EDDFC028BF9 (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared)(___0_name, ___1_matches, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayoutMatcher<UnityEngine.InputSystem.XR.XRHMD>(UnityEngine.InputSystem.Layouts.InputDeviceMatcher)
inline void InputSystem_RegisterLayoutMatcher_TisXRHMD_t2AB69188B210850F78044E5288C17FD173DB9B98_mC1819E32BA7EB2E3EB818E607F900E5A2858A2EA (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___0_matcher, const RuntimeMethod* method)
{
	((  void (*) (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555, const RuntimeMethod*))InputSystem_RegisterLayoutMatcher_TisRuntimeObject_m9AABA3E092D5851A20296697A79EC3BB79950FB2_gshared)(___0_matcher, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773 (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void YYSX.YYSXLoader/InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_mE447F2C597FE3B5F1F07B50AD9279B34DD5EE085 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.Controls.ButtonControl HandLeftLayout::get_istracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* HandLeftLayout_get_istracked_mA2DABD4AA18311CA06A284366AAC5AE2A7D1D259 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl istracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CistrackedU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_istracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_istracked_m4E3ECF81CC939716454FD18C3B1D6995774D5495 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl istracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CistrackedU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CistrackedU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone0_m0D3A337E317E065B1BD720C3058D684D543F7D14 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone0 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone0U3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone0(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone0_m698A2240EC7F9E8AF223D5DA41C2051DE1D341EC (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone0 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone0U3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone0U3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone1_m94D5DABE0B9C27325D9FB01E4AB228A43A0DF584 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone1 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone1U3Ek__BackingField_46;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone1(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone1_m68693D0F945FB92FC9DF2A4FE60697BEEB6476FC (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone1 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone1U3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone1U3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone2_m9481B6F5EA7A3F0AB5E78AD2AAC8EAD5288BBD4C (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone2 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone2U3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone2(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone2_m66DD79FCD29789C39F8F093C18BCF793E6A653CD (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone2 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone2U3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone2U3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone3_m374BEF46299B5D84FE6D2F809BEFE573F7AA37B2 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone3 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone3U3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone3(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone3_m971AE8E244DAD916423F5ED7BB46026044028304 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone3 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone3U3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone3U3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone4_mA0BCEE428F3E3B294C6B8BD5FEE500111E1C3779 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone4 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone4U3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone4(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone4_mDF5671C0F0C644BF4DE02D548426452CAAE50D79 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone4 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone4U3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone4U3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone5_m177FED42255F27E89870B905BADD1EF5D433D9DA (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone5 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone5U3Ek__BackingField_50;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone5(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone5_m374BEE82342B1923270054272DD05F2E79A5D7A3 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone5 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone5U3Ek__BackingField_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone5U3Ek__BackingField_50), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone6_m033DE101BDC8165BCD8A24C301DF0BC6054EF48B (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone6 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone6U3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone6(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone6_m4A40ACBA02DCAB0EF0EC1AC3B69D57C927C91E7B (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone6 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone6U3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone6U3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone7_m6F4186468CD3867B46F111B23B2A445F71A4B975 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone7 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone7U3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone7(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone7_m12D4E790A7EAFAA2891B4E6CAFDDBF3CD0F4CDE9 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone7 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone7U3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone7U3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone8_m71977BA62CE011AF216FFFE8843604AB42E2D1BF (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone8 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone8U3Ek__BackingField_53;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone8(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone8_m861C8A7486A69C00D6DCC17E5351A3570DFD7AEA (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone8 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone8U3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone8U3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone9_m18333924065DDA4F540103051C8A46B80A361FB5 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone9 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone9U3Ek__BackingField_54;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone9(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone9_m24149E40574FC541EEDE4690F9D9AD14E1F52741 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone9 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone9U3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone9U3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone10_m2F16E85D9AD0F96F28A6FA3BF0765E906C9C8B51 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone10 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone10U3Ek__BackingField_55;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone10(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone10_m46F780D4CC45E53BB3F5EC925892A5D480BE613C (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone10 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone10U3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone10U3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone11_mE2B4953B7AF9BAB00D88774195F09DE2BF8FE471 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone11 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone11U3Ek__BackingField_56;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone11(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone11_m73CD58E9ED78DF0520F9AAA0D5CF9BDA18A46E4B (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone11 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone11U3Ek__BackingField_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone11U3Ek__BackingField_56), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone12_mC0D16C71B3DF85FDFB275B535028976BC7234856 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone12 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone12U3Ek__BackingField_57;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone12(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone12_m3CD8218527DE2F4388F33B41E18B11B03C0DCE12 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone12 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone12U3Ek__BackingField_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone12U3Ek__BackingField_57), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone13_mA1B6A4F991AB2A28D0381024704FD25635C28878 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone13 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone13U3Ek__BackingField_58;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone13(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone13_mDE7808BB7F7F26B4BEC8C299653FD9DA729087F1 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone13 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone13U3Ek__BackingField_58 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone13U3Ek__BackingField_58), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone14_mEDB85A4D92FB37582EBEB1ABE3AE6F21AFFE6D65 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone14 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone14U3Ek__BackingField_59;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone14(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone14_mB6BDF00557FF2B320FDDD64D8DDA8A42A037FE93 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone14 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone14U3Ek__BackingField_59 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone14U3Ek__BackingField_59), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone15_m0E0A56E2FAE6AF182A14ED6DDC9C4F4B9000B195 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone15 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone15U3Ek__BackingField_60;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone15(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone15_m373A47EE11EC10DB3B1DC7F8389091E38CD2E31C (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone15 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone15U3Ek__BackingField_60 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone15U3Ek__BackingField_60), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone16_mB1F9FDF121A6D951E645AA74007912824D5DA077 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone16 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone16U3Ek__BackingField_61;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone16(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone16_mBDA3073BAA9E48A778135FE65F4A8B04C694A5ED (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone16 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone16U3Ek__BackingField_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone16U3Ek__BackingField_61), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone17()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone17_m0A5751FB156A6E6C9BD0E29509FE754022096C50 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone17 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone17U3Ek__BackingField_62;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone17(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone17_mEF3FAF72F8E5E77C9ADB4B929BD703DA761C88E5 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone17 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone17U3Ek__BackingField_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone17U3Ek__BackingField_62), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone18()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone18_m4BAC1A4ECFDF790E0A3EA38DFD83B90AEC7621BC (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone18 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone18U3Ek__BackingField_63;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone18(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone18_m61AB2BA606B656899FBAC00611263CF3FAF4BC94 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone18 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone18U3Ek__BackingField_63 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone18U3Ek__BackingField_63), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone19()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone19_mCD36A3D07D6A13891B76C11606247E46ACA804D9 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone19 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone19U3Ek__BackingField_64;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone19(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone19_m9B4C97689F1EFC4BCCA5B7590C6525CFD45AB35E (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone19 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone19U3Ek__BackingField_64 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone19U3Ek__BackingField_64), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandLeftLayout::get_bone20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandLeftLayout_get_bone20_mEC59BD289419235019EAF4D497A3DC505B4DD2CA (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone20 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone20U3Ek__BackingField_65;
		return L_0;
	}
}
// System.Void HandLeftLayout::set_bone20(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone20_mF0A9DAFCBEB6EAFA16B005A7B8B5F8F09AA08BA0 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone20 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone20U3Ek__BackingField_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone20U3Ek__BackingField_65), (void*)L_0);
		return;
	}
}
// System.Void HandLeftLayout::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout_FinishSetup_mABFC58910BDF244E75C3F52B3DF634645195AEA8 (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1556F2660EF1D76A0FF37B40DA2DA14EFFA61323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22171254FFF9C191F87916BDB5644B6998AEC5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2643FD5D1E0174298A2B5100A712398C653E6790);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A6D8D8CB45AD9B73BEF3A68AFA2DB03A915A344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE03569024409EF24CEFB3053D84A7209D496F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C96CEC96114A056A2D37A6D1A74A9261B17A3C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57333706A2E84D96E57047D1A5C159EAE846434C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral634199C717EE98E01048FF3B4CE64F0019A04BBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63CDB5C5FD4E7FFBF88D93A805597500EF9FBF0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral688376735036F2C22EA2BBD30A74CB937D64A325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral688F2B0C686B81E0AD84AA8739224DC9C4BB2207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C0FA635D5BF81107D0393CEB341BF5256FBF18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB719FBF7B3402D2A2B0D4CBF0D70BF882F202DD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC2A3D38E1E13A69E3830EAEF4BDD2EECAC98EA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8AB9A59BDBDFB6BB27898D7003F09943218DF1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA802170F28C7C37360D03D58C7F4D946ED79E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB0A8694910F93868397EA22691C35A0F33F335C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9A1D2AFD875C810C508CC79CFA57122D6D56F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9C2ECF28074C247BB167520057DF559F7A8F009);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE45934FE710BC6D7ADCEDB0E2C0119DB3D9CC5C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3D351A9DD0F201AEDE4363FF61542D9843F9DB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91DEF8B30A943F44E30715BCE83DBFFA38ACBCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15(__this, NULL);
		// istracked = GetChildControl<ButtonControl>("istracked");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral93C0FA635D5BF81107D0393CEB341BF5256FBF18, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		HandLeftLayout_set_istracked_m4E3ECF81CC939716454FD18C3B1D6995774D5495_inline(__this, L_0, NULL);
		// bone0 = GetChildControl<BoneControl>("bone0");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_1;
		L_1 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralC8AB9A59BDBDFB6BB27898D7003F09943218DF1D, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone0_m698A2240EC7F9E8AF223D5DA41C2051DE1D341EC_inline(__this, L_1, NULL);
		// bone1 = GetChildControl<BoneControl>("bone1");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_2;
		L_2 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralB719FBF7B3402D2A2B0D4CBF0D70BF882F202DD5, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone1_m68693D0F945FB92FC9DF2A4FE60697BEEB6476FC_inline(__this, L_2, NULL);
		// bone2 = GetChildControl<BoneControl>("bone2");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_3;
		L_3 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral2A6D8D8CB45AD9B73BEF3A68AFA2DB03A915A344, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone2_m66DD79FCD29789C39F8F093C18BCF793E6A653CD_inline(__this, L_3, NULL);
		// bone3 = GetChildControl<BoneControl>("bone3");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_4;
		L_4 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralCA802170F28C7C37360D03D58C7F4D946ED79E8B, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone3_m971AE8E244DAD916423F5ED7BB46026044028304_inline(__this, L_4, NULL);
		// bone4 = GetChildControl<BoneControl>("bone4");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_5;
		L_5 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral22171254FFF9C191F87916BDB5644B6998AEC5B8, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone4_mDF5671C0F0C644BF4DE02D548426452CAAE50D79_inline(__this, L_5, NULL);
		// bone5 = GetChildControl<BoneControl>("bone5");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_6;
		L_6 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralD9A1D2AFD875C810C508CC79CFA57122D6D56F3A, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone5_m374BEE82342B1923270054272DD05F2E79A5D7A3_inline(__this, L_6, NULL);
		// bone6 = GetChildControl<BoneControl>("bone6");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_7;
		L_7 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral57333706A2E84D96E57047D1A5C159EAE846434C, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone6_m4A40ACBA02DCAB0EF0EC1AC3B69D57C927C91E7B_inline(__this, L_7, NULL);
		// bone7 = GetChildControl<BoneControl>("bone7");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_8;
		L_8 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralCB0A8694910F93868397EA22691C35A0F33F335C, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone7_m12D4E790A7EAFAA2891B4E6CAFDDBF3CD0F4CDE9_inline(__this, L_8, NULL);
		// bone8 = GetChildControl<BoneControl>("bone8");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_9;
		L_9 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral3CCE03569024409EF24CEFB3053D84A7209D496F, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone8_m861C8A7486A69C00D6DCC17E5351A3570DFD7AEA_inline(__this, L_9, NULL);
		// bone9 = GetChildControl<BoneControl>("bone9");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_10;
		L_10 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral1556F2660EF1D76A0FF37B40DA2DA14EFFA61323, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone9_m24149E40574FC541EEDE4690F9D9AD14E1F52741_inline(__this, L_10, NULL);
		// bone10 = GetChildControl<BoneControl>("bone10");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_11;
		L_11 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral2643FD5D1E0174298A2B5100A712398C653E6790, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone10_m46F780D4CC45E53BB3F5EC925892A5D480BE613C_inline(__this, L_11, NULL);
		// bone11 = GetChildControl<BoneControl>("bone11");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_12;
		L_12 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralF3D351A9DD0F201AEDE4363FF61542D9843F9DB8, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone11_m73CD58E9ED78DF0520F9AAA0D5CF9BDA18A46E4B_inline(__this, L_12, NULL);
		// bone12 = GetChildControl<BoneControl>("bone12");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_13;
		L_13 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral63CDB5C5FD4E7FFBF88D93A805597500EF9FBF0F, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone12_m3CD8218527DE2F4388F33B41E18B11B03C0DCE12_inline(__this, L_13, NULL);
		// bone13 = GetChildControl<BoneControl>("bone13");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_14;
		L_14 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralBC2A3D38E1E13A69E3830EAEF4BDD2EECAC98EA3, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone13_mDE7808BB7F7F26B4BEC8C299653FD9DA729087F1_inline(__this, L_14, NULL);
		// bone14 = GetChildControl<BoneControl>("bone14");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_15;
		L_15 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralD9C2ECF28074C247BB167520057DF559F7A8F009, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone14_mB6BDF00557FF2B320FDDD64D8DDA8A42A037FE93_inline(__this, L_15, NULL);
		// bone15 = GetChildControl<BoneControl>("bone15");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_16;
		L_16 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral688F2B0C686B81E0AD84AA8739224DC9C4BB2207, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone15_m373A47EE11EC10DB3B1DC7F8389091E38CD2E31C_inline(__this, L_16, NULL);
		// bone16 = GetChildControl<BoneControl>("bone16");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_17;
		L_17 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralE45934FE710BC6D7ADCEDB0E2C0119DB3D9CC5C0, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone16_mBDA3073BAA9E48A778135FE65F4A8B04C694A5ED_inline(__this, L_17, NULL);
		// bone17 = GetChildControl<BoneControl>("bone17");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_18;
		L_18 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral634199C717EE98E01048FF3B4CE64F0019A04BBB, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone17_mEF3FAF72F8E5E77C9ADB4B929BD703DA761C88E5_inline(__this, L_18, NULL);
		// bone18 = GetChildControl<BoneControl>("bone18");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_19;
		L_19 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralF91DEF8B30A943F44E30715BCE83DBFFA38ACBCA, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone18_m61AB2BA606B656899FBAC00611263CF3FAF4BC94_inline(__this, L_19, NULL);
		// bone19 = GetChildControl<BoneControl>("bone19");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_20;
		L_20 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral688376735036F2C22EA2BBD30A74CB937D64A325, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone19_m9B4C97689F1EFC4BCCA5B7590C6525CFD45AB35E_inline(__this, L_20, NULL);
		// bone20 = GetChildControl<BoneControl>("bone20");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_21;
		L_21 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral4C96CEC96114A056A2D37A6D1A74A9261B17A3C9, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandLeftLayout_set_bone20_mF0A9DAFCBEB6EAFA16B005A7B8B5F8F09AA08BA0_inline(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void HandLeftLayout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandLeftLayout__ctor_m4CA8093CD7DD95FB1B6AEEAAFE3829FA7C1977DA (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, const RuntimeMethod* method) 
{
	{
		InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.Controls.ButtonControl HandRightLayout::get_istracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* HandRightLayout_get_istracked_mE20D127577D15CD7DFB636582CA7DECD4F085EE7 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl istracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CistrackedU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void HandRightLayout::set_istracked(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_istracked_m5930F4BC79969752FCDCC5F7D6E60F14A33721AA (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl istracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CistrackedU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CistrackedU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone0_m29F5779A6217D65A64CEE76923638A1B903ECFCC (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone0 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone0U3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone0(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone0_mDEC7956D07DA7944342913C919E203F08FA98C25 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone0 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone0U3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone0U3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone1_m384DCB96C55E22D13961074248E9145DD5744D99 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone1 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone1U3Ek__BackingField_46;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone1(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone1_m2C19165B7F4FDA884FD1554A70909CC2DBC3B7ED (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone1 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone1U3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone1U3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone2_mEE81A4A320FF3E83897B0E0765F2B3493876AA3E (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone2 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone2U3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone2(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone2_m6D5E85096FF6783730C1AC2F1DE013CBD6AA9284 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone2 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone2U3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone2U3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone3_mD0D1FB1F46A9C8BFEA51F6F0771AE3458C8F105B (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone3 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone3U3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone3(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone3_m763AC6EB37C95A9D9C7923FB0758649D9C650098 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone3 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone3U3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone3U3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone4_m25B6966A006BF4718FA2185A6A57183366649F9A (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone4 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone4U3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone4(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone4_mE5FA05A9A61B21D6F01DDFBFA18B8E6C969F2B02 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone4 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone4U3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone4U3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone5_mBBD51F4C15187361B3B74C0270843AC545F318E7 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone5 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone5U3Ek__BackingField_50;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone5(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone5_m02AC66DEF88772BE28269D944F377CF5F00E5613 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone5 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone5U3Ek__BackingField_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone5U3Ek__BackingField_50), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone6_m9482E79256A2051B0D0CE6B7A85A139264CBEBD6 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone6 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone6U3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone6(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone6_m828B11C23FEB2C4932856319CBBC87DF57C1409D (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone6 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone6U3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone6U3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone7_m1D5D19C4CE60DB65FD6EBA6C55448C0E2AAE58E7 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone7 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone7U3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone7(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone7_mE7AB03760096449D6427A0DF0725B64472935098 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone7 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone7U3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone7U3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone8_mE974C1DD4D165A1AF233DAE4671B898E42D19B7D (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone8 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone8U3Ek__BackingField_53;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone8(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone8_mF467CF4550B31F032729E88BFE24B5053C13562D (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone8 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone8U3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone8U3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone9_mB3F9944EF13A83A979EEB43B543171FF8E400329 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone9 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone9U3Ek__BackingField_54;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone9(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone9_mAE5E0865834541677EC097C52E7BD4B1E444F965 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone9 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone9U3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone9U3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone10_mBF52341DFBCC25A391C0AA5721C0BC16C1EF370A (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone10 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone10U3Ek__BackingField_55;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone10(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone10_m8101AE149E6E2EC45E692EFECD0B43CD9D656638 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone10 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone10U3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone10U3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone11_m74789CF974FECE0B9B1EC3531AB2E2D1517650FF (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone11 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone11U3Ek__BackingField_56;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone11(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone11_m435E0F72211079F07B400C86A6F3429414E55508 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone11 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone11U3Ek__BackingField_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone11U3Ek__BackingField_56), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone12_m61F30E36E281EB2567ECFBB441BD2AF0A376F440 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone12 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone12U3Ek__BackingField_57;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone12(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone12_m92035C2CEB6F8ADDD281DA99353919B686C96CFD (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone12 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone12U3Ek__BackingField_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone12U3Ek__BackingField_57), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone13_mA695C765BBEB5D1AC0D8CA8CB8551E5CE18D0CC9 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone13 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone13U3Ek__BackingField_58;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone13(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone13_mB6AEC69246B7CFAF5C8E7A22B9CD6191F5DE5965 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone13 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone13U3Ek__BackingField_58 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone13U3Ek__BackingField_58), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone14_m817C1D3CE71F5AD4C4031C9B8D5ABCC3C7E28CA4 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone14 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone14U3Ek__BackingField_59;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone14(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone14_mBA1C8BE61224D1CD57F1E7654A64B5A95F873155 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone14 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone14U3Ek__BackingField_59 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone14U3Ek__BackingField_59), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone15_m17F361245EEC6981F5F2CF668B6EE754BB92F96A (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone15 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone15U3Ek__BackingField_60;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone15(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone15_m9258A036B670A575367E4B9938E70B698658CFDE (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone15 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone15U3Ek__BackingField_60 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone15U3Ek__BackingField_60), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone16_mCB4016708743EA326B33ECA8BC9E2F816613C807 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone16 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone16U3Ek__BackingField_61;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone16(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone16_mE267EE200949ABD2C81C9EB196092EC483B6A1B4 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone16 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone16U3Ek__BackingField_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone16U3Ek__BackingField_61), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone17()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone17_m9AC8A886F2D4E24CA7883D0FEDC1CEA0B98DA2CF (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone17 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone17U3Ek__BackingField_62;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone17(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone17_m09DEC41D5D8A7A0CEF8EA0707C96BFBB93BC53B1 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone17 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone17U3Ek__BackingField_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone17U3Ek__BackingField_62), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone18()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone18_m556E60FC67455BB4A7E85C9D5F16E0D840B2EA3E (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone18 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone18U3Ek__BackingField_63;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone18(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone18_mAD9B1B49E040DD9FBA915B6740CF718F8CFD4CCF (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone18 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone18U3Ek__BackingField_63 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone18U3Ek__BackingField_63), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone19()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone19_m040464DE109E1D3035DCAE8CF6B27EE9C099DA95 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone19 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone19U3Ek__BackingField_64;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone19(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone19_mAC93F0827D5636B0B5DD75DCB5D347720E29F28B (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone19 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone19U3Ek__BackingField_64 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone19U3Ek__BackingField_64), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.XR.BoneControl HandRightLayout::get_bone20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* HandRightLayout_get_bone20_mB879CEC5412069DDCBA4E4506A8F2B98DEBE6808 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone20 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = __this->___U3Cbone20U3Ek__BackingField_65;
		return L_0;
	}
}
// System.Void HandRightLayout::set_bone20(UnityEngine.InputSystem.XR.BoneControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_set_bone20_m2315F29A103F450BA54052B36058AB472E35F168 (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone20 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone20U3Ek__BackingField_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone20U3Ek__BackingField_65), (void*)L_0);
		return;
	}
}
// System.Void HandRightLayout::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout_FinishSetup_m668BE7840F2FD39A439C395B9D0E5D154EAE405A (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1556F2660EF1D76A0FF37B40DA2DA14EFFA61323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22171254FFF9C191F87916BDB5644B6998AEC5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2643FD5D1E0174298A2B5100A712398C653E6790);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A6D8D8CB45AD9B73BEF3A68AFA2DB03A915A344);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CCE03569024409EF24CEFB3053D84A7209D496F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C96CEC96114A056A2D37A6D1A74A9261B17A3C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57333706A2E84D96E57047D1A5C159EAE846434C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral634199C717EE98E01048FF3B4CE64F0019A04BBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63CDB5C5FD4E7FFBF88D93A805597500EF9FBF0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral688376735036F2C22EA2BBD30A74CB937D64A325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral688F2B0C686B81E0AD84AA8739224DC9C4BB2207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C0FA635D5BF81107D0393CEB341BF5256FBF18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB719FBF7B3402D2A2B0D4CBF0D70BF882F202DD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC2A3D38E1E13A69E3830EAEF4BDD2EECAC98EA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8AB9A59BDBDFB6BB27898D7003F09943218DF1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA802170F28C7C37360D03D58C7F4D946ED79E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB0A8694910F93868397EA22691C35A0F33F335C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9A1D2AFD875C810C508CC79CFA57122D6D56F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9C2ECF28074C247BB167520057DF559F7A8F009);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE45934FE710BC6D7ADCEDB0E2C0119DB3D9CC5C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3D351A9DD0F201AEDE4363FF61542D9843F9DB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91DEF8B30A943F44E30715BCE83DBFFA38ACBCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m46B682B124C6E127183D19E1BA86E966472C7C15(__this, NULL);
		// istracked = GetChildControl<ButtonControl>("istracked");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral93C0FA635D5BF81107D0393CEB341BF5256FBF18, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		HandRightLayout_set_istracked_m5930F4BC79969752FCDCC5F7D6E60F14A33721AA_inline(__this, L_0, NULL);
		// bone0 = GetChildControl<BoneControl>("bone0");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_1;
		L_1 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralC8AB9A59BDBDFB6BB27898D7003F09943218DF1D, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone0_mDEC7956D07DA7944342913C919E203F08FA98C25_inline(__this, L_1, NULL);
		// bone1 = GetChildControl<BoneControl>("bone1");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_2;
		L_2 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralB719FBF7B3402D2A2B0D4CBF0D70BF882F202DD5, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone1_m2C19165B7F4FDA884FD1554A70909CC2DBC3B7ED_inline(__this, L_2, NULL);
		// bone2 = GetChildControl<BoneControl>("bone2");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_3;
		L_3 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral2A6D8D8CB45AD9B73BEF3A68AFA2DB03A915A344, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone2_m6D5E85096FF6783730C1AC2F1DE013CBD6AA9284_inline(__this, L_3, NULL);
		// bone3 = GetChildControl<BoneControl>("bone3");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_4;
		L_4 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralCA802170F28C7C37360D03D58C7F4D946ED79E8B, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone3_m763AC6EB37C95A9D9C7923FB0758649D9C650098_inline(__this, L_4, NULL);
		// bone4 = GetChildControl<BoneControl>("bone4");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_5;
		L_5 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral22171254FFF9C191F87916BDB5644B6998AEC5B8, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone4_mE5FA05A9A61B21D6F01DDFBFA18B8E6C969F2B02_inline(__this, L_5, NULL);
		// bone5 = GetChildControl<BoneControl>("bone5");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_6;
		L_6 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralD9A1D2AFD875C810C508CC79CFA57122D6D56F3A, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone5_m02AC66DEF88772BE28269D944F377CF5F00E5613_inline(__this, L_6, NULL);
		// bone6 = GetChildControl<BoneControl>("bone6");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_7;
		L_7 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral57333706A2E84D96E57047D1A5C159EAE846434C, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone6_m828B11C23FEB2C4932856319CBBC87DF57C1409D_inline(__this, L_7, NULL);
		// bone7 = GetChildControl<BoneControl>("bone7");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_8;
		L_8 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralCB0A8694910F93868397EA22691C35A0F33F335C, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone7_mE7AB03760096449D6427A0DF0725B64472935098_inline(__this, L_8, NULL);
		// bone8 = GetChildControl<BoneControl>("bone8");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_9;
		L_9 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral3CCE03569024409EF24CEFB3053D84A7209D496F, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone8_mF467CF4550B31F032729E88BFE24B5053C13562D_inline(__this, L_9, NULL);
		// bone9 = GetChildControl<BoneControl>("bone9");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_10;
		L_10 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral1556F2660EF1D76A0FF37B40DA2DA14EFFA61323, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone9_mAE5E0865834541677EC097C52E7BD4B1E444F965_inline(__this, L_10, NULL);
		// bone10 = GetChildControl<BoneControl>("bone10");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_11;
		L_11 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral2643FD5D1E0174298A2B5100A712398C653E6790, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone10_m8101AE149E6E2EC45E692EFECD0B43CD9D656638_inline(__this, L_11, NULL);
		// bone11 = GetChildControl<BoneControl>("bone11");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_12;
		L_12 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralF3D351A9DD0F201AEDE4363FF61542D9843F9DB8, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone11_m435E0F72211079F07B400C86A6F3429414E55508_inline(__this, L_12, NULL);
		// bone12 = GetChildControl<BoneControl>("bone12");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_13;
		L_13 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral63CDB5C5FD4E7FFBF88D93A805597500EF9FBF0F, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone12_m92035C2CEB6F8ADDD281DA99353919B686C96CFD_inline(__this, L_13, NULL);
		// bone13 = GetChildControl<BoneControl>("bone13");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_14;
		L_14 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralBC2A3D38E1E13A69E3830EAEF4BDD2EECAC98EA3, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone13_mB6AEC69246B7CFAF5C8E7A22B9CD6191F5DE5965_inline(__this, L_14, NULL);
		// bone14 = GetChildControl<BoneControl>("bone14");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_15;
		L_15 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralD9C2ECF28074C247BB167520057DF559F7A8F009, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone14_mBA1C8BE61224D1CD57F1E7654A64B5A95F873155_inline(__this, L_15, NULL);
		// bone15 = GetChildControl<BoneControl>("bone15");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_16;
		L_16 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral688F2B0C686B81E0AD84AA8739224DC9C4BB2207, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone15_m9258A036B670A575367E4B9938E70B698658CFDE_inline(__this, L_16, NULL);
		// bone16 = GetChildControl<BoneControl>("bone16");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_17;
		L_17 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralE45934FE710BC6D7ADCEDB0E2C0119DB3D9CC5C0, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone16_mE267EE200949ABD2C81C9EB196092EC483B6A1B4_inline(__this, L_17, NULL);
		// bone17 = GetChildControl<BoneControl>("bone17");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_18;
		L_18 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral634199C717EE98E01048FF3B4CE64F0019A04BBB, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone17_m09DEC41D5D8A7A0CEF8EA0707C96BFBB93BC53B1_inline(__this, L_18, NULL);
		// bone18 = GetChildControl<BoneControl>("bone18");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_19;
		L_19 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteralF91DEF8B30A943F44E30715BCE83DBFFA38ACBCA, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone18_mAD9B1B49E040DD9FBA915B6740CF718F8CFD4CCF_inline(__this, L_19, NULL);
		// bone19 = GetChildControl<BoneControl>("bone19");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_20;
		L_20 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral688376735036F2C22EA2BBD30A74CB937D64A325, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone19_mAC93F0827D5636B0B5DD75DCB5D347720E29F28B_inline(__this, L_20, NULL);
		// bone20 = GetChildControl<BoneControl>("bone20");
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_21;
		L_21 = InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01(__this, _stringLiteral4C96CEC96114A056A2D37A6D1A74A9261B17A3C9, InputControl_GetChildControl_TisBoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC_m63AF32D5766D1D0DB50DDFA9D583295E2514FF01_RuntimeMethod_var);
		HandRightLayout_set_bone20_m2315F29A103F450BA54052B36058AB472E35F168_inline(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void HandRightLayout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRightLayout__ctor_m8AFAE380327FC013EA50D601932496F22A76ABFE (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, const RuntimeMethod* method) 
{
	{
		InputDevice__ctor_mAA72B9458CD588116A968FE54C2AD2B59C787E51(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrackedCenterEye::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_Start_mE1B6B25CD57F42E11A0C3F983363F7A4A292DAA2 (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) 
{
	{
		// BindActions();
		TrackedCenterEye_BindActions_mD6237B28CC0743D869D118810E85450F314BC8AA(__this, NULL);
		// }
		return;
	}
}
// System.Void TrackedCenterEye::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_Update_m2D920A3831CACFCE6DA92CB0B2183AE9F6872D90 (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = (leftEyePoistion + rightEyePosition) / 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___leftEyePoistion_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___rightEyePosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_3, (2.0f), NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_4, NULL);
		// transform.localRotation = leftEyeRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = __this->___leftEyeRotation_9;
		NullCheck(L_5);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void TrackedCenterEye::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_OnDestroy_m6FAECE4070026FA87AB25C7BF22D479CA03982AE (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) 
{
	{
		// UnbindActions();
		TrackedCenterEye_UnbindActions_m71F49B31697066C81FB1A883F92CA718E6679099(__this, NULL);
		// }
		return;
	}
}
// System.Void TrackedCenterEye::BindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_BindActions_mD6237B28CC0743D869D118810E85450F314BC8AA (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedCenterEye_OnLeftPositionPerformed_mDF7E7B4A9B217AD8C004C1CF208C09EEE4CB8CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedCenterEye_OnLeftRotationPerformed_m3DDE75D7FFA249B75E61DF76E040DF48678B8B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedCenterEye_OnRightPositionPerformed_m6B6AFBB50608AA7718194CEDBB712A5173B198CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13E1D71D60811B421E33CFF3A74970D9FB942BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F4EB970739760AB66EA1B5A3F290D062F8D479B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616F6B00E3D2D87A47D9CC0B31D42341CDAF7F7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// leftEyePoistionAction = new InputAction();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)il2cpp_codegen_object_new(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InputAction__ctor_m2C9BD26403717DAA628B90D4CD2A4057233A1A44(L_0, NULL);
		__this->___leftEyePoistionAction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftEyePoistionAction_4), (void*)L_0);
		// leftEyePoistionAction.AddBinding("<XRHMD>/leftEyePosition");
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___leftEyePoistionAction_4;
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_2;
		L_2 = InputActionSetupExtensions_AddBinding_m22E4A437A2AD06C6326D8BEB45114B5DBD2F7168(L_1, _stringLiteral13E1D71D60811B421E33CFF3A74970D9FB942BFE, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, NULL);
		// leftEyePoistionAction.performed += OnLeftPositionPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = __this->___leftEyePoistionAction_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)TrackedCenterEye_OnLeftPositionPerformed_mDF7E7B4A9B217AD8C004C1CF208C09EEE4CB8CC3_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_3, L_4, NULL);
		// leftEyePoistionAction.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = __this->___leftEyePoistionAction_4;
		NullCheck(L_5);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_5, NULL);
		// rightEyePositionAction = new InputAction();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)il2cpp_codegen_object_new(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		InputAction__ctor_m2C9BD26403717DAA628B90D4CD2A4057233A1A44(L_6, NULL);
		__this->___rightEyePositionAction_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightEyePositionAction_5), (void*)L_6);
		// rightEyePositionAction.AddBinding("<XRHMD>/rightEyePosition");
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = __this->___rightEyePositionAction_5;
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_8;
		L_8 = InputActionSetupExtensions_AddBinding_m22E4A437A2AD06C6326D8BEB45114B5DBD2F7168(L_7, _stringLiteral616F6B00E3D2D87A47D9CC0B31D42341CDAF7F7F, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, NULL);
		// rightEyePositionAction.performed += OnRightPositionPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = __this->___rightEyePositionAction_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_10 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_10, __this, (intptr_t)((void*)TrackedCenterEye_OnRightPositionPerformed_m6B6AFBB50608AA7718194CEDBB712A5173B198CA_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_9, L_10, NULL);
		// rightEyePositionAction.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11 = __this->___rightEyePositionAction_5;
		NullCheck(L_11);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_11, NULL);
		// leftEyeRotationAction = new InputAction();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12 = (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)il2cpp_codegen_object_new(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		InputAction__ctor_m2C9BD26403717DAA628B90D4CD2A4057233A1A44(L_12, NULL);
		__this->___leftEyeRotationAction_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftEyeRotationAction_6), (void*)L_12);
		// leftEyeRotationAction.AddBinding("<XRHMD>/leftEyeRotation");
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13 = __this->___leftEyeRotationAction_6;
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_14;
		L_14 = InputActionSetupExtensions_AddBinding_m22E4A437A2AD06C6326D8BEB45114B5DBD2F7168(L_13, _stringLiteral3F4EB970739760AB66EA1B5A3F290D062F8D479B, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, NULL);
		// leftEyeRotationAction.performed += OnLeftRotationPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15 = __this->___leftEyeRotationAction_6;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_16, __this, (intptr_t)((void*)TrackedCenterEye_OnLeftRotationPerformed_m3DDE75D7FFA249B75E61DF76E040DF48678B8B9A_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_15, L_16, NULL);
		// leftEyeRotationAction.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_17 = __this->___leftEyeRotationAction_6;
		NullCheck(L_17);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_17, NULL);
		// }
		return;
	}
}
// System.Void TrackedCenterEye::UnbindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_UnbindActions_m71F49B31697066C81FB1A883F92CA718E6679099 (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedCenterEye_OnLeftPositionPerformed_mDF7E7B4A9B217AD8C004C1CF208C09EEE4CB8CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedCenterEye_OnLeftRotationPerformed_m3DDE75D7FFA249B75E61DF76E040DF48678B8B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedCenterEye_OnRightPositionPerformed_m6B6AFBB50608AA7718194CEDBB712A5173B198CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( leftEyePoistionAction != null ) {
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___leftEyePoistionAction_4;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// leftEyePoistionAction.performed -= OnLeftPositionPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___leftEyePoistionAction_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)TrackedCenterEye_OnLeftPositionPerformed_mDF7E7B4A9B217AD8C004C1CF208C09EEE4CB8CC3_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_1, L_2, NULL);
		// leftEyePoistionAction.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = __this->___leftEyePoistionAction_4;
		NullCheck(L_3);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_3, NULL);
	}

IL_002a:
	{
		// if ( rightEyePositionAction != null ) {
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->___rightEyePositionAction_5;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// rightEyePositionAction.performed -= OnRightPositionPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = __this->___rightEyePositionAction_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, __this, (intptr_t)((void*)TrackedCenterEye_OnRightPositionPerformed_m6B6AFBB50608AA7718194CEDBB712A5173B198CA_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_5, L_6, NULL);
		// rightEyePositionAction.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = __this->___rightEyePositionAction_5;
		NullCheck(L_7);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_7, NULL);
	}

IL_0054:
	{
		// if ( leftEyeRotationAction != null ) {
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = __this->___leftEyeRotationAction_6;
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		// leftEyeRotationAction.performed -= OnLeftRotationPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = __this->___leftEyeRotationAction_6;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_10 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_10, __this, (intptr_t)((void*)TrackedCenterEye_OnLeftRotationPerformed_m3DDE75D7FFA249B75E61DF76E040DF48678B8B9A_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_9, L_10, NULL);
		// leftEyeRotationAction.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11 = __this->___leftEyeRotationAction_6;
		NullCheck(L_11);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_11, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void TrackedCenterEye::OnLeftPositionPerformed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_OnLeftPositionPerformed_mDF7E7B4A9B217AD8C004C1CF208C09EEE4CB8CC3 (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// leftEyePoistion = context.ReadValue<Vector3>();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD((&___0_context), CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_RuntimeMethod_var);
		__this->___leftEyePoistion_7 = L_0;
		// }
		return;
	}
}
// System.Void TrackedCenterEye::OnRightPositionPerformed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_OnRightPositionPerformed_m6B6AFBB50608AA7718194CEDBB712A5173B198CA (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rightEyePosition = context.ReadValue<Vector3>();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD((&___0_context), CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_RuntimeMethod_var);
		__this->___rightEyePosition_8 = L_0;
		// }
		return;
	}
}
// System.Void TrackedCenterEye::OnLeftRotationPerformed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye_OnLeftRotationPerformed_m3DDE75D7FFA249B75E61DF76E040DF48678B8B9A (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// leftEyeRotation = context.ReadValue<Quaternion>();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E((&___0_context), CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		__this->___leftEyeRotation_9 = L_0;
		// }
		return;
	}
}
// System.Void TrackedCenterEye::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedCenterEye__ctor_m98397E2DFB50C43851F1BB350B32EC90E042CA2B (TrackedCenterEye_tA34D0359A011B471DBB8073AF02BF596F0D5AEA2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrackedEyes::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_Start_m373364FB0B5EF45AA27D544B7EC27B71A8F49097 (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) 
{
	{
		// BindActions();
		TrackedEyes_BindActions_mF73CD588C8F8C057A48CEE80F2638343C221D7BD(__this, NULL);
		// }
		return;
	}
}
// System.Void TrackedEyes::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_Update_m996F37C34B1B66E08C039459C69FC71B1276ED44 (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = EyePoistion;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___EyePoistion_6;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// transform.localRotation = EyeRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___EyeRotation_7;
		NullCheck(L_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TrackedEyes::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_OnDestroy_mCE582AED2CA363E8CC2E6C0591882BEBFDA9102D (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) 
{
	{
		// UnbindActions();
		TrackedEyes_UnbindActions_m2D330CDE3F0F48E327B55D2D04D4C771E8C0A70D(__this, NULL);
		// }
		return;
	}
}
// System.Void TrackedEyes::BindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_BindActions_mF73CD588C8F8C057A48CEE80F2638343C221D7BD (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedEyes_OnPositionPerformed_m8501A79CD101A8A979220D9A55174A4473406CD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedEyes_OnRotationPerformed_mAEF5F99282EBAE5BA7DC5CF39C627712AC1BCF4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( EyePositionAction != null ) {
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___EyePositionAction_4;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// EyePositionAction.performed += OnPositionPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___EyePositionAction_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)TrackedEyes_OnPositionPerformed_m8501A79CD101A8A979220D9A55174A4473406CD5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_1, L_2, NULL);
		// EyePositionAction.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = __this->___EyePositionAction_4;
		NullCheck(L_3);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_3, NULL);
	}

IL_002a:
	{
		// if ( EyeRotationAction != null ) {
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->___EyeRotationAction_5;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// EyeRotationAction.performed += OnRotationPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = __this->___EyeRotationAction_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, __this, (intptr_t)((void*)TrackedEyes_OnRotationPerformed_mAEF5F99282EBAE5BA7DC5CF39C627712AC1BCF4D_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_5, L_6, NULL);
		// EyeRotationAction.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = __this->___EyeRotationAction_5;
		NullCheck(L_7);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_7, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void TrackedEyes::UnbindActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_UnbindActions_m2D330CDE3F0F48E327B55D2D04D4C771E8C0A70D (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedEyes_OnPositionPerformed_m8501A79CD101A8A979220D9A55174A4473406CD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedEyes_OnRotationPerformed_mAEF5F99282EBAE5BA7DC5CF39C627712AC1BCF4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( EyePositionAction != null ) {
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___EyePositionAction_4;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// EyePositionAction.performed -= OnPositionPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___EyePositionAction_4;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)TrackedEyes_OnPositionPerformed_m8501A79CD101A8A979220D9A55174A4473406CD5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_1, L_2, NULL);
		// EyePositionAction.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = __this->___EyePositionAction_4;
		NullCheck(L_3);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_3, NULL);
	}

IL_002a:
	{
		// if ( EyeRotationAction != null ) {
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->___EyeRotationAction_5;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// EyeRotationAction.performed -= OnRotationPerformed;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = __this->___EyeRotationAction_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_6 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_6, __this, (intptr_t)((void*)TrackedEyes_OnRotationPerformed_mAEF5F99282EBAE5BA7DC5CF39C627712AC1BCF4D_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_5, L_6, NULL);
		// EyeRotationAction.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = __this->___EyeRotationAction_5;
		NullCheck(L_7);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_7, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void TrackedEyes::OnPositionPerformed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_OnPositionPerformed_m8501A79CD101A8A979220D9A55174A4473406CD5 (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EyePoistion = context.ReadValue<Vector3>();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD((&___0_context), CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_RuntimeMethod_var);
		__this->___EyePoistion_6 = L_0;
		// }
		return;
	}
}
// System.Void TrackedEyes::OnRotationPerformed(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes_OnRotationPerformed_mAEF5F99282EBAE5BA7DC5CF39C627712AC1BCF4D (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EyeRotation = context.ReadValue<Quaternion>();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E((&___0_context), CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		__this->___EyeRotation_7 = L_0;
		// }
		return;
	}
}
// System.Void TrackedEyes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedEyes__ctor_m1486C55F00020541F567E03C755EB2762F701DEC (TrackedEyes_t8B49A723F84EC38AE7E74A98C717D0B4DE58CE16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.XRInputSubsystem YYSX.YYSXLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* YYSXLoader_get_inputSubsystem_mDC6FE8423C88603C1EED57B51933AFFE457C8637 (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GetLoadedSubsystem<XRInputSubsystem>(); }
		XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mFFFE07D8A1F3526DB3003FFAE9681221AA4A876A_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRDisplaySubsystem YYSX.YYSXLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* YYSXLoader_get_displaySubsystem_mF153512E34DCD227006B3A6D0548D5B8C19D8BB3 (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GetLoadedSubsystem<XRDisplaySubsystem>(); }
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var, __this);
		return L_0;
	}
}
// YYSX.YYSXSettings YYSX.YYSXLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* YYSXLoader_GetSettings_mD627353B79EADAC34B9808C3EEED454AE7D116BB (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = YYSXSettings.s_RuntimeInstance;
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_0 = ((YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_StaticFields*)il2cpp_codegen_static_fields_for(YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_il2cpp_TypeInfo_var))->___s_RuntimeInstance_4;
		__this->___settings_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings_9), (void*)L_0);
		// return settings;
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_1 = __this->___settings_9;
		return L_1;
	}
}
// System.Boolean YYSX.YYSXLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YYSXLoader_Initialize_m0DD1259F6C1B96B43889299025FB9CB7EA2D7047 (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m86E1F3F8308D0DEAD0F6F76BA76F94DC8B2073AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4BFD43202E0F65FD83D7D593613C1B5FBA029A4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5C4BDC63A264792548752CA2A57757318F00EF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3B7B2239AF0A875059EB2D6A3C6628DF8BBC3B0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m80B420587E83801A6C5F75FED3B6CEF1693D2C73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_subsystemDescriptor_m95ABAFCF2F776A54F6CBD73A8F1117D47B9F40B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m7E16A79528E93F9D7ED0B3DDC6430C3BAB7FB9B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B0A0195BE2AFE1CB6B1DA38C699A53FEF07CDAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E789C4ECFB31D4E381088794F20E4210B932807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FCBC514477D48C5A88109633E87F50C22E3D3E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6205DE79A4BCC2A90609D74072B13A876AF0629A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F320C9897BA3F54DAE1A7E933AC768BEEA0B1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC6A077784BCA1FF068E9935C659F03ABD8384F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3D8E8A0D3D7464E0AD77F3278A7C6C345E66E24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA2F05C66F010A20B792D1735E78B6476359DB3);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* V_3 = NULL;
	{
		// Debug.Log("YYSXLoader: Initialize");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB3D8E8A0D3D7464E0AD77F3278A7C6C345E66E24, NULL);
		// settings = GetSettings();
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_0;
		L_0 = YYSXLoader_GetSettings_mD627353B79EADAC34B9808C3EEED454AE7D116BB(__this, NULL);
		__this->___settings_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings_9), (void*)L_0);
		// if (settings == null)
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_1 = __this->___settings_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.Log("YYSX Initialize: settings == null ERROR!!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3B0A0195BE2AFE1CB6B1DA38C699A53FEF07CDAA, NULL);
	}

IL_002e:
	{
		// LayoutMatcherRegister();
		il2cpp_codegen_runtime_class_init_inline(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var);
		YYSXLoader_LayoutMatcherRegister_mDF6F0C9E63F882834FB502D660D67DC9F4B42334(NULL);
		// InputSystem.RegisterLayout<HandLeftLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX LHand"));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_3 = (&V_0);
		il2cpp_codegen_initobj(L_3, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_4;
		L_4 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_3, _stringLiteral3E789C4ECFB31D4E381088794F20E4210B932807, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B((String_t*)NULL, L_5, InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B_RuntimeMethod_var);
		// InputSystem.RegisterLayout<HandRightLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX RHand"));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_6 = (&V_0);
		il2cpp_codegen_initobj(L_6, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_7;
		L_7 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_6, _stringLiteralBBA2F05C66F010A20B792D1735E78B6476359DB3, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_8), L_7, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD((String_t*)NULL, L_8, InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD_RuntimeMethod_var);
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "YYSX Display");
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_9 = ((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_DisplaySubsystemDescriptors_6;
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A(__this, L_9, _stringLiteralAC6A077784BCA1FF068E9935C659F03ABD8384F1, XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_t72DD88EE9094488AE723A495F48884BA4EA8311A_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m47BB00ACEADFC3AF821DC1EE31F79CF6EEB4681A_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "YYSX Input");
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_10 = ((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_5;
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C(__this, L_10, _stringLiteral83F320C9897BA3F54DAE1A7E933AC768BEEA0B1D, XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		// if ( settings != null && settings.ActiveHand ) {
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_11 = __this->___settings_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0156;
		}
	}
	{
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_13 = __this->___settings_9;
		NullCheck(L_13);
		bool L_14;
		L_14 = YYSXSettings_get_ActiveHand_m22A417E63ECBDC95D7F8381662BE689D30C6C5F8_inline(L_13, NULL);
		if (!L_14)
		{
			goto IL_0156;
		}
	}
	{
		// YYSXXRHandProvider.Register();
		il2cpp_codegen_runtime_class_init_inline(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		YYSXXRHandProvider_Register_m5C813CE962FE56888B76FB80A9543AFC38CC7B86(NULL);
		// Debug.Log("YYSXLoader: settings.ActiveHand:"+ settings.ActiveHand+"|");
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_15 = __this->___settings_9;
		NullCheck(L_15);
		bool L_16;
		L_16 = YYSXSettings_get_ActiveHand_m22A417E63ECBDC95D7F8381662BE689D30C6C5F8_inline(L_15, NULL);
		V_1 = L_16;
		String_t* L_17;
		L_17 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6205DE79A4BCC2A90609D74072B13A876AF0629A, L_17, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
		// CreateSubsystem<XRHandSubsystemDescriptor, XRHandSubsystem>(s_HandSubsystemDescriptors, "YYSXXRHandProvider");
		il2cpp_codegen_runtime_class_init_inline(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var);
		List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* L_19 = ((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_HandSubsystemDescriptors_7;
		XRLoaderHelper_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m7E16A79528E93F9D7ED0B3DDC6430C3BAB7FB9B1(__this, L_19, _stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19, XRLoaderHelper_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m7E16A79528E93F9D7ED0B3DDC6430C3BAB7FB9B1_RuntimeMethod_var);
		// var currentHandSubsystems = new List<XRHandSubsystem>();
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_20 = (List_1_tE4111BEC044D13259EFD4EC5907636C855887179*)il2cpp_codegen_object_new(List_1_tE4111BEC044D13259EFD4EC5907636C855887179_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4(L_20, List_1__ctor_m9991CB9E0E4608CAE947384283EE27BCF3DAC2D4_RuntimeMethod_var);
		// SubsystemManager.GetSubsystems(currentHandSubsystems);
		List_1_tE4111BEC044D13259EFD4EC5907636C855887179* L_21 = L_20;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m80B420587E83801A6C5F75FED3B6CEF1693D2C73(L_21, SubsystemManager_GetSubsystems_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m80B420587E83801A6C5F75FED3B6CEF1693D2C73_RuntimeMethod_var);
		// foreach ( var handSubsystem in currentHandSubsystems ) {
		NullCheck(L_21);
		Enumerator_t113DB3F5383D089A36122B57BF9D89584E685717 L_22;
		L_22 = List_1_GetEnumerator_m3B7B2239AF0A875059EB2D6A3C6628DF8BBC3B0A(L_21, List_1_GetEnumerator_m3B7B2239AF0A875059EB2D6A3C6628DF8BBC3B0A_RuntimeMethod_var);
		V_2 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0148:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m86E1F3F8308D0DEAD0F6F76BA76F94DC8B2073AE((&V_2), Enumerator_Dispose_m86E1F3F8308D0DEAD0F6F76BA76F94DC8B2073AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_013d_1;
			}

IL_0101_1:
			{
				// foreach ( var handSubsystem in currentHandSubsystems ) {
				XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_23;
				L_23 = Enumerator_get_Current_m5C4BDC63A264792548752CA2A57757318F00EF65_inline((&V_2), Enumerator_get_Current_m5C4BDC63A264792548752CA2A57757318F00EF65_RuntimeMethod_var);
				V_3 = L_23;
				// if ( handSubsystem.subsystemDescriptor.id == "YYSXXRHandProvider" ) {
				XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_24 = V_3;
				NullCheck(L_24);
				XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* L_25;
				L_25 = SubsystemWithProvider_3_get_subsystemDescriptor_m95ABAFCF2F776A54F6CBD73A8F1117D47B9F40B0_inline(L_24, SubsystemWithProvider_3_get_subsystemDescriptor_m95ABAFCF2F776A54F6CBD73A8F1117D47B9F40B0_RuntimeMethod_var);
				NullCheck(L_25);
				String_t* L_26;
				L_26 = SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline(L_25, NULL);
				bool L_27;
				L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19, NULL);
				if (!L_27)
				{
					goto IL_013d_1;
				}
			}
			{
				// Debug.Log("YYSXLoader: s_XRHandSubsystem add m_Updater");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4FCBC514477D48C5A88109633E87F50C22E3D3E1, NULL);
				// m_Updater = new XRHandProviderUtility.SubsystemUpdater(handSubsystem);
				XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_28 = V_3;
				SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_29 = (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548*)il2cpp_codegen_object_new(SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548_il2cpp_TypeInfo_var);
				NullCheck(L_29);
				SubsystemUpdater__ctor_mDFF3EED82E3F9CA7181F9C12537F4313D9A306C1(L_29, L_28, NULL);
				__this->___m_Updater_8 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Updater_8), (void*)L_29);
				// xrHandSubsystem = handSubsystem;
				XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_30 = V_3;
				__this->___xrHandSubsystem_12 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___xrHandSubsystem_12), (void*)L_30);
			}

IL_013d_1:
			{
				// foreach ( var handSubsystem in currentHandSubsystems ) {
				bool L_31;
				L_31 = Enumerator_MoveNext_m4BFD43202E0F65FD83D7D593613C1B5FBA029A4B((&V_2), Enumerator_MoveNext_m4BFD43202E0F65FD83D7D593613C1B5FBA029A4B_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_0101_1;
				}
			}
			{
				goto IL_0156;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0156:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean YYSX.YYSXLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YYSXLoader_Start_mAA3489FA09EF69D7A5CF53D836AE989BFDB5B89C (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StereoRenderingModeAndroid_t88AC397EB0904E7DCC2EB8DED80790149EEF7A88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureLayout_t0EC0EDCC4AA008BE68C36C26A9FF71E5406BD76D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m21003E207349C4DEAF16458DBF7FD87B0F24569E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38A6D35C9FAFA8824E02B5F6A2B144E81AEF2F9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D859022937FF9FF23CCC58E07C64904462474DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral859F44009B6F91E0FD8BE8569525121722CA74F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9253CF9BF225BBE7AE85368416FC34C37F5CA791);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C3BBB9082B1C2E72AA3DDDD8ADCA5B9903F174);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B12_0 = NULL;
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B11_0 = NULL;
	{
		// Debug.Log("YYSXLoader: Start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral859F44009B6F91E0FD8BE8569525121722CA74F2, NULL);
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962(__this, XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_mC1643794A5D3CC32BF1EE9C976CE5F23A6BB8962_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA(__this, XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m08AC127201FE89396BD81BEA52D40790BC0CA3FA_RuntimeMethod_var);
		// XRDisplaySubsystem display = GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_0;
		L_0 = GenericVirtualFuncInvoker0< XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m9FC253637CE85B86CE3DFA51346D7E4D49913E7B_RuntimeMethod_var, __this);
		V_0 = L_0;
		// if (display != null && settings != null)
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0116;
		}
	}
	{
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_2 = __this->___settings_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0116;
		}
	}
	{
		// if ( settings.stereoRenderingModeAndroid == YYSXSettings.StereoRenderingModeAndroid.MultiPass && (display.supportedTextureLayouts | XRDisplaySubsystem.TextureLayout.SeparateTexture2Ds) != 0 ) {
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_4 = __this->___settings_9;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = YYSXSettings_get_stereoRenderingModeAndroid_m23E1B25F6362C8237B0E41F62DD337AFBD20A627_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0054;
		}
	}
	{
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = XRDisplaySubsystem_get_supportedTextureLayouts_m3FC3B0A25D73FBD48AC95DDFB11C5DAEFD51F0DB(L_6, NULL);
		if (!((int32_t)((int32_t)L_7|4)))
		{
			goto IL_0054;
		}
	}
	{
		// display.textureLayout = XRDisplaySubsystem.TextureLayout.SeparateTexture2Ds;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_8 = V_0;
		NullCheck(L_8);
		XRDisplaySubsystem_set_textureLayout_mE0390E5525CBC1CFBA94D7ED494084E06631B51C(L_8, 4, NULL);
		goto IL_00a4;
	}

IL_0054:
	{
		// } else if ( settings.stereoRenderingModeAndroid == YYSXSettings.StereoRenderingModeAndroid.Multiview && (display.supportedTextureLayouts | XRDisplaySubsystem.TextureLayout.Texture2DArray) != 0 ) {
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_9 = __this->___settings_9;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = YYSXSettings_get_stereoRenderingModeAndroid_m23E1B25F6362C8237B0E41F62DD337AFBD20A627_inline(L_9, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0075;
		}
	}
	{
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = XRDisplaySubsystem_get_supportedTextureLayouts_m3FC3B0A25D73FBD48AC95DDFB11C5DAEFD51F0DB(L_11, NULL);
		if (!((int32_t)((int32_t)L_12|1)))
		{
			goto IL_0075;
		}
	}
	{
		// display.textureLayout = XRDisplaySubsystem.TextureLayout.Texture2DArray;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_13 = V_0;
		NullCheck(L_13);
		XRDisplaySubsystem_set_textureLayout_mE0390E5525CBC1CFBA94D7ED494084E06631B51C(L_13, 1, NULL);
		goto IL_00a4;
	}

IL_0075:
	{
		// Debug.Log("YYSX Use RenderingMode:" + settings.stereoRenderingModeAndroid + " NOT Support !,Please check DisplayProvider::GfxThread_Start renderingCaps.noSinglePassRenderingSupport !");
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_14 = __this->___settings_9;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = YYSXSettings_get_stereoRenderingModeAndroid_m23E1B25F6362C8237B0E41F62DD337AFBD20A627_inline(L_14, NULL);
		V_1 = L_15;
		Il2CppFakeBox<int32_t> L_16(StereoRenderingModeAndroid_t88AC397EB0904E7DCC2EB8DED80790149EEF7A88_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_17;
		L_17 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_16), NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7D859022937FF9FF23CCC58E07C64904462474DB, L_17, _stringLiteral99C3BBB9082B1C2E72AA3DDDD8ADCA5B9903F174, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
		// return false;
		return (bool)0;
	}

IL_00a4:
	{
		// Debug.Log("YYSX Use RenderingMode:"+ settings.stereoRenderingModeAndroid + "|support:" + display.supportedTextureLayouts + "|current:" + display.textureLayout);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral7D859022937FF9FF23CCC58E07C64904462474DB);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7D859022937FF9FF23CCC58E07C64904462474DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* L_22 = __this->___settings_9;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = YYSXSettings_get_stereoRenderingModeAndroid_m23E1B25F6362C8237B0E41F62DD337AFBD20A627_inline(L_22, NULL);
		V_1 = L_23;
		Il2CppFakeBox<int32_t> L_24(StereoRenderingModeAndroid_t88AC397EB0904E7DCC2EB8DED80790149EEF7A88_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_25;
		L_25 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_24), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_21;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral38A6D35C9FAFA8824E02B5F6A2B144E81AEF2F9A);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral38A6D35C9FAFA8824E02B5F6A2B144E81AEF2F9A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = XRDisplaySubsystem_get_supportedTextureLayouts_m3FC3B0A25D73FBD48AC95DDFB11C5DAEFD51F0DB(L_28, NULL);
		V_2 = L_29;
		Il2CppFakeBox<int32_t> L_30(TextureLayout_t0EC0EDCC4AA008BE68C36C26A9FF71E5406BD76D_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_31;
		L_31 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_30), NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_27;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral9253CF9BF225BBE7AE85368416FC34C37F5CA791);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral9253CF9BF225BBE7AE85368416FC34C37F5CA791);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		XRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = XRDisplaySubsystem_get_textureLayout_m966B7714CDC86D10146E5FA8C6CDB00C5A06C642(L_34, NULL);
		V_2 = L_35;
		Il2CppFakeBox<int32_t> L_36(TextureLayout_t0EC0EDCC4AA008BE68C36C26A9FF71E5406BD76D_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_37;
		L_37 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_36), NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_37);
		String_t* L_38;
		L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
	}

IL_0116:
	{
		// StartSubsystem<XRHandSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m21003E207349C4DEAF16458DBF7FD87B0F24569E(__this, XRLoaderHelper_StartSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m21003E207349C4DEAF16458DBF7FD87B0F24569E_RuntimeMethod_var);
		// m_Updater?.Start();
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_39 = __this->___m_Updater_8;
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_40 = L_39;
		G_B11_0 = L_40;
		if (L_40)
		{
			G_B12_0 = L_40;
			goto IL_0128;
		}
	}
	{
		goto IL_012d;
	}

IL_0128:
	{
		NullCheck(G_B12_0);
		SubsystemUpdater_Start_mEC50F9FCA9412717D6599F92D2A68A925C393ADD(G_B12_0, NULL);
	}

IL_012d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean YYSX.YYSXLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YYSXLoader_Stop_m244C13526A1449943058AA886DC07E8F79D16A95 (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m361195389C5CEBF26AAC2BA34C76FF4113FC886C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B2_0 = NULL;
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B1_0 = NULL;
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24(__this, XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m00A3A82597D484DE2EBB03EA9A2430AFDE44DE24_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750(__this, XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE6F3E85E0C64666EE9A517CD7CF3669FB7BAC750_RuntimeMethod_var);
		// m_Updater?.Stop();
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_0 = __this->___m_Updater_8;
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		goto IL_001d;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A(G_B2_0, NULL);
	}

IL_001d:
	{
		// StopSubsystem<XRHandSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m361195389C5CEBF26AAC2BA34C76FF4113FC886C(__this, XRLoaderHelper_StopSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m361195389C5CEBF26AAC2BA34C76FF4113FC886C_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean YYSX.YYSXLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YYSXLoader_Deinitialize_m2E5E2A37A6FE872B4CA6AD8A8993B484BA00CCB8 (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_mD02249690B3516A6FA4F58E727AAAD550853216A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B2_0 = NULL;
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B1_0 = NULL;
	{
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606(__this, XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t4B00B0BF1894A039ACFA8DDC2C2EB9301118C1F1_m8E2572BB5610CCE3B1DBA87453CFE09BB4B2B606_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F(__this, XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		// m_Updater?.Destroy();
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_0 = __this->___m_Updater_8;
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		goto IL_001d;
	}

IL_0018:
	{
		NullCheck(G_B2_0);
		SubsystemUpdater_Destroy_mBC988E2883F74DF50B81AEEDA2A7C32AFDEC85A5(G_B2_0, NULL);
	}

IL_001d:
	{
		// m_Updater = null;
		__this->___m_Updater_8 = (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Updater_8), (void*)(SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548*)NULL);
		// xrHandSubsystem = null;
		__this->___xrHandSubsystem_12 = (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrHandSubsystem_12), (void*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL);
		// DestroySubsystem<XRHandSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_mD02249690B3516A6FA4F58E727AAAD550853216A(__this, XRLoaderHelper_DestroySubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_mD02249690B3516A6FA4F58E727AAAD550853216A_RuntimeMethod_var);
		// return base.Deinitialize();
		bool L_2;
		L_2 = XRLoaderHelper_Deinitialize_m879052C82795CBA2443070F8206798BED6C0C5E7(__this, NULL);
		return L_2;
	}
}
// System.Void YYSX.YYSXLoader::LayoutMatcherRegister()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXLoader_LayoutMatcherRegister_mDF6F0C9E63F882834FB502D660D67DC9F4B42334 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayoutMatcher_TisXRHMD_t2AB69188B210850F78044E5288C17FD173DB9B98_mC1819E32BA7EB2E3EB818E607F900E5A2858A2EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisXRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2_m16A61592171679837D037AB4D23A4EDDFC028BF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral811E6AC30EC1613FA3FAE990A7C015690DDAA526);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8BA1BB774D7DB9C3B73A6C8BF762860D409D6FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UnityEngine.InputSystem.InputSystem.RegisterLayout<XRController>(
		//           matches: new InputDeviceMatcher()
		//               .WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//               .WithProduct("YYSX Controller")
		//               );
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_1;
		L_1 = InputDeviceMatcher_WithInterface_m58A8A1CF9A77598D0F904E13A86F48B3464725E4(L_0, _stringLiteralDCA884BDE3461B51BC3CBE077E141428C6D55245, (bool)1, NULL);
		V_0 = L_1;
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_2;
		L_2 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E((&V_0), _stringLiteralA8BA1BB774D7DB9C3B73A6C8BF762860D409D6FC, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisXRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2_m16A61592171679837D037AB4D23A4EDDFC028BF9((String_t*)NULL, L_3, InputSystem_RegisterLayout_TisXRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2_m16A61592171679837D037AB4D23A4EDDFC028BF9_RuntimeMethod_var);
		// UnityEngine.InputSystem.InputSystem.RegisterLayoutMatcher<XRHMD>(
		//   new InputDeviceMatcher()
		//       //.WithInterface(XRUtilities.InterfaceMatchAnyVersion)
		//       .WithProduct("YYSX HMD")
		//       );
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_4 = (&V_0);
		il2cpp_codegen_initobj(L_4, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_5;
		L_5 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_4, _stringLiteral811E6AC30EC1613FA3FAE990A7C015690DDAA526, (bool)1, NULL);
		InputSystem_RegisterLayoutMatcher_TisXRHMD_t2AB69188B210850F78044E5288C17FD173DB9B98_mC1819E32BA7EB2E3EB818E607F900E5A2858A2EA(L_5, InputSystem_RegisterLayoutMatcher_TisXRHMD_t2AB69188B210850F78044E5288C17FD173DB9B98_mC1819E32BA7EB2E3EB818E607F900E5A2858A2EA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void YYSX.YYSXLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXLoader__ctor_m94B97601D7020E27613D53950877EE2584CA47E1 (YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0* __this, const RuntimeMethod* method) 
{
	{
		XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699(__this, NULL);
		return;
	}
}
// System.Void YYSX.YYSXLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXLoader__cctor_mCAFC7EB04A339A1EE4E28779338AAA5D8EC12E19 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_0 = (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*)il2cpp_codegen_object_new(List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD(L_0, List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_5), (void*)L_0);
		// static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* L_1 = (List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4*)il2cpp_codegen_object_new(List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773(L_1, List_1__ctor_m3E15C72C5BBB246B014CD4F0B141BD78A648B773_RuntimeMethod_var);
		((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_DisplaySubsystemDescriptors_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_DisplaySubsystemDescriptors_6), (void*)L_1);
		// static List<XRHandSubsystemDescriptor> s_HandSubsystemDescriptors = new List<XRHandSubsystemDescriptor>();
		List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* L_2 = (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*)il2cpp_codegen_object_new(List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E(L_2, List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var);
		((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_HandSubsystemDescriptors_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_StaticFields*)il2cpp_codegen_static_fields_for(YYSXLoader_t83D91008AFDC6314301FF9C9695095DD37AA92E0_il2cpp_TypeInfo_var))->___s_HandSubsystemDescriptors_7), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void YYSX.YYSXLoader/InputLayoutLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader__cctor_mA0A4B2CC53AB8D2BA029C676DA6B5BE6117FC3A2 (const RuntimeMethod* method) 
{
	{
		// RegisterInputLayouts();
		InputLayoutLoader_RegisterInputLayouts_mE447F2C597FE3B5F1F07B50AD9279B34DD5EE085(NULL);
		// }
		return;
	}
}
// System.Void YYSX.YYSXLoader/InputLayoutLoader::RegisterInputLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputLayoutLoader_RegisterInputLayouts_mE447F2C597FE3B5F1F07B50AD9279B34DD5EE085 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E789C4ECFB31D4E381088794F20E4210B932807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA2F05C66F010A20B792D1735E78B6476359DB3);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InputSystem.RegisterLayout<HandLeftLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX LHand"));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_1;
		L_1 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_0, _stringLiteral3E789C4ECFB31D4E381088794F20E4210B932807, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B((String_t*)NULL, L_2, InputSystem_RegisterLayout_TisHandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795_m489BBB05634E6CFCF18CA48F78BE2583A381BB7B_RuntimeMethod_var);
		// InputSystem.RegisterLayout<HandRightLayout>(matches: new InputDeviceMatcher().WithProduct("YYSX RHand"));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_3 = (&V_0);
		il2cpp_codegen_initobj(L_3, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_4;
		L_4 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_3, _stringLiteralBBA2F05C66F010A20B792D1735E78B6476359DB3, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD((String_t*)NULL, L_5, InputSystem_RegisterLayout_TisHandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323_m715136F5A5D1D0AA91A5839212A8A23F591D85AD_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// YYSX.YYSXSettings/StereoRenderingModeAndroid YYSX.YYSXSettings::get_stereoRenderingModeAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YYSXSettings_get_stereoRenderingModeAndroid_m23E1B25F6362C8237B0E41F62DD337AFBD20A627 (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_StereoRenderingModeAndroid; }
		int32_t L_0 = __this->___m_StereoRenderingModeAndroid_5;
		return L_0;
	}
}
// System.Void YYSX.YYSXSettings::set_stereoRenderingModeAndroid(YYSX.YYSXSettings/StereoRenderingModeAndroid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXSettings_set_stereoRenderingModeAndroid_mD822E4D48B0DF246D1F51859793F05E64B4442E5 (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_StereoRenderingModeAndroid = value; }
		int32_t L_0 = ___0_value;
		__this->___m_StereoRenderingModeAndroid_5 = L_0;
		// set { m_StereoRenderingModeAndroid = value; }
		return;
	}
}
// System.Boolean YYSX.YYSXSettings::get_ActiveHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YYSXSettings_get_ActiveHand_m22A417E63ECBDC95D7F8381662BE689D30C6C5F8 (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_ActiveHand; }
		bool L_0 = __this->___m_ActiveHand_6;
		return L_0;
	}
}
// System.Void YYSX.YYSXSettings::set_ActiveHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXSettings_set_ActiveHand_m0125F9C6F6A9739AFE1797DB5D4224883DB1C797 (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_ActiveHand = value; }
		bool L_0 = ___0_value;
		__this->___m_ActiveHand_6 = L_0;
		// set { m_ActiveHand = value; }
		return;
	}
}
// System.Void YYSX.YYSXSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXSettings_Awake_mFBA09D198C7204545385C38AE76071522FC33068 (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_RuntimeInstance = this;
		((YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_StaticFields*)il2cpp_codegen_static_fields_for(YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_il2cpp_TypeInfo_var))->___s_RuntimeInstance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_StaticFields*)il2cpp_codegen_static_fields_for(YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F_il2cpp_TypeInfo_var))->___s_RuntimeInstance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void YYSX.YYSXSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXSettings__ctor_m1DA03FC6D0923C972780CF3AB8DDB815BC327846 (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_istracked_m4E3ECF81CC939716454FD18C3B1D6995774D5495_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl istracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CistrackedU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CistrackedU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone0_m698A2240EC7F9E8AF223D5DA41C2051DE1D341EC_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone0 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone0U3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone0U3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone1_m68693D0F945FB92FC9DF2A4FE60697BEEB6476FC_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone1 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone1U3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone1U3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone2_m66DD79FCD29789C39F8F093C18BCF793E6A653CD_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone2 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone2U3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone2U3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone3_m971AE8E244DAD916423F5ED7BB46026044028304_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone3 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone3U3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone3U3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone4_mDF5671C0F0C644BF4DE02D548426452CAAE50D79_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone4 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone4U3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone4U3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone5_m374BEE82342B1923270054272DD05F2E79A5D7A3_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone5 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone5U3Ek__BackingField_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone5U3Ek__BackingField_50), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone6_m4A40ACBA02DCAB0EF0EC1AC3B69D57C927C91E7B_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone6 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone6U3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone6U3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone7_m12D4E790A7EAFAA2891B4E6CAFDDBF3CD0F4CDE9_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone7 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone7U3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone7U3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone8_m861C8A7486A69C00D6DCC17E5351A3570DFD7AEA_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone8 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone8U3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone8U3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone9_m24149E40574FC541EEDE4690F9D9AD14E1F52741_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone9 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone9U3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone9U3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone10_m46F780D4CC45E53BB3F5EC925892A5D480BE613C_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone10 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone10U3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone10U3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone11_m73CD58E9ED78DF0520F9AAA0D5CF9BDA18A46E4B_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone11 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone11U3Ek__BackingField_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone11U3Ek__BackingField_56), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone12_m3CD8218527DE2F4388F33B41E18B11B03C0DCE12_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone12 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone12U3Ek__BackingField_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone12U3Ek__BackingField_57), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone13_mDE7808BB7F7F26B4BEC8C299653FD9DA729087F1_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone13 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone13U3Ek__BackingField_58 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone13U3Ek__BackingField_58), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone14_mB6BDF00557FF2B320FDDD64D8DDA8A42A037FE93_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone14 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone14U3Ek__BackingField_59 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone14U3Ek__BackingField_59), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone15_m373A47EE11EC10DB3B1DC7F8389091E38CD2E31C_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone15 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone15U3Ek__BackingField_60 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone15U3Ek__BackingField_60), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone16_mBDA3073BAA9E48A778135FE65F4A8B04C694A5ED_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone16 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone16U3Ek__BackingField_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone16U3Ek__BackingField_61), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone17_mEF3FAF72F8E5E77C9ADB4B929BD703DA761C88E5_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone17 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone17U3Ek__BackingField_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone17U3Ek__BackingField_62), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone18_m61AB2BA606B656899FBAC00611263CF3FAF4BC94_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone18 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone18U3Ek__BackingField_63 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone18U3Ek__BackingField_63), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone19_m9B4C97689F1EFC4BCCA5B7590C6525CFD45AB35E_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone19 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone19U3Ek__BackingField_64 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone19U3Ek__BackingField_64), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandLeftLayout_set_bone20_mF0A9DAFCBEB6EAFA16B005A7B8B5F8F09AA08BA0_inline (HandLeftLayout_t6F104ED9EE364C901AC7EB6EEED32200B7A09795* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone20 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone20U3Ek__BackingField_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone20U3Ek__BackingField_65), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_istracked_m5930F4BC79969752FCDCC5F7D6E60F14A33721AA_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl istracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CistrackedU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CistrackedU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone0_mDEC7956D07DA7944342913C919E203F08FA98C25_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone0 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone0U3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone0U3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone1_m2C19165B7F4FDA884FD1554A70909CC2DBC3B7ED_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone1 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone1U3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone1U3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone2_m6D5E85096FF6783730C1AC2F1DE013CBD6AA9284_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone2 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone2U3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone2U3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone3_m763AC6EB37C95A9D9C7923FB0758649D9C650098_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone3 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone3U3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone3U3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone4_mE5FA05A9A61B21D6F01DDFBFA18B8E6C969F2B02_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone4 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone4U3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone4U3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone5_m02AC66DEF88772BE28269D944F377CF5F00E5613_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone5 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone5U3Ek__BackingField_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone5U3Ek__BackingField_50), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone6_m828B11C23FEB2C4932856319CBBC87DF57C1409D_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone6 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone6U3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone6U3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone7_mE7AB03760096449D6427A0DF0725B64472935098_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone7 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone7U3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone7U3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone8_mF467CF4550B31F032729E88BFE24B5053C13562D_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone8 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone8U3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone8U3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone9_mAE5E0865834541677EC097C52E7BD4B1E444F965_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone9 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone9U3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone9U3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone10_m8101AE149E6E2EC45E692EFECD0B43CD9D656638_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone10 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone10U3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone10U3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone11_m435E0F72211079F07B400C86A6F3429414E55508_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone11 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone11U3Ek__BackingField_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone11U3Ek__BackingField_56), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone12_m92035C2CEB6F8ADDD281DA99353919B686C96CFD_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone12 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone12U3Ek__BackingField_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone12U3Ek__BackingField_57), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone13_mB6AEC69246B7CFAF5C8E7A22B9CD6191F5DE5965_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone13 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone13U3Ek__BackingField_58 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone13U3Ek__BackingField_58), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone14_mBA1C8BE61224D1CD57F1E7654A64B5A95F873155_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone14 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone14U3Ek__BackingField_59 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone14U3Ek__BackingField_59), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone15_m9258A036B670A575367E4B9938E70B698658CFDE_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone15 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone15U3Ek__BackingField_60 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone15U3Ek__BackingField_60), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone16_mE267EE200949ABD2C81C9EB196092EC483B6A1B4_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone16 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone16U3Ek__BackingField_61 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone16U3Ek__BackingField_61), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone17_m09DEC41D5D8A7A0CEF8EA0707C96BFBB93BC53B1_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone17 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone17U3Ek__BackingField_62 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone17U3Ek__BackingField_62), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone18_mAD9B1B49E040DD9FBA915B6740CF718F8CFD4CCF_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone18 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone18U3Ek__BackingField_63 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone18U3Ek__BackingField_63), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone19_mAC93F0827D5636B0B5DD75DCB5D347720E29F28B_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone19 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone19U3Ek__BackingField_64 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone19U3Ek__BackingField_64), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandRightLayout_set_bone20_m2315F29A103F450BA54052B36058AB472E35F168_inline (HandRightLayout_tA3A02B9476A20D9733AC28307648341F33A75323* __this, BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoneControl bone20 { get; private set; }
		BoneControl_tB93A4416E69E53A15E6EC86656A57EDF8596F1DC* L_0 = ___0_value;
		__this->___U3Cbone20U3Ek__BackingField_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cbone20U3Ek__BackingField_65), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool YYSXSettings_get_ActiveHand_m22A417E63ECBDC95D7F8381662BE689D30C6C5F8_inline (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_ActiveHand; }
		bool L_0 = __this->___m_ActiveHand_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemDescriptorWithProvider_get_id_m9E92FDF45FE9BFB0B28C2AE3EFE475998D01BBC7_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t YYSXSettings_get_stereoRenderingModeAndroid_m23E1B25F6362C8237B0E41F62DD337AFBD20A627_inline (YYSXSettings_t5C005DC5E1A0762DABB6680EABC2BC5729B9CC7F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_StereoRenderingModeAndroid; }
		int32_t L_0 = __this->___m_StereoRenderingModeAndroid_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CsubsystemDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
