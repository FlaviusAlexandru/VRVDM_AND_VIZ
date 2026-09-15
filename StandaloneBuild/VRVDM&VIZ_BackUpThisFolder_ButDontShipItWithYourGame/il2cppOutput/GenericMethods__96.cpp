#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
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

struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct IEnumerator_1_t0446516FA0D1DFD2F1F94D278140B73488297FA7;
struct ISetPropertyBag_2_t56E6EDABDE18CE848804E70344D9A2B8608F8EE2;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_t611A12E8B769E68687CC4E081E0BEF8CFAAE825F;
struct List_1_t19072222A2719656128620AB2FB55EF3B0FF7CB5;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD;
struct Property_2_t8B38616834A9668E0D56151ABD21A0145241A904;
struct Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2;
struct Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF;
struct Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917;
struct Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6;
struct Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE;
struct Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB;
struct Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9;
struct Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE;
struct Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700;
struct Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2;
struct Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9;
struct Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45;
struct Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6;
struct Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852;
struct Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676;
struct Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3;
struct Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4;
struct Property_2_t20A025311CE5A099276CB813872583CED6D6E825;
struct Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298;
struct Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6;
struct Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77;
struct Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB;
struct Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F;
struct Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158;
struct Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD;
struct Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56;
struct Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D;
struct Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA;
struct Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA;
struct Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C;
struct Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F;
struct Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585;
struct Property_2_t77BD2AD223504355C87784ACF22E76208DA91020;
struct Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20;
struct Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9;
struct Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8;
struct Property_2_t113890ECA80F29325A033471911F4E8E45B619ED;
struct Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F;
struct Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89;
struct Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452;
struct Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C;
struct Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08;
struct Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354;
struct UnsafeList_1_t823260CC648D4FAB5E8934C1D8E387F44BD66497;
struct UnsafeList_1_tD2C58E6D29AED9DA6BD7AFF4770B6C6F96AFDBEA;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct JsonAdapter_tC3C350445D0F8C07CFB57509B615A48D47FA2E92;
struct JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B;
struct JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED;
struct JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C;
struct SerializedReferences_t262118CDA70C466A515C42D386FA471981165248;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1;
struct SerializedIdProperty_t169AFC0B07C178075F4BAF7C4A2ABA61B720D865;
struct SerializedTypeProperty_t6C338D34A65D697598F7948659631D0119BD9133;
struct SerializedVersionProperty_tD2EFAEF81496D86429FE895E5D932FAEA4EF4C32;
struct Data_t949055BB6B2EA179BFB70EB8377036B102B9BEF1;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0446516FA0D1DFD2F1F94D278140B73488297FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var;
struct Data_t949055BB6B2EA179BFB70EB8377036B102B9BEF1;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967  : public RuntimeObject
{
	DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8B38616834A9668E0D56151ABD21A0145241A904  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t20A025311CE5A099276CB813872583CED6D6E825  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t77BD2AD223504355C87784ACF22E76208DA91020  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t113890ECA80F29325A033471911F4E8E45B619ED  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct TypeTraits_1_t2181A8CF461BF0144D89531600E2B13D16A316F3  : public RuntimeObject
{
};
struct TypeTraits_1_t974939ED5858E136E6783074D927B7A0A887BCA2  : public RuntimeObject
{
};
struct TypeTraits_1_t849B267549097D96986DCAD2850793D54566B07D  : public RuntimeObject
{
};
struct TypeTraits_1_tA707EF483A6846D64DDD63F963A95C7304B53E5C  : public RuntimeObject
{
};
struct TypeTraits_1_tB8799E05D6377C80FC931AA2ED809D6EF251A05A  : public RuntimeObject
{
};
struct TypeTraits_1_tF5A724F99569364D7615977EF32CDCB2A1045BBA  : public RuntimeObject
{
};
struct TypeTraits_1_tDEB67735C0E3D316A776B5FC5E1D6BDFAFA02066  : public RuntimeObject
{
};
struct TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A  : public RuntimeObject
{
};
struct TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E  : public RuntimeObject
{
};
struct TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B  : public RuntimeObject
{
};
struct TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6  : public RuntimeObject
{
};
struct TypeTraits_1_t0DF62A72B3297A00D56AC85CFB01E8C3E9460D97  : public RuntimeObject
{
};
struct TypeTraits_1_t4BD624776DB5B1CA6F4CD8522DD3007FEDF0CCCD  : public RuntimeObject
{
};
struct TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21  : public RuntimeObject
{
};
struct TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9  : public RuntimeObject
{
};
struct TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551  : public RuntimeObject
{
};
struct TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039  : public RuntimeObject
{
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9  : public RuntimeObject
{
};
struct TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6  : public RuntimeObject
{
};
struct TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C  : public RuntimeObject
{
};
struct TypeTraits_1_tFB0FF557412A3562B89AFBD03F8113908FA09E96  : public RuntimeObject
{
};
struct TypeTraits_1_t2CC90C31519F2DAF95C7F643DE417BCFE97C698C  : public RuntimeObject
{
};
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A  : public RuntimeObject
{
};
struct TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E  : public RuntimeObject
{
};
struct TypeTraits_1_tAF1F9FA8DA78DE822A8B827A4BF28E81DD82E2C6  : public RuntimeObject
{
};
struct TypeTraits_1_tCE7BF5097282C3471FBC6C06CB64D8DA43E1903A  : public RuntimeObject
{
};
struct TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1  : public RuntimeObject
{
};
struct TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9  : public RuntimeObject
{
};
struct TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408  : public RuntimeObject
{
};
struct TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C  : public RuntimeObject
{
};
struct TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034  : public RuntimeObject
{
};
struct TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD  : public RuntimeObject
{
};
struct TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00  : public RuntimeObject
{
};
struct TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640  : public RuntimeObject
{
};
struct TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB  : public RuntimeObject
{
};
struct TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF  : public RuntimeObject
{
};
struct TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943  : public RuntimeObject
{
};
struct TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84  : public RuntimeObject
{
};
struct TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF  : public RuntimeObject
{
};
struct TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD  : public RuntimeObject
{
};
struct TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6  : public RuntimeObject
{
};
struct TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC  : public RuntimeObject
{
};
struct TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444  : public RuntimeObject
{
};
struct TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816  : public RuntimeObject
{
};
struct TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB  : public RuntimeObject
{
};
struct TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934  : public RuntimeObject
{
};
struct TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60  : public RuntimeObject
{
};
struct TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0  : public RuntimeObject
{
};
struct TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3  : public RuntimeObject
{
};
struct TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F  : public RuntimeObject
{
};
struct JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED  : public RuntimeObject
{
	bool ___U3CIsLockedU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializedReferences_t262118CDA70C466A515C42D386FA471981165248  : public RuntimeObject
{
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ___m_DeserializationIndex;
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___m_SerializationIndex;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___m_References;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___m_Serialized;
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
struct NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 
{
	UnsafeList_1_t823260CC648D4FAB5E8934C1D8E387F44BD66497* ___m_ListData;
};
struct NativeList_1_t0244D4C5F9FC5C387043B613A66F2B1DB6013ED1 
{
	UnsafeList_1_tD2C58E6D29AED9DA6BD7AFF4770B6C6F96AFDBEA* ___m_ListData;
};
struct PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 
{
	Il2CppSharedGenericObject* ___Value;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JsonAdapterCollection_t42BB4629165FE51399C7369FE47F9CB8E5008D45 
{
	JsonAdapter_tC3C350445D0F8C07CFB57509B615A48D47FA2E92* ___InternalAdapter;
	List_1_t611A12E8B769E68687CC4E081E0BEF8CFAAE825F* ___Global;
	List_1_t611A12E8B769E68687CC4E081E0BEF8CFAAE825F* ___UserDefined;
};
struct JsonAdapterCollection_t42BB4629165FE51399C7369FE47F9CB8E5008D45_marshaled_pinvoke
{
	JsonAdapter_tC3C350445D0F8C07CFB57509B615A48D47FA2E92* ___InternalAdapter;
	List_1_t611A12E8B769E68687CC4E081E0BEF8CFAAE825F* ___Global;
	List_1_t611A12E8B769E68687CC4E081E0BEF8CFAAE825F* ___UserDefined;
};
struct JsonAdapterCollection_t42BB4629165FE51399C7369FE47F9CB8E5008D45_marshaled_com
{
	JsonAdapter_tC3C350445D0F8C07CFB57509B615A48D47FA2E92* ___InternalAdapter;
	List_1_t611A12E8B769E68687CC4E081E0BEF8CFAAE825F* ___Global;
	List_1_t611A12E8B769E68687CC4E081E0BEF8CFAAE825F* ___UserDefined;
};
struct JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E 
{
	List_1_t19072222A2719656128620AB2FB55EF3B0FF7CB5* ___Global;
	List_1_t19072222A2719656128620AB2FB55EF3B0FF7CB5* ___UserDefined;
	RuntimeObject* ___UserData;
};
struct JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E_marshaled_pinvoke
{
	List_1_t19072222A2719656128620AB2FB55EF3B0FF7CB5* ___Global;
	List_1_t19072222A2719656128620AB2FB55EF3B0FF7CB5* ___UserDefined;
	Il2CppIUnknown* ___UserData;
};
struct JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E_marshaled_com
{
	List_1_t19072222A2719656128620AB2FB55EF3B0FF7CB5* ___Global;
	List_1_t19072222A2719656128620AB2FB55EF3B0FF7CB5* ___UserDefined;
	Il2CppIUnknown* ___UserData;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	List_1_t491347B1404617671B39DA9325642B0DB8748CB3* ___propertyValues;
};
struct Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 
{
	float ___m_Value;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UnsafeArrayView_t64641D362D82B5FE45F8D72D5673B092F659FF30 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct UnsafeObjectView_tDD17C91E065E37B8955F18CB553A17F82EE76254 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	int32_t ___m_TokenIndex;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
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
struct SerializedContainerMetadata_t5CCD2AD33CE2755161834EBD4EDE623397786E0E 
{
	bool ___HasSerializedId;
	bool ___HasSerializedTypeInfo;
	bool ___HasSerializedVersion;
	bool ___HasElements;
	bool ___IsSerializedReference;
	int32_t ___SerializedId;
};
struct SerializedContainerMetadata_t5CCD2AD33CE2755161834EBD4EDE623397786E0E_marshaled_pinvoke
{
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedTypeInfo;
	int32_t ___HasSerializedVersion;
	int32_t ___HasElements;
	int32_t ___IsSerializedReference;
	int32_t ___SerializedId;
};
struct SerializedContainerMetadata_t5CCD2AD33CE2755161834EBD4EDE623397786E0E_marshaled_com
{
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedTypeInfo;
	int32_t ___HasSerializedVersion;
	int32_t ___HasElements;
	int32_t ___IsSerializedReference;
	int32_t ___SerializedId;
};
struct SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 
{
	bool ___IsSerializedReference;
	bool ___HasSerializedId;
	bool ___HasSerializedType;
	bool ___HasSerializedVersion;
	int32_t ___SerializedId;
	int32_t ___SerializedVersion;
};
struct SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540_marshaled_pinvoke
{
	int32_t ___IsSerializedReference;
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedType;
	int32_t ___HasSerializedVersion;
	int32_t ___SerializedId;
	int32_t ___SerializedVersion;
};
struct SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540_marshaled_com
{
	int32_t ___IsSerializedReference;
	int32_t ___HasSerializedId;
	int32_t ___HasSerializedType;
	int32_t ___HasSerializedVersion;
	int32_t ___SerializedId;
	int32_t ___SerializedVersion;
};
struct SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397 
{
	int32_t ___Id;
};
struct SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28 
{
	Type_t* ___Type;
};
struct SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28_marshaled_pinvoke
{
	Type_t* ___Type;
};
struct SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28_marshaled_com
{
	Type_t* ___Type;
};
struct SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9 
{
	int32_t ___Version;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 
{
	union
	{
		struct
		{
			EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_Texture;
			int32_t ___m_DefaultCursorId;
			int32_t _____dummy;
			Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Hotspot;
		};
		uint8_t Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82__padding[24];
	};
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EventType_t5DF326B3C3514A1FB9E5FFDA8C986499CB77DA6D 
{
	int32_t ___value__;
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
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B  : public JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED
{
	UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___m_View;
	Type_t* ___m_SerializedType;
	bool ___m_DisableRootAdapters;
	bool ___m_DisableRootMigration;
	JsonAdapterCollection_t42BB4629165FE51399C7369FE47F9CB8E5008D45 ___m_Adapters;
	JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E ___m_Migrations;
	SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* ___m_SerializedReferences;
	SerializedContainerMetadata_t5CCD2AD33CE2755161834EBD4EDE623397786E0E ___m_Metadata;
	SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* ___m_SerializedTypeProvider;
	bool ___m_HasPrimitiveOrStringGlobalAdapters;
	bool ___m_HasPrimitiveOrStringUserDefinedAdapters;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	bool ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	int32_t ___m_IsNone;
};
struct SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextAutoSizeMode_t10C0C54209C97D8A231AF021AE2F9DFFD26EE2C9 
{
	int32_t ___value__;
};
struct TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset;
	float ___blurRadius;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct TokenType_tBA373BFDC8296357BE5717B0DD8C83BA0CA4F763 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1  : public RuntimeObject
{
	List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* ___Events;
	UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___View;
	Type_t* ___SerializedType;
};
struct Overrides_t4E5831137EA631A281B4B236CD97EBECD533A490 
{
	int32_t ___value__;
};
struct StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 
{
	int32_t ___m_Keyword;
	List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE 
{
	int32_t ___Type;
	RuntimeObject* ___Payload;
};
struct DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE_marshaled_pinvoke
{
	int32_t ___Type;
	Il2CppIUnknown* ___Payload;
};
struct DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE_marshaled_com
{
	int32_t ___Type;
	Il2CppIUnknown* ___Payload;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
};
struct JsonWriterOptions_tA75E7CB7B5E7AD449682E09BB291E907E5E4A195 
{
	int32_t ___m_Overrides;
	int32_t ___m_Indent;
	bool ___m_StringEscapeHandling;
	bool ___U3CMinifiedU3Ek__BackingField;
	bool ___U3CSimplifiedU3Ek__BackingField;
};
struct JsonWriterOptions_tA75E7CB7B5E7AD449682E09BB291E907E5E4A195_marshaled_pinvoke
{
	int32_t ___m_Overrides;
	int32_t ___m_Indent;
	int32_t ___m_StringEscapeHandling;
	int32_t ___U3CMinifiedU3Ek__BackingField;
	int32_t ___U3CSimplifiedU3Ek__BackingField;
};
struct JsonWriterOptions_tA75E7CB7B5E7AD449682E09BB291E907E5E4A195_marshaled_com
{
	int32_t ___m_Overrides;
	int32_t ___m_Indent;
	int32_t ___m_StringEscapeHandling;
	int32_t ___U3CMinifiedU3Ek__BackingField;
	int32_t ___U3CSimplifiedU3Ek__BackingField;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C  : public Exception_t
{
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 
{
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_pinvoke
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke ___m_Value;
};
struct StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_marshaled_com
{
	int32_t ___m_Keyword;
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com ___m_Value;
};
struct StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_pinvoke
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_marshaled_com
{
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 
{
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC 
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_pinvoke
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshaled_com
{
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 
{
	int32_t ___m_Keyword;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___m_Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	bool ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com
{
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC ___m_Angle;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Axis;
	int32_t ___m_IsNone;
};
struct StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 
{
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MinSize;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_MaxSize;
	int32_t ___m_Mode;
};
struct TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	bool ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
	float ___m_Z;
	int32_t ___m_isNone;
};
struct Unsafe_tE1FCDFA6786E53B583BD90455A4C034433B85A7B 
{
	int32_t ___m_Label;
	Data_t949055BB6B2EA179BFB70EB8377036B102B9BEF1* ___m_Data;
	NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 ___m_Buffer;
	NativeList_1_t0244D4C5F9FC5C387043B613A66F2B1DB6013ED1 ___m_Stack;
	JsonWriterOptions_tA75E7CB7B5E7AD449682E09BB291E907E5E4A195 ___m_Options;
};
struct Unsafe_tE1FCDFA6786E53B583BD90455A4C034433B85A7B_marshaled_pinvoke
{
	int32_t ___m_Label;
	Data_t949055BB6B2EA179BFB70EB8377036B102B9BEF1* ___m_Data;
	NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 ___m_Buffer;
	NativeList_1_t0244D4C5F9FC5C387043B613A66F2B1DB6013ED1 ___m_Stack;
	JsonWriterOptions_tA75E7CB7B5E7AD449682E09BB291E907E5E4A195_marshaled_pinvoke ___m_Options;
};
struct Unsafe_tE1FCDFA6786E53B583BD90455A4C034433B85A7B_marshaled_com
{
	int32_t ___m_Label;
	Data_t949055BB6B2EA179BFB70EB8377036B102B9BEF1* ___m_Data;
	NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 ___m_Buffer;
	NativeList_1_t0244D4C5F9FC5C387043B613A66F2B1DB6013ED1 ___m_Stack;
	JsonWriterOptions_tA75E7CB7B5E7AD449682E09BB291E907E5E4A195_marshaled_com ___m_Options;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_pinvoke
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_marshaled_com
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2* ___m_CustomDefinition;
};
struct JsonWriter_tAD644F358C50E0CEBFACDF027D775880AD3A7016 
{
	Unsafe_tE1FCDFA6786E53B583BD90455A4C034433B85A7B ___m_Impl;
};
struct JsonWriter_tAD644F358C50E0CEBFACDF027D775880AD3A7016_marshaled_pinvoke
{
	Unsafe_tE1FCDFA6786E53B583BD90455A4C034433B85A7B_marshaled_pinvoke ___m_Impl;
};
struct JsonWriter_tAD644F358C50E0CEBFACDF027D775880AD3A7016_marshaled_com
{
	Unsafe_tE1FCDFA6786E53B583BD90455A4C034433B85A7B_marshaled_com ___m_Impl;
};
struct StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 
{
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 
{
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B 
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_pinvoke
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshaled_com
{
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A 
{
	int32_t ___m_Keyword;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___m_Value;
};
struct StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 
{
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_pinvoke
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_pinvoke ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshaled_com
{
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshaled_com ___m_Value;
	int32_t ___m_Keyword;
};
struct JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6  : public JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED
{
	JsonWriter_tAD644F358C50E0CEBFACDF027D775880AD3A7016 ___m_Writer;
	Type_t* ___m_SerializedType;
	bool ___m_DisableRootAdapters;
	JsonAdapterCollection_t42BB4629165FE51399C7369FE47F9CB8E5008D45 ___m_Adapters;
	JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E ___m_Migrations;
	SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* ___m_SerializedReferences;
	bool ___m_HasPrimitiveOrStringGlobalAdapters;
	bool ___m_HasPrimitiveOrStringUserDefinedAdapters;
};
struct List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967_StaticFields
{
	DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4* ___s_emptyArray;
};
struct TypeTraits_1_t2181A8CF461BF0144D89531600E2B13D16A316F3_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t974939ED5858E136E6783074D927B7A0A887BCA2_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t849B267549097D96986DCAD2850793D54566B07D_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tA707EF483A6846D64DDD63F963A95C7304B53E5C_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB8799E05D6377C80FC931AA2ED809D6EF251A05A_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tF5A724F99569364D7615977EF32CDCB2A1045BBA_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tDEB67735C0E3D316A776B5FC5E1D6BDFAFA02066_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t0DF62A72B3297A00D56AC85CFB01E8C3E9460D97_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t4BD624776DB5B1CA6F4CD8522DD3007FEDF0CCCD_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFB0FF557412A3562B89AFBD03F8113908FA09E96_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t2CC90C31519F2DAF95C7F643DE417BCFE97C698C_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tAF1F9FA8DA78DE822A8B827A4BF28E81DD82E2C6_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tCE7BF5097282C3471FBC6C06CB64D8DA43E1903A_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
};
struct TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields
{
	bool ___U3CIsValueTypeU3Ek__BackingField;
	bool ___U3CIsPrimitiveU3Ek__BackingField;
	bool ___U3CIsInterfaceU3Ek__BackingField;
	bool ___U3CIsAbstractU3Ek__BackingField;
	bool ___U3CIsArrayU3Ek__BackingField;
	bool ___U3CIsMultidimensionalArrayU3Ek__BackingField;
	bool ___U3CIsEnumU3Ek__BackingField;
	bool ___U3CIsEnumFlagsU3Ek__BackingField;
	bool ___U3CIsNullableU3Ek__BackingField;
	bool ___U3CIsObjectU3Ek__BackingField;
	bool ___U3CIsStringU3Ek__BackingField;
	bool ___U3CIsContainerU3Ek__BackingField;
	bool ___U3CCanBeNullU3Ek__BackingField;
	bool ___U3CIsPrimitiveOrStringU3Ek__BackingField;
	bool ___U3CIsAbstractOrInterfaceU3Ek__BackingField;
	bool ___U3CIsUnityObjectU3Ek__BackingField;
	bool ___U3CIsLazyLoadReferenceU3Ek__BackingField;
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
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_StaticFields
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kZero;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_StaticFields
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___kZero;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_StaticFields
{
	Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0* ___s_AngleUnitLookup;
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
struct JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6_StaticFields
{
	SerializedIdProperty_t169AFC0B07C178075F4BAF7C4A2ABA61B720D865* ___s_SerializedIdProperty;
	SerializedTypeProperty_t6C338D34A65D697598F7948659631D0119BD9133* ___s_SerializedTypeProperty;
	SerializedVersionProperty_tD2EFAEF81496D86429FE895E5D932FAEA4EF4C32* ___s_SerializedVersionProperty;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4  : public RuntimeArray
{
	ALIGN_FIELD (8) DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE m_Items[1];

	inline DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Payload), (void*)NULL);
	}
	inline DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Payload), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AB780009673C05F4EBED051FB5575A5B5B5C700_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m042E36C7FD5781667C418982D8E0CB45645C66CB_gshared (Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_gshared_inline (List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* __this, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m98DE8F258072E3728C2BBF80979B4FA23212D64C_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mDC06547839DAC0BC9A56B2E0B1719618A88A7348_gshared (Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m60D2A62A09B2F4BD867B654B6482CCBDFEFEF61B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mD152B5277096AA20D8C476FD5CF835D9CB453EC3_gshared (Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mD62E70B42FAE4F8C164C0780D700861A07BB905B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m01554DF8BAAA580CC1D2BD44B29A6E8706B46202_gshared (Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m54E1E357BA0D6FDEB8D10A8E2194B2940409ED40_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m0E056F6A27CBE0F55CA15BFA96F43DB482453F0A_gshared (Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m294BD30D824C438D7FE215FF69E218FD5BD1703D_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m5FEE8691698F878B573A010E29D80C80DB147D24_gshared (Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* ___0_property, Il2CppSharedGenericObject** ___1_container, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7B821E8A6F403DEACBE4CC3BA0E935093620B74D_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m4C2255DD35D36E310034BC5A1FF9B02374617C91_gshared (Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* ___0_property, Il2CppSharedGenericObject** ___1_container, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m310A0092144F8155C74E989910024CA882FE982D_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m777DA9CBF1EA6DF395F69C41F139B2B697AE289B_gshared (Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* ___0_property, Il2CppSharedGenericObject** ___1_container, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m878C12C95C2714414BFBA413E2C1E4EE04AA986E_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mECAE6040262A22DCB7D9E5D197A0A0CD9F0F6BDC_gshared (Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* ___0_property, Il2CppSharedGenericObject** ___1_container, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m66814AD549058096C7A0489343ABAA0BB5C53A3B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAD8AAE85A561E5D26900962A00AC14FAE64B6409_gshared (Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* ___0_property, Il2CppSharedGenericObject** ___1_container, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m09C7D48C44040C095C12983821C3D7F817FCBD3A_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mB191C5053E39CB183A6EEA647B73A702D66AEBF3_gshared (Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* ___0_property, Il2CppSharedGenericObject** ___1_container, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mDF49721B0E54AB445DADB7832C00AA33B435329D_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m68D221C68A37662258F2FAB95BEE436FDA100FCB_gshared (Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* ___0_property, Il2CppSharedGenericObject** ___1_container, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mA549AFC09282F8B6CBD228FB3B8D8E944787E8DF_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m005D1CB50BD80E6980E282788D200FC6A11978B1_gshared (Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* ___0_property, Il2CppSharedGenericObject** ___1_container, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9247527A6CEDE99FE551CFD94589A8B306434CAF_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, int32_t* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m12F130D2FFC76E3FF72D32AB46BCA6684DD6BE01_gshared (Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* ___0_property, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5CC9BAE0BE7BEAD6566C0B8C6FF28DB944FA7068_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5A0D2570229574C16D72E856147ED3E2C8C4EEBB_gshared (Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* ___0_property, Il2CppSharedGenericObject** ___1_container, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m2B319EB4F6C48DC8F0ECAF7E2EA580B20889EEE3_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m3191D8C32B97FF1EFA136F2D8F17F9125771FBAF_gshared (Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* ___0_property, Il2CppSharedGenericObject** ___1_container, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mD1FD55EA6D387D200DB3577C9F8D7D414807D589_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m4AB01ADF43B1BEC605710D72A6441896B0D223CC_gshared (Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* ___0_property, Il2CppSharedGenericObject** ___1_container, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mDDF59EA30E4BC42582C97889E0BAAB9797F03B16_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m1D42306A2E7798EC34513115157E1BC7B2C497AC_gshared (Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* ___0_property, Il2CppSharedGenericObject** ___1_container, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m98984203F06214DB5727705581DE668BBC153359_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, float* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB612926E4FEDEA9042FBEFB006F1F69326301213_gshared (Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* ___0_property, Il2CppSharedGenericObject** ___1_container, float* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mE79E8A5321ED2E772D513893C4BFC3ACC73D3CBD_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mD72983B88C8A8D14D46FC93817C7A76F61F28649_gshared (Property_2_t20A025311CE5A099276CB813872583CED6D6E825* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m6DC6A4185E749BC8A37E17532C7E9DD56CCAED57_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mFA97A62216A8F7A27F1C412B89CDC8EA1DD6BEBB_gshared (Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m132243159C9DFD053DA783E3BE242225B7F7CA7D_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m4093C393F9F24FEF16E727C7DE08DE91ECFD76F0_gshared (Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m630E5C57C7BBA5EB88292F7C17F851B79BDAEEF1_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m48945693D2712E3B961B0B9167FD138A1F16E254_gshared (Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m5E49DED370A90F822179DB8DC02FE551089D4978_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m94C0BAF595C6D7C407238C4CA04C712F5DBFADBF_gshared (Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1A375B6019EE1A28EE2772D47D12EAD89838F0FF_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mAC12DEA1841DA800C34A459BE68688094B51012C_gshared (Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mADAFE7B151C8062CBC8D67D58708A72755A2BE0F_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B82D52D01D7F79E7D06905FDC8328364258F0C_gshared (Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m901D7C063F3A3B5F88745039C99C24A9ABDABD96_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mC2132C5C43266B183A43E6994112640B1A68A858_gshared (Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0DB5F7BCF0C5D8BE52ACD2461E9FD7B5CCD75088_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mF2CB55855D9FD0C906BA8F311F47530ED5D144E6_gshared (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mA065696E1DAC9F859966D98D06E0863A00464B75_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mE00CC28E0D36C6F8D101BB7EAEEE1782FA6E2D03_gshared (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m75175DB9D4C0C0D55267E959E92A8A51BEA83CEA_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mE73F3B17F36457CE6DBCAF9DD99A30165C6F998C_gshared (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m52B420EAC6B253B9EA1AA650B721A5A8D7CA1AA3_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mAE8D275C7BD27AC8E288DF32A06E31B57C6C27A1_gshared (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mB70A1824EE14B495C83BCDCE914B51308DA9BF9D_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mFF090E20691C5B23159E2BF480DFEE43A0F161BB_gshared (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* ___0_property, Il2CppSharedGenericObject** ___1_container, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m01E9ED40024DB3256E1067781E620C61ACF26621_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC7EF2781514A82A364FC5C6C6BA30D608CFBECA8_gshared (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mBDD89DBC5DB5CAF90157E04D9317093F26A7647B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mC2420A9499849DE56858DD734EE8534734931725_gshared (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mB548FC8C59AC0471B4A9A6271CD6DC190DCB89E2_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m91F723B10F2FE7D820F52D0A88B3D3D6C9DB9DD2_gshared (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m7B7EEA5EC7AA05738CAEDBC43C02AF5208ADD050_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m1F947B93C2B434A9C5F90B4191479C3B917E0F40_gshared (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m46D5BB83082468C3527615D9CB7AF5E95C4F90DD_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m85A19B12E05AE38D9CB548D07BB1C83E9FE876A8_gshared (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD87A29DAA54F257912030F71580F364AB616EF9E_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m14487AF76BCF8077D273E116E0965D5BA3D756FA_gshared (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7F7C2471615448D909FA4D5E06F0BE1AF46F2F02_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m6A7CCEF20AF963F2DE0C4D342B52E1F71038E532_gshared (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mFB8B6B8FF3CFCF2F11BA6B8B6544E33D6D932EE3_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6E8139C3AF9A245ECC2B69FD87D6FF8459AF23D8_gshared (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* ___0_property, Il2CppSharedGenericObject** ___1_container, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m131649C7DE1E3304387CA21EC798CA90E06CBC76_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8B1C42AF823E9F5485820F80141215C138818762_gshared (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_m6EF4A1AA24AACCD1EF7CEA329EDD1A55597B52DB_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Il2CppSharedGenericObject** ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mF9E0C43B93995E6480C148D022ADCFE202A55DC2_gshared (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* ___0_property, Il2CppSharedGenericObject** ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m669A81D643E194AD89068674C2EBEFA256B8E317_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, int32_t* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEDC5541D3F2BF8E0811455AD849CCBEE5BB3BA99_gshared (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* ___0_property, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5A907D4197366702BC4D0A84F63B906B0034109F_gshared (Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* ___0_property, SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28_TisIl2CppSharedGenericObject_m0B5B2857DA2C8071EA3D77BA295DB9B1522F9B5D_gshared (Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* ___0_property, SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28* ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA275EAD4E5F42E237EC47CF623CF261AD02C005_gshared (Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* ___0_property, SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m72DE893919F2E4BB6622A06EA287565A1B58323E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m6B04F23DC72C2E2F6545E18090DA8A327D318FE7_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9B7684E5CEEEB9820576924288815BBC0EE3A8C6_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m719D6F8E51D6C3AF37DD7AC9E45E85557F793EE9_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mAE461AD652B39D4441FB3E2E0B307CC3CAED1E7D_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m54C79A98CA4B0B1469DB6CFD6A5E345C841A6D92_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mC20FE6B68CEAB6454CBCAB9F9963A291C59DC254_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mDA13BAEBCCA8E5F48C58537020731A8C384FF043_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF22E62CDC7F99398734E00E57D43475E096D38A0_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m909ED457CA5D65D10066B14A3D5B3E89B26F71DE_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF75EAC3E1D5E18FD567AB43E09A3D64B870E2584_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m7EDB4B8F330D36AF576756C43D83F02292E76777_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m51723C7608C19853BD80776075445611E95E01CE_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m1E2A0B6A2576C27B0EFD26AE85192C12159C5C37_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m9FA98329D5CC1861804D836E28AC6E55864092AF_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m3B05625173F5694BFC06055FF9837E55195B0EBF_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mC77C8FB194E4F62D0D4AB1788EA58149D0845ABC_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB095E23F76920B401A27B01CCFB3AFE905DF5A2F_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4FA3FA78ABF75835D7572BEBB92C08882F90DF55_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m1B6158E7473E31CDA82D7B420940D1195093E480_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m305534AAB40A19DD0CD0A6E4A2684967F9AC99EC_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m537FBEAAA19F841F41E8BF78B3F916798FE01A64_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF9273BE4C238AEDC4627C322EF7A3716071CA7F1_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mE950B93E9AAF4370D7B892B2CEEB9C29B8620485_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mCD86EB25AE87E0B2F2F55E17C7EF202DA2F54B46_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m3A8C95E3DA3D54BF18D33962CF6FE16A1D8D6843_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mF138C3D6BA7E3229F0756DB94765302EC089395C_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2687A188663B91379ED5A25B5F0AB0800C51D964_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m17CD6D65586D2471C17DACD6EB51DDF14CBC2E6B_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m674C3F3A0FEF7B3E44203C15302EBCE99504B08A_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m0B90726345F935BEE14124084C26331E153BB9F4_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA4AA47CA9D5F9F678A030B42A1CDEF7456EAA3CF_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m325F143CA3657CC5B3062964D1B88AC220CAC713_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mE089CBAF2E7D8A599C86B4FFF92E0C0F40E84B18_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m7E2E3D1FA797A60287B3D93C110920B04DF1B280_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m51CFBE7997B934AFFC8C46FA228C159E6B18385E_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m4312B0C10DC44166AA08F11AA4E419E2ECCD4700_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m365E974AD774D88F6D67E7FCE89D66D2A4B8060F_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF65501AE28F9949895228AB65B962EB0604FEFD3_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m667E133990D7F0F527CE08A047F6FE3B3E6C22D6_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mECEDFD65C25DA5A9F2FB4C39F2896BCE94AFA11F_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m65312F8C4EC7A1BA793D7C9299DAA79AB384285E_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mFE9649054F39736F12E4B482175032E4E7D6CB97_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3F565DFD3C0F4E2437F93B5364CCF4DE7E7DB1D0_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m8AF98FD59BC97302DBDD660051640EB183D113FA_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m4FBB9ACB58A4282484C0FCB1E798D1728205362D_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m027FE9988093FBB26F99D62B907CDFA327DB3100_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mCD129CA360E8E723D5E4F8EB75B57DE9A65098E1_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7192416FA91CC607C14B0447665603F151207660_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mCD65AF2D5F6ED4EA6DB74BF6A3E0EAEA0C559870_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m8D27976B6D83C6329A0C9A8A997ED60A3F7108F2_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mF5A6A80949A78E68391D952DF3EEFBB1FCC86448_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m4C1B27D4B187653377FB1D4E0FDF2315AC1CA620_gshared (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD7AAF620712FD385F684907728D673DD87AF969E_gshared (List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* __this, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE ___0_item, const RuntimeMethod* method) ;

inline void JsonPropertyReader_ReadValue_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AB780009673C05F4EBED051FB5575A5B5B5C700 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AB780009673C05F4EBED051FB5575A5B5B5C700_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m042E36C7FD5781667C418982D8E0CB45645C66CB (Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD*, Il2CppSharedGenericObject**, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m042E36C7FD5781667C418982D8E0CB45645C66CB_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98 (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7 (DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE* __this, int32_t ___0_type, RuntimeObject* ___1_payload, const RuntimeMethod* method) ;
inline void List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline (List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* __this, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967*, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE, const RuntimeMethod*))List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_gshared_inline)(__this, ___0_item, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m98DE8F258072E3728C2BBF80979B4FA23212D64C (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m98DE8F258072E3728C2BBF80979B4FA23212D64C_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mDC06547839DAC0BC9A56B2E0B1719618A88A7348 (Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t8B38616834A9668E0D56151ABD21A0145241A904*, Il2CppSharedGenericObject**, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mDC06547839DAC0BC9A56B2E0B1719618A88A7348_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m60D2A62A09B2F4BD867B654B6482CCBDFEFEF61B (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m60D2A62A09B2F4BD867B654B6482CCBDFEFEF61B_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mD152B5277096AA20D8C476FD5CF835D9CB453EC3 (Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2*, Il2CppSharedGenericObject**, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mD152B5277096AA20D8C476FD5CF835D9CB453EC3_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mD62E70B42FAE4F8C164C0780D700861A07BB905B (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mD62E70B42FAE4F8C164C0780D700861A07BB905B_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m01554DF8BAAA580CC1D2BD44B29A6E8706B46202 (Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF*, Il2CppSharedGenericObject**, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m01554DF8BAAA580CC1D2BD44B29A6E8706B46202_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m54E1E357BA0D6FDEB8D10A8E2194B2940409ED40 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m54E1E357BA0D6FDEB8D10A8E2194B2940409ED40_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m0E056F6A27CBE0F55CA15BFA96F43DB482453F0A (Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917*, Il2CppSharedGenericObject**, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m0E056F6A27CBE0F55CA15BFA96F43DB482453F0A_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m294BD30D824C438D7FE215FF69E218FD5BD1703D (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m294BD30D824C438D7FE215FF69E218FD5BD1703D_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m5FEE8691698F878B573A010E29D80C80DB147D24 (Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* ___0_property, Il2CppSharedGenericObject** ___1_container, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6*, Il2CppSharedGenericObject**, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m5FEE8691698F878B573A010E29D80C80DB147D24_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7B821E8A6F403DEACBE4CC3BA0E935093620B74D (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7B821E8A6F403DEACBE4CC3BA0E935093620B74D_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m4C2255DD35D36E310034BC5A1FF9B02374617C91 (Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* ___0_property, Il2CppSharedGenericObject** ___1_container, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE*, Il2CppSharedGenericObject**, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m4C2255DD35D36E310034BC5A1FF9B02374617C91_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m310A0092144F8155C74E989910024CA882FE982D (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m310A0092144F8155C74E989910024CA882FE982D_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m777DA9CBF1EA6DF395F69C41F139B2B697AE289B (Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* ___0_property, Il2CppSharedGenericObject** ___1_container, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB*, Il2CppSharedGenericObject**, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m777DA9CBF1EA6DF395F69C41F139B2B697AE289B_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m878C12C95C2714414BFBA413E2C1E4EE04AA986E (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m878C12C95C2714414BFBA413E2C1E4EE04AA986E_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mECAE6040262A22DCB7D9E5D197A0A0CD9F0F6BDC (Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* ___0_property, Il2CppSharedGenericObject** ___1_container, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9*, Il2CppSharedGenericObject**, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mECAE6040262A22DCB7D9E5D197A0A0CD9F0F6BDC_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m66814AD549058096C7A0489343ABAA0BB5C53A3B (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m66814AD549058096C7A0489343ABAA0BB5C53A3B_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAD8AAE85A561E5D26900962A00AC14FAE64B6409 (Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* ___0_property, Il2CppSharedGenericObject** ___1_container, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE*, Il2CppSharedGenericObject**, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAD8AAE85A561E5D26900962A00AC14FAE64B6409_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m09C7D48C44040C095C12983821C3D7F817FCBD3A (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m09C7D48C44040C095C12983821C3D7F817FCBD3A_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mB191C5053E39CB183A6EEA647B73A702D66AEBF3 (Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* ___0_property, Il2CppSharedGenericObject** ___1_container, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700*, Il2CppSharedGenericObject**, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mB191C5053E39CB183A6EEA647B73A702D66AEBF3_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mDF49721B0E54AB445DADB7832C00AA33B435329D (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mDF49721B0E54AB445DADB7832C00AA33B435329D_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m68D221C68A37662258F2FAB95BEE436FDA100FCB (Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* ___0_property, Il2CppSharedGenericObject** ___1_container, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2*, Il2CppSharedGenericObject**, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m68D221C68A37662258F2FAB95BEE436FDA100FCB_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mA549AFC09282F8B6CBD228FB3B8D8E944787E8DF (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mA549AFC09282F8B6CBD228FB3B8D8E944787E8DF_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m005D1CB50BD80E6980E282788D200FC6A11978B1 (Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* ___0_property, Il2CppSharedGenericObject** ___1_container, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9*, Il2CppSharedGenericObject**, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m005D1CB50BD80E6980E282788D200FC6A11978B1_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9247527A6CEDE99FE551CFD94589A8B306434CAF (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, int32_t* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, int32_t*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9247527A6CEDE99FE551CFD94589A8B306434CAF_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m12F130D2FFC76E3FF72D32AB46BCA6684DD6BE01 (Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* ___0_property, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45*, Il2CppSharedGenericObject**, int32_t*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m12F130D2FFC76E3FF72D32AB46BCA6684DD6BE01_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5CC9BAE0BE7BEAD6566C0B8C6FF28DB944FA7068 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5CC9BAE0BE7BEAD6566C0B8C6FF28DB944FA7068_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5A0D2570229574C16D72E856147ED3E2C8C4EEBB (Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* ___0_property, Il2CppSharedGenericObject** ___1_container, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6*, Il2CppSharedGenericObject**, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5A0D2570229574C16D72E856147ED3E2C8C4EEBB_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m2B319EB4F6C48DC8F0ECAF7E2EA580B20889EEE3 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m2B319EB4F6C48DC8F0ECAF7E2EA580B20889EEE3_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m3191D8C32B97FF1EFA136F2D8F17F9125771FBAF (Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* ___0_property, Il2CppSharedGenericObject** ___1_container, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852*, Il2CppSharedGenericObject**, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m3191D8C32B97FF1EFA136F2D8F17F9125771FBAF_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mD1FD55EA6D387D200DB3577C9F8D7D414807D589 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mD1FD55EA6D387D200DB3577C9F8D7D414807D589_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m4AB01ADF43B1BEC605710D72A6441896B0D223CC (Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* ___0_property, Il2CppSharedGenericObject** ___1_container, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676*, Il2CppSharedGenericObject**, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m4AB01ADF43B1BEC605710D72A6441896B0D223CC_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mDDF59EA30E4BC42582C97889E0BAAB9797F03B16 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mDDF59EA30E4BC42582C97889E0BAAB9797F03B16_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m1D42306A2E7798EC34513115157E1BC7B2C497AC (Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* ___0_property, Il2CppSharedGenericObject** ___1_container, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3*, Il2CppSharedGenericObject**, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m1D42306A2E7798EC34513115157E1BC7B2C497AC_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m98984203F06214DB5727705581DE668BBC153359 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, float* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, float*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m98984203F06214DB5727705581DE668BBC153359_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB612926E4FEDEA9042FBEFB006F1F69326301213 (Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* ___0_property, Il2CppSharedGenericObject** ___1_container, float* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4*, Il2CppSharedGenericObject**, float*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB612926E4FEDEA9042FBEFB006F1F69326301213_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mE79E8A5321ED2E772D513893C4BFC3ACC73D3CBD (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mE79E8A5321ED2E772D513893C4BFC3ACC73D3CBD_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mD72983B88C8A8D14D46FC93817C7A76F61F28649 (Property_2_t20A025311CE5A099276CB813872583CED6D6E825* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t20A025311CE5A099276CB813872583CED6D6E825*, Il2CppSharedGenericObject**, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mD72983B88C8A8D14D46FC93817C7A76F61F28649_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m6DC6A4185E749BC8A37E17532C7E9DD56CCAED57 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m6DC6A4185E749BC8A37E17532C7E9DD56CCAED57_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mFA97A62216A8F7A27F1C412B89CDC8EA1DD6BEBB (Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298*, Il2CppSharedGenericObject**, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mFA97A62216A8F7A27F1C412B89CDC8EA1DD6BEBB_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m132243159C9DFD053DA783E3BE242225B7F7CA7D (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m132243159C9DFD053DA783E3BE242225B7F7CA7D_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m4093C393F9F24FEF16E727C7DE08DE91ECFD76F0 (Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6*, Il2CppSharedGenericObject**, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m4093C393F9F24FEF16E727C7DE08DE91ECFD76F0_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m630E5C57C7BBA5EB88292F7C17F851B79BDAEEF1 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m630E5C57C7BBA5EB88292F7C17F851B79BDAEEF1_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m48945693D2712E3B961B0B9167FD138A1F16E254 (Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77*, Il2CppSharedGenericObject**, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m48945693D2712E3B961B0B9167FD138A1F16E254_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m5E49DED370A90F822179DB8DC02FE551089D4978 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m5E49DED370A90F822179DB8DC02FE551089D4978_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m94C0BAF595C6D7C407238C4CA04C712F5DBFADBF (Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB*, Il2CppSharedGenericObject**, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m94C0BAF595C6D7C407238C4CA04C712F5DBFADBF_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1A375B6019EE1A28EE2772D47D12EAD89838F0FF (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1A375B6019EE1A28EE2772D47D12EAD89838F0FF_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mAC12DEA1841DA800C34A459BE68688094B51012C (Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F*, Il2CppSharedGenericObject**, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mAC12DEA1841DA800C34A459BE68688094B51012C_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mADAFE7B151C8062CBC8D67D58708A72755A2BE0F (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mADAFE7B151C8062CBC8D67D58708A72755A2BE0F_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B82D52D01D7F79E7D06905FDC8328364258F0C (Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158*, Il2CppSharedGenericObject**, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B82D52D01D7F79E7D06905FDC8328364258F0C_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m901D7C063F3A3B5F88745039C99C24A9ABDABD96 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m901D7C063F3A3B5F88745039C99C24A9ABDABD96_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mC2132C5C43266B183A43E6994112640B1A68A858 (Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD*, Il2CppSharedGenericObject**, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mC2132C5C43266B183A43E6994112640B1A68A858_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0DB5F7BCF0C5D8BE52ACD2461E9FD7B5CCD75088 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0DB5F7BCF0C5D8BE52ACD2461E9FD7B5CCD75088_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mF2CB55855D9FD0C906BA8F311F47530ED5D144E6 (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56*, Il2CppSharedGenericObject**, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mF2CB55855D9FD0C906BA8F311F47530ED5D144E6_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mA065696E1DAC9F859966D98D06E0863A00464B75 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mA065696E1DAC9F859966D98D06E0863A00464B75_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mE00CC28E0D36C6F8D101BB7EAEEE1782FA6E2D03 (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D*, Il2CppSharedGenericObject**, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mE00CC28E0D36C6F8D101BB7EAEEE1782FA6E2D03_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m75175DB9D4C0C0D55267E959E92A8A51BEA83CEA (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m75175DB9D4C0C0D55267E959E92A8A51BEA83CEA_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mE73F3B17F36457CE6DBCAF9DD99A30165C6F998C (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA*, Il2CppSharedGenericObject**, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mE73F3B17F36457CE6DBCAF9DD99A30165C6F998C_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m52B420EAC6B253B9EA1AA650B721A5A8D7CA1AA3 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m52B420EAC6B253B9EA1AA650B721A5A8D7CA1AA3_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mAE8D275C7BD27AC8E288DF32A06E31B57C6C27A1 (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA*, Il2CppSharedGenericObject**, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mAE8D275C7BD27AC8E288DF32A06E31B57C6C27A1_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mB70A1824EE14B495C83BCDCE914B51308DA9BF9D (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mB70A1824EE14B495C83BCDCE914B51308DA9BF9D_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mFF090E20691C5B23159E2BF480DFEE43A0F161BB (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* ___0_property, Il2CppSharedGenericObject** ___1_container, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C*, Il2CppSharedGenericObject**, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mFF090E20691C5B23159E2BF480DFEE43A0F161BB_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m01E9ED40024DB3256E1067781E620C61ACF26621 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m01E9ED40024DB3256E1067781E620C61ACF26621_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC7EF2781514A82A364FC5C6C6BA30D608CFBECA8 (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F*, Il2CppSharedGenericObject**, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC7EF2781514A82A364FC5C6C6BA30D608CFBECA8_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mBDD89DBC5DB5CAF90157E04D9317093F26A7647B (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mBDD89DBC5DB5CAF90157E04D9317093F26A7647B_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mC2420A9499849DE56858DD734EE8534734931725 (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585*, Il2CppSharedGenericObject**, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mC2420A9499849DE56858DD734EE8534734931725_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mB548FC8C59AC0471B4A9A6271CD6DC190DCB89E2 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mB548FC8C59AC0471B4A9A6271CD6DC190DCB89E2_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m91F723B10F2FE7D820F52D0A88B3D3D6C9DB9DD2 (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020*, Il2CppSharedGenericObject**, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m91F723B10F2FE7D820F52D0A88B3D3D6C9DB9DD2_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m7B7EEA5EC7AA05738CAEDBC43C02AF5208ADD050 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m7B7EEA5EC7AA05738CAEDBC43C02AF5208ADD050_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m1F947B93C2B434A9C5F90B4191479C3B917E0F40 (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20*, Il2CppSharedGenericObject**, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m1F947B93C2B434A9C5F90B4191479C3B917E0F40_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m46D5BB83082468C3527615D9CB7AF5E95C4F90DD (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m46D5BB83082468C3527615D9CB7AF5E95C4F90DD_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m85A19B12E05AE38D9CB548D07BB1C83E9FE876A8 (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9*, Il2CppSharedGenericObject**, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m85A19B12E05AE38D9CB548D07BB1C83E9FE876A8_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD87A29DAA54F257912030F71580F364AB616EF9E (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD87A29DAA54F257912030F71580F364AB616EF9E_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m14487AF76BCF8077D273E116E0965D5BA3D756FA (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8*, Il2CppSharedGenericObject**, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m14487AF76BCF8077D273E116E0965D5BA3D756FA_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7F7C2471615448D909FA4D5E06F0BE1AF46F2F02 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7F7C2471615448D909FA4D5E06F0BE1AF46F2F02_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m6A7CCEF20AF963F2DE0C4D342B52E1F71038E532 (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* ___0_property, Il2CppSharedGenericObject** ___1_container, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED*, Il2CppSharedGenericObject**, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m6A7CCEF20AF963F2DE0C4D342B52E1F71038E532_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mFB8B6B8FF3CFCF2F11BA6B8B6544E33D6D932EE3 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mFB8B6B8FF3CFCF2F11BA6B8B6544E33D6D932EE3_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6E8139C3AF9A245ECC2B69FD87D6FF8459AF23D8 (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* ___0_property, Il2CppSharedGenericObject** ___1_container, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F*, Il2CppSharedGenericObject**, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6E8139C3AF9A245ECC2B69FD87D6FF8459AF23D8_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m131649C7DE1E3304387CA21EC798CA90E06CBC76 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m131649C7DE1E3304387CA21EC798CA90E06CBC76_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8B1C42AF823E9F5485820F80141215C138818762 (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* ___0_property, Il2CppSharedGenericObject** ___1_container, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89*, Il2CppSharedGenericObject**, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8B1C42AF823E9F5485820F80141215C138818762_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_m6EF4A1AA24AACCD1EF7CEA329EDD1A55597B52DB (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Il2CppSharedGenericObject** ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Il2CppSharedGenericObject**, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_m6EF4A1AA24AACCD1EF7CEA329EDD1A55597B52DB_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mF9E0C43B93995E6480C148D022ADCFE202A55DC2 (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* ___0_property, Il2CppSharedGenericObject** ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452*, Il2CppSharedGenericObject**, Il2CppSharedGenericObject**, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mF9E0C43B93995E6480C148D022ADCFE202A55DC2_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline void JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m669A81D643E194AD89068674C2EBEFA256B8E317 (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, int32_t* ___0_value, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A ___1_view, bool ___2_isRoot, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, int32_t*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m669A81D643E194AD89068674C2EBEFA256B8E317_gshared)(__this, ___0_value, ___1_view, ___2_isRoot, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEDC5541D3F2BF8E0811455AD849CCBEE5BB3BA99 (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* ___0_property, Il2CppSharedGenericObject** ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A*, Il2CppSharedGenericObject**, int32_t*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEDC5541D3F2BF8E0811455AD849CCBEE5BB3BA99_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5A907D4197366702BC4D0A84F63B906B0034109F (Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* ___0_property, SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C*, SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397*, int32_t*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5A907D4197366702BC4D0A84F63B906B0034109F_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28_TisIl2CppSharedGenericObject_m0B5B2857DA2C8071EA3D77BA295DB9B1522F9B5D (Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* ___0_property, SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28* ___1_container, Il2CppSharedGenericObject** ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08*, SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28*, Il2CppSharedGenericObject**, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28_TisIl2CppSharedGenericObject_m0B5B2857DA2C8071EA3D77BA295DB9B1522F9B5D_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
inline bool PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA275EAD4E5F42E237EC47CF623CF261AD02C005 (Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* ___0_property, SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9* ___1_container, int32_t* ___2_value, String_t** ___3_error, const RuntimeMethod* method)
{
	return ((  bool (*) (Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354*, SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9*, int32_t*, String_t**, const RuntimeMethod*))PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA275EAD4E5F42E237EC47CF623CF261AD02C005_gshared)(___0_property, ___1_container, ___2_value, ___3_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeObjectView_tDD17C91E065E37B8955F18CB553A17F82EE76254 UnsafeValueView_AsObjectView_m08E3A3C5DDFEC0E3462138B028185EEDC28C390B (UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A UnsafeObjectView_get_Item_m0F1F89D36CEE9F9A34C430C614A0BA42A68057FA (UnsafeObjectView_tDD17C91E065E37B8955F18CB553A17F82EE76254* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeValueView_get_Type_m6522F37423D33F14BE68F64C4729FC1C6ABF5B2B (UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeArrayView_t64641D362D82B5FE45F8D72D5673B092F659FF30 UnsafeValueView_AsArrayView_mCEA38E5AEEA79963F7D5D1BAC5D7E05625D9740A (UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeArrayView_GetEnumerator_mF7FD01990E7F298935472FAF50DD0ACCC438A191 (UnsafeArrayView_t64641D362D82B5FE45F8D72D5673B092F659FF30* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool TypeTraits_1_get_IsValueType_m72DE893919F2E4BB6622A06EA287565A1B58323E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m72DE893919F2E4BB6622A06EA287565A1B58323E_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34 (SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* __this, RuntimeObject* ___0_value, int32_t* ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E (SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline (JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m6B04F23DC72C2E2F6545E18090DA8A327D318FE7 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m6B04F23DC72C2E2F6545E18090DA8A327D318FE7_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9B7684E5CEEEB9820576924288815BBC0EE3A8C6 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9B7684E5CEEEB9820576924288815BBC0EE3A8C6_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m719D6F8E51D6C3AF37DD7AC9E45E85557F793EE9 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m719D6F8E51D6C3AF37DD7AC9E45E85557F793EE9_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mAE461AD652B39D4441FB3E2E0B307CC3CAED1E7D (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mAE461AD652B39D4441FB3E2E0B307CC3CAED1E7D_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m54C79A98CA4B0B1469DB6CFD6A5E345C841A6D92 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m54C79A98CA4B0B1469DB6CFD6A5E345C841A6D92_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mC20FE6B68CEAB6454CBCAB9F9963A291C59DC254 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mC20FE6B68CEAB6454CBCAB9F9963A291C59DC254_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mDA13BAEBCCA8E5F48C58537020731A8C384FF043 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mDA13BAEBCCA8E5F48C58537020731A8C384FF043_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF22E62CDC7F99398734E00E57D43475E096D38A0 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF22E62CDC7F99398734E00E57D43475E096D38A0_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m909ED457CA5D65D10066B14A3D5B3E89B26F71DE (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m909ED457CA5D65D10066B14A3D5B3E89B26F71DE_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF75EAC3E1D5E18FD567AB43E09A3D64B870E2584 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF75EAC3E1D5E18FD567AB43E09A3D64B870E2584_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m7EDB4B8F330D36AF576756C43D83F02292E76777 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m7EDB4B8F330D36AF576756C43D83F02292E76777_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m51723C7608C19853BD80776075445611E95E01CE (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m51723C7608C19853BD80776075445611E95E01CE_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m1E2A0B6A2576C27B0EFD26AE85192C12159C5C37 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m1E2A0B6A2576C27B0EFD26AE85192C12159C5C37_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m9FA98329D5CC1861804D836E28AC6E55864092AF (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m9FA98329D5CC1861804D836E28AC6E55864092AF_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m3B05625173F5694BFC06055FF9837E55195B0EBF (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m3B05625173F5694BFC06055FF9837E55195B0EBF_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mC77C8FB194E4F62D0D4AB1788EA58149D0845ABC (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mC77C8FB194E4F62D0D4AB1788EA58149D0845ABC_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB095E23F76920B401A27B01CCFB3AFE905DF5A2F (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB095E23F76920B401A27B01CCFB3AFE905DF5A2F_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4FA3FA78ABF75835D7572BEBB92C08882F90DF55 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4FA3FA78ABF75835D7572BEBB92C08882F90DF55_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m1B6158E7473E31CDA82D7B420940D1195093E480 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m1B6158E7473E31CDA82D7B420940D1195093E480_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m305534AAB40A19DD0CD0A6E4A2684967F9AC99EC (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m305534AAB40A19DD0CD0A6E4A2684967F9AC99EC_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m537FBEAAA19F841F41E8BF78B3F916798FE01A64 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m537FBEAAA19F841F41E8BF78B3F916798FE01A64_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF9273BE4C238AEDC4627C322EF7A3716071CA7F1 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF9273BE4C238AEDC4627C322EF7A3716071CA7F1_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mE950B93E9AAF4370D7B892B2CEEB9C29B8620485 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mE950B93E9AAF4370D7B892B2CEEB9C29B8620485_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mCD86EB25AE87E0B2F2F55E17C7EF202DA2F54B46 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mCD86EB25AE87E0B2F2F55E17C7EF202DA2F54B46_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m3A8C95E3DA3D54BF18D33962CF6FE16A1D8D6843_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m3A8C95E3DA3D54BF18D33962CF6FE16A1D8D6843_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mF138C3D6BA7E3229F0756DB94765302EC089395C (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mF138C3D6BA7E3229F0756DB94765302EC089395C_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m2687A188663B91379ED5A25B5F0AB0800C51D964_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2687A188663B91379ED5A25B5F0AB0800C51D964_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m17CD6D65586D2471C17DACD6EB51DDF14CBC2E6B (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m17CD6D65586D2471C17DACD6EB51DDF14CBC2E6B_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m674C3F3A0FEF7B3E44203C15302EBCE99504B08A (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m674C3F3A0FEF7B3E44203C15302EBCE99504B08A_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m0B90726345F935BEE14124084C26331E153BB9F4 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m0B90726345F935BEE14124084C26331E153BB9F4_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA4AA47CA9D5F9F678A030B42A1CDEF7456EAA3CF (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA4AA47CA9D5F9F678A030B42A1CDEF7456EAA3CF_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m325F143CA3657CC5B3062964D1B88AC220CAC713 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m325F143CA3657CC5B3062964D1B88AC220CAC713_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mE089CBAF2E7D8A599C86B4FFF92E0C0F40E84B18 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mE089CBAF2E7D8A599C86B4FFF92E0C0F40E84B18_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m7E2E3D1FA797A60287B3D93C110920B04DF1B280 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m7E2E3D1FA797A60287B3D93C110920B04DF1B280_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m51CFBE7997B934AFFC8C46FA228C159E6B18385E (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m51CFBE7997B934AFFC8C46FA228C159E6B18385E_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m4312B0C10DC44166AA08F11AA4E419E2ECCD4700 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m4312B0C10DC44166AA08F11AA4E419E2ECCD4700_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m365E974AD774D88F6D67E7FCE89D66D2A4B8060F (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m365E974AD774D88F6D67E7FCE89D66D2A4B8060F_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF65501AE28F9949895228AB65B962EB0604FEFD3 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF65501AE28F9949895228AB65B962EB0604FEFD3_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m667E133990D7F0F527CE08A047F6FE3B3E6C22D6 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m667E133990D7F0F527CE08A047F6FE3B3E6C22D6_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mECEDFD65C25DA5A9F2FB4C39F2896BCE94AFA11F (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mECEDFD65C25DA5A9F2FB4C39F2896BCE94AFA11F_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m65312F8C4EC7A1BA793D7C9299DAA79AB384285E (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m65312F8C4EC7A1BA793D7C9299DAA79AB384285E_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mFE9649054F39736F12E4B482175032E4E7D6CB97 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mFE9649054F39736F12E4B482175032E4E7D6CB97_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3F565DFD3C0F4E2437F93B5364CCF4DE7E7DB1D0 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3F565DFD3C0F4E2437F93B5364CCF4DE7E7DB1D0_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m8AF98FD59BC97302DBDD660051640EB183D113FA (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m8AF98FD59BC97302DBDD660051640EB183D113FA_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m4FBB9ACB58A4282484C0FCB1E798D1728205362D (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m4FBB9ACB58A4282484C0FCB1E798D1728205362D_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m027FE9988093FBB26F99D62B907CDFA327DB3100 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m027FE9988093FBB26F99D62B907CDFA327DB3100_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mCD129CA360E8E723D5E4F8EB75B57DE9A65098E1 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mCD129CA360E8E723D5E4F8EB75B57DE9A65098E1_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7192416FA91CC607C14B0447665603F151207660 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7192416FA91CC607C14B0447665603F151207660_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mCD65AF2D5F6ED4EA6DB74BF6A3E0EAEA0C559870 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mCD65AF2D5F6ED4EA6DB74BF6A3E0EAEA0C559870_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m8D27976B6D83C6329A0C9A8A997ED60A3F7108F2 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m8D27976B6D83C6329A0C9A8A997ED60A3F7108F2_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mF5A6A80949A78E68391D952DF3EEFBB1FCC86448 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mF5A6A80949A78E68391D952DF3EEFBB1FCC86448_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m4C1B27D4B187653377FB1D4E0FDF2315AC1CA620 (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m4C1B27D4B187653377FB1D4E0FDF2315AC1CA620_gshared)(__this, ___0_version, method);
}
inline void List_1_AddWithResize_mD7AAF620712FD385F684907728D673DD87AF969E (List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* __this, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967*, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE, const RuntimeMethod*))List_1_AddWithResize_mD7AAF620712FD385F684907728D673DD87AF969E_gshared)(__this, ___0_item, method);
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m40953BF57B0F381F5D71DB10211C90F14642C735_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_2;
		L_2 = VirtualFuncInvoker1< StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3AB780009673C05F4EBED051FB5575A5B5B5C700(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tA03AA674ACA74E0E3CF574EE6468923F2E0287DD* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m042E36C7FD5781667C418982D8E0CB45645C66CB(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m17AF840C96B86E259775F7B66071669AD0B0E8E3_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_2;
		L_2 = VirtualFuncInvoker1< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m98DE8F258072E3728C2BBF80979B4FA23212D64C(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t8B38616834A9668E0D56151ABD21A0145241A904* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mDC06547839DAC0BC9A56B2E0B1719618A88A7348(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m419B0BF7AB2C8D4D4263B1CD937FB656FFF20E8C_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_2;
		L_2 = VirtualFuncInvoker1< StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m60D2A62A09B2F4BD867B654B6482CCBDFEFEF61B(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t406E8FD1D3C7633BCC09374084547DD4AE26B0B2* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mD152B5277096AA20D8C476FD5CF835D9CB453EC3(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m1F1CA971077737F3B2FB120BA0C13994EC344578_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_2;
		L_2 = VirtualFuncInvoker1< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mD62E70B42FAE4F8C164C0780D700861A07BB905B(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t741B856848ADAF2D029BA27FFBB2BC6A803CCDDF* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m01554DF8BAAA580CC1D2BD44B29A6E8706B46202(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mE85D3566D96D28CFE6BA48BAC6690933ADA8076A_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_2;
		L_2 = VirtualFuncInvoker1< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m54E1E357BA0D6FDEB8D10A8E2194B2940409ED40(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t24F7C80310136D4445C22F9F63EC03491B24D917* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m0E056F6A27CBE0F55CA15BFA96F43DB482453F0A(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF92A927CE88D9A5248BAA4F45CDCD5CF31E4005A_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_2;
		L_2 = VirtualFuncInvoker1< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m294BD30D824C438D7FE215FF69E218FD5BD1703D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tBDA73E8AF92139C030C26F76D2BD95B28CFF40D6* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m5FEE8691698F878B573A010E29D80C80DB147D24(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m657CBB7A2672A1C0345BCFBB3A443429A0F4224A_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_2;
		L_2 = VirtualFuncInvoker1< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m7B821E8A6F403DEACBE4CC3BA0E935093620B74D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t63983F3208724CE0A47DCB3049CF2A9855F2C5AE* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m4C2255DD35D36E310034BC5A1FF9B02374617C91(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mEA9E64B51214E4D3841D7993751D3D998795F6C5_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_2;
		L_2 = VirtualFuncInvoker1< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m310A0092144F8155C74E989910024CA882FE982D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tA8ADACEC553DB5E103A3A4D2B24C02013A9F24DB* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m777DA9CBF1EA6DF395F69C41F139B2B697AE289B(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mB81301978CA0B0C4982227826C61C5486C0EDB25_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_2;
		L_2 = VirtualFuncInvoker1< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m878C12C95C2714414BFBA413E2C1E4EE04AA986E(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t938B349D12A5CB052FB2880CC2135FF39FCD60A9* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mECAE6040262A22DCB7D9E5D197A0A0CD9F0F6BDC(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m2A55459F567F1BCC075010BB7AF62969CB43E6BE_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m66814AD549058096C7A0489343ABAA0BB5C53A3B(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t8122D557E3EE57D7D3E5B349F53F814C7BFA32CE* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAD8AAE85A561E5D26900962A00AC14FAE64B6409(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m0EB584ED1AE3C1B32BF6610A628D1A2599F7FF2F_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_2;
		L_2 = VirtualFuncInvoker1< EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m09C7D48C44040C095C12983821C3D7F817FCBD3A(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tEA05ECF91DC9C2CD12F03563374FC16F7A8D7700* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mB191C5053E39CB183A6EEA647B73A702D66AEBF3(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m4D158E4FFF5C18A0CE125F3754917A15516D695F_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_2;
		L_2 = VirtualFuncInvoker1< FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mDF49721B0E54AB445DADB7832C00AA33B435329D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t7A4FF700FD8C4BF782338A024C4F246955C5ABB2* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m68D221C68A37662258F2FAB95BEE436FDA100FCB(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m2C8E2489EE4F073846C6403D16AD2649886A303B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_2;
		L_2 = VirtualFuncInvoker1< FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mA549AFC09282F8B6CBD228FB3B8D8E944787E8DF(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tDC18BED77BE2E675BC7FBA5FEA84B92C43205BC9* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m005D1CB50BD80E6980E282788D200FC6A11978B1(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC54E39002F374166093780A93D315838EEDA37CD_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9247527A6CEDE99FE551CFD94589A8B306434CAF(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, int32_t >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tB44C7A6428038BDEB3C3C1F9E6DBEDD4711D8F45* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m12F130D2FFC76E3FF72D32AB46BCA6684DD6BE01(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m7CBDDE85C1D376884964884DE762C8C3441985A2_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_2;
		L_2 = VirtualFuncInvoker1< MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5CC9BAE0BE7BEAD6566C0B8C6FF28DB944FA7068(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tD7D80F7DEC101F77BBE737F0331BC62ABE26A0B6* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m5A0D2570229574C16D72E856147ED3E2C8C4EEBB(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m7A949D94630DADF5E7CCBD06DEC7B64BB5A8FBAE_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_2;
		L_2 = VirtualFuncInvoker1< Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m2B319EB4F6C48DC8F0ECAF7E2EA580B20889EEE3(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tEB2CE14689A4020BE18C91A90DA15C92B8FE6852* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m3191D8C32B97FF1EFA136F2D8F17F9125771FBAF(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mE8AAE65733CC82DCDE6C417441723A9FB9F5411A_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_2;
		L_2 = VirtualFuncInvoker1< Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mD1FD55EA6D387D200DB3577C9F8D7D414807D589(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t6070C6133DBDBB269D7D040E600BEEFADA672676* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m4AB01ADF43B1BEC605710D72A6441896B0D223CC(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCC40C94A5003D2A26DA49C0C469E0BF6B2E01A_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_2;
		L_2 = VirtualFuncInvoker1< Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mDDF59EA30E4BC42582C97889E0BAAB9797F03B16(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tA3BB11ED5710FE91D4EAB86EF322ABDBFEAFBFB3* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m1D42306A2E7798EC34513115157E1BC7B2C497AC(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAEC3A391B5D5BED97F493D03962D4167FD155CBF_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		float L_2;
		L_2 = VirtualFuncInvoker1< float, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m98984203F06214DB5727705581DE668BBC153359(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		float L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, float >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t823AA98A936CBA95B0C0182DA71CF40A9F3FDBB4* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB612926E4FEDEA9042FBEFB006F1F69326301213(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mB391BB7F00EA2E5DB5E3F11FA960710E042309C7_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t20A025311CE5A099276CB813872583CED6D6E825* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_2;
		L_2 = VirtualFuncInvoker1< StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mE79E8A5321ED2E772D513893C4BFC3ACC73D3CBD(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t20A025311CE5A099276CB813872583CED6D6E825* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mD72983B88C8A8D14D46FC93817C7A76F61F28649(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mC497816AE8C6484D8DF6B4E88A53B01F74C1B129_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_2;
		L_2 = VirtualFuncInvoker1< StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m6DC6A4185E749BC8A37E17532C7E9DD56CCAED57(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t17E81BDCD8C3356FD0A151F62B522E32951EB298* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mFA97A62216A8F7A27F1C412B89CDC8EA1DD6BEBB(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m80588BDED504155822211EEE76A97BF8D779FB26_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_2;
		L_2 = VirtualFuncInvoker1< StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m132243159C9DFD053DA783E3BE242225B7F7CA7D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tF82717D9B2A5CA1D2AD779482E0A17204D080EB6* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m4093C393F9F24FEF16E727C7DE08DE91ECFD76F0(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mD6FEF16858E60BBF2010CDFD6FC434A31FB0BF6D_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_2;
		L_2 = VirtualFuncInvoker1< StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m630E5C57C7BBA5EB88292F7C17F851B79BDAEEF1(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tD50FCACFA3FCA7E436E753A7D01A4608A2620E77* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m48945693D2712E3B961B0B9167FD138A1F16E254(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m2FD0288E7962BDEDE182ED5012AC3A254C29CA1B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_2;
		L_2 = VirtualFuncInvoker1< StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m5E49DED370A90F822179DB8DC02FE551089D4978(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t5D15FA086F7876CDA819F4A7A6CD0975B62D4CBB* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m94C0BAF595C6D7C407238C4CA04C712F5DBFADBF(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m46F206C51EFE31BC3B36A48544C9FA88C91866F1_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_2;
		L_2 = VirtualFuncInvoker1< StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m1A375B6019EE1A28EE2772D47D12EAD89838F0FF(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t724443EAE25E87C4E110C8DEC1738C52A1DF617F* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mAC12DEA1841DA800C34A459BE68688094B51012C(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mCF2B405B970644A1F5392C89B9BF3E7C7E9105A6_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_2;
		L_2 = VirtualFuncInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mADAFE7B151C8062CBC8D67D58708A72755A2BE0F(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t46278BA3E6DF459FA6D8B58A001DC5A6B523E158* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mA5B82D52D01D7F79E7D06905FDC8328364258F0C(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mC5E4D7EB1EA06BD1CBD43868F7CBEA02C3734BB9_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_2;
		L_2 = VirtualFuncInvoker1< StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m901D7C063F3A3B5F88745039C99C24A9ABDABD96(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t068FADA215BEAA2B857A7EE1AF3F6C83A45DDCFD* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mC2132C5C43266B183A43E6994112640B1A68A858(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mE1130BDF634428A17A63ECC8B6A5B1E3044F9B52_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_2;
		L_2 = VirtualFuncInvoker1< StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m0DB5F7BCF0C5D8BE52ACD2461E9FD7B5CCD75088(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mF2CB55855D9FD0C906BA8F311F47530ED5D144E6(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m9D7D4D3E4E57B92D74A409DD0CF8C31316EFAE53_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_2;
		L_2 = VirtualFuncInvoker1< StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mA065696E1DAC9F859966D98D06E0863A00464B75(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mE00CC28E0D36C6F8D101BB7EAEEE1782FA6E2D03(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m2C6B7BB994225CCAEEE29F8FA35DDD3CC55CD262_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_2;
		L_2 = VirtualFuncInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m75175DB9D4C0C0D55267E959E92A8A51BEA83CEA(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mE73F3B17F36457CE6DBCAF9DD99A30165C6F998C(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m0CC2DC4F99BE1E865583236F09F60E13F7A97ED9_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_2;
		L_2 = VirtualFuncInvoker1< StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m52B420EAC6B253B9EA1AA650B721A5A8D7CA1AA3(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mAE8D275C7BD27AC8E288DF32A06E31B57C6C27A1(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m31116F1ADA29892BA61FA52A92CB73B51F460F97_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_2;
		L_2 = VirtualFuncInvoker1< StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mB70A1824EE14B495C83BCDCE914B51308DA9BF9D(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mFF090E20691C5B23159E2BF480DFEE43A0F161BB(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC11CD0E5A32CCF84FF98EE542C0568DB62BFA908_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_2;
		L_2 = VirtualFuncInvoker1< StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m01E9ED40024DB3256E1067781E620C61ACF26621(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mC7EF2781514A82A364FC5C6C6BA30D608CFBECA8(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m77C6F2023D428B96C474F16C0F27541E7A088CFF_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_2;
		L_2 = VirtualFuncInvoker1< StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mBDD89DBC5DB5CAF90157E04D9317093F26A7647B(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mC2420A9499849DE56858DD734EE8534734931725(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mCBF949BFEC62F9D8598CB1FBC4CAD90ADDE71922_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_2;
		L_2 = VirtualFuncInvoker1< StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mB548FC8C59AC0471B4A9A6271CD6DC190DCB89E2(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m91F723B10F2FE7D820F52D0A88B3D3D6C9DB9DD2(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m3823C42FFFF6A35AD8702158F8FB3F556B688C58_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_2;
		L_2 = VirtualFuncInvoker1< StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m7B7EEA5EC7AA05738CAEDBC43C02AF5208ADD050(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m1F947B93C2B434A9C5F90B4191479C3B917E0F40(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mCAB609CBFB7C990F3838FB1E91FC172E0FD04F64_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_2;
		L_2 = VirtualFuncInvoker1< StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m46D5BB83082468C3527615D9CB7AF5E95C4F90DD(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m85A19B12E05AE38D9CB548D07BB1C83E9FE876A8(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m70AB3C86C626A088A6A4ABE7580A3DCAAFCA39F2_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_2;
		L_2 = VirtualFuncInvoker1< StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD87A29DAA54F257912030F71580F364AB616EF9E(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m14487AF76BCF8077D273E116E0965D5BA3D756FA(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mC5A3E330B78F196555A14031AA728128F677A3AC_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_2;
		L_2 = VirtualFuncInvoker1< StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7F7C2471615448D909FA4D5E06F0BE1AF46F2F02(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m6A7CCEF20AF963F2DE0C4D342B52E1F71038E532(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0F7DC5CB4851BF24E5528A5980B8FB6578FEE5C3_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2;
		L_2 = VirtualFuncInvoker1< TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mFB8B6B8FF3CFCF2F11BA6B8B6544E33D6D932EE3(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m6E8139C3AF9A245ECC2B69FD87D6FF8459AF23D8(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m352C6D49CE885175F5C9A4A234F25EDE3559FF5B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m131649C7DE1E3304387CA21EC798CA90E06CBC76(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8B1C42AF823E9F5485820F80141215C138818762(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m7564E57CF11CA2EC9AE34544AC0D2C56E9DD2420_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_m6EF4A1AA24AACCD1EF7CEA329EDD1A55597B52DB(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		Il2CppSharedGenericObject* L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, Il2CppSharedGenericObject* >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mF9E0C43B93995E6480C148D022ADCFE202A55DC2(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m04DB6A6584D9CB94331C9E8F9E7CD91B1A8DBC8B_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* ___0_property, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_0 = ___0_property;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, Il2CppSharedGenericObject** >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m669A81D643E194AD89068674C2EBEFA256B8E317(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_8 = ___0_property;
		Il2CppSharedGenericObject** L_9 = ___1_container;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< Il2CppSharedGenericObject**, int32_t >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* L_11 = ___0_property;
		Il2CppSharedGenericObject** L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEDC5541D3F2BF8E0811455AD849CCBEE5BB3BA99(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m71AE88C8496ABA01C1AB78884047DFD5D4019E92_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t93BB293E1128F39D869F82D8F329306FEC451DC9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t93BB293E1128F39D869F82D8F329306FEC451DC9);
	const Il2CppFullySharedGenericAny L_10 = L_2;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t93BB293E1128F39D869F82D8F329306FEC451DC9);
	memset(V_0, 0, SizeOf_TValue_t93BB293E1128F39D869F82D8F329306FEC451DC9);
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		NullCheck(L_0);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(16, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TValue_t93BB293E1128F39D869F82D8F329306FEC451DC9);
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Il2CppFullySharedGenericAny*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(__this, (Il2CppFullySharedGenericAny*)V_0, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_8 = ___0_property;
		Il2CppFullySharedGenericAny* L_9 = ___1_container;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TValue_t93BB293E1128F39D869F82D8F329306FEC451DC9);
		NullCheck(L_8);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke(17, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_10: *(void**)L_10));
		return;
	}

IL_0032:
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_11 = ___0_property;
		Il2CppFullySharedGenericAny* L_12 = ___1_container;
		bool L_13;
		L_13 = ((  bool (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, String_t**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_11, L_12, (Il2CppFullySharedGenericAny*)V_0, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisSerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBF003970007516F1E35301491ADF0B1804292429_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* ___0_property, SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* L_0 = ___0_property;
		SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397* >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9247527A6CEDE99FE551CFD94589A8B306434CAF(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* L_8 = ___0_property;
		SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397* L_9 = ___1_container;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397*, int32_t >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tBCBDD000638A0F3DC6BFE7A44386EC8C73E02E3C* L_11 = ___0_property;
		SerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397* L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedId_t7726C01F7CF2BA38CDA68D03C59E1E589D6AA397_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5A907D4197366702BC4D0A84F63B906B0034109F(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisSerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28_TisIl2CppSharedGenericObject_m75413DF9264724FF07C47DDB21D9B99912E69062_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* ___0_property, SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* L_0 = ___0_property;
		SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28* L_1 = ___1_container;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_2;
		L_2 = VirtualFuncInvoker1< Il2CppSharedGenericObject*, SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28* >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisIl2CppSharedGenericObject_m6EF4A1AA24AACCD1EF7CEA329EDD1A55597B52DB(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* L_8 = ___0_property;
		SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28* L_9 = ___1_container;
		Il2CppSharedGenericObject* L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28*, Il2CppSharedGenericObject* >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_tE3C91EC80F9A128BF4390129B174BF77E6345E08* L_11 = ___0_property;
		SerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28* L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedType_t6D7DE1023BA3AF60E7F1117FC040A0A6D7132A28_TisIl2CppSharedGenericObject_m0B5B2857DA2C8071EA3D77BA295DB9B1522F9B5D(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_IPropertyVisitor_Visit_TisSerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD087A2A6FF3A58DC9EC7B9DFF5B14B3F2637722_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* ___0_property, SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* L_0 = ___0_property;
		SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9* L_1 = ___1_container;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9* >::Invoke(16, L_0, L_1);
		V_0 = L_2;
		Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* L_3 = ___0_property;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_4 = __this->___m_View;
		bool L_5 = V_1;
		JsonPropertyReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9247527A6CEDE99FE551CFD94589A8B306434CAF(__this, (&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* L_6 = ___0_property;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(15, L_6);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* L_8 = ___0_property;
		SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9* L_9 = ___1_container;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		VirtualActionInvoker2< SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9*, int32_t >::Invoke(17, L_8, L_9, L_10);
		return;
	}

IL_0032:
	{
		Property_2_t90BA70D6772C82D6E1FDB632766C532DB7844354* L_11 = ___0_property;
		SerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9* L_12 = ___1_container;
		bool L_13;
		L_13 = PropertyChecks_CheckReadOnlyPropertyForDeserialization_TisSerializedVersion_t7AFFF40504D684A29BA5423675A8781BCFF677C9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDA275EAD4E5F42E237EC47CF623CF261AD02C005(L_11, L_12, (&V_0), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		SerializedTypeProvider_tBA6A3A679D26EB5B4C276D3E1B876715C5A094A1* L_14 = __this->___m_SerializedTypeProvider;
		NullCheck(L_14);
		List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* L_15 = L_14->___Events;
		String_t* L_16 = V_2;
		SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C* L_17 = (SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C*)il2cpp_codegen_object_new(SerializationException_tECBE4D571FE3FD685E07D983B0CDA02F234E9A0C_il2cpp_TypeInfo_var);
		SerializationException__ctor_m3D96969F7365A9077DD594355D88370A82065B98(L_17, L_16, NULL);
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_18;
		memset((&L_18), 0, sizeof(L_18));
		DeserializationEvent__ctor_m73603EEC03C91814E6B7929394257D88BD77C0E7((&L_18), (int32_t)4, (RuntimeObject*)L_17, NULL);
		NullCheck(L_15);
		List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_inline(L_15, L_18, List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 118575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyReader_Unity_Properties_ISetPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9FF216C3506853B973A0EA85631B5B1049FDDC33_gshared (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0446516FA0D1DFD2F1F94D278140B73488297FA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TElement_tCC8FF1CEEB99033735242794929FB3E11E490C97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TElement_tCC8FF1CEEB99033735242794929FB3E11E490C97);
	//<source_info:<no-source>:1>
	UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeArrayView_t64641D362D82B5FE45F8D72D5673B092F659FF30 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnsafeObjectView_tDD17C91E065E37B8955F18CB553A17F82EE76254 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TElement_tCC8FF1CEEB99033735242794929FB3E11E490C97);
	memset(V_5, 0, SizeOf_TElement_tCC8FF1CEEB99033735242794929FB3E11E490C97);
	UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SerializedContainerMetadata_t5CCD2AD33CE2755161834EBD4EDE623397786E0E* L_0 = (SerializedContainerMetadata_t5CCD2AD33CE2755161834EBD4EDE623397786E0E*)(&__this->___m_Metadata);
		bool L_1 = L_0->___HasElements;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_2 = __this->___m_View;
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0015:
	{
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A* L_3 = (UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A*)(&__this->___m_View);
		UnsafeObjectView_tDD17C91E065E37B8955F18CB553A17F82EE76254 L_4;
		L_4 = UnsafeValueView_AsObjectView_m08E3A3C5DDFEC0E3462138B028185EEDC28C390B(L_3, NULL);
		V_2 = L_4;
		UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_5;
		L_5 = UnsafeObjectView_get_Item_m0F1F89D36CEE9F9A34C430C614A0BA42A68057FA((&V_2), _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		int32_t L_6;
		L_6 = UnsafeValueView_get_Type_m6522F37423D33F14BE68F64C4729FC1C6ABF5B2B((&V_0), NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003e:
	{
		UnsafeArrayView_t64641D362D82B5FE45F8D72D5673B092F659FF30 L_8;
		L_8 = UnsafeValueView_AsArrayView_mCEA38E5AEEA79963F7D5D1BAC5D7E05625D9740A((&V_0), NULL);
		V_1 = L_8;
		Il2CppFullySharedGenericAny* L_9 = ___1_container;
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_9, &L_11, L_10);
		typedef void ( *func_L_13)(void*,const RuntimeMethod*);
		((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		RuntimeObject* L_14;
		L_14 = UnsafeArrayView_GetEnumerator_mF7FD01990E7F298935472FAF50DD0ACCC438A191((&V_1), NULL);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{
				{
					RuntimeObject* L_15 = V_3;
					if (!L_15)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_16 = V_3;
					NullCheck((RuntimeObject*)L_16);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				}

IL_0099:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0086_1;
			}

IL_005c_1:
			{
				RuntimeObject* L_17 = V_3;
				NullCheck(L_17);
				UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_18;
				L_18 = InterfaceFuncInvoker0< UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A >::Invoke(0, IEnumerator_1_t0446516FA0D1DFD2F1F94D278140B73488297FA7_il2cpp_TypeInfo_var, L_17);
				V_4 = L_18;
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_TElement_tCC8FF1CEEB99033735242794929FB3E11E490C97);
				UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A L_19 = V_4;
				((  void (*) (JsonPropertyReader_t8B4B535106EE2E4B7BE370CDA741E56D4CA1CF0B*, Il2CppFullySharedGenericAny*, UnsafeValueView_tCD606B53AEB275B5AC69CB248B949E3EE5A5BB6A, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(__this, (Il2CppFullySharedGenericAny*)V_5, L_19, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 5));
				Il2CppFullySharedGenericAny* L_20 = ___1_container;
				il2cpp_codegen_memcpy(L_21, V_5, SizeOf_TElement_tCC8FF1CEEB99033735242794929FB3E11E490C97);
				Il2CppConstrainedCallData L_23;
				Il2CppMethodPointer L_24 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 8), (void*)L_20, &L_23, L_22);
				InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_24, L_23.method,L_23.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? L_21: *(void**)L_21));
			}

IL_0086_1:
			{
				RuntimeObject* L_25 = V_3;
				NullCheck((RuntimeObject*)L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_005c_1;
				}
			}
			{
				goto IL_009a;
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

IL_009a:
	{
		return;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m1A3139791D52D9EF69109A9DB3C988881A0F96F3_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m72DE893919F2E4BB6622A06EA287565A1B58323E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757* L_12 = ___0_container;
		Il2CppFakeBox<PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757* L_16 = ___0_container;
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_17 = (*(PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757*)L_16);
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m6B04F23DC72C2E2F6545E18090DA8A327D318FE7(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m5765599D7C1EAF8C260CDC5BE2911F62039B9FD6_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_12 = ___0_container;
		Il2CppFakeBox<StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_16 = ___0_container;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_17 = (*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_16);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9B7684E5CEEEB9820576924288815BBC0EE3A8C6(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m6C23A940DB24EA7E7E3D0DBBEE9562058919C3B0_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_16 = ___0_container;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_17 = (*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_16);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m719D6F8E51D6C3AF37DD7AC9E45E85557F793EE9(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m842EDAD47EF198E58446D53FAEC94DC62A32B92B_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_16 = ___0_container;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_17 = (*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_16);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mAE461AD652B39D4441FB3E2E0B307CC3CAED1E7D(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE38ECE0AF5C10076A1A44C161D8C9BBC002BF262_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_16 = ___0_container;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_17 = (*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_16);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m54C79A98CA4B0B1469DB6CFD6A5E345C841A6D92(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mC437D4AFE43AE651AF866DC91CE804175C47F9D2_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_12 = ___0_container;
		Il2CppFakeBox<StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_16 = ___0_container;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_17 = (*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_16);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mC20FE6B68CEAB6454CBCAB9F9963A291C59DC254(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m6D8701859AB3D41D9B1EDEDF29AA7EA235F9EF92_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_12 = ___0_container;
		Il2CppFakeBox<Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_16 = ___0_container;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_17 = (*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_16);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mDA13BAEBCCA8E5F48C58537020731A8C384FF043(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m77993ACEC0951A1352E4D77E0C9E150EA991B93E_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_12 = ___0_container;
		Il2CppFakeBox<Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_16 = ___0_container;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_17 = (*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_16);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF22E62CDC7F99398734E00E57D43475E096D38A0(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m8DFF3F4B13729F584B9F3A436298BBB09483887F_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_12 = ___0_container;
		Il2CppFakeBox<BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_16 = ___0_container;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_17 = (*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_16);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m909ED457CA5D65D10066B14A3D5B3E89B26F71DE(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0E2F9F7A2918AC7E464E1CE3787AE78B81179331_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_12 = ___0_container;
		Il2CppFakeBox<BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_16 = ___0_container;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_17 = (*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_16);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mF75EAC3E1D5E18FD567AB43E09A3D64B870E2584(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m998FADE1CD527AC179DADE0115E65DDAA90A5A49_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_12 = ___0_container;
		Il2CppFakeBox<BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_16 = ___0_container;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_17 = (*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_16);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m7EDB4B8F330D36AF576756C43D83F02292E76777(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m39B140D4F3600C712BA5380D962BB93AF5E25D84_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = ___0_container;
		Il2CppFakeBox<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = ___0_container;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = (*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m51723C7608C19853BD80776075445611E95E01CE(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m0635B3D8D1C47E851E8095B20C1D3C3CC4EB952E_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_12 = ___0_container;
		Il2CppFakeBox<BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* L_16 = ___0_container;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_17 = (*(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*)L_16);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m1E2A0B6A2576C27B0EFD26AE85192C12159C5C37(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6C85BB0F07E78B687F6D86F3A83049E942FA06FD_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = ___0_container;
		Il2CppFakeBox<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = ___0_container;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m9FA98329D5CC1861804D836E28AC6E55864092AF(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m531407B7623B63D39C6C72BBF6CD14FDEF5EDFB8_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_12 = ___0_container;
		Il2CppFakeBox<Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_16 = ___0_container;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_17 = (*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_16);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m3B05625173F5694BFC06055FF9837E55195B0EBF(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m67EE3EC413CF85B2989FDB9C846B93789EFCC34C_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_12 = ___0_container;
		Il2CppFakeBox<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_16 = ___0_container;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_17 = (*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_16);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mC77C8FB194E4F62D0D4AB1788EA58149D0845ABC(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m166D1840F676B5BAC5193496401DE7D04DEBE1BE_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_12 = ___0_container;
		Il2CppFakeBox<FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_16 = ___0_container;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_17 = (*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_16);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB095E23F76920B401A27B01CCFB3AFE905DF5A2F(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mE3E1E6093A3E01E58A2E1F479B367613F564413C_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_12 = ___0_container;
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_16 = ___0_container;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_17 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_16);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4FA3FA78ABF75835D7572BEBB92C08882F90DF55(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mE2A311EFF37F3006E6C349E3FBDC628F52EC187B_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_12 = ___0_container;
		Il2CppFakeBox<MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_16 = ___0_container;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_17 = (*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_16);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m1B6158E7473E31CDA82D7B420940D1195093E480(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m8E2C7A70F23BD3CFD25ADC49BF502D1653FE0571_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_12 = ___0_container;
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_16 = ___0_container;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_17 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_16);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m305534AAB40A19DD0CD0A6E4A2684967F9AC99EC(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_mE199AADC7AA23BFC46AA9223D3A36A0E9CCD220C_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_12 = ___0_container;
		Il2CppFakeBox<Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = ___0_container;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = (*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)L_16);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m537FBEAAA19F841F41E8BF78B3F916798FE01A64(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mFD67F9C12BEE432B115D004A7C541F45EB88CD08_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_12 = ___0_container;
		Il2CppFakeBox<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_16 = ___0_container;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_17 = (*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_16);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF9273BE4C238AEDC4627C322EF7A3716071CA7F1(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m3AA064AF30529099CE3071A4C9EC7A0086B01BDB_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_12 = ___0_container;
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_16 = ___0_container;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_17 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_16);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mE950B93E9AAF4370D7B892B2CEEB9C29B8620485(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mD8FD83CF8424ADB5160B62F8B79EECAA7B88019F_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_12 = ___0_container;
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_16 = ___0_container;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_17 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_16);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mCD86EB25AE87E0B2F2F55E17C7EF202DA2F54B46(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m60C058562513D003E5C25DE092418EE26267217B_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m3A8C95E3DA3D54BF18D33962CF6FE16A1D8D6843_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_12 = ___0_container;
		Il2CppFakeBox<SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_16 = ___0_container;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_17 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_16);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mF138C3D6BA7E3229F0756DB94765302EC089395C(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mE002E6A842DF2EBDD2ECD0737489DBCA2EEF1CF2_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m2687A188663B91379ED5A25B5F0AB0800C51D964_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_12 = ___0_container;
		Il2CppFakeBox<SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_16 = ___0_container;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_17 = (*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_16);
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m17CD6D65586D2471C17DACD6EB51DDF14CBC2E6B(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mEC46094580509C4BB7F6DD49656462F8B30869AA_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_16 = ___0_container;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_17 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_16);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m674C3F3A0FEF7B3E44203C15302EBCE99504B08A(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mED9F7775566D5A30B6A469F93E8BABE9440E9E43_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_16 = ___0_container;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_17 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_16);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m0B90726345F935BEE14124084C26331E153BB9F4(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m7ED4BD394C5CDE9AA859A8121230824FCC6C9142_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_16 = ___0_container;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_17 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_16);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA4AA47CA9D5F9F678A030B42A1CDEF7456EAA3CF(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m1DAA6BC1553378A00DCA0EC60FB25A07EF05EAD4_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_12 = ___0_container;
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_16 = ___0_container;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_17 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_16);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m325F143CA3657CC5B3062964D1B88AC220CAC713(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m4AD9DC25BB9A42732B13FCF13D338107CAEFA150_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_12 = ___0_container;
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_16 = ___0_container;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_17 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_16);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mE089CBAF2E7D8A599C86B4FFF92E0C0F40E84B18(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m100EDBAE9145EAAE2BBD6B387B57FA501D769C9A_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_12 = ___0_container;
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_16 = ___0_container;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_17 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_16);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m7E2E3D1FA797A60287B3D93C110920B04DF1B280(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m9DDE32295895A6B2E56DA3CD6ED05A782121C5A7_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_12 = ___0_container;
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_16 = ___0_container;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_17 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_16);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m51CFBE7997B934AFFC8C46FA228C159E6B18385E(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mCC14AF33B000910C47D3984B34C75BE96B6A7B15_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_12 = ___0_container;
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_16 = ___0_container;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_17 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_16);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m4312B0C10DC44166AA08F11AA4E419E2ECCD4700(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m9E7E61567A6F1D0066054FB1CA1BED2B1022903C_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_12 = ___0_container;
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_16 = ___0_container;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_17 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_16);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m365E974AD774D88F6D67E7FCE89D66D2A4B8060F(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m52489F50722C31A1ECBA61BCB49E5E88CA0F8FF6_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_12 = ___0_container;
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_16 = ___0_container;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_17 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_16);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF65501AE28F9949895228AB65B962EB0604FEFD3(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m88EAA6C57D51C8F0D45836102FCAA4A7ACF5B50D_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_12 = ___0_container;
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_16 = ___0_container;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_17 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_16);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m667E133990D7F0F527CE08A047F6FE3B3E6C22D6(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mB8DB428A020B9CA41B0F9FD502A375335F020943_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_12 = ___0_container;
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_16 = ___0_container;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_17 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_16);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mECEDFD65C25DA5A9F2FB4C39F2896BCE94AFA11F(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mC43D2592083471C897B5D09CFD6B2EACFFFB94B3_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_12 = ___0_container;
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_16 = ___0_container;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_17 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_16);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m65312F8C4EC7A1BA793D7C9299DAA79AB384285E(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mAFFB912CEFFAD4905A6B40710AA6D8E51F77CDBE_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_12 = ___0_container;
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_16 = ___0_container;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_17 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_16);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mFE9649054F39736F12E4B482175032E4E7D6CB97(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3BDA93114334B6908B557AF3B27021FABD1E193B_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_12 = ___0_container;
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_16 = ___0_container;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_17 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_16);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m3F565DFD3C0F4E2437F93B5364CCF4DE7E7DB1D0(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mA07EB451B6970F59C7860BE7860357C73895189B_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_12 = ___0_container;
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_16 = ___0_container;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_17 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_16);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m8AF98FD59BC97302DBDD660051640EB183D113FA(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m85BBE6684A7340171348C49C241BC7ACC4287EFD_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_12 = ___0_container;
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_16 = ___0_container;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_17 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_16);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m4FBB9ACB58A4282484C0FCB1E798D1728205362D(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mE9424213C71E10E6F4B98C7AB1F504560DDDCA12_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_12 = ___0_container;
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_16 = ___0_container;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_17 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_16);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m027FE9988093FBB26F99D62B907CDFA327DB3100(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m8CB739227B17A62C6E8CD2009080D525545BD638_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_12 = ___0_container;
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_16 = ___0_container;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_17 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_16);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mCD129CA360E8E723D5E4F8EB75B57DE9A65098E1(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mF986A772C94F097B1EC8F06B0A4EB8D3B1B5FB97_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_12 = ___0_container;
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_16 = ___0_container;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_17 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_16);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m7192416FA91CC607C14B0447665603F151207660(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mE339B765FE12201CF5A2BFD368141051F16E2F1F_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_12 = ___0_container;
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_16 = ___0_container;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_17 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_16);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mCD65AF2D5F6ED4EA6DB74BF6A3E0EAEA0C559870(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mFED340AEB39CA885F16F82CBD6D29E83C205B8BD_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_12 = ___0_container;
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_16 = ___0_container;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_17 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_16);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m8D27976B6D83C6329A0C9A8A997ED60A3F7108F2(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m2FEC31D38AD23CD96C7C4CD010E32D42E5CFC5D1_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_12 = ___0_container;
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_16 = ___0_container;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_17 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_16);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mF5A6A80949A78E68391D952DF3EEFBB1FCC86448(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 JsonPropertyWriter_GetSerializedContainerMetadata_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mA8EEAE62796162FD47E86D7650AC4D19D2BA10D3_gshared (JsonPropertyWriter_tFED1C71C52277580C474F94D836B1AD23BCF2FD6* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B14_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B17_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B15_0 = NULL;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540* G_B18_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (JsonObject_t37939223EEB0862BB417A7EDE467A3E75BFCB2B7_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (JsonArray_tF9915320A60D6285B7E08A64846FD6A8B58969C2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_10 = V_5;
		return L_10;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		bool L_11;
		L_11 = TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_11)
		{
			goto IL_00c0;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_12 = ___0_container;
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_13(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), *L_12);
		Type_t* L_14;
		L_14 = il2cpp_codegen_object_get_type((&L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (L_15)
		{
			goto IL_00c0;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_16 = ___0_container;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_17 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_16);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_18);
		V_6 = L_19;
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_20 = __this->___m_SerializedReferences;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_21 = __this->___m_SerializedReferences;
		RuntimeObject* L_22 = V_6;
		NullCheck(L_21);
		bool L_23;
		L_23 = SerializedReferences_TryGetSerializedReference_m28A90AFAD3C4C111B2455955D385532C6ACF7D34(L_21, L_22, (&V_7), NULL);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		SerializedReferences_t262118CDA70C466A515C42D386FA471981165248* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_6;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_SetSerialized_mAA4D00EA2AFA4B9DFC6EE016CCF8BF01E5940F0E(L_24, L_25, NULL);
		if (L_26)
		{
			goto IL_00ad;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540));
		(&V_5)->___IsSerializedReference = (bool)1;
		int32_t L_27 = V_7;
		(&V_5)->___SerializedId = L_27;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_28 = V_5;
		return L_28;
	}

IL_00ad:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_29 = V_7;
		(&V_1)->___SerializedId = L_29;
		goto IL_00c8;
	}

IL_00c0:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00c8:
	{
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_30;
		L_30 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_30, IPropertyWrapper_tF27B7B8456039AEC39D42515017FAC2DADA3DD84_il2cpp_TypeInfo_var)))
		{
			goto IL_00e3;
		}
	}
	{
		Type_t* L_31 = __this->___m_SerializedType;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_31, NULL);
		G_B14_0 = ((int32_t)(L_32));
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B14_0 = 0;
	}

IL_00e4:
	{
		V_2 = (bool)G_B14_0;
		NullCheck((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this);
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline((JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED*)__this, NULL);
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		Type_t* L_35 = V_0;
		Type_t* L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_35, L_36, NULL);
		if (!L_37)
		{
			G_B17_0 = (&V_1);
			goto IL_010d;
		}
		G_B15_0 = (&V_1);
	}
	{
		bool L_38 = V_2;
		if (L_38)
		{
			G_B17_0 = G_B15_0;
			goto IL_010d;
		}
		G_B16_0 = G_B15_0;
	}
	{
		Type_t* L_39 = V_3;
		Type_t* L_40;
		L_40 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_39, NULL);
		Type_t* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		G_B18_0 = ((int32_t)(L_42));
		G_B18_1 = G_B16_0;
		goto IL_010e;
	}

IL_010d:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_010e:
	{
		G_B18_1->___HasSerializedType = (bool)G_B18_0;
		JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E* L_43 = (JsonMigrationCollection_tB617ECCBDB76CFE6798380DC36EC71FD629BE62E*)(&__this->___m_Migrations);
		bool L_44;
		L_44 = JsonMigrationCollection_TryGetSerializedVersion_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m4C1B27D4B187653377FB1D4E0FDF2315AC1CA620(L_43, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 6));
		(&V_1)->___HasSerializedVersion = L_44;
		int32_t L_45 = V_4;
		(&V_1)->___SerializedVersion = L_45;
		SerializedContainerMetadata_t445401F6955E68F2CB81308B99884CE43F94A540 L_46 = V_1;
		return L_46;
	}
}
// Method Definition Index: 118596
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonPropertyVisitor_get_Property_m3FB896A0D096CBA8C11670FAD6C1895C5CA48B69_inline (JsonPropertyVisitor_tAE7B9582005DD7C04E633BF702AB5A36E73E7CED* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 12172
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9F4108E5934BFB244CD36C7D2FAE5969BB4B8098_gshared_inline (List_1_tF6569F82810E13CBD9F2E55455C088EC63B69967* __this, DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		DeserializationEventU5BU5D_t5D58FE40B1E6427FEA9A62C3608047757FF27FC4* L_7 = V_0;
		int32_t L_8 = V_1;
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE)L_9);
		return;
	}

IL_0034:
	{
		DeserializationEvent_t2239A02D0C2B02D1E2F8FB330FCC1C42051F62AE L_10 = ___0_item;
		List_1_AddWithResize_mD7AAF620712FD385F684907728D673DD87AF969E(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m72DE893919F2E4BB6622A06EA287565A1B58323E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2181A8CF461BF0144D89531600E2B13D16A316F3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC84F547EDCE8EB6AED1EC568609F03E490AF04AF_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t974939ED5858E136E6783074D927B7A0A887BCA2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA90B7A62E6ECDF9E830590176E69042C88E3DD1C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t849B267549097D96986DCAD2850793D54566B07D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03E88F1AB3A8D3DB7BD336933F199AC6A28FC091_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tA707EF483A6846D64DDD63F963A95C7304B53E5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m51344FFA0FEEACE3CEF1632DD6D01B409451BA91_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB8799E05D6377C80FC931AA2ED809D6EF251A05A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF0A080A6EB0E07363597C054C7BC785E48602358_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF5A724F99569364D7615977EF32CDCB2A1045BBA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBBCA30F0833F69BAF3B73FEED6706A98ADDD8F7A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tDEB67735C0E3D316A776B5FC5E1D6BDFAFA02066_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m34379A3583A38EDDB72134FED4BEF56D2A5D0BC5_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFE90E3B2683C0197B0BCDD15879B0B07DC84A24A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mF477B5DC4E7614585579DE3FDB399B21C104CB4E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t735C9596C4B0AACA90B2BE965362D57FA9C03B5E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m4B9BF8692A76065F40E050B75EE6702C6C784D30_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8FFE575690EA6AC4B4647919E785D2AE72BE6D9B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD14761B683AB06C19DEE30867E250C46F6C8A11B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tADDF36A68586641E7714027F3533EC4E0DD869F6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m5DCCC49E23B8C0E4B880B3695A05191E2E36DBBB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t0DF62A72B3297A00D56AC85CFB01E8C3E9460D97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00C71BD63315D490B9C4D5868F1DABC0EDB5BFAD_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t4BD624776DB5B1CA6F4CD8522DD3007FEDF0CCCD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m00FCB5EF45C052616B43E1773B7FECC659D28F6E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF91BA2C79345F433195944D0618AB02D92236B21_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m03C73EA225C7C6C16C2639EB5F76A808A2788050_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB01FA3B4A03D597A48820CE7FCC333DCA70FACC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1D8B7A9107E1AC42133ADBB9D3E09F84BCC142DF_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t21080F26F6131ECBC06910EE13D1DE330D245551_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCD2F075EE8FA987FED25F36ACC13C6D0F4A32693_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tA6D1100439FC903C4E5199EE4D277273E18BF039_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB30654370AD9149923E5AF5342720AA0D50AD4E0_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFB0FF557412A3562B89AFBD03F8113908FA09E96_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m1754B76ABACBF255CC7BDD68608A2491CA85D42A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2CC90C31519F2DAF95C7F643DE417BCFE97C698C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m3A8C95E3DA3D54BF18D33962CF6FE16A1D8D6843_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tAF1F9FA8DA78DE822A8B827A4BF28E81DD82E2C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2687A188663B91379ED5A25B5F0AB0800C51D964_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCE7BF5097282C3471FBC6C06CB64D8DA43E1903A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
