#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF;
// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997;
// System.Collections.Generic.Dictionary`2<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>
struct Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>
struct Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Vector3>
struct Dictionary_2_t3709459C97DA2AA4D725799EA931633A015BF5CD;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>
struct Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>
struct Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEqualityComparer`1<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint>
struct IEqualityComparer_1_tB0F05CB7987941AF32043B4F66642439040F5958;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Hands.XRHandJointID>
struct IEqualityComparer_1_tBCE662B9A469BC8D9374D903C8983D5252C3B6EE;
// System.Collections.Generic.Dictionary`2/KeyCollection<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>
struct KeyCollection_t8142656ED3591E64C8DC93652CCEC72CC13FDF46;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>
struct KeyCollection_t86C230BC95B3D7997F455C67FA753E531AED2239;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>
struct KeyCollection_t4E6558DA2DED91455BC0A89EA547EA8C1B7FF64E;
// System.Collections.Generic.List`1<UnityEngine.XR.Hands.Processing.IXRHandProcessor>
struct List_1_t8463D6E8766F823573C7FF81CA9AC38D1F351FFF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6;
// System.Collections.Generic.Dictionary`2/ValueCollection<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>
struct ValueCollection_t9D1B35E9A622019EA480D30029FB6880B7FDF0C5;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>
struct ValueCollection_tE700BD5AC157E8C250EDE5D55B9227D9BE7EE7EC;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>
struct ValueCollection_t0464DD7571EAC96B91E97CA4B9D23C8568F7550A;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.Dictionary`2/Entry<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>[]
struct EntryU5BU5D_tABB6D3B6D3C5254369AB12232E077C84E039DA21;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>[]
struct EntryU5BU5D_tA46B1898DC7282F13E93B192553616E284E267E3;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>[]
struct EntryU5BU5D_tA2C35CCA168C63F9163047468F622AD611701C52;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// UnityEngine.InputSystem.XR.Bone[]
struct BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Hands.XRHandJoint[]
struct XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor[]
struct XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos
struct IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996;
// YYSXXRHandProvider
struct YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3;
// YYSXXRHandSubsystem
struct YYSXXRHandSubsystem_tF19E6A916E6C27C5882D97D23D85CB559374943C;
// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand
struct ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268;
// YYSXXRHandProvider/HandConstPose
struct HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3;

IL2CPP_EXTERN_C RuntimeClass* BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____A413127E7EAA54256873C260ACAC93138BD34046FECEDBB593E0EB2CF15DDC85_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____BBF9BCB85F75C2A8B2351F43D6A028BD350E0590296B412CB5BC0AEE79D96F68_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____E763C5D583CB9469527FD8F482FF5336F1B90F3FFE51C0CEC1F7F2A8E06721FC_2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7623BBAC3BDC8A420870D55247FCEBDD845BF750;
IL2CPP_EXTERN_C String_t* _stringLiteral82C81F01B2F575C97F6922EEB987978C0701F13F;
IL2CPP_EXTERN_C String_t* _stringLiteral93A34C38780F487E3E486C5A42FED7CB99981D51;
IL2CPP_EXTERN_C String_t* _stringLiteral93E796ED5F2DD336E45B3498B8C28A66B05155D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19;
IL2CPP_EXTERN_C String_t* _stringLiteralDA3478B1311914C212C0CBC6D456CDDA65971CFA;
IL2CPP_EXTERN_C String_t* _stringLiteralF5E365E227D20DBCC0A994276D21EED77B4792F7;
IL2CPP_EXTERN_C String_t* _stringLiteralF94265966A0D048725B45D65CB72985D271D2807;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4054BB7F0E3A447F640C935E2704588713D2AE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7EC4516AA5B9F5C34ADC8E7A650F6710EB1FB8BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFF93C867D0830AA528B72C49078195A83853EF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HandJoint_tDBBD10CFE7ACC82A94F184E1D2CC5AE59C6DA43C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* YYSXXRHandSubsystem_tF19E6A916E6C27C5882D97D23D85CB559374943C_0_0_0_var;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tAEFA04B5ACB3D5FEB870E8F534E9943857E18808 
{
};

// System.Collections.Generic.Dictionary`2<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>
struct Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tABB6D3B6D3C5254369AB12232E077C84E039DA21* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t8142656ED3591E64C8DC93652CCEC72CC13FDF46* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9D1B35E9A622019EA480D30029FB6880B7FDF0C5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>
struct Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA46B1898DC7282F13E93B192553616E284E267E3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t86C230BC95B3D7997F455C67FA753E531AED2239* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE700BD5AC157E8C250EDE5D55B9227D9BE7EE7EC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>
struct Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA2C35CCA168C63F9163047468F622AD611701C52* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4E6558DA2DED91455BC0A89EA547EA8C1B7FF64E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0464DD7571EAC96B91E97CA4B9D23C8568F7550A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8  : public RuntimeObject
{
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// StringExtensions
struct StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813  : public RuntimeObject
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
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

// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand
struct ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos> SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::jointLeftPoses
	Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E* ___jointLeftPoses_3;
	// System.Collections.Generic.Dictionary`2<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos> SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::jointRightPoses
	Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E* ___jointRightPoses_4;
};

