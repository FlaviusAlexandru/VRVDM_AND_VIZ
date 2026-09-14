#include "pch-cpp.hpp"





template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581;
struct EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD;
struct HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406;
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24;
struct HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9;
struct ICollection_1_tA28BD92EE735D6EEAEBC6FF59050F1D45E3DDF34;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t7E71F1CA7971B264996E675DD23421D9B7165B6A;
struct ICollection_1_t4C57D6BDFA1A75853A4FDD291C14176B3D701D22;
struct IEnumerable_1_t8845214D7CADFAAD7AB98132A368905184A79DDF;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t9C73E2DA2A24734B7BEE3997930B156A82172C56;
struct IEnumerable_1_t1F689D69E0BEE402CD49A82C30383FB6EBC71023;
struct IEnumerator_1_t772680255A1A75379853D3823763B88BF026E055;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IEnumerator_1_t269FD504FCBB3EA4A48960B5F2BEFD0E99D3E8E3;
struct IEqualityComparer_1_t4275A3D7B86C2D3C66842AB0700881FB24837F2D;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t9CDB2E77DE70F06FC5ED90C78DB6B9C356ECCEA9;
struct IEqualityComparer_1_t96267CF35DBF8D3A605A49E39C4DC601E9AC53F4;
struct IEqualityComparer_1_t67EE551CABDBFAF221FBE664AD5C932C6F0C2B54;
struct Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6;
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2;
struct Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916;
struct SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F;
struct SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7;
struct SlotU5BU5D_t0DFDE6B464BF0E0FFBA61B59D0A0ECFDA71DEA07;
struct SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0;
IL2CPP_EXTERN_C String_t* _stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F;
struct SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7;
struct SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581  : public RuntimeObject
{
};
struct EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD  : public RuntimeObject
{
};
struct HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t0DFDE6B464BF0E0FFBA61B59D0A0ECFDA71DEA07* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1  : public RuntimeObject
{
	int32_t ____length;
	int32_t* ____arrayPtr;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	bool ____useStackAlloc;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 
{
	int32_t ___uniqueCount;
	int32_t ___unfoundCount;
};
struct Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B 
{
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ____set;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB;
struct Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 
{
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ____set;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
struct Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
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
struct Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 
{
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ____set;
	int32_t ____index;
	int32_t ____version;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ____current;
};
struct Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE 
{
	int32_t ___hashCode;
	int32_t ___next;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___GameObjectEntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___ComponentID;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Component;
};
struct BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A_marshaled_pinvoke
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___GameObjectEntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___ComponentID;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Component;
};
struct BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A_marshaled_com
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___GameObjectEntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___ComponentID;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___Component;
};
struct Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E 
{
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ____set;
	int32_t ____index;
	int32_t ____version;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ____current;
};
struct Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9 
{
	int32_t ___hashCode;
	int32_t ___next;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___value;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6  : public MulticastDelegate_t
{
};
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2  : public MulticastDelegate_t
{
};
struct Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED_StaticFields
{
	EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields
{
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* ___defaultComparer;
};
struct EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD_StaticFields
{
	EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE m_Items[1];

	inline Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE value)
	{
		m_Items[index] = value;
	}
};
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
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A m_Items[1];

	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 m_Items[1];

	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB m_Items[1];

	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297  : public RuntimeArray
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
struct SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9 m_Items[1];

