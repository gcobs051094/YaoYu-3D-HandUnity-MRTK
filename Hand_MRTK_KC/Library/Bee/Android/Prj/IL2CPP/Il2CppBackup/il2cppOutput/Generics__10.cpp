#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>
struct Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>
struct Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4;
// System.Collections.Generic.EqualityComparer`1<System.ByteEnum>
struct EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>
struct EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>
struct EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.IDictionary`2<System.ByteEnum,UnityEngine.Bounds>
struct IDictionary_2_t582902AD08996C5CEA140E02F2181F3BD0136F25;
// System.Collections.Generic.IDictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>
struct IDictionary_2_t11615A0566ACF590C3A4150CD9D840E293394AAD;
// System.Collections.Generic.IDictionary`2<System.ByteEnum,System.Object>
struct IDictionary_2_t975A7FE29572E346C85BF8D1D737DE9AAB58E842;
// System.Collections.Generic.IDictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct IDictionary_2_tCC3035DCB92E888E116914E3B195BD689CD2F77C;
// System.Collections.Generic.IDictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct IDictionary_2_t3951AEB3864BC19F05D14335E61BA39170F6D805;
// System.Collections.Generic.IDictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct IDictionary_2_t2A7FE282DCA92B7DF87243224FA5553A51E56CE8;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>
struct IDictionary_2_t751349E8A218198172AA25D9ED27B4CDCC17CE50;
// System.Collections.Generic.IEnumerable`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct IEnumerable_1_tA328F6211397A52211F5AACC62A7D9976197331E;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Bounds>
struct IEnumerable_1_tBAEF4538BBF1F426489E5BCC14DE71510BA403A6;
// System.Collections.Generic.IEnumerable`1<System.ByteEnum>
struct IEnumerable_1_tA2185DB4778AEF4D3930ED9CE5C0FF142FDAA2B6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>
struct IEnumerable_1_t45F2E95782C3CB8793E86AB932C40A2E6917B220;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t8A537A487D98572E934BE83328339216FC1B1199;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Matrix4x4>
struct IEnumerable_1_t7E13FCC61B2DB26146CA569CB146A0200C4618D1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>>
struct IEnumerator_1_t755CF6551BAF52FF254436211D7BC8957D3F13EB;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>>
struct IEnumerator_1_t8052B10B6C4290D6BCC90E8A6010867F929F2608;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>>
struct IEnumerator_1_tA10216FAAB24103FDBB9CDD05D5A217F1F6A8024;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>>
struct IEnumerator_1_t06FA227A6E92C80622D12324C5DB54183B3FB398;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>>
struct IEnumerator_1_tBE85A5DA83C816117BBBC1741F72180C79008C4A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>
struct IEnumerator_1_t33FC520070EE6BE5C3A8EB107D670B3ECB6C0CD6;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>
struct IEnumerator_1_tFD827CF8F93411879A9A270098B457F6F4A61173;
// System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>
struct IEqualityComparer_1_t0941D7FC47166420134AA077FF0A0089769D1E31;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>
struct IEqualityComparer_1_tE1CB9017A9B56C12021F50046BCF2CE35BD82EF6;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>
struct IEqualityComparer_1_tE36397949962FBA7295FD9601B752364AFB4B9BD;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Bounds>
struct KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Matrix4x4>
struct KeyCollection_tD205DC053009DE7E61543565DA831601D981930A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,System.Object>
struct KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>
struct KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Bounds>
struct ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Matrix4x4>
struct ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,System.Object>
struct ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,System.Object>
struct ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B;
// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Bounds>[]
struct EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F;
// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Matrix4x4>[]
struct EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF;
// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,System.Object>[]
struct EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>[]
struct EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>[]
struct EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,System.Object>[]
struct EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>[]
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>[]
struct KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2;
// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>[]
struct KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188;
// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>[]
struct KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>[]
struct KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>[]
struct KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>[]
struct KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F;
struct EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF;
struct EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101;
struct EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712;
struct EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A;
struct EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882;
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
struct KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2;
struct KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188;
struct KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265;
struct KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8;
struct KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612;
struct KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A;
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>
struct Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* ____entries_1;
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
	KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>
struct Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* ____entries_1;
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
	KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* ____entries_1;
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
	KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* ____entries_1;
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
	KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* ____entries_1;
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
	KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>
struct Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* ____entries_1;
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
	KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* ____entries_1;
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
	KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.ByteEnum>
struct EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>
struct EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>
struct EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Bounds>
struct KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Matrix4x4>
struct KeyCollection_tD205DC053009DE7E61543565DA831601D981930A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,System.Object>
struct KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>
struct KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Bounds>
struct ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Matrix4x4>
struct ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,System.Object>
struct ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,System.Object>
struct ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,System.Object>
struct Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint8_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>
struct Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	int32_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	bool ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>
struct KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Matrix4x4>
struct Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint8_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,System.Object>
struct Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,System.Object>
struct Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>
struct Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>
struct KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>
struct KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
struct HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F 
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName::m_InternedString
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_InternedString_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
struct HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___m_InternedString_1;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
struct HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___m_InternedString_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Bounds>
struct Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	uint8_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct Entry_tCEA300A520CA57CB37DF459530F82F2758946470 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct Entry_t4E75ED62493BD91A1461B7283843948C67277665 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	RuntimeObject* ___value_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Matrix4x4>
struct Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.InputDevice,System.Object>
struct Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>
struct KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Bounds>
struct Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct Enumerator_t0B94680434900510914C55FF9F737832D415BD07 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>
struct Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>

// System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>
struct EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Boolean>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>

// System.Collections.Generic.EqualityComparer`1<System.ByteEnum>
struct EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.ByteEnum>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>
struct EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>
struct EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>

// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int32>

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>

// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>

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

// System.Byte

// System.Byte

// System.Collections.DictionaryEntry

// System.Collections.DictionaryEntry

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};

// UnityEngine.XR.InputDevice

// System.Int32

// System.Int32

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.Void

// System.Void

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
struct HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName::Default
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___Default_0;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Matrix4x4>

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.InputDevice,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

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

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Bounds>

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>

// System.ArrayTypeMismatchException

// System.ArrayTypeMismatchException

// System.InvalidCastException

// System.InvalidCastException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Bounds>[]
struct EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 m_Items[1];

	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>[]