// YYSXXRHandProvider/HandConstPose
struct HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3  : public RuntimeObject
{
	// YYSXXRHandProvider/HandConstPose/ConstType YYSXXRHandProvider/HandConstPose::Consttype
	int32_t ___Consttype_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion> YYSXXRHandProvider/HandConstPose::constRotation
	Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* ___constRotation_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3> YYSXXRHandProvider/HandConstPose::constPosition
	Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F* ___constPosition_2;
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

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct __StaticArrayInitTypeSizeU3D2048_t5292ADAAD9E6961D2735CE8D313EADAA3D666399 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t5292ADAAD9E6961D2735CE8D313EADAA3D666399__padding[2048];
	};
};

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 
{
	// System.String UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
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

// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos
struct IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843  : public RuntimeObject
{
	// UnityEngine.Vector3 SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996  : public SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.TypedReference
struct TypedReference_tF20A82297BED597FD80BDA0E41F74746B0FD642B 
{
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___type_0;
	// System.IntPtr System.TypedReference::Value
	intptr_t ___Value_1;
	// System.IntPtr System.TypedReference::Type
	intptr_t ___Type_2;
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

// UnityEngine.XR.Hands.XRHandJoint
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	// System.Int32 UnityEngine.XR.Hands.XRHandJoint::m_IdAndHandedness
	int32_t ___m_IdAndHandedness_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHandJoint::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Single UnityEngine.XR.Hands.XRHandJoint::m_Radius
	float ___m_Radius_2;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_LinearVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity_3;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_4;
	// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::m_TrackingState
	int32_t ___m_TrackingState_5;
};

// YYSXXRHandProvider
struct YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3  : public XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996
{
	// UnityEngine.XR.Hands.XRHandJoint[] YYSXXRHandProvider::xrHandJoints_Left
	XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* ___xrHandJoints_Left_3;
	// UnityEngine.XR.Hands.XRHandJoint[] YYSXXRHandProvider::xrHandJoints_Right
	XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* ___xrHandJoints_Right_4;
	// System.Single[] YYSXXRHandProvider::handsData
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___handsData_5;
	// System.Single[] YYSXXRHandProvider::handsKey
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___handsKey_6;
	// YYSXXRHandProvider/HandConstPose YYSXXRHandProvider::handConstPose_Left
	HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* ___handConstPose_Left_7;
	// YYSXXRHandProvider/HandConstPose YYSXXRHandProvider::handConstPose_Right
	HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* ___handConstPose_Right_8;
	// System.Single[] YYSXXRHandProvider::DataBothRelease
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___DataBothRelease_9;
	// System.Single[] YYSXXRHandProvider::DataBothRelease_21
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___DataBothRelease_21_10;
	// System.Single[] YYSXXRHandProvider::DataBothRelease_21_2
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___DataBothRelease_21_2_11;
	// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand YYSXXRHandProvider::leftHand
	ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268* ___leftHand_12;
	// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand YYSXXRHandProvider::rightHand
	ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268* ___rightHand_13;
	// UnityEngine.Quaternion[] YYSXXRHandProvider::jointOrientationsOut
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___jointOrientationsOut_14;
	// UnityEngine.Quaternion[] YYSXXRHandProvider::jointOrientationsOutRight
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___jointOrientationsOutRight_15;
	// UnityEngine.Vector3[] YYSXXRHandProvider::jointPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___jointPositions_16;
	// UnityEngine.Vector3[] YYSXXRHandProvider::jointPositionsRight
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___jointPositionsRight_17;
	// UnityEngine.InputSystem.XR.Bone[] YYSXXRHandProvider::bones_left
	BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* ___bones_left_18;
	// UnityEngine.InputSystem.XR.Bone[] YYSXXRHandProvider::bones_right
	BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* ___bones_right_19;
	// UnityEngine.InputSystem.InputAction[] YYSXXRHandProvider::boneActions_left
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___boneActions_left_20;
	// UnityEngine.InputSystem.InputAction[] YYSXXRHandProvider::boneActions_right
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___boneActions_right_21;
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

// YYSXXRHandSubsystem
struct YYSXXRHandSubsystem_tF19E6A916E6C27C5882D97D23D85CB559374943C  : public XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>

// System.Collections.Generic.Dictionary`2<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::A413127E7EAA54256873C260ACAC93138BD34046FECEDBB593E0EB2CF15DDC85
	__StaticArrayInitTypeSizeU3D2048_t5292ADAAD9E6961D2735CE8D313EADAA3D666399 ___A413127E7EAA54256873C260ACAC93138BD34046FECEDBB593E0EB2CF15DDC85_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::BBF9BCB85F75C2A8B2351F43D6A028BD350E0590296B412CB5BC0AEE79D96F68
	__StaticArrayInitTypeSizeU3D2048_t5292ADAAD9E6961D2735CE8D313EADAA3D666399 ___BBF9BCB85F75C2A8B2351F43D6A028BD350E0590296B412CB5BC0AEE79D96F68_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::E763C5D583CB9469527FD8F482FF5336F1B90F3FFE51C0CEC1F7F2A8E06721FC
	__StaticArrayInitTypeSizeU3D2048_t5292ADAAD9E6961D2735CE8D313EADAA3D666399 ___E763C5D583CB9469527FD8F482FF5336F1B90F3FFE51C0CEC1F7F2A8E06721FC_2;
};

// <PrivateImplementationDetails>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// StringExtensions
struct StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields
{
	// System.Reflection.Assembly StringExtensions::XRHandAssembly
	Assembly_t* ___XRHandAssembly_0;
	// System.Reflection.FieldInfo StringExtensions::m_Pose_fieldInfo
	FieldInfo_t* ___m_Pose_fieldInfo_1;
	// UnityEngine.Pose StringExtensions::tempPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___tempPose_2;
};

// StringExtensions

// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand
struct ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_StaticFields
{
	// System.Int32 SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::mLeft
	int32_t ___mLeft_0;
	// System.Int32 SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::mRight
	int32_t ___mRight_1;
	// System.Int32 SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::jointCount
	int32_t ___jointCount_2;
};

// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand

// YYSXXRHandProvider/HandConstPose

// YYSXXRHandProvider/HandConstPose

// Unity.Collections.NativeArray`1<System.Boolean>

// Unity.Collections.NativeArray`1<System.Boolean>

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// UnityEngine.InputSystem.XR.Bone

// UnityEngine.InputSystem.XR.Bone

// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos
struct IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_StaticFields
{
	// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos::<ZeroIdentity>k__BackingField
	IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843* ___U3CZeroIdentityU3Ek__BackingField_2;
};

// SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider

// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.TypedReference

// System.TypedReference

// UnityEngine.XR.Hands.XRHandJoint

// UnityEngine.XR.Hands.XRHandJoint

// YYSXXRHandProvider
struct YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_StaticFields
{
	// System.String YYSXXRHandProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor> YYSXXRHandProvider::s_HandSubsystemDescriptors
	List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* ___s_HandSubsystemDescriptors_2;
};

// YYSXXRHandProvider

// UnityEngine.XR.Hands.XRHandSubsystem

// UnityEngine.XR.Hands.XRHandSubsystem

// YYSXXRHandSubsystem

// YYSXXRHandSubsystem
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.Hands.XRHandJoint[]
struct XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1  : public RuntimeArray
{
	ALIGN_FIELD (8) XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 m_Items[1];

	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.InputSystem.XR.Bone[]
struct BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1  : public RuntimeArray
{
	ALIGN_FIELD (8) Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 m_Items[1];

	inline Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810  : public RuntimeArray
{
	ALIGN_FIELD (8) InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* m_Items[1];

	inline InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::CopyFrom(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m024152B6A0E61E4DCF79A00208CE26AB9D926F75_gshared (Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E* __this, int32_t ___0_key, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE8C9C999DF998EB2D5160062A0571F916B34133A_gshared (Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m860F830B163E2EC44E35E6795C16F3B72ED4D1F6_gshared (Dictionary_2_t3709459C97DA2AA4D725799EA931633A015BF5CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;

// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB (Assembly_t* ___0_left, Assembly_t* ___1_right, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74 (FieldInfo_t* ___0_left, FieldInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___0_left, FieldInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String YYSXXRHandProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YYSXXRHandProvider_get_id_mF01BB6789A46A28E6D62067087A410D069D5CA02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::Register(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor_Register_m9C6273F6EAA053F684929058B9A1113261DFF95F (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void YYSXXRHandProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider__ctor_mDA39E3B5C65BF2335CBECAAC0DF4C36CDA9BE256 (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Hands.XRHandJointIDUtility::ToIndex(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02 (int32_t ___0_jointId, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void YYSXXRHandProvider::GetHandsData(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_GetHandsData_m05F241DC540980A19738F8029C19C6C464F020C2 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_handsData, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_handsKey, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags YYSXXRHandProvider::UpdateData(UnityEngine.XR.Hands.Handedness,System.Single[],Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YYSXXRHandProvider_UpdateData_m74B536CE061332BA3463721A1DAFE75212076CA9 (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, int32_t ___0_handedness, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_handsData, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___2_handJointArray, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___3_rootPose, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::FromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility::CreateJoint(UnityEngine.XR.Hands.Handedness,UnityEngine.XR.Hands.XRHandJointTrackingState,UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Pose,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHandProviderUtility_CreateJoint_m821C313C0A76868D0E5BB50368DD0EF240237B75 (int32_t ___0_handedness, int32_t ___1_trackingState, int32_t ___2_id, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___3_pose, float ___4_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_linearVelocity, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_angularVelocity, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.XR.Bone::set_position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_position_mD10FCFFA910DDC3EB267E78CC0CDB5078F16AA70_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.XR.Bone::set_rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_rotation_m6F162397B2F4551E50B2FA6E01103FEBD18A03D0_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Bone::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bone_get_position_mD2401503DE95F0EDF1521E67171506930A5AD1C0_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Bone::get_rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Bone_get_rotation_m53FF9F3221CF5388B6630863ECF14029AA96047F_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJoint StringExtensions::TrySetPose(UnityEngine.XR.Hands.XRHandJoint,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 StringExtensions_TrySetPose_m31DAF4601E4CEBB21CE0C27422DD8CBB8E1801AF (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_xrHandJoint, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___1_xrHandJointold, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_q, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::CopyFrom(T[])
inline void NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*, XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*, const RuntimeMethod*))NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B_gshared)(__this, ___0_array, method);
}
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void YYSXXRHandProvider/HandConstPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstPose__ctor_mB5162041825230F8D96FDFE1C1835EC987B6D3A5 (HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD (Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* __this, int32_t ___0_key, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Dictionary_2_Add_m024152B6A0E61E4DCF79A00208CE26AB9D926F75_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ivHand__ctor_mF79C7AE947163673CCB5CAE455C1850706E15A05 (ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemProvider__ctor_m404D9375A7F7A0C10412F8E63AA11453C0A6EFDD (XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Quaternion>::.ctor()
inline void Dictionary_2__ctor_m7EC4516AA5B9F5C34ADC8E7A650F6710EB1FB8BA (Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554*, const RuntimeMethod*))Dictionary_2__ctor_mE8C9C999DF998EB2D5160062A0571F916B34133A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Vector3>::.ctor()
inline void Dictionary_2__ctor_m4054BB7F0E3A447F640C935E2704588713D2AE77 (Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F*, const RuntimeMethod*))Dictionary_2__ctor_m860F830B163E2EC44E35E6795C16F3B72ED4D1F6_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem__ctor_m426A5EE809B86700F493D593F066DCF77FB39ABA (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// System.Void SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IvJointPos__ctor_mF6D01FAB29705C859EBEBD62CA096EC11A18CBB8 (IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.HandJoint,SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos>::.ctor()
inline void Dictionary_2__ctor_mFF93C867D0830AA528B72C49078195A83853EF1E (Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yyss_unityxrprovider_impl_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetHandsData(float*, float*);
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
// UnityEngine.XR.Hands.XRHandJoint StringExtensions::TrySetPose(UnityEngine.XR.Hands.XRHandJoint,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 StringExtensions_TrySetPose_m31DAF4601E4CEBB21CE0C27422DD8CBB8E1801AF (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___0_xrHandJoint, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___1_xrHandJointold, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_p, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___3_q, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82C81F01B2F575C97F6922EEB987978C0701F13F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E796ED5F2DD336E45B3498B8C28A66B05155D4);
		s_Il2CppMethodInitialized = true;
	}
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_0 = NULL;
	int32_t V_1 = 0;
	Assembly_t* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Assembly_t* L_0 = ((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___XRHandAssembly_0;
		bool L_1;
		L_1 = Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB(L_0, (Assembly_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2;
		L_2 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_2);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_3;
		L_3 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0053;
	}

IL_001c:
	{
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Assembly_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Assembly_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_8);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_9, L_11, NULL);
		V_3 = L_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_3;
		if (!L_13)
		{
			goto IL_004f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral82C81F01B2F575C97F6922EEB987978C0701F13F, NULL);
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Assembly_t* L_18 = V_2;
		((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___XRHandAssembly_0 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___XRHandAssembly_0), (void*)L_18);
	}

IL_004f:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0053:
	{
		int32_t L_20 = V_1;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_001c;
		}
	}

IL_0059:
	{
		Assembly_t* L_22 = ((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___XRHandAssembly_0;
		bool L_23;
		L_23 = Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB(L_22, (Assembly_t*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783));
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_24 = V_4;
		return L_24;
	}

IL_0071:
	{
		FieldInfo_t* L_25 = ((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___m_Pose_fieldInfo_1;
		bool L_26;
		L_26 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_25, (FieldInfo_t*)NULL, NULL);
		if (!L_26)
		{
			goto IL_009a;
		}
	}
	{
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_27 = ___0_xrHandJoint;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_28 = L_27;
		RuntimeObject* L_29 = Box(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var, &L_28);
		Type_t* L_30;
		L_30 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_29, NULL);
		NullCheck(L_30);
		FieldInfo_t* L_31;
		L_31 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_30, _stringLiteral93E796ED5F2DD336E45B3498B8C28A66B05155D4, ((int32_t)36));
		((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___m_Pose_fieldInfo_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___m_Pose_fieldInfo_1), (void*)L_31);
	}

IL_009a:
	{
		FieldInfo_t* L_32 = ((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___m_Pose_fieldInfo_1;
		bool L_33;
		L_33 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_32, (FieldInfo_t*)NULL, NULL);
		if (!L_33)
		{
			goto IL_00da;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___2_p;
		(&((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___tempPose_2)->___position_0 = L_34;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = ___3_q;
		(&((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___tempPose_2)->___rotation_1 = L_35;
		FieldInfo_t* L_36 = ((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___m_Pose_fieldInfo_1;
		TypedReference_tF20A82297BED597FD80BDA0E41F74746B0FD642B L_37 = { 0 };
		L_37.___type_0 = { reinterpret_cast<intptr_t>(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_0_0_0_var) };
		L_37.___Value_1 = reinterpret_cast<intptr_t>((&___0_xrHandJoint));
		L_37.___Type_2 = reinterpret_cast<intptr_t>(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_38 = ((StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_StaticFields*)il2cpp_codegen_static_fields_for(StringExtensions_t73743EB633E1DCE640445D334CAD88A7B536C813_il2cpp_TypeInfo_var))->___tempPose_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_39 = L_38;
		RuntimeObject* L_40 = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_36);
		VirtualActionInvoker2< TypedReference_tF20A82297BED597FD80BDA0E41F74746B0FD642B, RuntimeObject* >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValueDirect(System.TypedReference,System.Object) */, L_36, (L_37), L_40);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_41 = ___0_xrHandJoint;
		return L_41;
	}

IL_00da:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783));
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_42 = V_4;
		return L_42;
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
// System.String YYSXXRHandProvider::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YYSXXRHandProvider_get_id_mF01BB6789A46A28E6D62067087A410D069D5CA02 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		String_t* L_0 = ((YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_StaticFields*)il2cpp_codegen_static_fields_for(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void YYSXXRHandProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider__cctor_m765E375EC94321C78F975E6628C02DBC3D560574 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* L_0 = (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*)il2cpp_codegen_object_new(List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E(L_0, List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var);
		((YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_StaticFields*)il2cpp_codegen_static_fields_for(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var))->___s_HandSubsystemDescriptors_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_StaticFields*)il2cpp_codegen_static_fields_for(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var))->___s_HandSubsystemDescriptors_2), (void*)L_0);
		((YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_StaticFields*)il2cpp_codegen_static_fields_for(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_1 = _stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19;
		Il2CppCodeGenWriteBarrier((void**)(&((YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_StaticFields*)il2cpp_codegen_static_fields_for(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_1), (void*)_stringLiteralB7C29AEC2550DB26254CA2FDF35FB2A22B6CBE19);
		return;
	}
}
// System.Void YYSXXRHandProvider::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_Register_m5C813CE962FE56888B76FB80A9543AFC38CC7B86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandSubsystem_tF19E6A916E6C27C5882D97D23D85CB559374943C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA3478B1311914C212C0CBC6D456CDDA65971CFA);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDA3478B1311914C212C0CBC6D456CDDA65971CFA, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81));
		il2cpp_codegen_runtime_class_init_inline(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = YYSXXRHandProvider_get_id_mF01BB6789A46A28E6D62067087A410D069D5CA02_inline(NULL);
		Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline((&V_0), L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline((&V_0), L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (YYSXXRHandSubsystem_tF19E6A916E6C27C5882D97D23D85CB559374943C_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline((&V_0), L_4, NULL);
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_5 = V_0;
		XRHandSubsystemDescriptor_Register_m9C6273F6EAA053F684929058B9A1113261DFF95F(L_5, NULL);
		YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* L_6 = (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3*)il2cpp_codegen_object_new(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		YYSXXRHandProvider__ctor_mDA39E3B5C65BF2335CBECAAC0DF4C36CDA9BE256(L_6, NULL);
		return;
	}
}
// System.Void YYSXXRHandProvider::GetHandLayout(Unity.Collections.NativeArray`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_GetHandLayout_mBF64B8DA1968361BD821756E79CD7C2C9B8DFB8B (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___0_handJointsInLayout, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(2, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_0, ((bool)1));
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(1, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_1, ((bool)1));
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(3, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_2, ((bool)1));
		int32_t L_3;
		L_3 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(4, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_3, ((bool)1));
		int32_t L_4;
		L_4 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(5, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_4, ((bool)1));
		int32_t L_5;
		L_5 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(6, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_5, ((bool)1));
		int32_t L_6;
		L_6 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(7, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_6, ((bool)1));
		int32_t L_7;
		L_7 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(8, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_7, ((bool)1));
		int32_t L_8;
		L_8 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)9), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_8, ((bool)1));
		int32_t L_9;
		L_9 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)10), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_9, ((bool)1));
		int32_t L_10;
		L_10 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)11), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_10, ((bool)1));
		int32_t L_11;
		L_11 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)12), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_11, ((bool)1));
		int32_t L_12;
		L_12 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)13), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_12, ((bool)1));
		int32_t L_13;
		L_13 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)14), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_13, ((bool)1));
		int32_t L_14;
		L_14 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)15), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_14, ((bool)1));
		int32_t L_15;
		L_15 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)16), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_15, ((bool)1));
		int32_t L_16;
		L_16 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)17), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_16, ((bool)1));
		int32_t L_17;
		L_17 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)18), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_17, ((bool)1));
		int32_t L_18;
		L_18 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)19), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_18, ((bool)1));
		int32_t L_19;
		L_19 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)20), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_19, ((bool)1));
		int32_t L_20;
		L_20 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)21), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_20, ((bool)1));
		int32_t L_21;
		L_21 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)22), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_21, ((bool)1));
		int32_t L_22;
		L_22 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)23), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_22, ((bool)1));
		int32_t L_23;
		L_23 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)24), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_23, ((bool)1));
		int32_t L_24;
		L_24 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)25), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_24, ((bool)1));
		int32_t L_25;
		L_25 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)26), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_25, ((bool)1));
		return;
	}
}
// System.Void YYSXXRHandProvider::GetHandsData(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_GetHandsData_m05F241DC540980A19738F8029C19C6C464F020C2 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_handsData, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_handsKey, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_yyss_unityxrprovider_impl_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("yyss_unityxrprovider_impl"), "GetHandsData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_handsData' to native representation
	float* ____0_handsData_marshaled = NULL;
	if (___0_handsData != NULL)
	{
		____0_handsData_marshaled = reinterpret_cast<float*>((___0_handsData)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___1_handsKey' to native representation
	float* ____1_handsKey_marshaled = NULL;
	if (___1_handsKey != NULL)
	{
		____1_handsKey_marshaled = reinterpret_cast<float*>((___1_handsKey)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_yyss_unityxrprovider_impl_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetHandsData)(____0_handsData_marshaled, ____1_handsKey_marshaled);
	#else
	il2cppPInvokeFunc(____0_handsData_marshaled, ____1_handsKey_marshaled);
	#endif

}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags YYSXXRHandProvider::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YYSXXRHandProvider_TryUpdateHands_mC107AAF155A2F70188646F1BBEE946A14B1BCEAC (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, int32_t ___0_updateType, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_leftHandRootPose, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___2_leftHandJoints, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___3_rightHandRootPose, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___4_rightHandJoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0044;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___handsData_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___handsKey_6;
		il2cpp_codegen_runtime_class_init_inline(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		YYSXXRHandProvider_GetHandsData_m05F241DC540980A19738F8029C19C6C464F020C2(L_1, L_2, NULL);
		int32_t L_3 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___handsData_5;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_5 = ___2_leftHandJoints;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = ___1_leftHandRootPose;
		int32_t L_7;
		L_7 = YYSXXRHandProvider_UpdateData_m74B536CE061332BA3463721A1DAFE75212076CA9(__this, 1, L_4, L_5, L_6, NULL);
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)L_7));
		int32_t L_8 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___handsData_5;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_10 = ___4_rightHandJoints;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_11 = ___3_rightHandRootPose;
		int32_t L_12;
		L_12 = YYSXXRHandProvider_UpdateData_m74B536CE061332BA3463721A1DAFE75212076CA9(__this, 2, L_9, L_10, L_11, NULL);
		V_0 = ((int32_t)((int32_t)L_8|(int32_t)L_12));
		goto IL_006a;
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = __this->___DataBothRelease_21_2_11;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_15 = ___2_leftHandJoints;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_16 = ___1_leftHandRootPose;
		int32_t L_17;
		L_17 = YYSXXRHandProvider_UpdateData_m74B536CE061332BA3463721A1DAFE75212076CA9(__this, 1, L_14, L_15, L_16, NULL);
		V_0 = ((int32_t)((int32_t)L_13|(int32_t)L_17));
		int32_t L_18 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = __this->___DataBothRelease_21_2_11;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_20 = ___4_rightHandJoints;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_21 = ___3_rightHandRootPose;
		int32_t L_22;
		L_22 = YYSXXRHandProvider_UpdateData_m74B536CE061332BA3463721A1DAFE75212076CA9(__this, 2, L_19, L_20, L_21, NULL);
		V_0 = ((int32_t)((int32_t)L_18|(int32_t)L_22));
	}