	inline Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___Component), (void*)NULL);
	}
	inline Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___Component), (void*)NULL);
	}
};
struct BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A m_Items[1];

	inline BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Component), (void*)NULL);
	}
	inline BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Component), (void*)NULL);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m93D90A148FC0DEFF863034F2CEFF56AD1581DF10_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mEB897E11BAB3F2B17E86353DB081E8AF14DAFC30_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF12A034E881C2649ADC5B35568D1E62686239346_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_set1, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m7CB99045EC95BC71CE9AF29C798427F89DC714D8_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m352524FBE8D0941ECCC37C20E97D65C2763DC0AD_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mE7FE54602CE3711B3E482CE0E0C943316A16C249_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m2D27129D375592CC160910A64C8C4FA27A027BDE_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_index, int32_t ___1_hashCode, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mADA200D7C81CFA0D338D7FAD5758FA29E53706CE_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF2C16B1603BF9577183D424FDD3F142FD5E7C520_gshared (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m36BCBA553BF29EC374E488E82805E8E8003386A0_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m600D4F46C07598023685C4D1FF68AB34FBCDE268_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mC600373D26C6EFBBDEAD06A96CDD53CD53C294ED_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mDB4BC8FC6A6005A11CBB7FB4D78D8D2273299BD9_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m0D5FD098E1ECF6682C550CEF442C16DA67D51B23_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m5D7655EA25016A0D036062B65DEEE134FD37668F_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_gshared_inline (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m7A593ABBD5AAD10C0DE5338FBFE7F6BB6B6F34A4_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m3A2D469BB468AF4A6EFE7C015AB78B87E1FB034B_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m03EC27792F3ED5082803261452773CA6C1BC1850_gshared_inline (Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mF036AAE2A87FA4F0F810BEB4C2475755C89107F4_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m7EF87F93F1480D7DD6ECABDC03B9B8ED9CE9D055_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 HashSet_1_GetEnumerator_mCED2135BDAD9EBD212D7AA0F1CA1C75D80986177_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3FF0B6C4DD35EFED932862622B5EA402BE89B35C_gshared (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Enumerator_get_Current_mD77725F3BA932F1B6A36B3C98820A549F37319CB_gshared_inline (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m47F0E9DE690411C35D942E12B21CE80E7045CBCB_gshared (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m52190FC9C08991046B318223CB4D7426E55F8CDC_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m7889EAE0CC02FAE4D24B71393BA7896C66513D62_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m64317EAE9C6934FD3C6BBD22C864BF48258C4C0A_gshared_inline (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set1, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA_gshared (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m5B1C5B024A4DC18F408F52941E9AB264800A1C89_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mA72DB9AF18401EED5B67C464E9A3250B51700A9B_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mDFBE7008C5CE30BFD6420E9B947AA307344105D9_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m83532A317857BE52B171CAE317703C523F4C4737_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_gshared_inline (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF06B45AA3F5DE58633E595E8E10BB3F1BBF8035B_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m4861247F50B5D6E00B9FE842AD1126A7924A70C3_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC5F51F21D770B5682BEF3AFA3FEA3CAFE435AB7F_gshared (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_gshared_inline (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9_gshared (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mB3911346BFAB138760A30245F5135A2E4B77E419_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m3E51E2B14993E7F8F88D15A09E910024B53D2FC9_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m674B6DD6FD8A313D1C3A5919FAA014DC966138A2_gshared_inline (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set1, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026_gshared (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m00A332EE23B3A92F790448816566E84BD869B41C_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m866269A5A58734511CD519B3A21AEDD1F074E7C0_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m6971A452EB1CFEFD4F37FA7E8B50F3FAC5F97F79_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m48F1A66FF2DBB9A97B266C6B6EC3D1536E5D092B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_gshared_inline (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF7AFDD77085C521D731D551C469E42E40481DAC4_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m3970AFF97F2CF5685AEB2A60C9E70AA46C58B204_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_gshared_inline (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 HashSet_1_GetEnumerator_mD8064197AE7997F40E2AC5FBB70EE851FCECADA0_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB8088CB649247809ED9999425FB7446697ACD4E3_gshared (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m753865782629EAB49682D70C7281584736566A00_gshared_inline (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m02644E315FF7B65790977C59702D3201CF132511_gshared (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m3967B3D57CE4B318872E0186CF4075A895C58717_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m3EEF191E2EC1639CF7479A7BED448DF157A9603B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m86107F9721DF6BE61AFA8CBC341D58AEC31AAC0C_gshared_inline (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m7436E6E959D675C36F2FEA3585211604009E8E08_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFE82472BD5AA91E6443668406A1AFFF7952F3274_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB648C9E312020492B186B6AD385785D8EECBBAD0_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_set1, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m3F24A1AAD52572F5EED423472E2805B0A9B5B5C7_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m91A6889E34AA6E5FF37FBDE6629D4F9E9BFD22D3_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m21810A9DAF9E6B8F38B93343EA832932825ADD45_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mB3E8D5CC74BACABBB1AEAF915104CA20B77B44EC_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_index, int32_t ___1_hashCode, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mA51152BEF6D5196DE81244171DC1704196CD8F6F_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5AE908CE29213C26DD92405600A331F44DC4BB7C_gshared (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m98CBF46834FA11C40DFD959253AA44D45654D03D_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m82FD3ED50CB06C3A6DA9F58CA7A02DA251FC3A86_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m3715A667A52A26692EC9BDF090177C3F2BDFDB52_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m353B65044D5F63ECA476196EBA69CD8D4F00B17E_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mF081E1542B6CBFF954BB88EC1B1B3A18B66340FA_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m96529B91E9CCF9AF4185D9652E060462BF7207AA_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_gshared_inline (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mBF9305A4506B8F6E0A3A2F0731F071D33548C0DA_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m10B6208CF2AEAC8D3706C98F9E864D46D2680B6E_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m410FB975ACF0F64224C28DA0593B9D877B75D5B4_gshared_inline (Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m00C735986C6E5951B8A4DC8CCD7B045F1EFBA866_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m6B99B7BD358FE4CFFD9ADEAB9666845D7B52CB3D_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E HashSet_1_GetEnumerator_mA9283057FA4C73718EFE5CEDB01F606106E5E548_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m52460A208B480293E3AE01228C36E4DB5BB5A6C9_gshared (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A Enumerator_get_Current_m3FA2DBD747092C5CD0C4EDEE9E9E5365005F0E54_gshared_inline (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1E08351072EA6D86F9E57F396BA7ED3A61354252_gshared (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mE214C092611782EC2E4EC0D14AC5741E807DD7F6_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_mF8C473A5721A9A9798D97D25F3DD0382998C851F_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_value, int32_t* ___1_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mE1B124F8B1035DC47FACAEF60E5310FA50AEF543_gshared_inline (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* EqualityComparer_1_CreateComparer_m2145B4B5CD4F015776D8A340DE334FFDE0F17CD2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* EqualityComparer_1_CreateComparer_mAE5FDB4D8DE1FB9635848E1BF6C33148962AC4ED_gshared (const RuntimeMethod* method) ;

inline EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_gshared_inline)(method);
}
inline void HashSet_1__ctor_m93D90A148FC0DEFF863034F2CEFF56AD1581DF10 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m93D90A148FC0DEFF863034F2CEFF56AD1581DF10_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_mEB897E11BAB3F2B17E86353DB081E8AF14DAFC30 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mEB897E11BAB3F2B17E86353DB081E8AF14DAFC30_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mF12A034E881C2649ADC5B35568D1E62686239346 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mF12A034E881C2649ADC5B35568D1E62686239346_gshared)(__this, ___0_collection, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_set1, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m7CB99045EC95BC71CE9AF29C798427F89DC714D8 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_CopyFrom_m7CB99045EC95BC71CE9AF29C798427F89DC714D8_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m352524FBE8D0941ECCC37C20E97D65C2763DC0AD (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m352524FBE8D0941ECCC37C20E97D65C2763DC0AD_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mE7FE54602CE3711B3E482CE0E0C943316A16C249 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_TrimExcess_mE7FE54602CE3711B3E482CE0E0C943316A16C249_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void HashSet_1_AddValue_m2D27129D375592CC160910A64C8C4FA27A027BDE (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_index, int32_t ___1_hashCode, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, int32_t, int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))HashSet_1_AddValue_m2D27129D375592CC160910A64C8C4FA27A027BDE_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_mADA200D7C81CFA0D338D7FAD5758FA29E53706CE (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mADA200D7C81CFA0D338D7FAD5758FA29E53706CE_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mF2C16B1603BF9577183D424FDD3F142FD5E7C520 (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01*, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))Enumerator__ctor_mF2C16B1603BF9577183D424FDD3F142FD5E7C520_gshared)(__this, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_m36BCBA553BF29EC374E488E82805E8E8003386A0 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*, const RuntimeMethod*))HashSet_1_CopyTo_m36BCBA553BF29EC374E488E82805E8E8003386A0_gshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashSet_1_Clear_m600D4F46C07598023685C4D1FF68AB34FBCDE268 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_Clear_m600D4F46C07598023685C4D1FF68AB34FBCDE268_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_mC600373D26C6EFBBDEAD06A96CDD53CD53C294ED (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_mC600373D26C6EFBBDEAD06A96CDD53CD53C294ED_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_mDB4BC8FC6A6005A11CBB7FB4D78D8D2273299BD9 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_mDB4BC8FC6A6005A11CBB7FB4D78D8D2273299BD9_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_m0D5FD098E1ECF6682C550CEF442C16DA67D51B23 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_m0D5FD098E1ECF6682C550CEF442C16DA67D51B23_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m5D7655EA25016A0D036062B65DEEE134FD37668F (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m5D7655EA25016A0D036062B65DEEE134FD37668F_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_inline (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_m7A593ABBD5AAD10C0DE5338FBFE7F6BB6B6F34A4 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_m7A593ABBD5AAD10C0DE5338FBFE7F6BB6B6F34A4_gshared)(__this, ___0_other, method);
}
inline ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m3A2D469BB468AF4A6EFE7C015AB78B87E1FB034B (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m3A2D469BB468AF4A6EFE7C015AB78B87E1FB034B_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_m03EC27792F3ED5082803261452773CA6C1BC1850_inline (Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))Predicate_1_Invoke_m03EC27792F3ED5082803261452773CA6C1BC1850_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
inline void HashSet_1_SetCapacity_mF036AAE2A87FA4F0F810BEB4C2475755C89107F4 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mF036AAE2A87FA4F0F810BEB4C2475755C89107F4_gshared)(__this, ___0_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void HashSet_1_IncreaseCapacity_m7EF87F93F1480D7DD6ECABDC03B9B8ED9CE9D055 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m7EF87F93F1480D7DD6ECABDC03B9B8ED9CE9D055_gshared)(__this, method);
}
inline Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 HashSet_1_GetEnumerator_mCED2135BDAD9EBD212D7AA0F1CA1C75D80986177 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_GetEnumerator_mCED2135BDAD9EBD212D7AA0F1CA1C75D80986177_gshared)(__this, method);
}
inline void Enumerator_Dispose_m3FF0B6C4DD35EFED932862622B5EA402BE89B35C (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01*, const RuntimeMethod*))Enumerator_Dispose_m3FF0B6C4DD35EFED932862622B5EA402BE89B35C_gshared)(__this, method);
}
inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Enumerator_get_Current_mD77725F3BA932F1B6A36B3C98820A549F37319CB_inline (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, const RuntimeMethod* method)
{
	return ((  Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A (*) (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01*, const RuntimeMethod*))Enumerator_get_Current_mD77725F3BA932F1B6A36B3C98820A549F37319CB_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m47F0E9DE690411C35D942E12B21CE80E7045CBCB (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01*, const RuntimeMethod*))Enumerator_MoveNext_m47F0E9DE690411C35D942E12B21CE80E7045CBCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C (int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t* ___0_bitArrayPtr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_bitArray, int32_t ___1_length, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalIndexOf_m52190FC9C08991046B318223CB4D7426E55F8CDC (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*))HashSet_1_InternalIndexOf_m52190FC9C08991046B318223CB4D7426E55F8CDC_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2 (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* __this, int32_t ___0_bitPosition, const RuntimeMethod* method) ;
inline bool HashSet_1_AddOrGetLocation_m7889EAE0CC02FAE4D24B71393BA7896C66513D62 (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m7889EAE0CC02FAE4D24B71393BA7896C66513D62_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m64317EAE9C6934FD3C6BBD22C864BF48258C4C0A_inline (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*, const RuntimeMethod*))HashSet_1_get_Comparer_m64317EAE9C6934FD3C6BBD22C864BF48258C4C0A_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline void HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set1, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, const RuntimeMethod*))HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667_gshared)(__this, ___0_array, method);
}
inline void HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_m5B1C5B024A4DC18F408F52941E9AB264800A1C89 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_m5B1C5B024A4DC18F408F52941E9AB264800A1C89_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_mA72DB9AF18401EED5B67C464E9A3250B51700A9B (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_mA72DB9AF18401EED5B67C464E9A3250B51700A9B_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_mDFBE7008C5CE30BFD6420E9B947AA307344105D9 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_mDFBE7008C5CE30BFD6420E9B947AA307344105D9_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m83532A317857BE52B171CAE317703C523F4C4737 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m83532A317857BE52B171CAE317703C523F4C4737_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_inline (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF06B45AA3F5DE58633E595E8E10BB3F1BBF8035B (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_mF06B45AA3F5DE58633E595E8E10BB3F1BBF8035B_gshared)(__this, ___0_other, method);
}
inline ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m4861247F50B5D6E00B9FE842AD1126A7924A70C3 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m4861247F50B5D6E00B9FE842AD1126A7924A70C3_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88*, Il2CppSharedGenericObject*, const RuntimeMethod*))Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946_gshared)(__this, method);
}
inline Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568_gshared)(__this, method);
}
inline void Enumerator_Dispose_mC5F51F21D770B5682BEF3AFA3FEA3CAFE435AB7F (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, const RuntimeMethod*))Enumerator_Dispose_mC5F51F21D770B5682BEF3AFA3FEA3CAFE435AB7F_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_inline (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, const RuntimeMethod*))Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9 (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B*, const RuntimeMethod*))Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_mB3911346BFAB138760A30245F5135A2E4B77E419 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, const RuntimeMethod*))HashSet_1_InternalIndexOf_mB3911346BFAB138760A30245F5135A2E4B77E419_gshared)(__this, ___0_item, method);
}
inline bool HashSet_1_AddOrGetLocation_m3E51E2B14993E7F8F88D15A09E910024B53D2FC9 (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, Il2CppSharedGenericObject*, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m3E51E2B14993E7F8F88D15A09E910024B53D2FC9_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m674B6DD6FD8A313D1C3A5919FAA014DC966138A2_inline (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*, const RuntimeMethod*))HashSet_1_get_Comparer_m674B6DD6FD8A313D1C3A5919FAA014DC966138A2_gshared_inline)(__this, method);
}
inline void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared)(__this, ___0_set, method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline)(method);
}
inline void HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set1, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, int32_t, int32_t, const RuntimeMethod*))HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026 (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*, const RuntimeMethod*))HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB_gshared)(__this, ___0_array, method);
}
inline void HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_m00A332EE23B3A92F790448816566E84BD869B41C (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_m00A332EE23B3A92F790448816566E84BD869B41C_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_m866269A5A58734511CD519B3A21AEDD1F074E7C0 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_m866269A5A58734511CD519B3A21AEDD1F074E7C0_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_m6971A452EB1CFEFD4F37FA7E8B50F3FAC5F97F79 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_m6971A452EB1CFEFD4F37FA7E8B50F3FAC5F97F79_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m48F1A66FF2DBB9A97B266C6B6EC3D1536E5D092B (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m48F1A66FF2DBB9A97B266C6B6EC3D1536E5D092B_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_inline (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF7AFDD77085C521D731D551C469E42E40481DAC4 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_mF7AFDD77085C521D731D551C469E42E40481DAC4_gshared)(__this, ___0_other, method);
}
inline ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m3970AFF97F2CF5685AEB2A60C9E70AA46C58B204 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m3970AFF97F2CF5685AEB2A60C9E70AA46C58B204_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_inline (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F_gshared)(__this, method);
}
inline Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 HashSet_1_GetEnumerator_mD8064197AE7997F40E2AC5FBB70EE851FCECADA0 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_GetEnumerator_mD8064197AE7997F40E2AC5FBB70EE851FCECADA0_gshared)(__this, method);
}
inline void Enumerator_Dispose_mB8088CB649247809ED9999425FB7446697ACD4E3 (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65*, const RuntimeMethod*))Enumerator_Dispose_mB8088CB649247809ED9999425FB7446697ACD4E3_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_m753865782629EAB49682D70C7281584736566A00_inline (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65*, const RuntimeMethod*))Enumerator_get_Current_m753865782629EAB49682D70C7281584736566A00_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m02644E315FF7B65790977C59702D3201CF132511 (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65*, const RuntimeMethod*))Enumerator_MoveNext_m02644E315FF7B65790977C59702D3201CF132511_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_m3967B3D57CE4B318872E0186CF4075A895C58717 (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, const RuntimeMethod*))HashSet_1_InternalIndexOf_m3967B3D57CE4B318872E0186CF4075A895C58717_gshared)(__this, ___0_item, method);
}
inline bool HashSet_1_AddOrGetLocation_m3EEF191E2EC1639CF7479A7BED448DF157A9603B (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, int32_t, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_m3EEF191E2EC1639CF7479A7BED448DF157A9603B_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m86107F9721DF6BE61AFA8CBC341D58AEC31AAC0C_inline (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*, const RuntimeMethod*))HashSet_1_get_Comparer_m86107F9721DF6BE61AFA8CBC341D58AEC31AAC0C_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_gshared_inline)(method);
}
inline void HashSet_1__ctor_m7436E6E959D675C36F2FEA3585211604009E8E08 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m7436E6E959D675C36F2FEA3585211604009E8E08_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_mFE82472BD5AA91E6443668406A1AFFF7952F3274 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mFE82472BD5AA91E6443668406A1AFFF7952F3274_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mB648C9E312020492B186B6AD385785D8EECBBAD0 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mB648C9E312020492B186B6AD385785D8EECBBAD0_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_set1, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m3F24A1AAD52572F5EED423472E2805B0A9B5B5C7 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_CopyFrom_m3F24A1AAD52572F5EED423472E2805B0A9B5B5C7_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m91A6889E34AA6E5FF37FBDE6629D4F9E9BFD22D3 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m91A6889E34AA6E5FF37FBDE6629D4F9E9BFD22D3_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m21810A9DAF9E6B8F38B93343EA832932825ADD45 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_TrimExcess_m21810A9DAF9E6B8F38B93343EA832932825ADD45_gshared)(__this, method);
}
inline void HashSet_1_AddValue_mB3E8D5CC74BACABBB1AEAF915104CA20B77B44EC (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_index, int32_t ___1_hashCode, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, int32_t, int32_t, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*))HashSet_1_AddValue_mB3E8D5CC74BACABBB1AEAF915104CA20B77B44EC_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_mA51152BEF6D5196DE81244171DC1704196CD8F6F (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mA51152BEF6D5196DE81244171DC1704196CD8F6F_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m5AE908CE29213C26DD92405600A331F44DC4BB7C (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E*, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))Enumerator__ctor_m5AE908CE29213C26DD92405600A331F44DC4BB7C_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m98CBF46834FA11C40DFD959253AA44D45654D03D (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA*, const RuntimeMethod*))HashSet_1_CopyTo_m98CBF46834FA11C40DFD959253AA44D45654D03D_gshared)(__this, ___0_array, method);
}
inline void HashSet_1_Clear_m82FD3ED50CB06C3A6DA9F58CA7A02DA251FC3A86 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_Clear_m82FD3ED50CB06C3A6DA9F58CA7A02DA251FC3A86_gshared)(__this, method);
}
inline void HashSet_1_IntersectWithHashSetWithSameEC_m3715A667A52A26692EC9BDF090177C3F2BDFDB52 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_IntersectWithHashSetWithSameEC_m3715A667A52A26692EC9BDF090177C3F2BDFDB52_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_IntersectWithEnumerable_m353B65044D5F63ECA476196EBA69CD8D4F00B17E (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, RuntimeObject*, const RuntimeMethod*))HashSet_1_IntersectWithEnumerable_m353B65044D5F63ECA476196EBA69CD8D4F00B17E_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*))HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SymmetricExceptWithUniqueHashSet_mF081E1542B6CBFF954BB88EC1B1B3A18B66340FA (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithUniqueHashSet_mF081E1542B6CBFF954BB88EC1B1B3A18B66340FA_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_SymmetricExceptWithEnumerable_m96529B91E9CCF9AF4185D9652E060462BF7207AA (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SymmetricExceptWithEnumerable_m96529B91E9CCF9AF4185D9652E060462BF7207AA_gshared)(__this, ___0_other, method);
}
inline int32_t HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_inline (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_gshared_inline)(__this, method);
}
inline bool HashSet_1_IsSubsetOfHashSetWithSameEC_mBF9305A4506B8F6E0A3A2F0731F071D33548C0DA (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_IsSubsetOfHashSetWithSameEC_mBF9305A4506B8F6E0A3A2F0731F071D33548C0DA_gshared)(__this, ___0_other, method);
}
inline ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method)
{
	return ((  ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, RuntimeObject*, bool, const RuntimeMethod*))HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22_gshared)(__this, ___0_other, ___1_returnIfUnfound, method);
}
inline bool HashSet_1_ContainsAllElements_m10B6208CF2AEAC8D3706C98F9E864D46D2680B6E (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, RuntimeObject*, const RuntimeMethod*))HashSet_1_ContainsAllElements_m10B6208CF2AEAC8D3706C98F9E864D46D2680B6E_gshared)(__this, ___0_other, method);
}
inline bool HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*))HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22_gshared)(__this, ___0_item, method);
}
inline bool Predicate_1_Invoke_m410FB975ACF0F64224C28DA0593B9D877B75D5B4_inline (Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*))Predicate_1_Invoke_m410FB975ACF0F64224C28DA0593B9D877B75D5B4_gshared_inline)(__this, ___0_obj, method);
}
inline void HashSet_1_SetCapacity_m00C735986C6E5951B8A4DC8CCD7B045F1EFBA866 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m00C735986C6E5951B8A4DC8CCD7B045F1EFBA866_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m6B99B7BD358FE4CFFD9ADEAB9666845D7B52CB3D (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m6B99B7BD358FE4CFFD9ADEAB9666845D7B52CB3D_gshared)(__this, method);
}
inline Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E HashSet_1_GetEnumerator_mA9283057FA4C73718EFE5CEDB01F606106E5E548 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_GetEnumerator_mA9283057FA4C73718EFE5CEDB01F606106E5E548_gshared)(__this, method);
}
inline void Enumerator_Dispose_m52460A208B480293E3AE01228C36E4DB5BB5A6C9 (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E*, const RuntimeMethod*))Enumerator_Dispose_m52460A208B480293E3AE01228C36E4DB5BB5A6C9_gshared)(__this, method);
}
inline BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A Enumerator_get_Current_m3FA2DBD747092C5CD0C4EDEE9E9E5365005F0E54_inline (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, const RuntimeMethod* method)
{
	return ((  BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A (*) (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E*, const RuntimeMethod*))Enumerator_get_Current_m3FA2DBD747092C5CD0C4EDEE9E9E5365005F0E54_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m1E08351072EA6D86F9E57F396BA7ED3A61354252 (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E*, const RuntimeMethod*))Enumerator_MoveNext_m1E08351072EA6D86F9E57F396BA7ED3A61354252_gshared)(__this, method);
}
inline int32_t HashSet_1_InternalIndexOf_mE214C092611782EC2E4EC0D14AC5741E807DD7F6 (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*))HashSet_1_InternalIndexOf_mE214C092611782EC2E4EC0D14AC5741E807DD7F6_gshared)(__this, ___0_item, method);
}
inline bool HashSet_1_AddOrGetLocation_mF8C473A5721A9A9798D97D25F3DD0382998C851F (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_value, int32_t* ___1_location, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, int32_t*, const RuntimeMethod*))HashSet_1_AddOrGetLocation_mF8C473A5721A9A9798D97D25F3DD0382998C851F_gshared)(__this, ___0_value, ___1_location, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mE1B124F8B1035DC47FACAEF60E5310FA50AEF543_inline (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*, const RuntimeMethod*))HashSet_1_get_Comparer_mE1B124F8B1035DC47FACAEF60E5310FA50AEF543_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* EqualityComparer_1_CreateComparer_m2145B4B5CD4F015776D8A340DE334FFDE0F17CD2 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m2145B4B5CD4F015776D8A340DE334FFDE0F17CD2_gshared)(method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449_gshared)(method);
}
inline EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* EqualityComparer_1_CreateComparer_mAE5FDB4D8DE1FB9635848E1BF6C33148962AC4ED (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mAE5FDB4D8DE1FB9635848E1BF6C33148962AC4ED_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 96766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0E27874668BB3B3160062D69799276CFEF8072AB_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_0;
		L_0 = EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m93D90A148FC0DEFF863034F2CEFF56AD1581DF10(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 96767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m93D90A148FC0DEFF863034F2CEFF56AD1581DF10_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_1;
		L_1 = EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
// Method Definition Index: 96768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD32EDA4C9C9627696073BCAA6C096BCB3273100B_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_1;
		L_1 = EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mEB897E11BAB3F2B17E86353DB081E8AF14DAFC30(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
// Method Definition Index: 96769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA80D4A347BEBBBF940A7BE6E5B0989989484BD5B_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_1;
		L_1 = EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mF12A034E881C2649ADC5B35568D1E62686239346(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 96770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF12A034E881C2649ADC5B35568D1E62686239346_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m93D90A148FC0DEFF863034F2CEFF56AD1581DF10(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_7 = V_0;
		HashSet_1_CopyFrom_m7CB99045EC95BC71CE9AF29C798427F89DC714D8(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m352524FBE8D0941ECCC37C20E97D65C2763DC0AD(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mE7FE54602CE3711B3E482CE0E0C943316A16C249(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
// Method Definition Index: 96771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0D72ECC3B5FF0838A90EA42A7F7AF8820BBB54EB_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
// Method Definition Index: 96772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m7CB99045EC95BC71CE9AF29C798427F89DC714D8_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m2D27129D375592CC160910A64C8C4FA27A027BDE(__this, L_29, L_30, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
// Method Definition Index: 96773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mEB897E11BAB3F2B17E86353DB081E8AF14DAFC30_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m93D90A148FC0DEFF863034F2CEFF56AD1581DF10(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 96774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mBC35FF2555587A79E1706324B55A4FD7C58EC3FE_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
// Method Definition Index: 96775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m600D4F46C07598023685C4D1FF68AB34FBCDE268_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 96776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m9AE0B083B1E1D0A7F3DE708B9A6D94B8C482BB06_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mADA200D7C81CFA0D338D7FAD5758FA29E53706CE(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = __this->____freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = __this->____count;
		if (L_39)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_40 = V_5;
		__this->____freeList = L_40;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_41 = V_3;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_0135:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_5;
		V_2 = L_46;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_47 = V_4;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next;
		V_5 = L_49;
	}

IL_014c:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 96780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6AC441EFDB6E885E37017ED49580DC78A9EA456B_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 96781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 HashSet_1_GetEnumerator_mCED2135BDAD9EBD212D7AA0F1CA1C75D80986177_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF2C16B1603BF9577183D424FDD3F142FD5E7C520((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
// Method Definition Index: 96782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9E6EAF6D4BB458F9347E21A2213B976CAF3485C0_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF2C16B1603BF9577183D424FDD3F142FD5E7C520((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mECF73434C3CB9FD1729D87FB07888C25E0251DEC_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF2C16B1603BF9577183D424FDD3F142FD5E7C520((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mE4C5E2B8CAB91D10A6274AB1BFE36AC795D111CE_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_14 = (Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*)(Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32), (uint32_t)L_13);
		V_0 = L_14;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_15 = V_0;
		HashSet_1_CopyTo_m36BCBA553BF29EC374E488E82805E8E8003386A0(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
// Method Definition Index: 96785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m6D69D3B8CF77BF4DDD3CA06A3C09F82BCFE359C7_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_11 = (SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)(SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 96786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m517B9238E386530A854B4286891358CC8327A7B6_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
// Method Definition Index: 96787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m352524FBE8D0941ECCC37C20E97D65C2763DC0AD_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7;
				L_7 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
// Method Definition Index: 96788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m86F94033C30135FBF7215C78DF69E0DFCCA2541E_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m600D4F46C07598023685C4D1FF68AB34FBCDE268(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_mC600373D26C6EFBBDEAD06A96CDD53CD53C294ED(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_mDB4BC8FC6A6005A11CBB7FB4D78D8D2273299BD9(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
// Method Definition Index: 96789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m1FEE83E929092D2853DDE7279131817BCCE19441_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m600D4F46C07598023685C4D1FF68AB34FBCDE268(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9;
				L_9 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 96790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_m626CD9FD27BBBC58BA71829473DAD9A9F4F22153_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_m352524FBE8D0941ECCC37C20E97D65C2763DC0AD(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m600D4F46C07598023685C4D1FF68AB34FBCDE268(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_m0D5FD098E1ECF6682C550CEF442C16DA67D51B23(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m5D7655EA25016A0D036062B65DEEE134FD37668F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 96791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m61CAA9C46F59B7209BE2C6BC31D7BD90DFE1C899_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_0 = NULL;
	ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_m7A593ABBD5AAD10C0DE5338FBFE7F6BB6B6F34A4(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_14;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_mB9248F31A69AC03F55AF2B930376FDB945ED9588_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_m7A593ABBD5AAD10C0DE5338FBFE7F6BB6B6F34A4(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_20;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m325938EF4C5DB669643ACDD249377D024B909174_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m3A2D469BB468AF4A6EFE7C015AB78B87E1FB034B(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_15;
	}
}
// Method Definition Index: 96794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m5694925FA19ECFFE19B029F9D9CD51129A8E03F3_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m3A2D469BB468AF4A6EFE7C015AB78B87E1FB034B(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_18;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mEED8DFB28F5E87575A7262376006591E9D2107AA_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9;
				L_9 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 96796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m0A599B7FFF5D2FDD065FC0E951BDC04548F1C34D_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m3A2D469BB468AF4A6EFE7C015AB78B87E1FB034B(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_2 = L_18;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m36BCBA553BF29EC374E488E82805E8E8003386A0_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mADA200D7C81CFA0D338D7FAD5758FA29E53706CE(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mADA200D7C81CFA0D338D7FAD5758FA29E53706CE_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
// Method Definition Index: 96799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m6C9EDBE734BBAA84C2E5B34D33158F6529AAAED6_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6* L_8 = ___0_match;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m03EC27792F3ED5082803261452773CA6C1BC1850_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 96800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m64317EAE9C6934FD3C6BBD22C864BF48258C4C0A_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 96801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_mF6A8DE75AEFE83B09ED845E887676E157DED71E5_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_3 = __this->____slots;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___0_capacity;
		int32_t L_10;
		L_10 = HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_10;
	}

IL_0039:
	{
		int32_t L_11 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		HashSet_1_SetCapacity_mF036AAE2A87FA4F0F810BEB4C2475755C89107F4(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 96802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mE7FE54602CE3711B3E482CE0E0C943316A16C249_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_5 = (SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)(SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t62C2AFE6C1597DAE3A3B7E5B0EF4C421DB2161EE)L_16);
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
// Method Definition Index: 96803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_5 = (SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)(SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 96804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m7EF87F93F1480D7DD6ECABDC03B9B8ED9CE9D055_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mF036AAE2A87FA4F0F810BEB4C2475755C89107F4(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 96805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mF036AAE2A87FA4F0F810BEB4C2475755C89107F4_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_1 = (SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)(SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_3 = __this->____slots;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
// Method Definition Index: 96806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m33B8DA19446068FE363776FE2E9555B4140EA218(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m7EF87F93F1480D7DD6ECABDC03B9B8ED9CE9D055(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
// Method Definition Index: 96807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m2D27129D375592CC160910A64C8C4FA27A027BDE_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, int32_t ___0_index, int32_t ___1_hashCode, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
// Method Definition Index: 96808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m3A2D469BB468AF4A6EFE7C015AB78B87E1FB034B_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5;
				L_5 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 96809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_m7A593ABBD5AAD10C0DE5338FBFE7F6BB6B6F34A4_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 L_0;
		L_0 = HashSet_1_GetEnumerator_mCED2135BDAD9EBD212D7AA0F1CA1C75D80986177(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m3FF0B6C4DD35EFED932862622B5EA402BE89B35C((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
				L_1 = Enumerator_get_Current_mD77725F3BA932F1B6A36B3C98820A549F37319CB_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_1;
				HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_2 = ___0_other;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m47F0E9DE690411C35D942E12B21CE80E7045CBCB((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 96810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mC600373D26C6EFBBDEAD06A96CDD53CD53C294ED_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_6 = ___0_other;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_m1131AA92DE85E1E18532A0AEE70643F3CF06EE82(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mDB4BC8FC6A6005A11CBB7FB4D78D8D2273299BD9_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_13, L_11, L_12, NULL);
		V_2 = L_13;
	}

IL_002f:
	{
		RuntimeObject* L_14 = ___0_other;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					NullCheck((RuntimeObject*)L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_19;
				L_19 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_18);
				V_4 = L_19;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_20 = V_4;
				int32_t L_21;
				L_21 = HashSet_1_InternalIndexOf_m52190FC9C08991046B318223CB4D7426E55F8CDC(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_5 = L_21;
				int32_t L_22 = V_5;
				if ((((int32_t)L_22) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = V_2;
				int32_t L_24 = V_5;
				NullCheck(L_23);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_23, L_24, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_27 = __this->____slots;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		bool L_32;
		L_32 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_33 = __this->____slots;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value;
		bool L_36;
		L_36 = HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00a8:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m52190FC9C08991046B318223CB4D7426E55F8CDC_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_19 = V_3;
		return L_19;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0063:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_0074:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 96813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m0D5FD098E1ECF6682C550CEF442C16DA67D51B23_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01 L_1;
		L_1 = HashSet_1_GetEnumerator_mCED2135BDAD9EBD212D7AA0F1CA1C75D80986177(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m3FF0B6C4DD35EFED932862622B5EA402BE89B35C((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
				L_2 = Enumerator_get_Current_mD77725F3BA932F1B6A36B3C98820A549F37319CB_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_2;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_m69AFE2C9A67C0CFCFD7A362B73298B5FDC1FBD65(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m47F0E9DE690411C35D942E12B21CE80E7045CBCB((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// Method Definition Index: 96814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m5D7655EA25016A0D036062B65DEEE134FD37668F_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		if ((uintptr_t)L_11 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_11, 4));
		int8_t* L_13 = (int8_t*) (L_12 ? alloca(L_12) : NULL);
		memset(L_13, 0, L_12);
		int32_t L_14 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_15 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_15, (int32_t*)(L_13), L_14, NULL);
		V_3 = L_15;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_3 = L_23;
	}

IL_0049:
	{
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_29;
				L_29 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_5 = L_29;
				V_6 = 0;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_30 = V_5;
				bool L_31;
				L_31 = HashSet_1_AddOrGetLocation_m7889EAE0CC02FAE4D24B71393BA7896C66513D62(__this, L_30, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
				if (!L_31)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_32 = V_3;
				int32_t L_33 = V_6;
				NullCheck(L_32);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_32, L_33, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_34 = V_6;
				int32_t L_35 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)L_35)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_3;
				int32_t L_37 = V_6;
				NullCheck(L_36);
				bool L_38;
				L_38 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_36, L_37, NULL);
				if (L_38)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_39 = V_2;
				int32_t L_40 = V_6;
				NullCheck(L_39);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_39, L_40, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_41 = V_4;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_43 = V_2;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_46 = __this->____slots;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___value;
		bool L_49;
		L_49 = HashSet_1_Remove_mCCF6A3C3379839374CC8D2E71D821EEF84FA80AB(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00cb:
	{
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00d1:
	{
		int32_t L_51 = V_7;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m7889EAE0CC02FAE4D24B71393BA7896C66513D62_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_1 = ((int32_t)(L_2%L_4));
		V_2 = 0;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_5 = __this->____slots;
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_15 = V_3;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_18 = ___0_value;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_20 = ___1_location;
		int32_t L_21 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)L_21);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_006c:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_007f:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m7EF87F93F1480D7DD6ECABDC03B9B8ED9CE9D055(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00cd:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_t893ED63C996E15799645D3C23B6BAFD24BD5E36F* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t* L_62 = ___1_location;
		int32_t L_63 = V_4;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_62, (int32_t)L_63);
		return (bool)1;
	}
}
// Method Definition Index: 96816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 HashSet_1_CheckUniqueAndUnfoundElements_m3BEA79C4CEB235293A8B49BE910DF440046B9ADF_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_6;
				L_6 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		if ((uintptr_t)L_16 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_17 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_16, 4));
		int8_t* L_18 = (int8_t*) (L_17 ? alloca(L_17) : NULL);
		memset(L_18, 0, L_17);
		int32_t L_19 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_20 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_20, (int32_t*)(L_18), L_19, NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		int32_t L_23 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_24 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_24, L_22, L_23, NULL);
		V_2 = L_24;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_25 = ___0_other;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_25);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_27 = V_6;
					if (!L_27)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_28 = V_6;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_30;
				L_30 = InterfaceFuncInvoker0< Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_29);
				V_7 = L_30;
				Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_31 = V_7;
				int32_t L_32;
				L_32 = HashSet_1_InternalIndexOf_m52190FC9C08991046B318223CB4D7426E55F8CDC(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_2;
				int32_t L_35 = V_8;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_8;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
				int32_t L_39 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_40 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				bool L_41 = ___1_returnIfUnfound;
				if (!L_41)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_42 = V_6;
				NullCheck((RuntimeObject*)L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
				if (L_43)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_44 = V_4;
		(&V_0)->___uniqueCount = L_44;
		int32_t L_45 = V_3;
		(&V_0)->___unfoundCount = L_45;
		ElementCount_tF1E339962F2CE7BA32C9AB4FC111FA021E3A6339 L_46 = V_0;
		return L_46;
	}
}
// Method Definition Index: 96817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m085A7E077B030BB1F309AFAD3DB47090F8CF6C5A_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___0_set1, HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* ___1_set2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m64317EAE9C6934FD3C6BBD22C864BF48258C4C0A_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m64317EAE9C6934FD3C6BBD22C864BF48258C4C0A_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
// Method Definition Index: 96818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m79500F23774BD9F3B50CFFFB46720C221B757AA0_gshared (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
// Method Definition Index: 96766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0;
		L_0 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 96767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1;
		L_1 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
// Method Definition Index: 96768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m29CA721F1C302B35D6CBAB2E0A3D7E00B9DC778A_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1;
		L_1 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
// Method Definition Index: 96769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFE99F8010A42781CF855814597CF0160C7FFB4A5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1;
		L_1 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 96770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFCDFCE9F84E8B082D8437ADEBC2510701403EFB1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_7 = V_0;
		HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
// Method Definition Index: 96771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD0964BCEE75E5F1E93895C00AE053DC742505019_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
// Method Definition Index: 96772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m028A58CFB5CA2ADFA2DB7DA34F5AC5D8B6265BE2_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Il2CppSharedGenericObject* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A(__this, L_29, L_30, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
// Method Definition Index: 96773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4FE49541969583230751E3D25B00AE7237082428_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m5FDF9102DC9D987FE0E8337CFB94E86A6B68B548(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 96774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF8FC537CD21BAD2908F4EC89D6D155406E529902_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
// Method Definition Index: 96775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 96776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		Il2CppSharedGenericObject* L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m4EB641361BDF3FC11FB4CDA8A79424B55AFB3BFA_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		Il2CppSharedGenericObject* L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Il2CppSharedGenericObject** L_36 = (Il2CppSharedGenericObject**)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(Il2CppSharedGenericObject*));
	}

IL_00d1:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 96780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mEE5DD6ECB52F24C2D396CB46602C4CC8A53B00FF_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 96781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
// Method Definition Index: 96782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7C4EDEF9A1A1238E38791125AF77173136D29EBC_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m6D162755CCCDAC249342CE4E5EBC477BC28E8823_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4D16818AAD2B010C5C5DC629993DAD16BD8B2BEA((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mD99634BD0AF191CA3EC70A966A839B07FB765690_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32), (uint32_t)L_13);
		V_0 = L_14;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = V_0;
		HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
// Method Definition Index: 96785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mFFAE37018AAB07191DF230CF56C687331BCC199E_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_11 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Il2CppSharedGenericObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 96786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
// Method Definition Index: 96787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				Il2CppSharedGenericObject* L_7;
				L_7 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				Il2CppSharedGenericObject* L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
// Method Definition Index: 96788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_mA903B579E3CF8D3229E3A4A33FDDA90927B265A1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_m5B1C5B024A4DC18F408F52941E9AB264800A1C89(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_mA72DB9AF18401EED5B67C464E9A3250B51700A9B(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
// Method Definition Index: 96789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_mA328CEBE6E025549E9D544B0DC20F1CCEC010DC5_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Il2CppSharedGenericObject* L_9;
				L_9 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				Il2CppSharedGenericObject* L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 96790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_m3E85DE0761C9795EE9D5EC13C6A32B2585DD0974_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_mD56E705764C4A724F1E6DAB914BF1FAB638FFCF5(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m4C8B89A7D6EE903FEDF2AE7EB15C12372E770087(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_mDFBE7008C5CE30BFD6420E9B947AA307344105D9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m83532A317857BE52B171CAE317703C523F4C4737(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 96791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mD773B1FACC75D6E5BFB552068D84885D11794A67_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_0 = NULL;
	ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_mF06B45AA3F5DE58633E595E8E10BB3F1BBF8035B(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_14;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_mC329DA1E059D245AA4538A60A872DCE595C383BD_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_mF06B45AA3F5DE58633E595E8E10BB3F1BBF8035B(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_20;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m3A1ECC947A3B4FE6D317D91F10171AB8606D3E21_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m4861247F50B5D6E00B9FE842AD1126A7924A70C3(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_15;
	}
}
// Method Definition Index: 96794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m38AAE9B4945B12DF09933F7D7334834516C211CD_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m4861247F50B5D6E00B9FE842AD1126A7924A70C3(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_18;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m00247290D467B6DDE695DFE3E5EE9D027AB90D68_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				Il2CppSharedGenericObject* L_9;
				L_9 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				Il2CppSharedGenericObject* L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 96796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m512996FD5292D9C85E6448D053D3316CAA9C5BD1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m4861247F50B5D6E00B9FE842AD1126A7924A70C3(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_2 = L_18;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m83B5F0C3F341B138AD189241E6762A78BD201667_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mA854E58ED6EE82283166182AA7A29209D8CC67C7_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		Il2CppSharedGenericObject* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (Il2CppSharedGenericObject*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
// Method Definition Index: 96799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mE45557F0DF09C075D4766A041E2C84982308AA79_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_8 = ___0_match;
		Il2CppSharedGenericObject* L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		Il2CppSharedGenericObject* L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 96800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m674B6DD6FD8A313D1C3A5919FAA014DC966138A2_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 96801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_m53889211471496EC0885416EA3D07CD777570F07_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___0_capacity;
		int32_t L_10;
		L_10 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_10;
	}

IL_0039:
	{
		int32_t L_11 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 96802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m2E98FD13307EF10E42ECB39FED69CFAC76491024_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_5 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_tD60C68DFA0532BC7C50C0DA1C3226DC05F413C16)L_16);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
// Method Definition Index: 96803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_5 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 96804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 96805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m37222ED818520CDC7B7D634E6DE4C9A3248648B8_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_1 = (SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)(SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
// Method Definition Index: 96806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m1BF3C8BD185AC788A424F850C364176C1563B4FC(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		Il2CppSharedGenericObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		Il2CppSharedGenericObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		Il2CppSharedGenericObject* L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		Il2CppSharedGenericObject* L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value), (void*)L_50);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
// Method Definition Index: 96807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m1FDBBBAFA1029BF3FDD33A556E6145B3CF95E49A_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		Il2CppSharedGenericObject* L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value), (void*)L_8);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
// Method Definition Index: 96808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m4861247F50B5D6E00B9FE842AD1126A7924A70C3_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				Il2CppSharedGenericObject* L_5;
				L_5 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				Il2CppSharedGenericObject* L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 96809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF06B45AA3F5DE58633E595E8E10BB3F1BBF8035B_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	bool V_2 = false;
	{
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_0;
		L_0 = HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_mC5F51F21D770B5682BEF3AFA3FEA3CAFE435AB7F((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				Il2CppSharedGenericObject* L_1;
				L_1 = Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_1;
				HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_2 = ___0_other;
				Il2CppSharedGenericObject* L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 96810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m5B1C5B024A4DC18F408F52941E9AB264800A1C89_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppSharedGenericObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_6 = ___0_other;
		Il2CppSharedGenericObject* L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		Il2CppSharedGenericObject* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_mA72DB9AF18401EED5B67C464E9A3250B51700A9B_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Il2CppSharedGenericObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_13, L_11, L_12, NULL);
		V_2 = L_13;
	}

IL_002f:
	{
		RuntimeObject* L_14 = ___0_other;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					NullCheck((RuntimeObject*)L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				Il2CppSharedGenericObject* L_19;
				L_19 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_18);
				V_4 = L_19;
				Il2CppSharedGenericObject* L_20 = V_4;
				int32_t L_21;
				L_21 = HashSet_1_InternalIndexOf_mB3911346BFAB138760A30245F5135A2E4B77E419(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_5 = L_21;
				int32_t L_22 = V_5;
				if ((((int32_t)L_22) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = V_2;
				int32_t L_24 = V_5;
				NullCheck(L_23);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_23, L_24, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_27 = __this->____slots;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		bool L_32;
		L_32 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_33 = __this->____slots;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		Il2CppSharedGenericObject* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value;
		bool L_36;
		L_36 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00a8:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mB3911346BFAB138760A30245F5135A2E4B77E419_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Il2CppSharedGenericObject* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		Il2CppSharedGenericObject* L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_19 = V_3;
		return L_19;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0063:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_0074:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 96813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mDFBE7008C5CE30BFD6420E9B947AA307344105D9_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B L_1;
		L_1 = HashSet_1_GetEnumerator_m424EB03E25DE615E5944D7BCC698FFE80BEFF568(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_mC5F51F21D770B5682BEF3AFA3FEA3CAFE435AB7F((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				Il2CppSharedGenericObject* L_2;
				L_2 = Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_2;
				Il2CppSharedGenericObject* L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				Il2CppSharedGenericObject* L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_mF7CECFA2098EACD672B6E33E6F562CF24DA1543D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m33C5B6897405249EFA048F6A8D00FF1E0568B3A9((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// Method Definition Index: 96814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m83532A317857BE52B171CAE317703C523F4C4737_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Il2CppSharedGenericObject* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		if ((uintptr_t)L_11 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_11, 4));
		int8_t* L_13 = (int8_t*) (L_12 ? alloca(L_12) : NULL);
		memset(L_13, 0, L_12);
		int32_t L_14 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_15 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_15, (int32_t*)(L_13), L_14, NULL);
		V_3 = L_15;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_3 = L_23;
	}

IL_0049:
	{
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				Il2CppSharedGenericObject* L_29;
				L_29 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_5 = L_29;
				V_6 = 0;
				Il2CppSharedGenericObject* L_30 = V_5;
				bool L_31;
				L_31 = HashSet_1_AddOrGetLocation_m3E51E2B14993E7F8F88D15A09E910024B53D2FC9(__this, L_30, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
				if (!L_31)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_32 = V_3;
				int32_t L_33 = V_6;
				NullCheck(L_32);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_32, L_33, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_34 = V_6;
				int32_t L_35 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)L_35)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_3;
				int32_t L_37 = V_6;
				NullCheck(L_36);
				bool L_38;
				L_38 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_36, L_37, NULL);
				if (L_38)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_39 = V_2;
				int32_t L_40 = V_6;
				NullCheck(L_39);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_39, L_40, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_41 = V_4;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_43 = V_2;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_46 = __this->____slots;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		Il2CppSharedGenericObject* L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___value;
		bool L_49;
		L_49 = HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00cb:
	{
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00d1:
	{
		int32_t L_51 = V_7;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m3E51E2B14993E7F8F88D15A09E910024B53D2FC9_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_1 = ((int32_t)(L_2%L_4));
		V_2 = 0;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_5 = __this->____slots;
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_15 = V_3;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		Il2CppSharedGenericObject* L_18 = ___0_value;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_20 = ___1_location;
		int32_t L_21 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)L_21);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_006c:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_007f:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mAE35D751DCAC8CDD71BE675A190D2DF9CAB2B946(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00cd:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		Il2CppSharedGenericObject* L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value), (void*)L_50);
		SlotU5BU5D_tD36479A8FBE317616DC7256BE9727CD288EC88C6* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t* L_62 = ___1_location;
		int32_t L_63 = V_4;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_62, (int32_t)L_63);
		return (bool)1;
	}
}
// Method Definition Index: 96816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D HashSet_1_CheckUniqueAndUnfoundElements_m03402443F2E5831573EA966D367D35C7219984E9_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Il2CppSharedGenericObject* V_7 = NULL;
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				Il2CppSharedGenericObject* L_6;
				L_6 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		if ((uintptr_t)L_16 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_17 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_16, 4));
		int8_t* L_18 = (int8_t*) (L_17 ? alloca(L_17) : NULL);
		memset(L_18, 0, L_17);
		int32_t L_19 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_20 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_20, (int32_t*)(L_18), L_19, NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		int32_t L_23 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_24 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_24, L_22, L_23, NULL);
		V_2 = L_24;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_25 = ___0_other;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_25);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_27 = V_6;
					if (!L_27)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_28 = V_6;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				Il2CppSharedGenericObject* L_30;
				L_30 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_29);
				V_7 = L_30;
				Il2CppSharedGenericObject* L_31 = V_7;
				int32_t L_32;
				L_32 = HashSet_1_InternalIndexOf_mB3911346BFAB138760A30245F5135A2E4B77E419(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_2;
				int32_t L_35 = V_8;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_8;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
				int32_t L_39 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_40 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				bool L_41 = ___1_returnIfUnfound;
				if (!L_41)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_42 = V_6;
				NullCheck((RuntimeObject*)L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
				if (L_43)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_44 = V_4;
		(&V_0)->___uniqueCount = L_44;
		int32_t L_45 = V_3;
		(&V_0)->___unfoundCount = L_45;
		ElementCount_tC849078957EF8CA86FFA5589A77C11739E378E6D L_46 = V_0;
		return L_46;
	}
}
// Method Definition Index: 96817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m76549B933E28B04D5267DC7CED8EADBFC4763512_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___0_set1, HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* ___1_set2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m674B6DD6FD8A313D1C3A5919FAA014DC966138A2_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m674B6DD6FD8A313D1C3A5919FAA014DC966138A2_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
// Method Definition Index: 96818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m35AF8EEA217F3F8DB8EFAC73C322081BF6C0B20C_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		Il2CppSharedGenericObject* L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
// Method Definition Index: 96766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 96767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m938F8F1E5CECD06A2575952EC6D253BF0053EC3D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
// Method Definition Index: 96768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAFD9C455FC1D54D3BBD67275A15A02AD4193A4DE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
// Method Definition Index: 96769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDEE8470968EF687DF9B40AE07DE41E0B09652532_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 96770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4523730BBAA53ADE100ED764690FEC1639243C75_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
// Method Definition Index: 96771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1015BCA85A81FCEC34284D87AAE4E1AB7526FDD_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
// Method Definition Index: 96772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mFBAD19B5E7335AF392786729D62E2D9B04E0DDF4_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, L_29, L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_33: *(void**)L_33));
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
// Method Definition Index: 96773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB3665C091D8A36D90CC380C1D4FA37220DC6C40D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 96774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF6F4FF6F131B5A5671352C1A2E44A08203658B06_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return;
	}
}
// Method Definition Index: 96775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 96776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_1 = L_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m88DE8E9D3C3D641EB7F4567A05CB23A65AAABB4A_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_18 = L_1;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_19: *(void**)L_19));
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_31);
	}

IL_00a7:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), (-1));
		bool L_34;
		L_34 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_34)
		{
			goto IL_00d1;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_4;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)))), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	}

IL_00d1:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_39);
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 96780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76BECFED2AFB768A9DE14C29899DD46F16044F4D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 96781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetEnumerator_m75DD344FE9A073CA9564DC6A425EC36883FB32A7_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		return;
	}
}
// Method Definition Index: 96782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB077531C4148EC6AF72C7EC429E44A8636D2A8AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 96783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m63E181A7F597D9BB07C674DA40F21F4A2B755FB3_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 96784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m2D69A3859D85C85A103B08728E096D87DC9F5715_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32), (uint32_t)L_13);
		V_0 = L_14;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
// Method Definition Index: 96785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m05AAB1A1992F82537C1125645B4D0D82676561FA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_21: *(void**)L_21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 96786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
// Method Definition Index: 96787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1C3E9C4A4AE3555B04CD0140644DC4387D7592C6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_9;
				L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_8: *(void**)L_8));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
// Method Definition Index: 96788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m2DFB51A15E178713AE3ABB12712C98533143593D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_1;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_1;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
// Method Definition Index: 96789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m36DD4EF6FD936E9120140D6BCCA67DA891759D7E_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_10: *(void**)L_10));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 96790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_mCA7D558C2AE735D36A2FCB8EF798AD03C5352082_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
		bool L_8;
		L_8 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 96791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_mE61DEFCE1DB528373434DB1E0AC232016D93C34D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = V_0;
		bool L_7;
		L_7 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_0;
		bool L_12;
		L_12 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_14;
		L_14 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_14;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_m9D9C7E3C85E93DD072CA3337BAE50942BC7B34C7_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_2;
		bool L_13;
		L_13 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_17 = V_2;
		bool L_18;
		L_18 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_20;
		L_20 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_20;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_m0FBBADEC459533F60E5093A26C91FDB9510B783A_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_1;
		bool L_10;
		L_10 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_15;
	}
}
// Method Definition Index: 96794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m69AD22254EF51FB475202B4710FE0DBA6F0929C2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_2;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = V_2;
		bool L_16;
		L_16 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18;
		L_18 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_18;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_mACE07913C77D92D54A542F3BDBE27FDB5343CE99_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_memcpy(V_1, L_9, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_10: *(void**)L_10));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 96796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mEE1A697B324249DAF55E5030E26E7FF1606A2E26_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_10 = V_0;
		bool L_11;
		L_11 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)))(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_18;
		L_18 = ((  ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)))(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_2 = L_18;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3B04E1071B17DF96CD5B72299EE55F25E75EBD50_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3A8192100B5A0772B9962D3F1AA5CF3760ED113F_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), L_28, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), (void*)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
// Method Definition Index: 96799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m779C784616153E67C9EB38CEF6875A7DCC2492AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_2, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_8 = ___0_match;
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_12;
		L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_11: *(void**)L_11));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 96800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 96801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_m982F29942CDAFCCD11F30A8C909788138E5694A3_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___0_capacity;
		int32_t L_10;
		L_10 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_10;
	}