struct KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A m_Items[1];

	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,UnityEngine.Matrix4x4>[]
struct EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C m_Items[1];

	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>[]
struct KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 m_Items[1];

	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.ByteEnum,System.Object>[]
struct EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF m_Items[1];

	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>[]
struct KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 m_Items[1];

	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>[]
struct EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tCEA300A520CA57CB37DF459530F82F2758946470 m_Items[1];

	inline Entry_tCEA300A520CA57CB37DF459530F82F2758946470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tCEA300A520CA57CB37DF459530F82F2758946470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tCEA300A520CA57CB37DF459530F82F2758946470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
	inline Entry_tCEA300A520CA57CB37DF459530F82F2758946470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tCEA300A520CA57CB37DF459530F82F2758946470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tCEA300A520CA57CB37DF459530F82F2758946470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>[]
struct KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 m_Items[1];

	inline KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>[]
struct EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t4E75ED62493BD91A1461B7283843948C67277665 m_Items[1];

	inline Entry_t4E75ED62493BD91A1461B7283843948C67277665 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t4E75ED62493BD91A1461B7283843948C67277665* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t4E75ED62493BD91A1461B7283843948C67277665 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
	inline Entry_t4E75ED62493BD91A1461B7283843948C67277665 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t4E75ED62493BD91A1461B7283843948C67277665* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t4E75ED62493BD91A1461B7283843948C67277665 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_2))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>[]
struct KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 m_Items[1];

	inline KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___key_0))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.InputDevice,System.Object>[]
struct EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5 m_Items[1];

	inline Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
	inline Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_3), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>[]
struct KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E m_Items[1];

	inline KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>[]
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE m_Items[1];

	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 m_Items[1];

	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		m_Items[index] = value;
	}
};