IL_006a:
	{
		int32_t L_23 = V_0;
		return L_23;
	}
}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags YYSXXRHandProvider::UpdateData(UnityEngine.XR.Hands.Handedness,System.Single[],Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YYSXXRHandProvider_UpdateData_m74B536CE061332BA3463721A1DAFE75212076CA9 (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, int32_t ___0_handedness, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_handsData, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___2_handJointArray, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___3_rootPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7623BBAC3BDC8A420870D55247FCEBDD845BF750);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_handedness;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0260;
		}
	}
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_1 = __this->___xrHandJoints_Left_3;
		if (L_1)
		{
			goto IL_0060;
		}
	}
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_2 = (XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*)(XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*)SZArrayNew(XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___xrHandJoints_Left_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrHandJoints_Left_3), (void*)L_2);
		V_1 = 0;
		goto IL_005b;
	}

IL_0022:
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_3 = __this->___xrHandJoints_Left_3;
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_9;
		L_9 = XRHandProviderUtility_CreateJoint_m821C313C0A76868D0E5BB50368DD0EF240237B75(0, 2, L_5, L_6, (0.0f), L_7, L_8, NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_005b:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)26))))
		{
			goto IL_0022;
		}
	}

IL_0060:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___1_handsData;
		NullCheck(L_12);
		int32_t L_13 = 0;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((float)L_14) == ((float)(0.0f)))))
		{
			goto IL_0544;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = ___1_handsData;
		NullCheck(L_15);
		int32_t L_16 = 2;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((float)L_17) >= ((float)(26.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___1_handsData;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7623BBAC3BDC8A420870D55247FCEBDD845BF750, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		int32_t L_21 = V_0;
		return L_21;
	}

IL_0094:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)((int32_t)L_22|1));
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23|2));
		V_3 = 0;
		goto IL_01d5;
	}