IL_0039:
	{
		int32_t L_11 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 96802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m61244B342437754775955075EDF4F12C60341CE0_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
	const Slot_tEC146EEEF7022C6542EBF082D658446682962BFD L_16 = alloca(SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		NullCheck(L_11);
		il2cpp_codegen_memcpy((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), L_16, SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18), (void**)(L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), (void*)L_16);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_26, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
// Method Definition Index: 96803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mB8584D1E01509492EE6C3DC75184140DBE2F053B_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 96804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC3B321603207D03BD776F91FF7741EFF27621BD2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 96805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mA861522E8D0DB9628EEABF16F04BD49C6C0DC774_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
// Method Definition Index: 96806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m58D69C8710CAB51D00282379158F183A79344DFB_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_19 = L_2;
	const Il2CppFullySharedGenericAny L_50 = L_2;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_3;
		L_3 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_2: *(void**)L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_20: *(void**)L_20));
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_47);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_50, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_56, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
// Method Definition Index: 96807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m038B507326561F3D8BD44AD54E3FFAC497ED5C05_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_5);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___2_value : &___2_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_8, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_14, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
// Method Definition Index: 96808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_mFB7B29A9FDD11C8B7C465C5D9A77008A14776F8F_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_7;
				L_7 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_6: *(void**)L_6));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 96809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mD3C0C7C7B1ACC01867AEDBE3E68CB155D11485F9_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	//<source_info:<no-source>:1>
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	memset(V_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	bool V_2 = false;
	{
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), __this, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0);
		il2cpp_codegen_memcpy(V_0, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Il2CppConstrainedCallData L_2;
				Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), il2cpp_rgctx_method(method->klass->rgctx_data, 59), (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, &L_2, L_1);
				typedef void ( *func_L_4)(void*,const RuntimeMethod*);
				((func_L_4)L_3)(L_2.thisPtr,L_2.method);
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)), il2cpp_rgctx_method(method->klass->rgctx_data, 56), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, (Il2CppFullySharedGenericAny*)L_5);
				il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = ___0_other;
				il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				NullCheck(L_6);
				bool L_8;
				L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_7: *(void**)L_7));
				if (L_8)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_9;
				L_9 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 96810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_mD2B4043947170AB6CF12C8F738DFF5BFDC77FC97_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_6 = ___0_other;
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_6);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_7: *(void**)L_7));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m93E0FAE7B792664A04D177546C9EEEB0D83348ED_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_35 = L_19;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_4, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_13, L_11, L_12, NULL);
		V_2 = L_13;
	}