// TKey System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9_gshared (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275_gshared (Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6_gshared (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B_gshared (Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87_gshared (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE_gshared (Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_gshared_inline (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_gshared_inline (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7300EA91A35D45B821877B9855D00F4688B60120_gshared (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DC4A26FC920C46674EADF307422A790AE10AFEC_gshared (Enumerator_t0B94680434900510914C55FF9F737832D415BD07* __this, Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_gshared_inline (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_gshared_inline (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m08FF5A696B39591AA8FCF654ED14DC500ED98216_gshared (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA72F83B731F8B9FA99ADABF3014D807D4E509B8F_gshared (Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB* __this, Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_gshared_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_gshared_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mCBB6AC446DBFD65FF07A17361464C30F16144971_gshared (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m708C5F5B3AF0FC9A273EC792455752DB6A45AFF7_gshared (Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF* __this, Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>::get_Key()
inline uint8_t KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A*, const RuntimeMethod*))KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>::get_Value()
inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method)
{
	return ((  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*) (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A*, const RuntimeMethod*))KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.ThrowHelper::ThrowKeyNotFoundException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9 (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275 (Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, const RuntimeMethod*))Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowSerializationException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongValueTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongKeyTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Key()
inline uint8_t KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10*, const RuntimeMethod*))KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Value()
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6 (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B (Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>::get_Key()
inline uint8_t KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370*, const RuntimeMethod*))KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370*, const RuntimeMethod*))KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87 (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370*, uint8_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.ByteEnum,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE (Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, const RuntimeMethod*))Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Key()
inline HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, const RuntimeMethod* method)
{
	return ((  HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F (*) (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450*, const RuntimeMethod*))KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Value()
inline NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_inline (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 (*) (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m7300EA91A35D45B821877B9855D00F4688B60120 (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, const RuntimeMethod*))KeyValuePair_2__ctor_m7300EA91A35D45B821877B9855D00F4688B60120_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m8DC4A26FC920C46674EADF307422A790AE10AFEC (Enumerator_t0B94680434900510914C55FF9F737832D415BD07* __this, Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0B94680434900510914C55FF9F737832D415BD07*, Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m8DC4A26FC920C46674EADF307422A790AE10AFEC_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A (HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Key()
inline HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, const RuntimeMethod* method)
{
	return ((  HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F (*) (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_inline (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70*, const RuntimeMethod*))KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m08FF5A696B39591AA8FCF654ED14DC500ED98216 (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m08FF5A696B39591AA8FCF654ED14DC500ED98216_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mA72F83B731F8B9FA99ADABF3014D807D4E509B8F (Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB* __this, Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB*, Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, const RuntimeMethod*))Enumerator__ctor_mA72F83B731F8B9FA99ADABF3014D807D4E509B8F_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::get_Key()
inline InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD (*) (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E*, const RuntimeMethod*))KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E*, const RuntimeMethod*))KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mCBB6AC446DBFD65FF07A17361464C30F16144971 (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_mCBB6AC446DBFD65FF07A17361464C30F16144971_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m708C5F5B3AF0FC9A273EC792455752DB6A45AFF7 (Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF* __this, Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF*, Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, const RuntimeMethod*))Enumerator__ctor_m708C5F5B3AF0FC9A273EC792455752DB6A45AFF7_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Int32 UnityEngine.XR.InputDevice::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, const RuntimeMethod*))KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, const RuntimeMethod*))KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m37FEF4043FAAC1F3557E8326224B5F0B4BBFFF67_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0871552888A5E4905B8E1B97019753670EA0EE71_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m058283D0A0385745EDE7663C5B861A1DF258F462_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_5;
		L_5 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B6D8DBF99FE6D6506760623D3A10952FC89305C_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m284C5239592F164F54B26B01CB0A23EC393A6CCD_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* G_B2_0 = NULL;
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* L_11 = ((Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint8_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Bounds>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint8_t L_32;
				L_32 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33;
				L_33 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m70609B9FDB781149B694FF0E54D9ACBD70DECC48_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* Dictionary_2_get_Keys_m76E9597C035A7EA40953AF06FE99F3B793DEB183_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_1 = (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m176B161999A2EF5567D7B869E48AF65FDDAF2D19_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_1 = (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_2 = __this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* Dictionary_2_get_Values_m3C6D2CB219704A0F8178A6EF2A5F80A51310EBEB_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_1 = (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_2 = __this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mA91308DFB83B464E02A59E84D4528ABC63E66C05_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_1 = (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_2 = __this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Dictionary_2_get_Item_mE20A4988C6F03780C06540251286057486C8E412_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint8_t L_6 = ___0_key;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5BDAAAFD210E7DE21AD0C4BE5541F616E9E974E9_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m7CEEE3BD07294AF3618FF0E1B2B1C60ECD651533_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mC67307DC74B0FA26513EFF56324E8ECE323EF69B_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_3;
		L_3 = ((  EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7;
		L_7 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m005C431901502D0FF5EB90E8EBBB7715EDB6F857_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_3;
		L_3 = ((  EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7;
		L_7 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_9;
		L_9 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF0A0F05800356482493B759AB4EF3A6CF076DE8A_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEB5C699113C11F9A86DDED7B2D942D75700A6854_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m283D07004B0F55F62D355109342BDEB5A1F7C40A_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_0 = NULL;
	int32_t V_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_15;
		L_15 = ((  EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_24;
		L_24 = ((  EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_28 = V_4;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Bounds>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A Dictionary_2_GetEnumerator_mDCD3CF43033A0C8DD8A342354F391CB6E7BB735F_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60E8463C274D935B1DDBABD05E7410F38D5DE56E_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0BFD54AEE463B5652E89C73632E2A392EC094553_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_6;
		L_6 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_14 = (KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)(KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_15 = V_0;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint8_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_19;
		L_19 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint8_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_31;
		L_31 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_38 = V_7;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		uint8_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint8_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint8_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		uint8_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint8_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_5 = (EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)(EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* V_10 = NULL;
	uint8_t V_11 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint8_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint8_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_24;
		L_24 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint8_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint8_t L_35 = ___0_key;
		uint8_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_44;
		L_44 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_51 = V_12;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		uint8_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint8_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint8_t L_62 = ___0_key;
		uint8_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		uint8_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint8_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint8_t L_88 = ___0_key;
		uint8_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_121 = V_10;
		uint8_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_123 = V_10;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mE85AC79BBDB2074E8E64C14C45D6699FB589F2F8_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint8_t L_24;
		L_24 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_27;
		L_27 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5DF5B4A7753CA5A1864ED703C669219DD3294874_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE7A6ECAF79E05847933AA231E52DA59FC837F4C0_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_3 = (EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)(EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_5 = __this->____entries_1;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_8 = V_3;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		uint8_t* L_19 = (uint8_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m20392D7647C2766DCC37240FB8639F91D0AD2610_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_20;
		L_20 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_21 = V_4;
		uint8_t L_22 = L_21->___key_2;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_25 = V_4;
		uint8_t L_26 = L_25->___key_2;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_41 = V_4;
		uint8_t* L_42 = (uint8_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint8_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_43 = V_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_44 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB42C01C5269106390560AAA36134A4F88B2EB094_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = ___1_value;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m972ED434B799AD146CF5FB81AB8E6909559887AF_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8992094D2FB7CB6BDE5968968E6E3572B26D65DC_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mE5A9972DA01A4DF3AEBA83661F3F03EE8DF2B035_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD59196BE2439E73EABF606D929777F1F50C22A2C_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			uint8_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mC33073193F8281A5A5E48D38590B8CC6CC77C291_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7141CABF9925023A9D7A14FE40C71C8F439C2190_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m5E8CB61ACA1D973F93C90E7BAA9982C79B6D7C2F_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m133F9A14F8C2EAEC188ABA4AB9791876057365EC_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			uint8_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m91FB3616063C4E78EE12AE9614C45BECE2D6AF96_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m04F91F32D75C87BA4B3F43C079029504EFFE86B6_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m538D315525C7AE66F03B46B3405409DD13195170_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ADFD65BA1C15B7892439D4080AD31784F775904_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCF8B2CF56C361A01732D8C7AB5D46FEDE26EF690_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0C801045F132D66ADCAD6AB8C8BAC8A657B4FE0B_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_5;
		L_5 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAE88E684A4480EABDCB373CB503F2E50A2568095_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD2013EE4C57ED1CD8B13D3F7B8704E76BFCF9E4D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* G_B2_0 = NULL;
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* L_11 = ((Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint8_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,UnityEngine.Matrix4x4>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint8_t L_32;
				L_32 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33;
				L_33 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1A8E3429EF7A6FE94F9B267A18AB3C6EC0696D2A_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* Dictionary_2_get_Keys_mE1391DBE4F1A52C697F80723E769785A5EBACD08_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_1 = (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m836C3BAC8014A527ABEE3EECF32BC77C5A275BB1_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_1 = (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_2 = __this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* Dictionary_2_get_Values_m8C7B94EE3C16778A486D7D2FE82F36382BE6CBD8_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_1 = (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_2 = __this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mE87B2B65E49A2260C4F283AE889A66DF5BB2A9BA_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_1 = (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_2 = __this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Dictionary_2_get_Item_m9562A1751B9E07257BC310CC6491556790A26BB9_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint8_t L_6 = ___0_key;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBEB8417F878E9294BE74EA39EDEA7E6041D6917D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mD8AB2FC47C1ACB01EF840FC3CBEE7E0DC81E25D6_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF870F545C1974DC2E611800995D8E693A16848A6_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_3;
		L_3 = ((  EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA22BB4AE834CE963B978683CBEC596334B059645_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_3;
		L_3 = ((  EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_9;
		L_9 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m8F8F999C75C16F810624448FB3F30D1E92ADE24C_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F01327800F4BB3E563D8EB67BDF689622270092_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m77DE55084904EAFDF6148B19F0D5C35ABECB5554_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_0 = NULL;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_15;
		L_15 = ((  EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_24;
		L_24 = ((  EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_28 = V_4;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Matrix4x4>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 Dictionary_2_GetEnumerator_m886998C9D599DCA25FAE983588E848BE80A225B0_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA878AA6F86CA596E576DB5710D969C0D19C0DC75_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE6129572DBEF3301EF843CA70341A16B7BEB7323_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_6;
		L_6 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_14 = (KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)(KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_15 = V_0;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint8_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_19;
		L_19 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint8_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_31;
		L_31 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_38 = V_7;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		uint8_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint8_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint8_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		uint8_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint8_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_5 = (EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)(EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* V_10 = NULL;
	uint8_t V_11 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint8_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint8_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_24;
		L_24 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint8_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint8_t L_35 = ___0_key;
		uint8_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_44;
		L_44 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_51 = V_12;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		uint8_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint8_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint8_t L_62 = ___0_key;
		uint8_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		uint8_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint8_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint8_t L_88 = ___0_key;
		uint8_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_121 = V_10;
		uint8_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_123 = V_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m83C279319BAAC7D1313F899CA66462D89DFAB03C_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint8_t L_24;
		L_24 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27;
		L_27 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1441FBBBE53A02191397220412D59FE437BFD905_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5A5E4DA99DC685B4AB4F829C35D711C289322A32_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_3 = (EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)(EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_5 = __this->____entries_1;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_8 = V_3;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		uint8_t* L_19 = (uint8_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA3BD98697C4ED371334A2481D82A6B249ED7AA97_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_20;
		L_20 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_21 = V_4;
		uint8_t L_22 = L_21->___key_2;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_25 = V_4;
		uint8_t L_26 = L_25->___key_2;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_41 = V_4;
		uint8_t* L_42 = (uint8_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint8_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_43 = V_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_44 = (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m53EF3BA24E32EF1CBEF3441E25AC9EB076040417_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___1_value;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6BFF0A49461BE1B9923146FFBA565332BC5511EF_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE76D569395D697D84969275D3C5B1DAEACACCB05_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mB3BA0411207D898231F7FF67948BC7FD4C0070DD_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD458A67C078B0B6F5A04459445BF3B64CB2A997B_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			uint8_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m734D931A34DB78934BA4B9E1D8ECD04A55D0A8B2_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1D25379F2A4AE3A24712E9FDA5E4643AA049C997_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7A88D5110A7E8BD6F50F8A39C8807FCA64BB531A_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4353155DE0352C59FE863B4D530B3E39208A6BBF_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			uint8_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m5CA3DE180F3A7F01D34EE4367A7C6C45FE87D33B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mB47084B057B036DBF8C5A46CE02361D089031D31_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Matrix4x4>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3E12F8F3EE9A9D79D3E56924D218B962A1D2EF6D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49FD888D8D338F6EA9E65990F9C9A287E5CE63CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA544F184DB5615554C5986EF937133232E075256_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5705821E71695496A8598955283409C4C85BB4B8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_5;
		L_5 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0699C00BEE505FF2592307B95C2EDEA644C4EDF7_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m43B0FA732CA72F6CCFCC11F7DB821E8CF80BD2CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* G_B2_0 = NULL;
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* L_11 = ((Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint8_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.ByteEnum,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				uint8_t L_32;
				L_32 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E3B2CF64D3E35E48BC30AD5C60DE1B217407096_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* Dictionary_2_get_Keys_mECFF75E3EB3CB0659B12486554B2EE26C30ABEE6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_1 = (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m99E6A211BF23DE9EB4691037A80A7A1FBF8886A5_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_1 = (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_2 = __this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* Dictionary_2_get_Values_m042157447A9EE6556B8173FE6D5403C1DF12C4C6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_1 = (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_2 = __this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m3EBF451740E5F869AB5AAAF65B4AC720DAF2E500_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_1 = (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_2 = __this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m6FC6A0D9FA0F9B1204DA02700234FAB91B67CF02_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		uint8_t L_6 = ___0_key;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m68B2860321AE9BFC2FF8F6E2EF94B0123DF0C7D7_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A2475D76FE313437F290AE7E281B1D13938B8A8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF6B63C1415C7BCD30B91F91D20087866710FA7E5_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_9;
		L_9 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m273C8C51BC29D2A145CA6816DF27FBAA00FCE628_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBDD1BCCC321B7CE2F8FB7F999841C362592D1825_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m649EE7524C9A9430B009028E439A12A97E9FF842_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_0 = __this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E Dictionary_2_GetEnumerator_m92899B4D24094F60488CAEBBD6FCA9F315F23779_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB31B639FDDA38DACEC32FE52B8670C2AEC19C544_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m95BD7EB6CB6C1902C55E729C0BCA7793E3A8E774_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_6;
		L_6 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_14 = (KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)(KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_15 = V_0;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint8_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_19;
		L_19 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		uint8_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_31;
		L_31 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_38 = V_7;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		uint8_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		uint8_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		uint8_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		uint8_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		uint8_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = (EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)(EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* V_10 = NULL;
	uint8_t V_11 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint8_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint8_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_24;
		L_24 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint8_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint8_t L_35 = ___0_key;
		uint8_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_44;
		L_44 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_51 = V_12;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		uint8_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		uint8_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3), (void*)L_60);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		uint8_t L_62 = ___0_key;
		uint8_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		uint8_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		uint8_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		RuntimeObject* L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3), (void*)L_86);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint8_t L_88 = ___0_key;
		uint8_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_121 = V_10;
		uint8_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_123 = V_10;
		RuntimeObject* L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&L_123->___value_3), (void*)L_124);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mAD14F4770D6DD0676E312D547F4D33E19A8C06C1_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint8_t L_24;
		L_24 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m147BFDB256594BB6486F7BFBA338A3745EA6F5F8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3AA3AE68DA106D282A49A24D371A22778DEC54B0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_3 = (EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)(EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = __this->____entries_1;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_8 = V_3;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		uint8_t* L_19 = (uint8_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)L_19, NULL);
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7F4605B5DEABAA0D5BDF9C95CF4FC2EB8F04E8DE_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((uint8_t*)(&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_20;
		L_20 = ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_21 = V_4;
		uint8_t L_22 = L_21->___key_2;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ByteEnum>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_25 = V_4;
		uint8_t L_26 = L_25->___key_2;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.ByteEnum>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_41 = V_4;
		uint8_t* L_42 = (uint8_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(uint8_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1952F6E96CC33AD75408DC0142628C39E1E542AA_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m44967EBBD0FB7CE938A636439CFC837AB3B4E495_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m904328E55FFC4F34BE0953B695C36B5BEA4CC2B7_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mAB67524AB4F8A86E2CC41F37AFC5E1A9ED087475_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mFFD10245EBA2EC749015BCD877D7A2FDD7818D84_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = __this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_40 = __this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			uint8_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m07664EFF84A855733AF937AD20067B285B3E30C0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9763EA2CEBE5519F7E692205F8DFA4C5CA4BE71C_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m2C8FEDADE48678A925C2740526E148BE820D2FBD_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1BF596D273011495D6A88CA3E6F7C1C2318A6CE0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			uint8_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1382F6AF6E9CD0D56FB07D91EECE213299C80A18_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m05329210A9950F6EBC3F9F10B5CF9AE2A9DE29B6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m196635F433386156DD45109BB7B1528D9CE540CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B36CF2571A40E2A7197576B569B0F5C9AD03582_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCB7D91DC09CE98958227355EED3007C9BCF35AC0_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E889BD16CE62D8F4F3764CB1F708BE68F3579DF_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m270B594AE838D9033185AC5B7256607B479501F7_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_5;
		L_5 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B9ED53DB7371089C70F985E03208ADA90A86B71_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC57E2637E66F3331C45F81B4D99D21060DDB4DC_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* G_B2_0 = NULL;
	Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* L_11 = ((Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_32;
				L_32 = KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_33;
				L_33 = KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9669D2AFC26436808EE91003BD50559335575E7_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m209F014D629D69A0A97B3B8730ACF5C51108C856_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* Dictionary_2_get_Keys_m73F8E6265350B5A759F91148BAE93558BFFA146F_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* L_1 = (KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C*, Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8CD1DE004602DA240CC5C384C113C3E3E0F813A0_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* L_1 = (KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C*, Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tACC67E169BF06B6C5CA0F4768F591B5BAC85224C* L_2 = __this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* Dictionary_2_get_Values_m21C11B70B5A89DE73360E6F7FAF01FB3C260589D_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* L_1 = (ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65*, Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* L_2 = __this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mF793F21F8AFE76C49AA5A275B0D973CE78BD5FFE_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* L_1 = (ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65*, Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC03F1920FDF82E8C04E1556A79D9D8F71678DF65* L_2 = __this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 Dictionary_2_get_Item_m03D942BB51FA397EACFD768C2AAF0D9483DAD33A_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_6 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6));
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m125C5A0AEAB4CD16A68FBBD7BD94B186DA0BEF6A_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___1_value, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8ED1A93CF7869C1F4E4F178AC5C94A10C4BE76E1_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___1_value, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4325C72AB59EF83E6F78081F6932AFE26E993946_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0;
		L_0 = KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_1;
		L_1 = KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mDB25EAE942C14AFD35FE9F5D16FD07779D00CABA_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0;
		L_0 = KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* L_3;
		L_3 = ((  EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_7;
		L_7 = KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB543F12653FE0FF324B8CA28AA28B4CB7EE7E298_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0;
		L_0 = KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* L_3;
		L_3 = ((  EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_7;
		L_7 = KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_9;
		L_9 = KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mA40BF659088F29C55EC79237623B6B4E72459EF4_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m056F72E7969B424D6616E0EB0F5ED006CE4DD193_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7B56005D833D2553BBA5F37220EC31EF535CC365_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_0 = NULL;
	int32_t V_1 = 0;
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* L_15;
		L_15 = ((  EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* L_24;
		L_24 = ((  EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tA63B8DCBDE0E84E51D0089931021629B7BB4A14D* L_28 = V_4;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mBDFA251F8C2F83B6D04EF9EEF5F18C4315762C6D_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7300EA91A35D45B821877B9855D00F4688B60120((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0B94680434900510914C55FF9F737832D415BD07 Dictionary_2_GetEnumerator_mAC83B6942AB109928106B3787345026F56822CC5_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0B94680434900510914C55FF9F737832D415BD07 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC4A26FC920C46674EADF307422A790AE10AFEC((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m53E2D333D7781C90E5BBF8E244F9262F8A3AD440_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0B94680434900510914C55FF9F737832D415BD07 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC4A26FC920C46674EADF307422A790AE10AFEC((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t0B94680434900510914C55FF9F737832D415BD07 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3F95B3E23D06E8F7B8A283EF15634927E7F89810_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_6;
		L_6 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_14 = (KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8*)(KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_15 = V_0;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2DBB1D5F2E6402C20FB2609F4B4A4AB6D48B5EF7_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_19;
		L_19 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_31;
		L_31 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_38 = V_7;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m03ECFA491EC049D50414E22E01E54658B24E69EA_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_5 = (EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712*)(EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m205788633C0B842E8F366B1E5BFE4C9A4840C385_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tCEA300A520CA57CB37DF459530F82F2758946470* V_10 = NULL;
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_24;
		L_24 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_35 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_44;
		L_44 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_51 = V_12;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_62 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_88 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_121 = V_10;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_121->___key_2))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_121->___key_2))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_123 = V_10;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mC8C125063C6A64DF652452D926064B97583DF447_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_21;
		L_21 = KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_24;
		L_24 = KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_27;
		L_27 = KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6C66534F04EBDD80E7D6C030541D7AA4C31D730F_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3649600DC6ADE47F2FA763E3263C6123CF89B0F6_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_1 = NULL;
	int32_t V_2 = 0;
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_3 = (EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712*)(EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_5 = __this->____entries_1;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_8 = V_3;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F* L_19 = (HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD38A590624BB06DA761B06F87532DCC77DD0BB6E_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tCEA300A520CA57CB37DF459530F82F2758946470* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_20;
		L_20 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_21 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_22 = L_21->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_25 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_26 = L_25->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_41 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F* L_42 = (HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_43 = V_4;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_44 = (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tCEA300A520CA57CB37DF459530F82F2758946470* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB60B6890783E2CF6775DA6ECB5AB57601E64024E_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_3 = ___1_value;
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5561E368C2EDEDB7039EBC417A9492563FEC2D16_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___1_value, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1A2664F20962C4CDB2AEE2B1CDAC40F8B14C3C20_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m43EC325A9E374B0C13A15FA1B56A7992D9B732EF_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m5D7783CFEFCCC26EBE8653888AB0F449D29ACD80_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, KeyValuePair_2U5BU5D_tF343DED427ED390688B82CED5B7D6C9E0595C5F8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m7300EA91A35D45B821877B9855D00F4688B60120((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m292BC6A429514448BDD0A419DAFA486B0FEB7C60_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0B94680434900510914C55FF9F737832D415BD07 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC4A26FC920C46674EADF307422A790AE10AFEC((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t0B94680434900510914C55FF9F737832D415BD07 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m921A1329C038F8D54AF52C9DF208C1B64EAA9CAD_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mE3266450C9BF2D40D0FECC80A376790EEC577969_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)((HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t1898A8556F2F604FD93EE9FA8DEB5C5D827F5712* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1FA0D434525861A90EA9C99BD5A46E3E11036B4D_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)((HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*)((NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*)(NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mED53E8A5D01BC1E4E142055A6CBFA054DF59D51B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m3B7268F32E2C25535408A12B5C16CC18891E36A4_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)((HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mC0D77976EC0C0F6DD0D986D28C77D413D34AA4CC_gshared (Dictionary_2_t65F5CDECA98E39A0593C8E953EE6D81197EF515E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0B94680434900510914C55FF9F737832D415BD07 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC4A26FC920C46674EADF307422A790AE10AFEC((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t0B94680434900510914C55FF9F737832D415BD07 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCF0E6A6ECFA7C7861E269B2C97AEFC59CBD21993_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF49693761EA32DA54D0D32D3AB9EDFC8954D7EDF_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAC53F0F0F2891C4FD27D072879EF056E446A59F7_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCF0AB9C689ED71FE824ACC05764AE00B70EF5C26_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_5;
		L_5 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBBE059D5B9909471E268F1ED45BA8B709AD0FCEE_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6180543D356FC5794C3B6010FCF7894792485AD7_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* G_B2_0 = NULL;
	Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* L_11 = ((Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_32;
				L_32 = KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m08B6E48C4491E1D9C398368FA049110DA9EDE186_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5958CA844E0C4E11ADC3A6FDAFB20F1F5D815702_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* Dictionary_2_get_Keys_m0E7535AE767CB8FDD622C8291FD4C3FA396DBF5B_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* L_1 = (KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422*, Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m26C7D769DA2F4BCC6DE9FB3CF91D493B71FAF57C_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* L_1 = (KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422*, Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tAE30F995D340B30EA1C1B82952252E76C4202422* L_2 = __this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* Dictionary_2_get_Values_m0A45DB13E5E641E6D95F0A576BA222AE270352B8_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* L_1 = (ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D*, Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* L_2 = __this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mAC563DECB24CED4EF62246307AC6345F899BA838_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* L_1 = (ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D*, Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t4D2EB83920150080C4F01FFE56E5F7FFB701422D* L_2 = __this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m5FA146E07DE19F5F8BC311B1FE0DA05CE40F2BFD_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_6 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE06AE0A4E2189481368C06A29C59D262112523EF_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m60C498773477C92C4010DA3CADE09F06719B8A4A_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1ACEAD84B69FBC6408B03C5F79788F5175F5EE02_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0;
		L_0 = KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m44E5EF92FD75937CE04E1FA2CC5E0B45BB03684E_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0;
		L_0 = KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mE00289A08BFAF8E955EC7C5ED28B47D80437BC86_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0;
		L_0 = KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_9;
		L_9 = KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE669BF4665262964B264CB7B7816BB32B2F8F918_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m59DE7629837DFE5314AD6863C5DDE82E7FB1AA93_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCE3F5C12D974A58C4D02DD7F518A0684E45FBC26_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_0 = __this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m45C7EF4C254C0274AE19D9B16EE35D50043F22D9_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m08FF5A696B39591AA8FCF654ED14DC500ED98216((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB Dictionary_2_GetEnumerator_m515391B7ADC183F4190CE2B3D8F1CF13D3D17EF3_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA72F83B731F8B9FA99ADABF3014D807D4E509B8F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0A78DE7F6F632AA78155FDD4BAD6D83DB2467843_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA72F83B731F8B9FA99ADABF3014D807D4E509B8F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mA975D305D070206E2B9243A1C0ED3CF590FDBB79_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_6;
		L_6 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_14 = (KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612*)(KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_15 = V_0;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4C1FE152B6F6936E051403B607944AB4ABE32694_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_19;
		L_19 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_31;
		L_31 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_38 = V_7;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4BA96909E708EA5A77B78014BFA2AB77F0D46A01_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_5 = (EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A*)(EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA86D21ADF25C8366899878E5AED4950E7871FF50_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t4E75ED62493BD91A1461B7283843948C67277665* V_10 = NULL;
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_24;
		L_24 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_35 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_44;
		L_44 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_51 = V_12;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3), (void*)L_60);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_62 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		RuntimeObject* L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3), (void*)L_86);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_88 = ___0_key;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_121 = V_10;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_121->___key_2))->___m_InternedString_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_121->___key_2))->___m_InternedString_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_123 = V_10;
		RuntimeObject* L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&L_123->___value_3), (void*)L_124);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m5A5F7D8336894FECFCD67053A59A5EEB6A07BFF4_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_21;
		L_21 = KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_24;
		L_24 = KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC4A45E43A9E1D1A43A2306399540C1565E8305A4_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2E8CB902121C62F6118E925BA8B374B74523B2CA_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_1 = NULL;
	int32_t V_2 = 0;
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_3 = (EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A*)(EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_5 = __this->____entries_1;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_8 = V_3;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F* L_19 = (HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6720B26F8966FADB55651197C7BE49553AE20A2F_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t4E75ED62493BD91A1461B7283843948C67277665* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = HandExpressionName_GetHashCode_m0D37AD2D0F498F6F625CE31BA80F9CB35CA8EA9A((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* L_20;
		L_20 = ((  EqualityComparer_1_tAD33C9BA65CA2F84579667C76E279FB8462B9913* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_21 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_22 = L_21->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_25 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_26 = L_25->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!true)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_41 = V_4;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F* L_42 = (HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t4E75ED62493BD91A1461B7283843948C67277665* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m363049C48CFAE132B189BFCECB62F30A6723A6AC_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m4AEB227DE85C3AE4FCEE9515E29D28D8FDEAF5B9_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m4C1B9DD7E2056E7E85E99C3F74DEA2AA6ED7E29C_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2B0FD8635622F69F9C2F66FCC993909DFFB33FEA_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mA6225F7A4CCFC928104A98B9D293319878C8B8BD_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, KeyValuePair_2U5BU5D_tEA6A1AEC043CA353362C9450FA5FFDB34AE0A612*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = __this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_40 = __this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m08FF5A696B39591AA8FCF654ED14DC500ED98216((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m629F85E88B2782660083424B46866327892A57EC_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA72F83B731F8B9FA99ADABF3014D807D4E509B8F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mB81C11B8B277E4862FBF26C42638D04EEB24E743_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m1D4846FD557334DF1AEF3DAB51CBB3E2DCE12027_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)((HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t74005CC9D2F5EC5E1478FFBAE59A6B61195B9A2A* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mC22294CC54C9834A33A5DCDF4C7C931AD6E95515_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)((HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m29A7D5943275CC7738060F93331E922361139D3A_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDBEB567F529BB76B2FAD5EE6D9A94B7044F9F44E_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E*, HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)((HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)(HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName,System.Object>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mAD6DFEA97293AC988CB8284C3C913CE30DD33518_gshared (Dictionary_2_t27609D6577D5F99C1404F6A0E8F0837773E01C1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA72F83B731F8B9FA99ADABF3014D807D4E509B8F((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t75918A60DD6335B7A3E2DFF0891A03FA1B78B6CB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF467392EF616E16CFD30145CC8B7D93154DE9129_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1141CF1A6D9DC10FB787DF42DCB0CFE894276D2F_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF18B1B5F3819E0A107A85C0403A8D7710628084C_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFB07586D7AA43737C8803060CFD32D78E96763F5_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_5;
		L_5 = ((  EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC29A9DCCDF96D7A6F22F2EAFF8B3683A8CF7272D_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m838748FF04E46E23101FFC47E0F95DCDF16F30F5_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* G_B2_0 = NULL;
	Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* L_11 = ((Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.XR.InputDevice,System.Object>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_32;
				L_32 = KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m28A6DBA9883AB8558157776E7F70D83D445D2405_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mFAB5E9192332D5305DF31C90E267150CB3A1E213_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* Dictionary_2_get_Keys_mA8B83B933EAC0980074153B13C8695B650295FF9_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* L_1 = (KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64*, Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8DDB3CAA10CA0B85B5F187F07CE7E65B5D195E70_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* L_1 = (KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64*, Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tF2D1EC54D3D8A791F792CE20D76ACCD9A26A5A64* L_2 = __this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* Dictionary_2_get_Values_mCEC45A56DA3099B34DEF5D5666030F6506B1C53D_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* L_1 = (ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF*, Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* L_2 = __this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m461875B80CA2D05D71A2F344E5585B8A9A1357F7_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* L_1 = (ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF*, Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD677D47ED215B3D89FD1838A483C48BB347E27DF* L_2 = __this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mB74E30370773A3CE297583FC6F4F80C31F388CE1_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_6 = ___0_key;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3F15DAF35834E16EF00787591474D06B9A736747_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5F088D56D3C169743DC181479281FC3B83961F0A_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m0238AF6A82EB53EB75458A13CC541434D99A533C_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0;
		L_0 = KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m34FBA008DA13CDA5DC3F816E36C7A06C74665A79_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0;
		L_0 = KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2CFB4D9A742195FDA61C1DAD9F8526ED84FAD327_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0;
		L_0 = KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_9;
		L_9 = KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mB1765ED25AD427B2F04132755AEC3A555021DC25_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD666285E70258F36167E291D368AF18634778C9A_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m1AA9C3BF14D62DCC103E8F68CBB49749D857355C_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_0 = __this->____entries_1;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m886C814E9C9761BD2AA0F9A9D56BCA1CCFF11116_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mCBB6AC446DBFD65FF07A17361464C30F16144971((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF Dictionary_2_GetEnumerator_m75D02ABF34F4ADB454D99D3BA9225F821D4CBFAA_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m708C5F5B3AF0FC9A273EC792455752DB6A45AFF7((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mFA48113C8E457E21B7560AC88C2D11E2367858BC_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m708C5F5B3AF0FC9A273EC792455752DB6A45AFF7((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mD3743E588474D2CBEE983D259682DCEA59762ACC_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_6;
		L_6 = ((  EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_14 = (KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A*)(KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_15 = V_0;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mCFC598C9E5F2364E8996E080E105BFF9E14CAABC_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_19;
		L_19 = ((  EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_31;
		L_31 = ((  EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_38 = V_7;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE658C594983AB30A5122DA22F1F2AFC74E97AFD9_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_5 = (EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882*)(EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3C586AE6BD9B79056333CFBBED27006A27113C5E_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* V_10 = NULL;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_24;
		L_24 = ((  EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_35 = ___0_key;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_44;
		L_44 = ((  EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_51 = V_12;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		RuntimeObject* L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3), (void*)L_60);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_62 = ___0_key;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		RuntimeObject* L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3), (void*)L_86);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_88 = ___0_key;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_121 = V_10;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_123 = V_10;
		RuntimeObject* L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&L_123->___value_3), (void*)L_124);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mE3C9E7E45F9729B8EB2ED50585C6D1697C42EE56_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_21;
		L_21 = KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_24;
		L_24 = KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4FDE7112AE1B577CEB05527E79214EC249543B68_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m771607244FBA16E9BAB42EBAA6B0DFCDD5CB1B7F_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_1 = NULL;
	int32_t V_2 = 0;
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_3 = (EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882*)(EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_5 = __this->____entries_1;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_8 = V_3;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_19 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD1E79CEA754A383395519C9B291D9D6C354CEF75_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = InputDevice_GetHashCode_m4F8831F85A8646E52B12B5431BEC004AD1BAAD9D((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* L_20;
		L_20 = ((  EqualityComparer_1_t3980DB88ABC42E06A7805785CA89A55A51CDF31F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_21 = V_4;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_22 = L_21->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_25 = V_4;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_26 = L_25->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.InputDevice>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_41 = V_4;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_42 = (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tE3E47CB63C25B094225BC862372D7C98BA5AADC5* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m16057058031F71CB4372AEA7E94F959FEE7D5C89_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF0F0910F889A0663EA176DADCF7ADF57198EBCA4_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m307279C43AEB515C1F7440BB1D3DFDB87B7C88F2_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9EB80CDD90979F4E924C6CBFE4C42422B549B422_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mDDF1A9E77C0BE16771360B0F97DE62919F8D0A1E_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, KeyValuePair_2U5BU5D_tBC9D2D74724C2584349DC2AF911135D1E4F49E5A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_39 = __this->____count_2;
			V_5 = L_39;
			EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_40 = __this->____entries_1;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode_0;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key_2;
			EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value_3;
			KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mCBB6AC446DBFD65FF07A17361464C30F16144971((&L_53), L_49, L_52, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m88A00B26C24F2D98549FD763492526216BC30861_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m708C5F5B3AF0FC9A273EC792455752DB6A45AFF7((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1AE787077B0853F4B18AA6E795FB8596A1B9C952_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mE32BEF954B965E6B74988A3788E3C9C744F53128_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)((InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t2CB1A5F62AE810B381834DDB2567F62F15A6A882* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m87D82BC8EA4ACA85EF92174782B8425296828D64_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)((InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m03212D5799580C07533AFFA55627B2BF39E9204D_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m59645152BF98C8991BF93EAE535F08594248DA61_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5*, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)((InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,System.Object>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3DCE30F930BC89DD6B5F557E9CCD7CAD9DC7DD52_gshared (Dictionary_2_t71D6FBDC59C9F3896AA3D4E3FEBCEA1D877D10C5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m708C5F5B3AF0FC9A273EC792455752DB6A45AFF7((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t9197E64766BD19E676DA3D61E9DF47729842F3EF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m06B53BFC9A627FEE633CC1D4E73314B2CFF4B48B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mABB854F1C48C5B03B68B0A413FFB9656F9153025_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE84BE58C018F881F5FF432C8895A962670F5B3F6_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC11BF75E2F3DCB9A0411B7ED8F06942BA0E86A29_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* G_B2_0 = NULL;
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>::get_Count() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 7)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_11 = ((Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count_2;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = L_11->____entries_1;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		bool L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value_3;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_30);
				V_4 = L_31;
				int32_t L_32;
				L_32 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
				bool L_33;
				L_33 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D9BC134A4251C2BCCD1C4F37FB14A2797C464AC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_1 = (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m6F85DD340CBD0BB52D03BE0F81028901D8F6ABCB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_1 = (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_2 = __this->____keys_7;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* Dictionary_2_get_Values_mD84044BD83C2E0E89780F9F680E6EAEAADE6C21B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_1 = (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_2 = __this->____values_8;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m7E3A5565412414A17D43D35E7DA2917BAAE9A88F_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_1 = (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_2 = __this->____values_8;
		return (RuntimeObject*)L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mFEABB1F5BA99558C75E330D9F550473FD42C4DFD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m88AD79C266834E07C99A1DE00A3297F9CD2B82EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_1;
		L_1 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4462F865217031D600D34D4B5E5D0FA1BA7BDD7D_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20A4B81A426018B486687D643DC8F024F7761D1B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE2925B42DE92CB95771AB4BADE479B7701671EB8_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFCD8AD6170953392F984E4F03BF8DDF3A9EF11BD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, bool ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		bool L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_15;
		L_15 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		bool L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		bool L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_24;
		L_24 = ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_28 = V_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		bool L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		bool L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		bool L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 Dictionary_2_GetEnumerator_mF19575B85A328947B27BABD4D104052B8F97FAC7_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m550E8A7B8C25429EBEA96D1DD7A0059CC7CB6CEC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m851F69AFEAA2AC71E6B21B50C7449A9D238049C8_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_14 = (KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)(KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_15 = V_0;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_31;
		L_31 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_38 = V_7;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		int32_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		int32_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		int32_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		bool L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_44;
		L_44 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_51 = V_12;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		int32_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		bool L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		int32_t L_62 = ___0_key;
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		int32_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		int32_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		bool L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_88 = ___0_key;
		int32_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_121 = V_10;
		int32_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_123 = V_10;
		bool L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m1838CBCE52011AAC0D92A0DED3DC325ABC7EDCC2_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 41))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 37)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		bool L_27;
		L_27 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = __this->____entries_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t* L_19 = (int32_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_21 = V_4;
		int32_t L_22 = L_21->___key_2;
		int32_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_25 = V_4;
		int32_t L_26 = L_25->___key_2;
		int32_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_41 = V_4;
		int32_t* L_42 = (int32_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(int32_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_43 = V_4;
		bool* L_44 = (bool*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(bool));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_3 = ___1_value;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(bool*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		bool* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(bool));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6F6DB11A61412ED7F25E26A206C82AC9AA051756_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61FB537A534F56E61FCCFA872BC66EE438782242_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF13795C1185ADAB240A05D015AECD78F34E7AE00_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBA9A0E8FB559E2D0FABD8C7A67552B9B885D383B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 46)));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 21), &L_28);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		bool L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		bool L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			bool L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 31));
			KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 30), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4A26B359A35B4E503C91AE2CAFB686510830C118_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34240AA3DCE5F7E234EA8F837E60359527F0FFBA_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m1934F06A0FDFB3B728445676E52E60E2DD61EF26_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 28), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD38B5DA87751A8D7F05EEB6939B74A8B202D60FC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21)))));
		}
		try
		{// begin try (depth: 2)
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)))(__this, L_3, ((*(bool*)((bool*)(bool*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 28))))), il2cpp_rgctx_method(method->klass->rgctx_data, 51));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 53)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2A20A4DC1297F17CA75CE556E9478BDCD7A24E97_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 21))))), il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4747AFBC242472C9FA82C860560FF507CC992117_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 32), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F KeyValuePair_2_get_Key_m2320E1303F8E2E1ED5809F110675F543CD9FAD14_gshared_inline (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 KeyValuePair_2_get_Value_mF01106C170F5220A3E8180C59045D6635364133B_gshared_inline (KeyValuePair_2_tAF2AA3C7AA59B04BB6972BF794FD2C6ABA730450* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F KeyValuePair_2_get_Key_mC3DC46865A2203B460DEDA7C675C096920276E6B_gshared_inline (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, const RuntimeMethod* method) 
{
	{
		HandExpressionName_t6A8653595F193468A2E582679422CB9B3E4AD36F L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m0BE7A28C390C785470160974F59B2F3251F11C4F_gshared_inline (KeyValuePair_2_t15DF97DBFE2D33A4F4F8A2428D07CC84B3612C70* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD KeyValuePair_2_get_Key_m749A3A8F4386C91708C0C4A5A65C3FCBDEFFE58F_gshared_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m02D78B1841378AD89DCFB25AB72FCE1D0F8F3249_gshared_inline (KeyValuePair_2_t55A4D6848C39E45165F686753BD37E19B24D994E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value_1;
		return L_0;
	}
}