IL_00a3:
	{
		int32_t L_24 = V_3;
		if (!L_24)
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)22))))
		{
			goto IL_011b;
		}
	}

IL_00ab:
	{
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_26 = __this->___bones_left_18;
		int32_t L_27 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = ___1_handsData;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_29, 3))));
		float L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = ___1_handsData;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_33, 3))));
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = ___1_handsData;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_37, 3))));
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), L_31, L_35, ((-L_39)), /*hidden argument*/NULL);
		Bone_set_position_mD10FCFFA910DDC3EB267E78CC0CDB5078F16AA70_inline((&V_4), L_40, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = ___1_handsData;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_42, 4)))), ((int32_t)78)));
		float L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ___1_handsData;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_46, 4)))), ((int32_t)78)));
		float L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = ___1_handsData;
		int32_t L_50 = V_3;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(6, ((int32_t)il2cpp_codegen_multiply(L_50, 4)))), ((int32_t)78)));
		float L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = ___1_handsData;
		int32_t L_54 = V_3;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_54, 4)))), ((int32_t)78)));
		float L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_57), ((-L_44)), ((-L_48)), L_52, L_56, /*hidden argument*/NULL);
		Bone_set_rotation_m6F162397B2F4551E50B2FA6E01103FEBD18A03D0_inline((&V_4), L_57, NULL);
		Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 L_58 = V_4;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01)L_58);
		goto IL_0186;
	}