IL_002f:
	{
		RuntimeObject* L_14 = ___0_other;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					NullCheck((RuntimeObject*)L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_18, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_memcpy(V_4, L_19, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_20, V_4, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				int32_t L_21;
				L_21 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_20: *(void**)L_20));
				V_5 = L_21;
				int32_t L_22 = V_5;
				if ((((int32_t)L_22) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = V_2;
				int32_t L_24 = V_5;
				NullCheck(L_23);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_23, L_24, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_27 = __this->____slots;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		bool L_32;
		L_32 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_33 = __this->____slots;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_36;
		L_36 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_35: *(void**)L_35));
	}

IL_00a8:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m247DC7E2CE2AE78F3825DD44108362C2CE93F017_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_16 = L_0;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		V_1 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17));
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_19 = V_3;
		return L_19;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0063:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_3 = L_27;
	}

IL_0074:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 96813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mF0364E4CA386A32E64A3486495014CEE7D8160E2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_other, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27)));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_1 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	//<source_info:<no-source>:1>
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB V_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	memset(V_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_other;
		NullCheck(L_0);
		InvokerActionInvoker1< Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), L_0, (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Il2CppConstrainedCallData L_3;
				Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), il2cpp_rgctx_method(method->klass->rgctx_data, 59), (void*)(Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, &L_3, L_2);
				typedef void ( *func_L_5)(void*,const RuntimeMethod*);
				((func_L_5)L_4)(L_3.thisPtr,L_3.method);
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)), il2cpp_rgctx_method(method->klass->rgctx_data, 56), (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_8;
				L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_7: *(void**)L_7));
				if (L_8)
				{
					goto IL_0022_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_9, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_10;
				L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
			}

IL_0022_1:
			{
				bool L_11;
				L_11 = ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)))((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)V_0, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_11)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// Method Definition Index: 96814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_mD0496C8210742F63B2B8397ADCB7457944668841_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_48 = L_29;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_5, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		if ((uintptr_t)L_11 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_11, 4));
		int8_t* L_13 = (int8_t*) (L_12 ? alloca(L_12) : NULL);
		memset(L_13, 0, L_12);
		int32_t L_14 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_15 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_15, (int32_t*)(L_13), L_14, NULL);
		V_3 = L_15;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_3 = L_23;
	}

IL_0049:
	{
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28, (Il2CppFullySharedGenericAny*)L_29);
				il2cpp_codegen_memcpy(V_5, L_29, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				V_6 = 0;
				il2cpp_codegen_memcpy(L_30, V_5, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_31;
				L_31 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)), il2cpp_rgctx_method(method->klass->rgctx_data, 61), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_30: *(void**)L_30), (&V_6));
				if (!L_31)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_32 = V_3;
				int32_t L_33 = V_6;
				NullCheck(L_32);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_32, L_33, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_34 = V_6;
				int32_t L_35 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)L_35)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_3;
				int32_t L_37 = V_6;
				NullCheck(L_36);
				bool L_38;
				L_38 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_36, L_37, NULL);
				if (L_38)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_39 = V_2;
				int32_t L_40 = V_6;
				NullCheck(L_39);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_39, L_40, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_41 = V_4;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_43 = V_2;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_46 = __this->____slots;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_49;
		L_49 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_48: *(void**)L_48));
	}

IL_00cb:
	{
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00d1:
	{
		int32_t L_51 = V_7;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_mB53F0CC8A5811925F87B7DAD06914055BEB6A861_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_17 = L_0;
	const Il2CppFullySharedGenericAny L_50 = L_0;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_1 = ((int32_t)(L_2%L_4));
		V_2 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_15 = V_3;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_20 = ___1_location;
		int32_t L_21 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)L_21);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_006c:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_29;
	}

IL_007f:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		__this->____freeList = L_35;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00cd;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00cd:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_47);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_50, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_56, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t* L_62 = ___1_location;
		int32_t L_63 = V_4;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_62, (int32_t)L_63);
		return (bool)1;
	}
}
// Method Definition Index: 96816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 HashSet_1_CheckUniqueAndUnfoundElements_mE015C3640B788E156F8AE69EB69B867C0EC7F006_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_30 = L_6;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	//<source_info:<no-source>:1>
	ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_7, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5, (Il2CppFullySharedGenericAny*)L_6);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		if ((uintptr_t)L_16 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_17 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_16, 4));
		int8_t* L_18 = (int8_t*) (L_17 ? alloca(L_17) : NULL);
		memset(L_18, 0, L_17);
		int32_t L_19 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_20 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_20, (int32_t*)(L_18), L_19, NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		int32_t L_23 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_24 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_24, L_22, L_23, NULL);
		V_2 = L_24;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_25 = ___0_other;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_25);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_27 = V_6;
					if (!L_27)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_28 = V_6;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_29, (Il2CppFullySharedGenericAny*)L_30);
				il2cpp_codegen_memcpy(V_7, L_30, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_31, V_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				int32_t L_32;
				L_32 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_31: *(void**)L_31));
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_2;
				int32_t L_35 = V_8;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_8;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
				int32_t L_39 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_40 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				bool L_41 = ___1_returnIfUnfound;
				if (!L_41)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_42 = V_6;
				NullCheck((RuntimeObject*)L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
				if (L_43)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_44 = V_4;
		(&V_0)->___uniqueCount = L_44;
		int32_t L_45 = V_3;
		(&V_0)->___unfoundCount = L_45;
		ElementCount_t86E429CA4DE6B6E59BE5A0601768F5C6318A0455 L_46 = V_0;
		return L_46;
	}
}
// Method Definition Index: 96817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set1, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___1_set2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62)))(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
// Method Definition Index: 96818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1A1758DA258D8DE5AA075333D2B6D4DF0B75A4D6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19), L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = __this->____comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
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
// Method Definition Index: 96766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFA9ABE9EAD278DF60DCED8638691B11924112574_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0;
		L_0 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 96767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1;
		L_1 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
// Method Definition Index: 96768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m05CD922C8A58A2FC0B03BD567B51E707F484DF87_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1;
		L_1 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
// Method Definition Index: 96769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m613AA75C8A30C4D00871800AB27984D83BB5D357_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1;
		L_1 = EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 96770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E87B79B4FAE21AB1EBA9FCECC8E3828BBAF1705_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_7 = V_0;
		HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
// Method Definition Index: 96771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3BF4F8E0F64950C91C389BE0E74B5766B1ED3056_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
// Method Definition Index: 96772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m978CC93C745B8F3687AD7969B0E7AEED974ABF5B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA(__this, L_29, L_30, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
// Method Definition Index: 96773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCDCBCF67914F9F88FE8F46CDF4FF7F02972B0C92_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mF66A30E2D3F183F1BDD78E290705A6B2FF33B5AC(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 96774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m9BAC32E7B754E44559FB523A5D208102062F3EC2_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
// Method Definition Index: 96775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 96776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int32_t L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m17E41F33EC34CF660E73A8144A3C02F320415319_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int32_t L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = __this->____freeList;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_36;
		int32_t L_37 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_38 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = __this->____count;
		if (L_39)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_40 = V_5;
		__this->____freeList = L_40;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_41 = V_3;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_42 = V_4;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_0135:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = V_5;
		V_2 = L_46;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_47 = V_4;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___next;
		V_5 = L_49;
	}

IL_014c:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 96780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mCF5A35F512B55CF1802235C7C0C8592CA2D5C2ED_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 96781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 HashSet_1_GetEnumerator_mD8064197AE7997F40E2AC5FBB70EE851FCECADA0_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
// Method Definition Index: 96782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mAA7F6ECF59772981918C64A0B8188010F5E37955_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m5BB0BE8BBA9F7DE54CB34150BB75F8D48F77E61E_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8DC8D49F1A8F634AB569FC6B9525BDE1244BC026((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_mD2AC22E0E4A0F6E5D537D93004C9D9E5FDAC7509_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_14 = (__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)(__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32), (uint32_t)L_13);
		V_0 = L_14;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_15 = V_0;
		HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
// Method Definition Index: 96785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m5C78FF00814B7A2DDFBAC0BFE68B03D800B57CAF_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_11 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 96786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mDC432112D14CA9886B702C47A3A1905EB0F2DF21_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
// Method Definition Index: 96787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				int32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
// Method Definition Index: 96788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m0665650F39720BCF3A817A74CF50AF81416A084F_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_m00A332EE23B3A92F790448816566E84BD869B41C(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_m866269A5A58734511CD519B3A21AEDD1F074E7C0(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
// Method Definition Index: 96789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m35C35C524D201D1AF60BF37630B64F740B4C2AEB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int32_t L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 96790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_mB619761F670766B1638C6F9EBCF8D90120E13784_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_mD9C2C94294AE71FE28BB7EBE1D856E0942D7F120(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m3A65B0CC7DF750490916D98C62E7434024BE21DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_m6971A452EB1CFEFD4F37FA7E8B50F3FAC5F97F79(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m48F1A66FF2DBB9A97B266C6B6EC3D1536E5D092B(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 96791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m391E4062F2DE8D9A66DF0A9FE1B15534942E71BA_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_0 = NULL;
	ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_mF7AFDD77085C521D731D551C469E42E40481DAC4(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_14;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_mB16BDA11CF0C303AAA86AEE2ADCEDA0CBC67489A_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_mF7AFDD77085C521D731D551C469E42E40481DAC4(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_20;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_mFBE2E783C721EE7EA6F8AE7E173FAFFEF9131E49_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m3970AFF97F2CF5685AEB2A60C9E70AA46C58B204(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_15;
	}
}
// Method Definition Index: 96794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_mA511DED42B41D7B9733A0CF0EBBB4845D2C21494_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m3970AFF97F2CF5685AEB2A60C9E70AA46C58B204(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_18;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m79F1922C66005F7401C4A7EEAB81704A7994BB03_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				int32_t L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 96796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m4E1321C3051CC9A5DA0287118141118B3A48ED4A_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m3970AFF97F2CF5685AEB2A60C9E70AA46C58B204(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_2 = L_18;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5F346A005CA1BC8F871E36DDDCC26C310A1851FB_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m54A8EBDA71826FCE7E32CC5654B45D84670724DC_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (int32_t)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
// Method Definition Index: 96799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_mBB8BDFE95D719DD51B7DFE3F99959AB61D2422E4_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* L_8 = ___0_match;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 96800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m86107F9721DF6BE61AFA8CBC341D58AEC31AAC0C_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 96801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_m893CDDA75C3E60186B31E53240A02E0B62C58D49_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___0_capacity;
		int32_t L_10;
		L_10 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_10;
	}