IL_011b:
	{
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_59 = __this->___bones_left_18;
		int32_t L_60 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = ___1_handsData;
		int32_t L_62 = V_3;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_62, 3))));
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_65 = ___1_handsData;
		int32_t L_66 = V_3;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_66, 3))));
		float L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_69 = ___1_handsData;
		int32_t L_70 = V_3;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_70, 3))));
		float L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_73), L_64, L_68, L_72, /*hidden argument*/NULL);
		Bone_set_position_mD10FCFFA910DDC3EB267E78CC0CDB5078F16AA70_inline((&V_4), L_73, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_74 = ___1_handsData;
		int32_t L_75 = V_3;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_75, 4)))), ((int32_t)78)));
		float L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = ___1_handsData;
		int32_t L_79 = V_3;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_79, 4)))), ((int32_t)78)));
		float L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = ___1_handsData;
		int32_t L_83 = V_3;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(6, ((int32_t)il2cpp_codegen_multiply(L_83, 4)))), ((int32_t)78)));
		float L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_86 = ___1_handsData;
		int32_t L_87 = V_3;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_87, 4)))), ((int32_t)78)));
		float L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_90;
		memset((&L_90), 0, sizeof(L_90));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_90), L_77, L_81, L_85, L_89, /*hidden argument*/NULL);
		Bone_set_rotation_m6F162397B2F4551E50B2FA6E01103FEBD18A03D0_inline((&V_4), L_90, NULL);
		Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 L_91 = V_4;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01)L_91);
	}

IL_0186:
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_92 = __this->___xrHandJoints_Left_3;
		int32_t L_93 = V_3;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_94 = __this->___xrHandJoints_Left_3;
		int32_t L_95 = V_3;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_98 = __this->___xrHandJoints_Left_3;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_102 = __this->___bones_left_18;
		int32_t L_103 = V_3;
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Bone_get_position_mD2401503DE95F0EDF1521E67171506930A5AD1C0_inline(((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103))), NULL);
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_105 = __this->___bones_left_18;
		int32_t L_106 = V_3;
		NullCheck(L_105);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_107;
		L_107 = Bone_get_rotation_m53FF9F3221CF5388B6630863ECF14029AA96047F_inline(((L_105)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_106))), NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_108;
		L_108 = StringExtensions_TrySetPose_m31DAF4601E4CEBB21CE0C27422DD8CBB8E1801AF(L_97, L_101, L_104, L_107, NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783)L_108);
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_01d5:
	{
		int32_t L_110 = V_3;
		if ((((int32_t)L_110) < ((int32_t)((int32_t)26))))
		{
			goto IL_00a3;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_111 = ___3_rootPose;
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_112 = __this->___bones_left_18;
		NullCheck(L_112);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Bone_get_position_mD2401503DE95F0EDF1521E67171506930A5AD1C0_inline(((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		L_111->___position_0 = L_113;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_114 = ___3_rootPose;
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_115 = __this->___bones_left_18;
		NullCheck(L_115);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_116;
		L_116 = Bone_get_rotation_m53FF9F3221CF5388B6630863ECF14029AA96047F_inline(((L_115)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		L_114->___rotation_1 = L_116;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_117 = __this->___xrHandJoints_Left_3;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_118 = __this->___xrHandJoints_Left_3;
		NullCheck(L_118);
		int32_t L_119 = 0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_121 = __this->___xrHandJoints_Left_3;
		NullCheck(L_121);
		int32_t L_122 = 0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_124 = ___1_handsData;
		NullCheck(L_124);
		int32_t L_125 = ((int32_t)250);
		float L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_127), L_126, (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_128;
		L_128 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_129;
		L_129 = StringExtensions_TrySetPose_m31DAF4601E4CEBB21CE0C27422DD8CBB8E1801AF(L_120, L_123, L_127, L_128, NULL);
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(0), (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783)L_129);
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_130 = __this->___xrHandJoints_Left_3;
		NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B((&___2_handJointArray), L_130, NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B_RuntimeMethod_var);
		int32_t L_131 = V_0;
		return L_131;
	}

IL_0260:
	{
		int32_t L_132 = ___0_handedness;
		if ((!(((uint32_t)L_132) == ((uint32_t)2))))
		{
			goto IL_0544;
		}
	}
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_133 = __this->___xrHandJoints_Right_4;
		if (L_133)
		{
			goto IL_02c3;
		}
	}
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_134 = (XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*)(XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1*)SZArrayNew(XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___xrHandJoints_Right_4 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrHandJoints_Right_4), (void*)L_134);
		V_12 = 0;
		goto IL_02bd;
	}

IL_0281:
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_135 = __this->___xrHandJoints_Right_4;
		int32_t L_136 = V_12;
		int32_t L_137;
		L_137 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_138;
		L_138 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_2;
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = V_2;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_141;
		L_141 = XRHandProviderUtility_CreateJoint_m821C313C0A76868D0E5BB50368DD0EF240237B75(0, 2, L_137, L_138, (0.0f), L_139, L_140, NULL);
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_136), (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783)L_141);
		int32_t L_142 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_142, 1));
	}