IL_0039:
	{
		int32_t L_11 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 96802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m265D56C5A03DC6473FC91B32E34BD38FCC0C3AF1_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_5 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t684B8E18EA8D782C7F53E5EE33940751793E28CB)L_16);
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
// Method Definition Index: 96803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_5 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 96804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 96805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mD52B5DA7BA680E5FFC237284B322EECCD570272E_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_1 = (SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)(SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
// Method Definition Index: 96806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m627218E92E4F80498E486A2C595062FF0445CB52(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		int32_t L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
// Method Definition Index: 96807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m4C6337D769BC083E636B55B9DD25C5B0BBB7CFEA_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		int32_t L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
// Method Definition Index: 96808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m3970AFF97F2CF5685AEB2A60C9E70AA46C58B204_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				int32_t L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 96809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mF7AFDD77085C521D731D551C469E42E40481DAC4_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_0;
		L_0 = HashSet_1_GetEnumerator_mD8064197AE7997F40E2AC5FBB70EE851FCECADA0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_mB8088CB649247809ED9999425FB7446697ACD4E3((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				int32_t L_1;
				L_1 = Enumerator_get_Current_m753865782629EAB49682D70C7281584736566A00_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_1;
				HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_2 = ___0_other;
				int32_t L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m02644E315FF7B65790977C59702D3201CF132511((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 96810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m00A332EE23B3A92F790448816566E84BD869B41C_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_6 = ___0_other;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mE684C73317C3A59D1D277D3C1B456DF23555A57C(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m866269A5A58734511CD519B3A21AEDD1F074E7C0_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_13, L_11, L_12, NULL);
		V_2 = L_13;
	}

IL_002f:
	{
		RuntimeObject* L_14 = ___0_other;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					NullCheck((RuntimeObject*)L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_18);
				V_4 = L_19;
				int32_t L_20 = V_4;
				int32_t L_21;
				L_21 = HashSet_1_InternalIndexOf_m3967B3D57CE4B318872E0186CF4075A895C58717(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_5 = L_21;
				int32_t L_22 = V_5;
				if ((((int32_t)L_22) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = V_2;
				int32_t L_24 = V_5;
				NullCheck(L_23);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_23, L_24, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_27 = __this->____slots;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		bool L_32;
		L_32 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_33 = __this->____slots;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value;
		bool L_36;
		L_36 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00a8:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_m3967B3D57CE4B318872E0186CF4075A895C58717_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int32_t L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_19 = V_3;
		return L_19;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0063:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_0074:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 96813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_m6971A452EB1CFEFD4F37FA7E8B50F3FAC5F97F79_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65 L_1;
		L_1 = HashSet_1_GetEnumerator_mD8064197AE7997F40E2AC5FBB70EE851FCECADA0(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_mB8088CB649247809ED9999425FB7446697ACD4E3((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				int32_t L_2;
				L_2 = Enumerator_get_Current_m753865782629EAB49682D70C7281584736566A00_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_2;
				int32_t L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				int32_t L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_m9D89718870798717695B5978EEA4339FEEAE1113(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m02644E315FF7B65790977C59702D3201CF132511((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// Method Definition Index: 96814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m48F1A66FF2DBB9A97B266C6B6EC3D1536E5D092B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		if ((uintptr_t)L_11 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_11, 4));
		int8_t* L_13 = (int8_t*) (L_12 ? alloca(L_12) : NULL);
		memset(L_13, 0, L_12);
		int32_t L_14 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_15 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_15, (int32_t*)(L_13), L_14, NULL);
		V_3 = L_15;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_3 = L_23;
	}

IL_0049:
	{
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				int32_t L_29;
				L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_5 = L_29;
				V_6 = 0;
				int32_t L_30 = V_5;
				bool L_31;
				L_31 = HashSet_1_AddOrGetLocation_m3EEF191E2EC1639CF7479A7BED448DF157A9603B(__this, L_30, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
				if (!L_31)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_32 = V_3;
				int32_t L_33 = V_6;
				NullCheck(L_32);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_32, L_33, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_34 = V_6;
				int32_t L_35 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)L_35)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_3;
				int32_t L_37 = V_6;
				NullCheck(L_36);
				bool L_38;
				L_38 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_36, L_37, NULL);
				if (L_38)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_39 = V_2;
				int32_t L_40 = V_6;
				NullCheck(L_39);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_39, L_40, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_41 = V_4;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_43 = V_2;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_46 = __this->____slots;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___value;
		bool L_49;
		L_49 = HashSet_1_Remove_m83326AF85DE97837E08AF395CCA27595816119A1(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00cb:
	{
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00d1:
	{
		int32_t L_51 = V_7;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_m3EEF191E2EC1639CF7479A7BED448DF157A9603B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_1 = ((int32_t)(L_2%L_4));
		V_2 = 0;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_5 = __this->____slots;
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_15 = V_3;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int32_t L_18 = ___0_value;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_20 = ___1_location;
		int32_t L_21 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)L_21);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_006c:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_007f:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m5A24DE79434A627CC158B3751DEEBA7F9889783F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00cd:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		int32_t L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		SlotU5BU5D_tB5A7E1EFC6E26BB46D20112E922C3AAB19F8C7C7* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t* L_62 = ___1_location;
		int32_t L_63 = V_4;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_62, (int32_t)L_63);
		return (bool)1;
	}
}
// Method Definition Index: 96816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E HashSet_1_CheckUniqueAndUnfoundElements_m4AB426B3A943E4C842CE847D4AD92EADE2CAE48B_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		if ((uintptr_t)L_16 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_17 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_16, 4));
		int8_t* L_18 = (int8_t*) (L_17 ? alloca(L_17) : NULL);
		memset(L_18, 0, L_17);
		int32_t L_19 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_20 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_20, (int32_t*)(L_18), L_19, NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		int32_t L_23 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_24 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_24, L_22, L_23, NULL);
		V_2 = L_24;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_25 = ___0_other;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_25);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_27 = V_6;
					if (!L_27)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_28 = V_6;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				int32_t L_30;
				L_30 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_29);
				V_7 = L_30;
				int32_t L_31 = V_7;
				int32_t L_32;
				L_32 = HashSet_1_InternalIndexOf_m3967B3D57CE4B318872E0186CF4075A895C58717(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_2;
				int32_t L_35 = V_8;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_8;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
				int32_t L_39 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_40 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				bool L_41 = ___1_returnIfUnfound;
				if (!L_41)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_42 = V_6;
				NullCheck((RuntimeObject*)L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
				if (L_43)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_44 = V_4;
		(&V_0)->___uniqueCount = L_44;
		int32_t L_45 = V_3;
		(&V_0)->___unfoundCount = L_45;
		ElementCount_tD0CA4D2642AC75933EB30DFAC880AFF0A921B84E L_46 = V_0;
		return L_46;
	}
}
// Method Definition Index: 96817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mE41ABF86C4A7ABB55F444ACD802407DE7A896B69_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___0_set1, HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* ___1_set2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m86107F9721DF6BE61AFA8CBC341D58AEC31AAC0C_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m86107F9721DF6BE61AFA8CBC341D58AEC31AAC0C_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
// Method Definition Index: 96818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1D29FD23BE7D8543A5981264393693E4CD32EE18_gshared (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int32_t L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
// Method Definition Index: 96766
// Method Definition Index: 96767
// Method Definition Index: 96768
// Method Definition Index: 96769
// Method Definition Index: 96770
// Method Definition Index: 96771
// Method Definition Index: 96772
// Method Definition Index: 96773
// Method Definition Index: 96774
// Method Definition Index: 96775
// Method Definition Index: 96776
// Method Definition Index: 96777
// Method Definition Index: 96778
// Method Definition Index: 96779
// Method Definition Index: 96780
// Method Definition Index: 96781
// Method Definition Index: 96782
// Method Definition Index: 96783
// Method Definition Index: 96784
// Method Definition Index: 96785
// Method Definition Index: 96786
// Method Definition Index: 96787
// Method Definition Index: 96788
// Method Definition Index: 96789
// Method Definition Index: 96790
// Method Definition Index: 96791
// Method Definition Index: 96792
// Method Definition Index: 96793
// Method Definition Index: 96794
// Method Definition Index: 96795
// Method Definition Index: 96796
// Method Definition Index: 96797
// Method Definition Index: 96798
// Method Definition Index: 96799
// Method Definition Index: 96800
// Method Definition Index: 96801
// Method Definition Index: 96802
// Method Definition Index: 96803
// Method Definition Index: 96804
// Method Definition Index: 96805
// Method Definition Index: 96806
// Method Definition Index: 96807
// Method Definition Index: 96808
// Method Definition Index: 96809
// Method Definition Index: 96810
// Method Definition Index: 96811
// Method Definition Index: 96812
// Method Definition Index: 96813
// Method Definition Index: 96814
// Method Definition Index: 96815
// Method Definition Index: 96816
// Method Definition Index: 96817
// Method Definition Index: 96818
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 96766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0839FBCA0FA885BB2F0ED39E54B95B2FBAAE0F13_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_0;
		L_0 = EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m7436E6E959D675C36F2FEA3585211604009E8E08(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
// Method Definition Index: 96767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m7436E6E959D675C36F2FEA3585211604009E8E08_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_1;
		L_1 = EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
// Method Definition Index: 96768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9F7441338660DFD8AA37B1D46281681AF2C2AEF8_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_1;
		L_1 = EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mFE82472BD5AA91E6443668406A1AFFF7952F3274(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
// Method Definition Index: 96769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFE58390D7FE5A632618F913ECDD3319892BA1609_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_1;
		L_1 = EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mB648C9E312020492B186B6AD385785D8EECBBAD0(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
// Method Definition Index: 96770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB648C9E312020492B186B6AD385785D8EECBBAD0_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m7436E6E959D675C36F2FEA3585211604009E8E08(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_7 = V_0;
		HashSet_1_CopyFrom_m3F24A1AAD52572F5EED423472E2805B0A9B5B5C7(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m91A6889E34AA6E5FF37FBDE6629D4F9E9BFD22D3(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_16 = __this->____slots;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = __this->____count;
		if ((((int32_t)((int32_t)(L_17/L_18))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m21810A9DAF9E6B8F38B93343EA832932825ADD45(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
// Method Definition Index: 96771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC02A078E1540C2B32A11FBD732B8BA023C585CC0_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
// Method Definition Index: 96772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m3F24A1AAD52572F5EED423472E2805B0A9B5B5C7_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_0 = ___0_source;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_3 = ___0_source;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = L_5;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_9 = ___0_source;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->____buckets;
		NullCheck((RuntimeArray*)L_10);
		RuntimeObject* L_11;
		L_11 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_10, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_11, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_12 = ___0_source;
		NullCheck(L_12);
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_13 = L_12->____slots;
		NullCheck((RuntimeArray*)L_13);
		RuntimeObject* L_14;
		L_14 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_13, NULL);
		__this->____slots = ((SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_15 = ___0_source;
		NullCheck(L_15);
		int32_t L_16 = L_15->____lastIndex;
		__this->____lastIndex = L_16;
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_17 = ___0_source;
		NullCheck(L_17);
		int32_t L_18 = L_17->____freeList;
		__this->____freeList = L_18;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_19 = ___0_source;
		NullCheck(L_19);
		int32_t L_20 = L_19->____lastIndex;
		V_2 = L_20;
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_21 = ___0_source;
		NullCheck(L_21);
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_22 = L_21->____slots;
		V_3 = L_22;
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		V_6 = L_27;
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_6;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_31 = V_3;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value;
		HashSet_1_AddValue_mB3E8D5CC74BACABBB1AEAF915104CA20B77B44EC(__this, L_29, L_30, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b4:
	{
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_38 = V_4;
		__this->____lastIndex = L_38;
	}

IL_00c7:
	{
		int32_t L_39 = V_0;
		__this->____count = L_39;
		return;
	}
}
// Method Definition Index: 96773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mFE82472BD5AA91E6443668406A1AFFF7952F3274_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m7436E6E959D675C36F2FEA3585211604009E8E08(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
// Method Definition Index: 96774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mDB9EBF2030A6994DD23CE1085926CC7FB3FA7685_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
// Method Definition Index: 96775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m82FD3ED50CB06C3A6DA9F58CA7A02DA251FC3A86_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_5, NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 96776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)(L_5%L_7));
		int32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_18 = ___0_item;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_006b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_007c:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0CE1CAAED3CA8ACEA9447A35846EB2EA15B12E4D_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mA51152BEF6D5196DE81244171DC1704196CD8F6F(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_1 = ((int32_t)(L_3%L_5));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_6 = __this->____slots;
		V_4 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_19 = ___0_item;
		NullCheck(L_15);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->____buckets;
		int32_t L_23 = V_1;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___next;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)il2cpp_codegen_add(L_26, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_27 = V_4;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_29 = V_4;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next = L_31;
	}

IL_00a7:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_32 = V_4;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A* L_36 = (BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A*)(&((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___value);
		il2cpp_codegen_initobj(L_36, sizeof(BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A));
	}

IL_00d1:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = __this->____freeList;
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->___next = L_39;
		int32_t L_40 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = __this->____count;
		if (L_42)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_43 = V_5;
		__this->____freeList = L_43;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_44 = V_3;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_45)->max_length),NULL));
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_0135:
	{
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_5;
		V_2 = L_49;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_50 = V_4;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___next;
		V_5 = L_52;
	}

IL_014c:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 96780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m422E66E201EAD8F8188F41A96653C61D15BF0118_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 96781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E HashSet_1_GetEnumerator_mA9283057FA4C73718EFE5CEDB01F606106E5E548_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5AE908CE29213C26DD92405600A331F44DC4BB7C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
// Method Definition Index: 96782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mDA23993A2B9BBA2555E6C8CAB4B66AB610E73CA5_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5AE908CE29213C26DD92405600A331F44DC4BB7C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m64A63C6C3E80D4DE576E60CC382DBA3087121CE0_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5AE908CE29213C26DD92405600A331F44DC4BB7C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 96784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m49BCE2A91A7670A4DCDC22130A67CE75DBCB0CE3_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_13 = __this->____count;
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_14 = (BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA*)(BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 32), (uint32_t)L_13);
		V_0 = L_14;
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_15 = V_0;
		HashSet_1_CopyTo_m98CBF46834FA11C40DFD959253AA44D45654D03D(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_0089:
	{
		return;
	}
}
// Method Definition Index: 96785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mE5B74948D060503AA1092F4A8B85009E1AB24B4A_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_11 = (SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)(SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_27 = __this->____siInfo;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_27, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_28;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
// Method Definition Index: 96786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m3170A194C7F4B8A61AF02ED6C2F9A39190221EBE_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
// Method Definition Index: 96787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m91A6889E34AA6E5FF37FBDE6629D4F9E9BFD22D3_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_7;
				L_7 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
// Method Definition Index: 96788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWith_m6401B9C070B3351A4833B0D349DF78AB4E5C2765_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_Clear_m82FD3ED50CB06C3A6DA9F58CA7A02DA251FC3A86(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0035:
	{
		RuntimeObject* L_8 = ___0_other;
		V_1 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_10 = V_1;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_12 = V_1;
		HashSet_1_IntersectWithHashSetWithSameEC_m3715A667A52A26692EC9BDF090177C3F2BDFDB52(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		return;
	}

IL_0050:
	{
		RuntimeObject* L_13 = ___0_other;
		HashSet_1_IntersectWithEnumerable_m353B65044D5F63ECA476196EBA69CD8D4F00B17E(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
// Method Definition Index: 96789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_ExceptWith_m5B06C2BB0707379D339609818F8A40C1C456C61A_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_0022;
		}
	}
	{
		HashSet_1_Clear_m82FD3ED50CB06C3A6DA9F58CA7A02DA251FC3A86(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004d:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_9;
				L_9 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
			}

IL_003a_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_004e;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 96790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWith_mBD7875865BC58D30FCBA56C9101A2188CA825FB0_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_other;
		HashSet_1_UnionWith_m91A6889E34AA6E5FF37FBDE6629D4F9E9BFD22D3(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_Clear_m82FD3ED50CB06C3A6DA9F58CA7A02DA251FC3A86(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}

IL_0029:
	{
		RuntimeObject* L_5 = ___0_other;
		V_0 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_7 = V_0;
		bool L_8;
		L_8 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_9 = V_0;
		HashSet_1_SymmetricExceptWithUniqueHashSet_mF081E1542B6CBFF954BB88EC1B1B3A18B66340FA(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}

IL_0044:
	{
		RuntimeObject* L_10 = ___0_other;
		HashSet_1_SymmetricExceptWithEnumerable_m96529B91E9CCF9AF4185D9652E060462BF7207AA(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
// Method Definition Index: 96791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOf_m7941A30940FB786F6047C8D181DB187D079A137B_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_0 = NULL;
	ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_6 = V_0;
		bool L_7;
		L_7 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = __this->____count;
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0041:
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_11 = V_0;
		bool L_12;
		L_12 = HashSet_1_IsSubsetOfHashSetWithSameEC_mBF9305A4506B8F6E0A3A2F0731F071D33548C0DA(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_12;
	}

IL_0049:
	{
		RuntimeObject* L_13 = ___0_other;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_14;
		L_14 = HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22(__this, L_13, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_14;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_15 = V_1;
		int32_t L_16 = L_15.___uniqueCount;
		int32_t L_17 = __this->____count;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006d;
		}
	}
	{
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_18 = V_1;
		int32_t L_19 = L_18.___unfoundCount;
		return (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSubsetOf_mBBE74233847E18582298E6C5DF2772CDBEA4886B_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)0;
	}

IL_0028:
	{
		int32_t L_7 = __this->____count;
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_8);
		return (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
	}

IL_003a:
	{
		RuntimeObject* L_10 = ___0_other;
		V_2 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_12 = V_2;
		bool L_13;
		L_13 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = __this->____count;
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_17 = V_2;
		bool L_18;
		L_18 = HashSet_1_IsSubsetOfHashSetWithSameEC_mBF9305A4506B8F6E0A3A2F0731F071D33548C0DA(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_18;
	}

IL_0065:
	{
		RuntimeObject* L_19 = ___0_other;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_20;
		L_20 = HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22(__this, L_19, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_20;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_21 = V_1;
		int32_t L_22 = L_21.___uniqueCount;
		int32_t L_23 = __this->____count;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0086;
		}
	}
	{
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_24 = V_1;
		int32_t L_25 = L_24.___unfoundCount;
		return (bool)((((int32_t)L_25) > ((int32_t)0))? 1 : 0);
	}

IL_0086:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSupersetOf_mF64503D5CB921AC2940F2A0AC740112FFE2CA384_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		RuntimeObject* L_7 = ___0_other;
		V_1 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_8 = V_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_inline(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_13 = __this->____count;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		RuntimeObject* L_14 = ___0_other;
		bool L_15;
		L_15 = HashSet_1_ContainsAllElements_m10B6208CF2AEAC8D3706C98F9E864D46D2680B6E(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_15;
	}
}
// Method Definition Index: 96794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsProperSupersetOf_m6AD1629F2A3472967FE90EEF27E78CA0B658845E_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 V_1;
	memset((&V_1), 0, sizeof(V_1));
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		RuntimeObject* L_8 = ___0_other;
		V_2 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_9 = V_2;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0055:
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_15 = V_2;
		bool L_16;
		L_16 = HashSet_1_ContainsAllElements_m10B6208CF2AEAC8D3706C98F9E864D46D2680B6E(__this, (RuntimeObject*)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_16;
	}

IL_005d:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_1 = L_18;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_19 = V_1;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_007e;
		}
	}
	{
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_22 = V_1;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Overlaps_m8D5BF3869B7655FE92C72CC41F44650712A57B26_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___0_other;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					NullCheck((RuntimeObject*)L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_003b_1;
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_9;
				L_9 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_8);
				V_1 = L_9;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_10 = V_1;
				bool L_11;
				L_11 = HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (!L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				V_2 = (bool)1;
				goto IL_0051;
			}

IL_003b_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_004f;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 96796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_mBCE94F8FF3B29FFEE5AEAB3DC426F5753E1A68CE_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)__this))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___0_other;
		V_0 = ((HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_7 = __this->____count;
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_10 = V_0;
		bool L_11;
		L_11 = HashSet_1_ContainsAllElements_m10B6208CF2AEAC8D3706C98F9E864D46D2680B6E(__this, (RuntimeObject*)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		return L_11;
	}

IL_003f:
	{
		RuntimeObject* L_12 = ___0_other;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_13 = V_1;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = __this->____count;
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		RuntimeObject* L_17 = ___0_other;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_18;
		L_18 = HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22(__this, L_17, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_2 = L_18;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_19 = V_2;
		int32_t L_20 = L_19.___uniqueCount;
		int32_t L_21 = __this->____count;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_007d;
		}
	}
	{
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_22 = V_2;
		int32_t L_23 = L_22.___unfoundCount;
		return (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_007d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 96797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m98CBF46834FA11C40DFD959253AA44D45654D03D_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mA51152BEF6D5196DE81244171DC1704196CD8F6F(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 96798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mA51152BEF6D5196DE81244171DC1704196CD8F6F_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.int32_class, &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		if ((((int32_t)L_12) > ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_15 = ___2_count;
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_16)->max_length),NULL));
		int32_t L_18 = ___1_arrayIndex;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_20 = __this->____slots;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		BakeComponentU5BU5D_t7FF8B50196F1F02D7DC1B70BB339AFB8C7640FDA* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_26 = __this->____slots;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___value;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0093:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->____lastIndex;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___2_count;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
// Method Definition Index: 96799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m02E610863FE1DF33CD3882EEC3693B1167D69C6A_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916* L_8 = ___0_match;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Predicate_1_Invoke_m410FB975ACF0F64224C28DA0593B9D877B75D5B4_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 96800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mE1B124F8B1035DC47FACAEF60E5310FA50AEF543_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 96801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_EnsureCapacity_m1A421AA4187275AC60859A5A4C3A4867032C2074_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000f:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_3 = __this->____slots;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B5_0 = L_4;
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B5_0;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_capacity;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0029:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		if (L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = ___0_capacity;
		int32_t L_10;
		L_10 = HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return L_10;
	}

IL_0039:
	{
		int32_t L_11 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		HashSet_1_SetCapacity_m00C735986C6E5951B8A4DC8CCD7B045F1EFBA866(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		int32_t L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 96802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m21810A9DAF9E6B8F38B93343EA832932825ADD45_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_5 = (SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)(SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Slot_t07DBCCCA651F9CC54C0733827B2781F0D7E097F9)L_16);
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
// Method Definition Index: 96803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_5 = (SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)(SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 96804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m6B99B7BD358FE4CFFD9ADEAB9666845D7B52CB3D_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m00C735986C6E5951B8A4DC8CCD7B045F1EFBA866(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return;
	}
}
// Method Definition Index: 96805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m00C735986C6E5951B8A4DC8CCD7B045F1EFBA866_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_1 = (SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)(SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E*)SZArrayNew(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 36), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_3 = __this->____slots;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
// Method Definition Index: 96806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_mDEA3A1326743D260DE17537C4711C16DE3CDC723(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_1 = ((int32_t)(L_4%L_6));
		V_2 = 0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_7 = __this->____slots;
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_12 = V_3;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_16 = __this->____comparer;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_17 = V_3;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_20 = ___0_value;
		NullCheck(L_16);
		bool L_21;
		L_21 = InterfaceFuncInvoker2< bool, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_16, L_19, L_20);
		if (!L_21)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_008b:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m6B99B7BD358FE4CFFD9ADEAB9666845D7B52CB3D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00d9:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___Component), (void*)NULL);
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		return (bool)1;
	}
}
// Method Definition Index: 96807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mB3E8D5CC74BACABBB1AEAF915104CA20B77B44EC_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, int32_t ___0_index, int32_t ___1_hashCode, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = ((int32_t)(L_0%L_2));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_3 = __this->____slots;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = ___1_hashCode;
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode = L_5;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_6 = __this->____slots;
		int32_t L_7 = ___0_index;
		NullCheck(L_6);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_8 = ___2_value;
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___value))->___Component), (void*)NULL);
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_9 = __this->____slots;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___next = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_index;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		return;
	}
}
// Method Definition Index: 96808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_ContainsAllElements_m10B6208CF2AEAC8D3706C98F9E864D46D2680B6E_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_other;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
				}

IL_0030:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001d_1;
			}

IL_0009_1:
			{
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_5;
				L_5 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_4);
				V_1 = L_5;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_6 = V_1;
				bool L_7;
				L_7 = HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_7)
				{
					goto IL_001d_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0033;
			}

IL_001d_1:
			{
				RuntimeObject* L_8 = V_0;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0031;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return (bool)1;
	}

IL_0033:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 96809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_IsSubsetOfHashSetWithSameEC_mBF9305A4506B8F6E0A3A2F0731F071D33548C0DA_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E V_0;
	memset((&V_0), 0, sizeof(V_0));
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E L_0;
		L_0 = HashSet_1_GetEnumerator_mA9283057FA4C73718EFE5CEDB01F606106E5E548(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				Enumerator_Dispose_m52460A208B480293E3AE01228C36E4DB5BB5A6C9((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_001e_1;
			}

IL_0009_1:
			{
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_1;
				L_1 = Enumerator_get_Current_m3FA2DBD747092C5CD0C4EDEE9E9E5365005F0E54_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_1;
				HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_2 = ___0_other;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_3 = V_1;
				NullCheck(L_2);
				bool L_4;
				L_4 = HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_0039;
			}

IL_001e_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_m1E08351072EA6D86F9E57F396BA7ED3A61354252((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_5)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0037;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Method Definition Index: 96810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithHashSetWithSameEC_m3715A667A52A26692EC9BDF090177C3F2BDFDB52_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0004:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_0 = __this->____slots;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___hashCode;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_3 = __this->____slots;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		V_1 = L_5;
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_6 = ___0_other;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_7 = V_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Contains_mA01614BF78A2B3823E4020DA112BF0CCA8FD5E22(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_9 = V_1;
		bool L_10;
		L_10 = HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_003b:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____lastIndex;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IntersectWithEnumerable_m353B65044D5F63ECA476196EBA69CD8D4F00B17E_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)100))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		goto IL_002f;
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		int32_t L_12 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_13 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_13, L_11, L_12, NULL);
		V_2 = L_13;
	}

IL_002f:
	{
		RuntimeObject* L_14 = ___0_other;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_006a;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					NullCheck((RuntimeObject*)L_17);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_006a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0057_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_18 = V_3;
				NullCheck(L_18);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_19;
				L_19 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_18);
				V_4 = L_19;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_20 = V_4;
				int32_t L_21;
				L_21 = HashSet_1_InternalIndexOf_mE214C092611782EC2E4EC0D14AC5741E807DD7F6(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_5 = L_21;
				int32_t L_22 = V_5;
				if ((((int32_t)L_22) < ((int32_t)0)))
				{
					goto IL_0057_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = V_2;
				int32_t L_24 = V_5;
				NullCheck(L_23);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_23, L_24, NULL);
			}

IL_0057_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_006b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006b:
	{
		V_6 = 0;
		goto IL_00ae;
	}

IL_0070:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_27 = __this->____slots;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_30 = V_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		bool L_32;
		L_32 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_33 = __this->____slots;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value;
		bool L_36;
		L_36 = HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00a8:
	{
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ae:
	{
		int32_t L_38 = V_6;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0070;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalIndexOf_mE214C092611782EC2E4EC0D14AC5741E807DD7F6_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_0 = ___0_item;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_1;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_2 = __this->____slots;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4%L_6));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_0074;
	}

IL_0027:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_17 = ___0_item;
		NullCheck(L_13);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_19 = V_3;
		return L_19;
	}

IL_0052:
	{
		int32_t L_20 = V_0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0063;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0063:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_3 = L_27;
	}

IL_0074:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 96813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithUniqueHashSet_mF081E1542B6CBFF954BB88EC1B1B3A18B66340FA_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E V_0;
	memset((&V_0), 0, sizeof(V_0));
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_0 = ___0_other;
		NullCheck(L_0);
		Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E L_1;
		L_1 = HashSet_1_GetEnumerator_mA9283057FA4C73718EFE5CEDB01F606106E5E548(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{
				Enumerator_Dispose_m52460A208B480293E3AE01228C36E4DB5BB5A6C9((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
				return;
			}
		});
		try
		{
			{
				goto IL_0022_1;
			}

IL_0009_1:
			{
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_2;
				L_2 = Enumerator_get_Current_m3FA2DBD747092C5CD0C4EDEE9E9E5365005F0E54_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 56));
				V_1 = L_2;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_3 = V_1;
				bool L_4;
				L_4 = HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_5 = V_1;
				bool L_6;
				L_6 = HashSet_1_AddIfNotPresent_m5AE67C6087F820EC316E0BFC8DA73090C3686CB4(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0022_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m1E08351072EA6D86F9E57F396BA7ED3A61354252((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
				if (L_7)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// Method Definition Index: 96814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SymmetricExceptWithEnumerable_m96529B91E9CCF9AF4185D9652E060462BF7207AA_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->____lastIndex;
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)50))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((uintptr_t)L_5 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, 4));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_9 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_9, (int32_t*)(L_7), L_8, NULL);
		V_2 = L_9;
		int32_t L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		if ((uintptr_t)L_11 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_12 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_11, 4));
		int8_t* L_13 = (int8_t*) (L_12 ? alloca(L_12) : NULL);
		memset(L_13, 0, L_12);
		int32_t L_14 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_15 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_15, (int32_t*)(L_13), L_14, NULL);
		V_3 = L_15;
		goto IL_0049;
	}