IL_02bd:
	{
		int32_t L_143 = V_12;
		if ((((int32_t)L_143) < ((int32_t)((int32_t)26))))
		{
			goto IL_0281;
		}
	}

IL_02c3:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_144 = ___1_handsData;
		NullCheck(L_144);
		int32_t L_145 = ((int32_t)256);
		float L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		if ((!(((float)L_146) == ((float)(0.0f)))))
		{
			goto IL_0544;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_147 = ___1_handsData;
		NullCheck(L_147);
		int32_t L_148 = ((int32_t)258);
		float L_149 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		if ((!(((float)L_149) >= ((float)(26.0f)))))
		{
			goto IL_0303;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = ___1_handsData;
		NullCheck(L_150);
		String_t* L_151;
		L_151 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(((L_150)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)258)))), NULL);
		String_t* L_152;
		L_152 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7623BBAC3BDC8A420870D55247FCEBDD845BF750, L_151, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_152, NULL);
		int32_t L_153 = V_0;
		return L_153;
	}

IL_0303:
	{
		int32_t L_154 = V_0;
		V_0 = ((int32_t)((int32_t)L_154|4));
		int32_t L_155 = V_0;
		V_0 = ((int32_t)((int32_t)L_155|8));
		V_13 = 0;
		goto IL_04b8;
	}

IL_0313:
	{
		int32_t L_156 = V_13;
		if (!L_156)
		{
			goto IL_0320;
		}
	}
	{
		int32_t L_157 = V_13;
		if ((((int32_t)L_157) < ((int32_t)((int32_t)22))))
		{
			goto IL_03c5;
		}
	}

IL_0320:
	{
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_158 = __this->___bones_right_19;
		int32_t L_159 = V_13;
		il2cpp_codegen_initobj((&V_4), sizeof(Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = ___1_handsData;
		int32_t L_161 = V_13;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_161, 3)))), ((int32_t)256)));
		float L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_164 = ___1_handsData;
		int32_t L_165 = V_13;
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_165, 3)))), ((int32_t)256)));
		float L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_168 = ___1_handsData;
		int32_t L_169 = V_13;
		NullCheck(L_168);
		int32_t L_170 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_169, 3)))), ((int32_t)256)));
		float L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		memset((&L_172), 0, sizeof(L_172));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_172), L_163, L_167, ((-L_171)), /*hidden argument*/NULL);
		Bone_set_position_mD10FCFFA910DDC3EB267E78CC0CDB5078F16AA70_inline((&V_4), L_172, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_173 = ___1_handsData;
		int32_t L_174 = V_13;
		NullCheck(L_173);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_174, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_177 = ___1_handsData;
		int32_t L_178 = V_13;
		NullCheck(L_177);
		int32_t L_179 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_178, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_180 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_181 = ___1_handsData;
		int32_t L_182 = V_13;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(6, ((int32_t)il2cpp_codegen_multiply(L_182, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_185 = ___1_handsData;
		int32_t L_186 = V_13;
		NullCheck(L_185);
		int32_t L_187 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_186, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_189), ((-L_176)), ((-L_180)), L_184, L_188, /*hidden argument*/NULL);
		Bone_set_rotation_m6F162397B2F4551E50B2FA6E01103FEBD18A03D0_inline((&V_4), L_189, NULL);
		Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 L_190 = V_4;
		NullCheck(L_158);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(L_159), (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01)L_190);
		goto IL_0462;
	}

IL_03c5:
	{
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_191 = __this->___bones_right_19;
		int32_t L_192 = V_13;
		il2cpp_codegen_initobj((&V_4), sizeof(Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_193 = ___1_handsData;
		int32_t L_194 = V_13;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_194, 3)))), ((int32_t)256)));
		float L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_197 = ___1_handsData;
		int32_t L_198 = V_13;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_198, 3)))), ((int32_t)256)));
		float L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_201 = ___1_handsData;
		int32_t L_202 = V_13;
		NullCheck(L_201);
		int32_t L_203 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_202, 3)))), ((int32_t)256)));
		float L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_205;
		memset((&L_205), 0, sizeof(L_205));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_205), L_196, L_200, L_204, /*hidden argument*/NULL);
		Bone_set_position_mD10FCFFA910DDC3EB267E78CC0CDB5078F16AA70_inline((&V_4), L_205, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_206 = ___1_handsData;
		int32_t L_207 = V_13;
		NullCheck(L_206);
		int32_t L_208 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_207, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_210 = ___1_handsData;
		int32_t L_211 = V_13;
		NullCheck(L_210);
		int32_t L_212 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(5, ((int32_t)il2cpp_codegen_multiply(L_211, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_214 = ___1_handsData;
		int32_t L_215 = V_13;
		NullCheck(L_214);
		int32_t L_216 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(6, ((int32_t)il2cpp_codegen_multiply(L_215, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_218 = ___1_handsData;
		int32_t L_219 = V_13;
		NullCheck(L_218);
		int32_t L_220 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(3, ((int32_t)il2cpp_codegen_multiply(L_219, 4)))), ((int32_t)256))), ((int32_t)78)));
		float L_221 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_222;
		memset((&L_222), 0, sizeof(L_222));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_222), L_209, L_213, L_217, L_221, /*hidden argument*/NULL);
		Bone_set_rotation_m6F162397B2F4551E50B2FA6E01103FEBD18A03D0_inline((&V_4), L_222, NULL);
		Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 L_223 = V_4;
		NullCheck(L_191);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(L_192), (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01)L_223);
	}

IL_0462:
	{
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_224 = __this->___xrHandJoints_Right_4;
		int32_t L_225 = V_13;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_226 = __this->___xrHandJoints_Right_4;
		int32_t L_227 = V_13;
		NullCheck(L_226);
		int32_t L_228 = L_227;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_229 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_230 = __this->___xrHandJoints_Right_4;
		int32_t L_231 = V_13;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_234 = __this->___bones_right_19;
		int32_t L_235 = V_13;
		NullCheck(L_234);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_236;
		L_236 = Bone_get_position_mD2401503DE95F0EDF1521E67171506930A5AD1C0_inline(((L_234)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_235))), NULL);
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_237 = __this->___bones_right_19;
		int32_t L_238 = V_13;
		NullCheck(L_237);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_239;
		L_239 = Bone_get_rotation_m53FF9F3221CF5388B6630863ECF14029AA96047F_inline(((L_237)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_238))), NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_240;
		L_240 = StringExtensions_TrySetPose_m31DAF4601E4CEBB21CE0C27422DD8CBB8E1801AF(L_229, L_233, L_236, L_239, NULL);
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(L_225), (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783)L_240);
		int32_t L_241 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_241, 1));
	}

IL_04b8:
	{
		int32_t L_242 = V_13;
		if ((((int32_t)L_242) < ((int32_t)((int32_t)26))))
		{
			goto IL_0313;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_243 = ___3_rootPose;
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_244 = __this->___bones_right_19;
		NullCheck(L_244);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_245;
		L_245 = Bone_get_position_mD2401503DE95F0EDF1521E67171506930A5AD1C0_inline(((L_244)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		L_243->___position_0 = L_245;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_246 = ___3_rootPose;
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_247 = __this->___bones_right_19;
		NullCheck(L_247);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_248;
		L_248 = Bone_get_rotation_m53FF9F3221CF5388B6630863ECF14029AA96047F_inline(((L_247)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		L_246->___rotation_1 = L_248;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_249 = __this->___xrHandJoints_Right_4;
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_250 = __this->___xrHandJoints_Right_4;
		NullCheck(L_250);
		int32_t L_251 = 0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_252 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_253 = __this->___xrHandJoints_Right_4;
		NullCheck(L_253);
		int32_t L_254 = 0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_256 = ___1_handsData;
		NullCheck(L_256);
		int32_t L_257 = ((int32_t)506);
		float L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_259;
		memset((&L_259), 0, sizeof(L_259));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_259), L_258, (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_260;
		L_260 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_261;
		L_261 = StringExtensions_TrySetPose_m31DAF4601E4CEBB21CE0C27422DD8CBB8E1801AF(L_252, L_255, L_259, L_260, NULL);
		NullCheck(L_249);
		(L_249)->SetAt(static_cast<il2cpp_array_size_t>(0), (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783)L_261);
		XRHandJointU5BU5D_t194C7684C33D3688873DB8DB9B2A941566857EA1* L_262 = __this->___xrHandJoints_Right_4;
		NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B((&___2_handJointArray), L_262, NativeArray_1_CopyFrom_m878946A5CEF16CE0AE946F57F326740307E8603B_RuntimeMethod_var);
		int32_t L_263 = V_0;
		return L_263;
	}

IL_0544:
	{
		int32_t L_264 = V_0;
		return L_264;
	}
}
// System.Void YYSXXRHandProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_Start_mE80412EDDE6FD20F948BD63EEFCC2F584C6C737D (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5E365E227D20DBCC0A994276D21EED77B4792F7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralF5E365E227D20DBCC0A994276D21EED77B4792F7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_3 = (HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3*)il2cpp_codegen_object_new(HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		HandConstPose__ctor_mB5162041825230F8D96FDFE1C1835EC987B6D3A5(L_3, NULL);
		__this->___handConstPose_Left_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handConstPose_Left_7), (void*)L_3);
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_4 = (HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3*)il2cpp_codegen_object_new(HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HandConstPose__ctor_mB5162041825230F8D96FDFE1C1835EC987B6D3A5(L_4, NULL);
		__this->___handConstPose_Right_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handConstPose_Right_8), (void*)L_4);
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_5 = __this->___handConstPose_Left_7;
		NullCheck(L_5);
		L_5->___Consttype_0 = 0;
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_6 = __this->___handConstPose_Left_7;
		NullCheck(L_6);
		Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* L_7 = L_6->___constRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD(L_7, 7, L_9, Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD_RuntimeMethod_var);
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_10 = __this->___handConstPose_Left_7;
		NullCheck(L_10);
		Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* L_11 = L_10->___constRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (5.37099981f), (-15.3830004f), (23.4179993f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_12, NULL);
		NullCheck(L_11);
		Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD(L_11, ((int32_t)22), L_13, Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD_RuntimeMethod_var);
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_14 = __this->___handConstPose_Left_7;
		NullCheck(L_14);
		Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* L_15 = L_14->___constRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_16, NULL);
		NullCheck(L_15);
		Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD(L_15, ((int32_t)12), L_17, Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD_RuntimeMethod_var);
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_18 = __this->___handConstPose_Left_7;
		NullCheck(L_18);
		Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* L_19 = L_18->___constRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_20, NULL);
		NullCheck(L_19);
		Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD(L_19, ((int32_t)17), L_21, Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD_RuntimeMethod_var);
		HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* L_22 = __this->___handConstPose_Left_7;
		NullCheck(L_22);
		Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* L_23 = L_22->___constRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (21.1940002f), (43.526001f), (-69.2839966f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_24, NULL);
		NullCheck(L_23);
		Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD(L_23, 3, L_25, Dictionary_2_Add_mFD71D9F7716CE2D50F4C15ADFF09988479E953AD_RuntimeMethod_var);
		return;
	}
}
// System.Void YYSXXRHandProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_Stop_m747DDD661FAF469524BFD1C4DDFD56BE22D63031 (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93A34C38780F487E3E486C5A42FED7CB99981D51);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral93A34C38780F487E3E486C5A42FED7CB99981D51, NULL);
		return;
	}
}
// System.Void YYSXXRHandProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider_Destroy_m740F0567A25AAEA149CFFE9E00AF3598FCE2D1BC (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF94265966A0D048725B45D65CB72985D271D2807);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF94265966A0D048725B45D65CB72985D271D2807, NULL);
		return;
	}
}
// System.Void YYSXXRHandProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandProvider__ctor_mDA39E3B5C65BF2335CBECAAC0DF4C36CDA9BE256 (YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____A413127E7EAA54256873C260ACAC93138BD34046FECEDBB593E0EB2CF15DDC85_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____BBF9BCB85F75C2A8B2351F43D6A028BD350E0590296B412CB5BC0AEE79D96F68_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____E763C5D583CB9469527FD8F482FF5336F1B90F3FFE51C0CEC1F7F2A8E06721FC_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		__this->___handsData_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handsData_5), (void*)L_0);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		__this->___handsKey_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handsKey_6), (void*)L_1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_2;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____E763C5D583CB9469527FD8F482FF5336F1B90F3FFE51C0CEC1F7F2A8E06721FC_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_3, L_4, NULL);
		__this->___DataBothRelease_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DataBothRelease_9), (void*)L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = L_5;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____BBF9BCB85F75C2A8B2351F43D6A028BD350E0590296B412CB5BC0AEE79D96F68_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_6, L_7, NULL);
		__this->___DataBothRelease_21_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DataBothRelease_21_10), (void*)L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF7C14C4513BE2F1CFE11DD1757D4B4A25A4D7D8____A413127E7EAA54256873C260ACAC93138BD34046FECEDBB593E0EB2CF15DDC85_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_9, L_10, NULL);
		__this->___DataBothRelease_21_2_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DataBothRelease_21_2_11), (void*)L_9);
		ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268* L_11 = (ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268*)il2cpp_codegen_object_new(ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ivHand__ctor_mF79C7AE947163673CCB5CAE455C1850706E15A05(L_11, NULL);
		__this->___leftHand_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftHand_12), (void*)L_11);
		ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268* L_12 = (ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268*)il2cpp_codegen_object_new(ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ivHand__ctor_mF79C7AE947163673CCB5CAE455C1850706E15A05(L_12, NULL);
		__this->___rightHand_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightHand_13), (void*)L_12);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_13 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___jointOrientationsOut_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointOrientationsOut_14), (void*)L_13);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_14 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___jointOrientationsOutRight_15 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointOrientationsOutRight_15), (void*)L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___jointPositions_16 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointPositions_16), (void*)L_15);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___jointPositionsRight_17 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointPositionsRight_17), (void*)L_16);
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_17 = (BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1*)(BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1*)SZArrayNew(BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___bones_left_18 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bones_left_18), (void*)L_17);
		BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1* L_18 = (BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1*)(BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1*)SZArrayNew(BoneU5BU5D_t2862B692A807058CBBEFBDD32AA85B8DB8CC2FC1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___bones_right_19 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bones_right_19), (void*)L_18);
		InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* L_19 = (InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810*)(InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810*)SZArrayNew(InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___boneActions_left_20 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneActions_left_20), (void*)L_19);
		InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* L_20 = (InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810*)(InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810*)SZArrayNew(InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->___boneActions_right_21 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boneActions_right_21), (void*)L_20);
		XRHandSubsystemProvider__ctor_m404D9375A7F7A0C10412F8E63AA11453C0A6EFDD(__this, NULL);
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
// System.Void YYSXXRHandProvider/HandConstPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandConstPose__ctor_mB5162041825230F8D96FDFE1C1835EC987B6D3A5 (HandConstPose_t74E0AADF1E499BE3CEB94D82C4936C7704B238B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4054BB7F0E3A447F640C935E2704588713D2AE77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7EC4516AA5B9F5C34ADC8E7A650F6710EB1FB8BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554* L_0 = (Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554*)il2cpp_codegen_object_new(Dictionary_2_t14EA65B36CC3EBB34B0965DF702AF8A14305F554_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m7EC4516AA5B9F5C34ADC8E7A650F6710EB1FB8BA(L_0, Dictionary_2__ctor_m7EC4516AA5B9F5C34ADC8E7A650F6710EB1FB8BA_RuntimeMethod_var);
		__this->___constRotation_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constRotation_1), (void*)L_0);
		Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F* L_1 = (Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F*)il2cpp_codegen_object_new(Dictionary_2_t86F6DE4E9238FC072F5B7D58CD2AB4E8F27EA59F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m4054BB7F0E3A447F640C935E2704588713D2AE77(L_1, Dictionary_2__ctor_m4054BB7F0E3A447F640C935E2704588713D2AE77_RuntimeMethod_var);
		__this->___constPosition_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constPosition_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void YYSXXRHandSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YYSXXRHandSubsystem__ctor_m187C127A42426573CD33150C55D352CD1ED4CD3F (YYSXXRHandSubsystem_tF19E6A916E6C27C5882D97D23D85CB559374943C* __this, const RuntimeMethod* method) 
{
	{
		XRHandSubsystem__ctor_m426A5EE809B86700F493D593F066DCF77FB39ABA(__this, NULL);
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
// System.Void SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IvJointPos__ctor_mF6D01FAB29705C859EBEBD62CA096EC11A18CBB8 (IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		__this->___position_0 = L_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rotation;
		__this->___rotation_1 = L_1;
		return;
	}
}
// System.Void SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.IvJointPos::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IvJointPos__cctor_mD67E7D5A874ECCB660EE967D8266B9ADC824DB6C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843* L_2 = (IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843*)il2cpp_codegen_object_new(IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IvJointPos__ctor_mF6D01FAB29705C859EBEBD62CA096EC11A18CBB8(L_2, L_0, L_1, NULL);
		((IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_StaticFields*)il2cpp_codegen_static_fields_for(IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_il2cpp_TypeInfo_var))->___U3CZeroIdentityU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_StaticFields*)il2cpp_codegen_static_fields_for(IvJointPos_t37F13C14123BA4459DFD1F9322585EE0EC105843_il2cpp_TypeInfo_var))->___U3CZeroIdentityU3Ek__BackingField_2), (void*)L_2);
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
// System.Void SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ivHand__ctor_mF79C7AE947163673CCB5CAE455C1850706E15A05 (ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFF93C867D0830AA528B72C49078195A83853EF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E* L_0 = (Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E*)il2cpp_codegen_object_new(Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mFF93C867D0830AA528B72C49078195A83853EF1E(L_0, Dictionary_2__ctor_mFF93C867D0830AA528B72C49078195A83853EF1E_RuntimeMethod_var);
		__this->___jointLeftPoses_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointLeftPoses_3), (void*)L_0);
		Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E* L_1 = (Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E*)il2cpp_codegen_object_new(Dictionary_2_tC0436AE592FD5B767E957A21E767B4FED9F90A0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mFF93C867D0830AA528B72C49078195A83853EF1E(L_1, Dictionary_2__ctor_mFF93C867D0830AA528B72C49078195A83853EF1E_RuntimeMethod_var);
		__this->___jointRightPoses_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointRightPoses_4), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SC.XR.Unity.Module_InputSystem.InputDeviceHand.GGT26Dof.ivHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ivHand__cctor_m1BB11AD0ECC6D239CAAD77F2F72E42443EBA0BCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandJoint_tDBBD10CFE7ACC82A94F184E1D2CC5AE59C6DA43C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_StaticFields*)il2cpp_codegen_static_fields_for(ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var))->___mLeft_0 = 1;
		((ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_StaticFields*)il2cpp_codegen_static_fields_for(ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var))->___mRight_1 = 2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (HandJoint_tDBBD10CFE7ACC82A94F184E1D2CC5AE59C6DA43C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Enum_GetNames_m382A68AE28D7B6035331EC0685315144F15957C3(L_1, NULL);
		NullCheck(L_2);
		((ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_StaticFields*)il2cpp_codegen_static_fields_for(ivHand_t381133599978FABD7B798762FBBEBC96BB0DC268_il2cpp_TypeInfo_var))->___jointCount_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* YYSXXRHandProvider_get_id_mF01BB6789A46A28E6D62067087A410D069D5CA02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var);
		String_t* L_0 = ((YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_StaticFields*)il2cpp_codegen_static_fields_for(YYSXXRHandProvider_tC3FEED8C9DA4D537E82046882ABF9BF9301DBEC3_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_position_mD10FCFFA910DDC3EB267E78CC0CDB5078F16AA70_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Position = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_Position_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bone_set_rotation_m6F162397B2F4551E50B2FA6E01103FEBD18A03D0_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Rotation = value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___m_Rotation_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bone_get_position_mD2401503DE95F0EDF1521E67171506930A5AD1C0_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Position_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Bone_get_rotation_m53FF9F3221CF5388B6630863ECF14029AA96047F_inline (Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_Rotation_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