IL_002f:
	{
		int32_t L_16 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		int32_t L_18 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_19 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		int32_t L_22 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_23 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_23, L_21, L_22, NULL);
		V_3 = L_23;
	}

IL_0049:
	{
		RuntimeObject* L_24 = ___0_other;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24);
		V_4 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{
				{
					RuntimeObject* L_26 = V_4;
					if (!L_26)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_27 = V_4;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_008c_1;
			}

IL_0053_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_29;
				L_29 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_28);
				V_5 = L_29;
				V_6 = 0;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_30 = V_5;
				bool L_31;
				L_31 = HashSet_1_AddOrGetLocation_mF8C473A5721A9A9798D97D25F3DD0382998C851F(__this, L_30, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
				if (!L_31)
				{
					goto IL_0075_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_32 = V_3;
				int32_t L_33 = V_6;
				NullCheck(L_32);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_32, L_33, NULL);
				goto IL_008c_1;
			}

IL_0075_1:
			{
				int32_t L_34 = V_6;
				int32_t L_35 = V_0;
				if ((((int32_t)L_34) >= ((int32_t)L_35)))
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_36 = V_3;
				int32_t L_37 = V_6;
				NullCheck(L_36);
				bool L_38;
				L_38 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_36, L_37, NULL);
				if (L_38)
				{
					goto IL_008c_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_39 = V_2;
				int32_t L_40 = V_6;
				NullCheck(L_39);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_39, L_40, NULL);
			}

IL_008c_1:
			{
				RuntimeObject* L_41 = V_4;
				NullCheck((RuntimeObject*)L_41);
				bool L_42;
				L_42 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				if (L_42)
				{
					goto IL_0053_1;
				}
			}
			{
				goto IL_00a3;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		V_7 = 0;
		goto IL_00d1;
	}

IL_00a8:
	{
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_43 = V_2;
		int32_t L_44 = V_7;
		NullCheck(L_43);
		bool L_45;
		L_45 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_43, L_44, NULL);
		if (!L_45)
		{
			goto IL_00cb;
		}
	}
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_46 = __this->____slots;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___value;
		bool L_49;
		L_49 = HashSet_1_Remove_m98E96E60F7809F84145E56AEF8FD374983718D27(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_00cb:
	{
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00d1:
	{
		int32_t L_51 = V_7;
		int32_t L_52 = V_0;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_00a8;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 96815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddOrGetLocation_mF8C473A5721A9A9798D97D25F3DD0382998C851F_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_value, int32_t* ___1_location, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_0 = ___0_value;
		int32_t L_1;
		L_1 = HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		V_1 = ((int32_t)(L_2%L_4));
		V_2 = 0;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_5 = __this->____slots;
		V_3 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_007f;
	}

IL_002a:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_10 = V_3;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_15 = V_3;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_18 = ___0_value;
		NullCheck(L_14);
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_20 = ___1_location;
		int32_t L_21 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_20, (int32_t)L_21);
		return (bool)0;
	}

IL_005b:
	{
		int32_t L_22 = V_2;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_006c:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_27 = V_3;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_5 = L_29;
	}

IL_007f:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_31 = __this->____freeList;
		if ((((int32_t)L_31) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_32 = __this->____freeList;
		V_4 = L_32;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___next;
		__this->____freeList = L_35;
		goto IL_00e3;
	}

IL_00aa:
	{
		int32_t L_36 = __this->____lastIndex;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00cd;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m6B99B7BD358FE4CFFD9ADEAB9666845D7B52CB3D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_39 = __this->____slots;
		V_3 = L_39;
		int32_t L_40 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->____buckets;
		NullCheck(L_41);
		int32_t L_42 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_41)->max_length),NULL));
		V_1 = ((int32_t)(L_40%L_42));
	}

IL_00cd:
	{
		int32_t L_43 = __this->____lastIndex;
		V_4 = L_43;
		int32_t L_44 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00e3:
	{
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_45 = V_3;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		int32_t L_47 = V_0;
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___hashCode = L_47;
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_48 = V_3;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_50 = ___0_value;
		((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value = L_50;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___value))->___Component), (void*)NULL);
		SlotU5BU5D_tD000F2695DA2E54312F3D9A128131274D9AFB68E* L_51 = V_3;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->____buckets;
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)il2cpp_codegen_add(L_59, 1)));
		int32_t L_60 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t* L_62 = ___1_location;
		int32_t L_63 = V_4;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_62, (int32_t)L_63);
		return (bool)1;
	}
}
// Method Definition Index: 96816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 HashSet_1_CheckUniqueAndUnfoundElements_m36807905BEE9098156E9361A2AF427573A9BEA22_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, RuntimeObject* ___0_other, bool ___1_returnIfUnfound, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		V_5 = 0;
		RuntimeObject* L_1 = ___0_other;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_1);
		V_6 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_003b:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0025_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_5 = V_6;
				NullCheck(L_5);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_6;
				L_6 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_5);
				int32_t L_7 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				goto IL_003c;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_6;
				NullCheck((RuntimeObject*)L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_003c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		(&V_0)->___uniqueCount = 0;
		int32_t L_10 = V_5;
		(&V_0)->___unfoundCount = L_10;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_11 = V_0;
		return L_11;
	}

IL_004f:
	{
		int32_t L_12 = __this->____lastIndex;
		int32_t L_13;
		L_13 = BitHelper_ToIntArrayLength_m59204C3775D26A8B9532246C2F384C92D02E713C(L_12, NULL);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)100))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_1;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		if ((uintptr_t)L_16 * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_17 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_16, 4));
		int8_t* L_18 = (int8_t*) (L_17 ? alloca(L_17) : NULL);
		memset(L_18, 0, L_17);
		int32_t L_19 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_20 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m141F24AE9FFCB3EA3D2C7EA79BDAC722026EDEB3(L_20, (int32_t*)(L_18), L_19, NULL);
		V_2 = L_20;
		goto IL_007c;
	}

IL_006f:
	{
		int32_t L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_21);
		int32_t L_23 = V_1;
		BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_24 = (BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1*)il2cpp_codegen_object_new(BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1_il2cpp_TypeInfo_var);
		BitHelper__ctor_m795A92E9A03F57547FD78A8E50F730C2778DDD19(L_24, L_22, L_23, NULL);
		V_2 = L_24;
	}

IL_007c:
	{
		V_3 = 0;
		V_4 = 0;
		RuntimeObject* L_25 = ___0_other;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_25);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				{
					RuntimeObject* L_27 = V_6;
					if (!L_27)
					{
						goto IL_00dc;
					}
				}
				{
					RuntimeObject* L_28 = V_6;
					NullCheck((RuntimeObject*)L_28);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				}

IL_00dc:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00c6_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_29 = V_6;
				NullCheck(L_29);
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_30;
				L_30 = InterfaceFuncInvoker0< BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_29);
				V_7 = L_30;
				BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_31 = V_7;
				int32_t L_32;
				L_32 = HashSet_1_InternalIndexOf_mE214C092611782EC2E4EC0D14AC5741E807DD7F6(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 60));
				V_8 = L_32;
				int32_t L_33 = V_8;
				if ((((int32_t)L_33) < ((int32_t)0)))
				{
					goto IL_00bd_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_34 = V_2;
				int32_t L_35 = V_8;
				NullCheck(L_34);
				bool L_36;
				L_36 = BitHelper_IsMarked_m0A02826959B4EF6381B8F6C7DF0EDBFC55EE8EF2(L_34, L_35, NULL);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				BitHelper_t2BEA51BB52EB1672DBF4163ED6757DCEEB3A4DF1* L_37 = V_2;
				int32_t L_38 = V_8;
				NullCheck(L_37);
				BitHelper_MarkBit_m12EFF71C5444F4E4D076F514C0C0723B39E50F86(L_37, L_38, NULL);
				int32_t L_39 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				goto IL_00c6_1;
			}

IL_00bd_1:
			{
				int32_t L_40 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				bool L_41 = ___1_returnIfUnfound;
				if (!L_41)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_00dd;
			}

IL_00c6_1:
			{
				RuntimeObject* L_42 = V_6;
				NullCheck((RuntimeObject*)L_42);
				bool L_43;
				L_43 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
				if (L_43)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00dd;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		int32_t L_44 = V_4;
		(&V_0)->___uniqueCount = L_44;
		int32_t L_45 = V_3;
		(&V_0)->___unfoundCount = L_45;
		ElementCount_t6BCD34456D5DE98BD2E290643999B61B7BBF9A79 L_46 = V_0;
		return L_46;
	}
}
// Method Definition Index: 96817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2E54C4306446B2CA1C48664F082F58D238AC93F1_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___0_set1, HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* ___1_set2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_0 = ___0_set1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mE1B124F8B1035DC47FACAEF60E5310FA50AEF543_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* L_2 = ___1_set2;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mE1B124F8B1035DC47FACAEF60E5310FA50AEF543_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 62));
		NullCheck((RuntimeObject*)L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
// Method Definition Index: 96818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m5C8B5E21083EB0EA784EBE638DA15925915A079D_gshared (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_2 = ___0_item;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 12397
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* EqualityComparer_1_get_Default_mD7C9FC8D7002D2D643279B5C3DE32AF412C5CF43_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* V_0 = NULL;
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_0 = ((EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m2145B4B5CD4F015776D8A340DE334FFDE0F17CD2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 96779
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m9FCE9597633A4894B27A48C31A30F482A5B4F653_gshared_inline (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 1026
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m03EC27792F3ED5082803261452773CA6C1BC1850_gshared_inline (Predicate_1_t18D1CC2E2738FA005E8F9798496FD65B51B853F6* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 96822
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Enumerator_get_Current_mD77725F3BA932F1B6A36B3C98820A549F37319CB_gshared_inline (Enumerator_tCE902EED9262869C7CEE5CEB7EDE635B7E0C7E01* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 96800
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m64317EAE9C6934FD3C6BBD22C864BF48258C4C0A_gshared_inline (HashSet_1_t55B946E0B889BDE32B3004D0822A6C5017AFA406* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 12397
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 96779
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mC262B93896E7CDADC552C86423D1F6249DB57997_gshared_inline (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 1026
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 96822
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m06AE6B158E72B471CF5FC6BCF63AA55CE70CC9A4_gshared_inline (Enumerator_t21DE302BED6606A0927F65B97AD5C1633699E17B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 96800
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m674B6DD6FD8A313D1C3A5919FAA014DC966138A2_gshared_inline (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 12397
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* EqualityComparer_1_get_Default_mC0B29FC6AFED03D8A30BE41AC4BEC15DCF6AA9F8_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* V_0 = NULL;
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_0 = ((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFA29AAFB8E37E401F19B2D5CC3E3C877B467E449(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7A1FD25973851CA8703B3D65A407E44535B20581* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 96779
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m25CC75D15E33D39B89715B1AAB9F9D83C0111C17_gshared_inline (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 1026
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m0D65AFF43065FE03318CBDDB2A1E63B51476FB9A_gshared_inline (Predicate_1_tEFC0F0C58D1FDF98911A6A55B2C9A9F6A4AB3EE2* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 96822
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m753865782629EAB49682D70C7281584736566A00_gshared_inline (Enumerator_t3291E6F6F0FA3459BE0D12C99434C80AF6DFAF65* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 96800
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m86107F9721DF6BE61AFA8CBC341D58AEC31AAC0C_gshared_inline (HashSet_1_t96EDD831D9B12AF2E51E5FEFE70A806225134F24* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
// Method Definition Index: 12397
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* EqualityComparer_1_get_Default_m3D50BEEAA358960FF5562D0CB14BD1AA7A280E06_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* V_0 = NULL;
	{
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_0 = ((EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAE5FDB4D8DE1FB9635848E1BF6C33148962AC4ED(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE1A42C267AB8BC9815528122013F6279E0CB28CD* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 96779
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mF8210329AFF9116EB172AB526E7001037D4CF3AB_gshared_inline (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 1026
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m410FB975ACF0F64224C28DA0593B9D877B75D5B4_gshared_inline (Predicate_1_t8721A0C3E6B3A371779693A6443D87ACD15B1916* __this, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 96822
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A Enumerator_get_Current_m3FA2DBD747092C5CD0C4EDEE9E9E5365005F0E54_gshared_inline (Enumerator_t1D5BE3ADF4F3CB44C5323A34095287ECD563684E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BakeComponent_t2619BE0DEB433F8C946B974B553F6097CE9FB24A L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 96800
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mE1B124F8B1035DC47FACAEF60E5310FA50AEF543_gshared_inline (HashSet_1_t63B418C1EB9F16753AA905A7EDBCDCDF9A25E4E9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
