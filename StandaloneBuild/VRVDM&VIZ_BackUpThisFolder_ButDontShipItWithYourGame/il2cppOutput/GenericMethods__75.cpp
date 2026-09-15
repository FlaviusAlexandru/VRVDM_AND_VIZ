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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};

struct Action_1_tF01EC860CB363E6A3245B6F34E103517EAA4C3E1;
struct Action_2_t16542E37039B65BE37847FDDC84DD5B6DF6EE597;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Dictionary_2_t3103E354F468B89433E1F3869E44058AC4BC55E3;
struct List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_tB4A18B6DAA73FDEE35E34A74B59D0AA5D58EF322;
struct UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD;
struct UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65;
struct UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D;
struct DoubleRewindableAllocators_t8D3615CDAAECEE59D64F85F9E0F46D07168A7069;
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IRateManager_t87095E45D9E80982DED11FFAE527E0EBC0F7E508;
struct ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894;
struct SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D;
struct SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct UpdateIndex_t56DEB0F69DA53BA69507467621AA550CA2EDCAEE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A;
struct WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830;
struct SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615;
IL2CPP_EXTERN_C String_t* _stringLiteral9CCB827429B43A1CFA1F345B1209CDCBE15BEB81;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9  : public RuntimeObject
{
	SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3  : public RuntimeObject
{
};
struct TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751  : public RuntimeObject
{
};
struct TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E  : public RuntimeObject
{
};
struct TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F  : public RuntimeObject
{
};
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283  : public RuntimeObject
{
};
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B  : public RuntimeObject
{
};
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D  : public RuntimeObject
{
};
struct TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445  : public RuntimeObject
{
};
struct TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED  : public RuntimeObject
{
};
struct ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625  : public RuntimeObject
{
	SystemState_t1AAA7F65EAD5CC5666D3F0360B309F9DF032E47D* ___m_StatePtr;
};
struct DefaultTypeConstruction_tB16E539F6D74E83A88B07D7A18D6A1AD63097C0A  : public RuntimeObject
{
};
struct DefaultWorldInitialization_t933B2B7357A317B34D7D7908FC7F2FDF9231051A  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
struct NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 
{
	UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD* ___m_ListData;
};
struct NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F 
{
	UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* ___m_ListData;
};
struct NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB 
{
	UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5* ___m_ListData;
};
struct NoAllocReadOnlyCollection_1_tB2536E6674017BCC0F082E490DE70E833406AFB1 
{
	List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A* ___m_Source;
};
struct NoAllocReadOnlyCollection_1_tDC2663E3C123F6214C6F9CDB3100A48AA01DA7FE 
{
	List_1_tB4A18B6DAA73FDEE35E34A74B59D0AA5D58EF322* ___m_Source;
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
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
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
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 
{
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl;
	uint64_t _____seqno;
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
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
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
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D  : public ComponentSystemBase_tE64F7524784FF1281BE7E48E7EEACA6BDCE15625
{
};
#pragma pack(push, tp, 1)
struct SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59__padding[4];
	};
};
#pragma pack(pop, tp)
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F 
{
	WorldUnmanagedImpl_tB98600E1E80A2ABD0C6F29D8C55829750507D830* ___m_Impl;
};
struct uint4_tB6BF4BE7E92EFB510DFCB18F2E217DAD1CD8FC1E 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct BakingRootGroups_t525A9114FE18B7F21E99D5D6AD771EF8FFD6D9F2 
{
	union
	{
		struct
		{
		};
		uint8_t BakingRootGroups_t525A9114FE18B7F21E99D5D6AD771EF8FFD6D9F2__padding[1];
	};
};
struct DefaultRootGroups_t7281EBC4DB68ACD923E7D99CD1882B8F517F0352 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultRootGroups_t7281EBC4DB68ACD923E7D99CD1882B8F517F0352__padding[1];
	};
};
struct ProcessAfterLoadRootGroups_tB32005DD473CCB87A1D965140E244A9192332E0D 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessAfterLoadRootGroups_tB32005DD473CCB87A1D965140E244A9192332E0D__padding[1];
	};
};
struct FunctionPointer_1_t11EBE60FDA3012B204D08A6E481303AB4B70B864 
{
	intptr_t ____ptr;
};
struct UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD 
{
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65 
{
	alignas(IL2CPP_SIZEOF_VOID_P) SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t87359DF37D37F7D94A99086AFB24ADDF2D9C75B0 
{
	UpdateIndex_t56DEB0F69DA53BA69507467621AA550CA2EDCAEE* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5 
{
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
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
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_tB6BF4BE7E92EFB510DFCB18F2E217DAD1CD8FC1E ___Value;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
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
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
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
struct SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___m_Entity;
	uint16_t ___m_Handle;
	uint16_t ___m_Version;
	uint32_t ___m_WorldSeqNo;
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
struct UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___entityId;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A  : public RuntimeObject
{
	Dictionary_2_t3103E354F468B89433E1F3869E44058AC4BC55E3* ___m_SystemLookup;
	List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A* ___m_Systems;
	NoAllocReadOnlyCollection_1_tB2536E6674017BCC0F082E490DE70E833406AFB1 ___U3CSystemsU3Ek__BackingField;
	WorldUnmanaged_t7B736084B2D4749A9CE36AD9A7F9D930DAA9F88F ___m_Unmanaged;
	String_t* ___U3CNameU3Ek__BackingField;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_TimeSingletonQuery;
	bool ___U3CQuitUpdateU3Ek__BackingField;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct SystemAttributeKind_t1AB9CCBF92C722C8E4A130B638F67F2DF4816A65 
{
	int32_t ___value__;
};
struct NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D  : public SystemBase_tF1D148F181415A7A0A38555F7FAD20D5D33C0F0D
{
	bool ___m_systemSortDirty;
	bool ___m_EnableSystemSorting;
	bool ___U3CCreatedU3Ek__BackingField;
	List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A* ___m_managedSystemsToUpdate;
	List_1_t087ED6B40C2C9FB47C9A1352A0AB40C781C58C2A* ___m_managedSystemsToRemove;
	UnsafeList_1_t87359DF37D37F7D94A99086AFB24ADDF2D9C75B0 ___m_MasterUpdateList;
	UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD ___m_UnmanagedSystemsToUpdate;
	UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD ___m_UnmanagedSystemsToRemove;
	FunctionPointer_1_t11EBE60FDA3012B204D08A6E481303AB4B70B864 ___OnUpdateBefore;
	FunctionPointer_1_t11EBE60FDA3012B204D08A6E481303AB4B70B864 ___OnUpdateAfter;
	DoubleRewindableAllocators_t8D3615CDAAECEE59D64F85F9E0F46D07168A7069* ___m_RateGroupAllocators;
	uint8_t ___U3CRateGroupAllocatorsCreatedU3Ek__BackingField;
	RuntimeObject* ___m_RateManager;
	DoubleRewindableAllocators_t8D3615CDAAECEE59D64F85F9E0F46D07168A7069* ___U3CCurrentGroupAllocatorsU3Ek__BackingField;
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
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
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
struct SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED 
{
	int32_t ___Kind;
	alignas(4) SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___TargetSystemTypeIndex;
	int32_t ___Flags;
};
struct Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 
{
	NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA ___m_Array;
	int32_t ___m_Index;
	alignas(4) SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___value;
};
struct Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 
{
	NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18 ___m_Array;
	int32_t ___m_Index;
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED ___value;
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
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
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
struct List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_StaticFields
{
	SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32* ___s_emptyArray;
};
struct TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields
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
struct TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields
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
struct TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields
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
struct TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields
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
struct TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields
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
struct TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields
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
struct TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields
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
struct TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields
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
struct TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields
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
struct DefaultWorldInitialization_t933B2B7357A317B34D7D7908FC7F2FDF9231051A_StaticFields
{
	Action_1_tF01EC860CB363E6A3245B6F34E103517EAA4C3E1* ___DefaultWorldInitialized;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DefaultWorldDestroyed;
	bool ___s_UnloadOrPlayModeChangeShutdownRegistered;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
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
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A_StaticFields
{
	List_1_tB4A18B6DAA73FDEE35E34A74B59D0AA5D58EF322* ___s_AllWorlds;
	World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___U3CDefaultGameObjectInjectionWorldU3Ek__BackingField;
	NoAllocReadOnlyCollection_1_tDC2663E3C123F6214C6F9CDB3100A48AA01DA7FE ___U3CAllU3Ek__BackingField;
	Action_2_t16542E37039B65BE37847FDDC84DD5B6DF6EE597* ___SystemCreated;
	Action_2_t16542E37039B65BE37847FDDC84DD5B6DF6EE597* ___SystemDestroyed;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_NewWorldMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_DisposeWorldMarker;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32  : public RuntimeArray
{
	ALIGN_FIELD (8) SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 m_Items[1];

	inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4C08AA0CBE00A46C48B6E967C844ED7568DA130B_gshared (uint32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m49FCA17B1EA82BC89043916AE35B2B25E2F8A926_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_mE7CB6E9DBD58D7FF8B091AE465A1D12712C5A22E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m297CF439D1BE81CB6A4A877FD0BA32CAF1A3AA04_gshared (uint32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD95B365E56D531F3C7A22BD069D6C8E86000799D_gshared (uint64_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m770FE830FFEDCE3ADEAA21A7E0AAC6622909A4D6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m03DCC2EF9D433A33DEE8B8CA5ADB5608D098BB87_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB7AEE61C22890A24D28D86F079E8149195D1A05E_gshared (uint64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2F84F7F9AC1F68346A0109A0C8FE9D47971DA728_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m5C1374A0C8A2CBA514CCD8F6C13D0F44C259EA2A_gshared (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m5C49409BCC89BD6CBACAE82DFC71840215BD80E1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m3F4137B5AADCFA7FA0A0CC31D2DA3F808D70A5B7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m0CB95117997354FFCAB2179C36CC7DBC0567CC90_gshared (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m18E06B373BB3C37DF8377EF97183F2E7E1343B59_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m64B69A10603259799FC6DBAD8FF5C3743227BEE3_gshared (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m8D3A5BB3717D0E22B4C5194E8A3122E470C4B42D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m17982D3DAE7022F28B7FE80462E5CFB7B2F1EAAF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m0B2CFA9F782EFC732BECCEFA3AFEA7B2E8379B33_gshared (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF09550A8D14871DFCE36A0847467B8FF495E5C3C_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m31BE286C7AFAA4322ADEA3DD8815211F27657EFB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m32C6EB6E9D436FBFD63DAEA76A084D911D35ADD2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8AEEAE4E2B476AA8B33C279C2E47B6B8F76DF4E2_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m351753D3808F5DA1BC3543A7506F1A96E793148B_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_mE158D44295F3D0D919D3D85A4639B70E95FB30CE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m417EEC22DEC155712718382D8109241B1C7FAA16_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4BFC3A92E7609D96721297B94889E54C7741C256_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3FECC6C83D6CC4D56DD514888B1E30F8863B8615_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m7DBC25CCE21771B1CC5159A7FDAB7175437208F8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m127DE2A0AE977263D2EB19FDBB5528AEB0A023F9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8CCDE874561FB4D528E1FF9408385C97C2F11574_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppSharedGenericObject_m6EE8389B8D87C459484A3BC028D36C0F168FC3B9_gshared (Il2CppSharedGenericObject** ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_mE63E6EDC34CD618E2322A451355260E3E6AEAF0A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m059CC2A94ADF230630FB14E4AD41D012B266D701_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppSharedGenericObject_mFFD315C3A2068D7DBBEA8C204854870078F3F064_gshared (Il2CppSharedGenericObject** ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4E59E3AF91FDF6BEE1756022DEBB51355958EA6C_gshared (int32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_mCFC39B415961472B9D0C975588C5790652D07C5E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m6F3B4B3BAB68876720441CCD05E201430A47B62B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m01F3DE0F9A6CA73ED229BA2EDC71D744E9CDE674_gshared (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mB68209A0030BC9F6D196F3A9686AF83D6F603D38_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC24893DF578B65F4229D958D2BCEF8F93AFAFB14_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mE5B4D568EF902390F040939DDBDC7094D938F6E7_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m2C1D011E1FD01CCB622613A31D60C819D7AF4647_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mF4C388C41960B03A61B493EA419DA83C5F5D2934_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m300B1F8A4DB1F2EA7A343FC8398E09B956EC2630_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m2FB41FE7F311960DD9587195982B4DA80A9512D6_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mE7702322F8B50FC75D27605D999A23061EFDC79E_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mFAFFBF990207AA74216D68A29D75D15797BD5783_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m33C14D4F5A73C10A23BF4C58AD1225DF84AE6CDB_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m46B72CA761B4D1CCA5DE3D49418CFD2A95D3BB13_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m079BE8AFCE0D35FD7BC7BFD8B9332ADE79B1B3C1_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m93C99FDF8783FA576AE4259A913940EE28A1757E_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4C127919F17E4C929E2655C4034EB55EC21CF8FF_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m676AC6493B4E7C9435AE4D5B3CCD88CA82F0FEAC_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF3F78B9E94843CD28EC5DDAF0BD693E759666D14_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB855FAB6AF0A5CA09C9ABBC302B7EF4C260249F2_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mEAB24B0BE2395E92D716C55C47FE4E0C2702DB30_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m64655D4B23A6345C99CDA88F2C09CD4BA5701114_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9D3CE39F08B2E5DB645CB5C2BBC3236EAF921AC5_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m38D334BC983AE8A31801220731C70B529FB91FB9_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m96E9F2F809C013795D66B8C9E80F6403683BE7B4_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m00E8E315807018A3C5C84079A1A61C1D0882D245_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_InstantiateArray_TisGuid_t_mECFCBA4EA93F443946274B9433836876E91A1984_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6535404DC61AE11D53BF23670652144E127FBE2_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4FD17FF3040D19F1C64154A84088275CAE4390F_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7D04EB848C9F153C75F938B8E6A205C7AE51E3CB_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4B9956DC88B27A3420B374A86934A1580F95E641_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m228F432AA230B8A1D129A86B4282CDEBFF0E8FF1_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m65CECBA19C2C6A630F400B878D9A92233A17655A_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m194E3DA741BDEBF25A3C60B0FC34EF1F3B195181_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1C21A325511C1DFF6CBC5E48BCFE2D3535E79222_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCDF7D0BC6E47B30BE64EA588236670B5C24471_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m4EB769AF4C3059A0CAEC5384DFCC54113F7F8396_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mC5D8B8F9EEB58D783AC99030F90C33085E29E0F4_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m3BF19D40A8D1A8DC67B748499A90F1D95E5F9D5E_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDF31B5C8D4CF6F63DBC402F93A4902BB41AF617A_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2BACF7BFD6126FA92934886441023C14606E4D8C_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m46250B5C56ACB8D9C79870A7B547FB2700AF15B3_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m5D38FA37D87EAA704CFB58AEA11F3EC39AEFF1E7_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3637F91F0F17A00FA935D28B4E541C9B060C9BA6_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m259ED3223591E91BEB1F81712D52CCC8D3BAC6A2_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m6DEE07D679CA855AFD3A5419D9392C42D17B2DBB_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mEB25031BEABB5F3EA90DCA5BB3F5BCF1640CC094_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mF6CC1C6523FEC87FC4FE2C056B2EA79FF9D86A99_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mD207EE98CF8D058E65D12DB022E33A4B5E4DBF37_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m6FFB4DCD0AF1BEB615B3D00D50BF35CB0B9342C1_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mF9A7C0989CE2A8051406819F505D0BA6C5D50838_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4CDC2E13990212E21BC38FB599391C977775D485_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2191540D865D5C6B6E89077C71F21A78C85DA981_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m0C16A19AA37F598E96FC43BAC034C1CE27D61FB4_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m1C4E73EB209FC1E0BEB6E7B43C34FC4D6D65F174_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1ABB8FA4111774E4DB8BF236FE133FC3B853EB31_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA634FD62CD696DF6FA017D329A422645957FD156_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mF96AA496A11ADAECDE405B0CBA3473D8F5EE6619_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD8DB6F2EA0ADB994693DD77768291584174A4DE9_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8F366B3C02A71BF04557B18BB55876D5CD8B5729_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m32FBFE43FB00D4EE2A5BEECD7F1917EE537F64C1_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB61B6A4D7F0D0D8484013630AEFBA149769B6FE7_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mBE6CC421D48125AE28A56D9CEB17E48BC28B0BD7_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mBA193AA99BF2D7E99E6046F941E05C99A235A63B_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF91B67E9FF2B0279DCF329767CEB8D6414F146BB_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3225CACF659C94C96CDD6A17CA6748484119CFF4_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA5679E431BDBAE50B0DFC594932302085A788F09_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCF9C5D3E23A02EEEA6B3E35B7E443E9DA28CEA_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF97DADA2889CD0267F74DF9C277E80F0381E68B4_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m52D195BCA674D7A5AFAB9D5B0190539F6CD56324_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m3EA91B634E3A21FC9EFEE2E64BF37BA4ED935F83_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1D21AED87DD63F2A4BD2CD895FD0C931821C1514_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52C36F69CCBFAD459D6F20B67E282EAD24432F7E_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2D2C323EE1D18FF02FAA35EA6FB3610F2FCD9DB9_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m281CED37618A25573CC4D58C97152E6FCA744AE8_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_Instantiate_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m7AF6959248FE34418A7CE3EE5E78680F237F3A41_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m4DF96EFBE097C17BF62272A0C6340D8AE72C657C_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_Instantiate_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE8A1AB2E9E9B49488A93FCD2B86F77A25893346E_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m0D77DD60514ABFC7B1C56B2D56111E61FEA6FA82_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_Instantiate_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE2FC596D6CE7CB8E9659399EE4C9DABC8D871103_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m159E2BD6FEBA9EDAE6D74A117DC4FFAA5042E3D0_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_Instantiate_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m946658B27C78F1B41B7C365D2C412A2C0C4768D1_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m9A5215A4152CEC4DF1A24F59B24399473DA7F261_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_Instantiate_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAEC3FBA39DEC930DDDEF597E464BD7C804C5D05C_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF8C1E97193ECF4B53A44C3C1ECDAFE16C67B8647_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_Instantiate_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m6DF338468D32365904E0B2DBDC664DB97D1B0291_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE6DA1D7AC2CE4B25EF152A21566CB5ADA6D8F295_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_Instantiate_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m54D4189802174B0AA0E99B59BAD924E484A80696_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m6AC0170455B90A67CBAACCDD442DC95ABFD6D519_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_Instantiate_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0C69A18A43A2E44105889800F21D1215AA8A5E1D_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFDEDCB17D521CA4B385F04161EBEA9EA14D95F6E_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_Instantiate_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m55C8EBC82EDFA8FAFB924ECE0705DB118140972F_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m006A7164A9139A2EF3A041D65E369D41CB6444DE_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeUtility_Instantiate_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m81F1BF80A7E7DAA33D9C22FF3010C44ACE23EC81_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D61874C339DFDB87955AA8F5662B167D5E769C1_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_Instantiate_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m61658CC7B6E2962DF750E9611E884DE58CBD7CF1_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C80F9E94423A3E2D1E82D97BFCB0A36BB9C8DC7_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeUtility_Instantiate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m019581577126A0BB6BC129144339350367173F2C_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDC60F7CBC30F8F1CDB241602647982EFB70B4049_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_Instantiate_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4E69CBE571B420D4739367A1A684594E9176FA57_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m59565BEA037538F9616274F0904A21A92E505410_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_Instantiate_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6F30A60D4188472BE371258A1BFDB523943245EC_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF998B0C8639046CB042624DD1E8E2EEE41483A20_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_Instantiate_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m231C619D716B7251BE7A56BCB128745D7A365C19_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2A5D0D0C5D4BF967B0002C561CE2B0AC076C0403_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_Instantiate_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9FEFFAEBA7DDF77EF7BC781305AF1B539557A7B5_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEFAE44987A1E68F504981A4CDC33EE7BF2DE9A88_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_Instantiate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4E3F11E66287C360381FDCB1DA2CA86725108774_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA76F2DBF6B6D348502A244EED660C295B53699C8_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_Instantiate_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBD4D352377EE256EE21A9E2178B41FCB240019FF_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m75B9862930FC31C729C49492246FBD61799D239D_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeUtility_Instantiate_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m571A629A5658918FDCA0FD56D52270B49F8E08AC_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m45593409D374AE79EA5A1F2A4B6F52B61EE002F8_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_Instantiate_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m463CF737CEC740B04F54A12BE8980E180E704C25_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m7B72C49E6CAE91CFB6C5A545808672BB4FD6A4B8_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_Instantiate_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB244C132A6AC508484D18A78E401891F6D04B921_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_InstantiateArray_TisGuid_t_mAE74D365457CE44D013FBD6F5C8910BA1685DE5F_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_Instantiate_TisGuid_t_mA90DC3C8C09A7C9E6568E92268FBFEC92D9DD32C_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m77243DEB812D7D2296B1AF569812F8312273A29C_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_Instantiate_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCDB0D19649FB27FA7581762E8F49F57B9B7CDFA3_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m21D4F0D04451F49CAA1F911345ACECF52DC69E78_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_Instantiate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED72462427639D9AEE6A910BD83F37CA49CC7C7_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2EF2E3C13101502B574BC39E2715C72FB8459364_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_Instantiate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA517D386045B05E3C434AF7A8670DD6AE7817C6F_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4F8CDB2A2F64850B2325B9FE8089EAFB41DB7CEF_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_Instantiate_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m24AD2F55FB14086FC4CB1F422B3F4B1CAC7C424C_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDF64A60F47F7DA7BF9766BA49DFE19C0380CBA02_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_Instantiate_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m60B5595B39DAF4209FF6D63C7848715A38C2BB74_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC74924F19E1B4FE89E11350F5E4359CAC02E9031_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_Instantiate_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA23957AACEC7AAEEDBC4CC0C62EBBB1CE44AF7E_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m535DE2604C90D93B5EF29E60563BF287510E68CD_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_Instantiate_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m7580D6813951CBE8AFDD15F8F0A4518B3AE2C17C_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9AF7AFAE2BC8E88458985B397188B65D6429F15_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_Instantiate_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m0E989570F78731ED52B034096038E7CE0D3CCF2F_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mC2966E423F30D5B816EFD749C8D82415F1A4CB9E_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_Instantiate_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE05F2EAF164B530101B9452875662EA603AF0943_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m48083B48EE4106A0A4B2A2F753654C22A0B2CD57_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 TypeUtility_Instantiate_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m2F782C8E3367E118D7005949C9EEF78B40453A30_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m186DF1FFCA5C1283B94C0E9C682C8D450D7A0322_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 TypeUtility_Instantiate_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m467D8399F884B6D33BE790AE7645AF12EF4D0B0E_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m5B5F510277B7F1AE98BC66363D93731E7B3A2C38_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC TypeUtility_Instantiate_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m8EBAB63E9115044FB7F43F5D64326813EC053159_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF09E7466EBA4308168509A2F9728A7EA9E6CED6_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_Instantiate_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m250E596A76F4E90F0DA755803C33EBDBFE539487_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m57B789863DAB7572F3BD82A3E4725BABADD7EEF1_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_Instantiate_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8135215FC2AB524181F24E66F7435414D834E2BB_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m8CC06B652F2EDCE2EC3632D5DF1D101B2926EBC9_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_Instantiate_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE343813C9CA5A97BC75783CB6DAF2F616B3B55AE_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0A1D4C8D7477CED01A3F834003DB6E501DCFDE69_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_Instantiate_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA0D45D320F2FF075FAC8E7D1DC59525229D3725B_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m6063BE63BFEE553B550EDAA3CF5EB963962631DB_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_Instantiate_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m87FB8CC317081B9CDD71674EB3781C942CC548DA_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m34A0EBBE05C15B267EBD94EEBB155A53A0FDA121_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_Instantiate_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m0FA12EC0938963C3D515A0E51C10A1361572DE60_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m014366206E3CB9987B29A33B4C65423A04C1F7F2_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_Instantiate_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m70E21575B0F6E9AD50345A82D64B3CFB514689F9_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF7E17FA9A5CF34996D23E79DDB9E5A20927DB9FB_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_Instantiate_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m50EDC2B685C7A805F736D71A9F2C53718CBD0A15_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6B000117BFE4A9051BFE17BFA36CB9757F702219_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_Instantiate_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0F2B5235B5E057586363B03F727359967889C90B_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8A0C7DB3A87350D4B09D2895CC4E63DEB2B848F2_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_Instantiate_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8ABF236CBC8462A860F41962378F343ED976194A_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBF031D97952C18A00E5BDEB0721BF94BF16CD11A_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_Instantiate_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mAE76E5A7A00036D7B4F5F084D60FD3A552229EAF_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3D788ADEA04B7BE35B443C002B92D07035EF0DC4_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_Instantiate_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m60378479ECF71A3A591DCD4BA34761B4F0C3DE9A_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mE590319AC35556C5E5507A5A2FABB8063FE182A5_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_Instantiate_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1837276E59C8F890FA9BD44A8E51670023ECE350_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDEE17C84F12ED15070F7EBBEE81874E3E0C6818D_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_Instantiate_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m46FB416B10EDE0BAF84497C1B05A233320C5B6F7_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA756B0A0DC07FEF686A4B6DD4B65E8B8DBDE19E7_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_Instantiate_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m29FD1830C307E4141B84C66A9C31AFC09D375C16_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5374D0E9476392FC56CA0A195B4DE560BFF8E25B_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_Instantiate_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mADFA8E2A5519178DEFEA9FC206101B9A6A935215_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m29B340D26E10C35961DE46EA02E9B226747BDB03_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_Instantiate_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m89DC23C50C35515832873025FB64E06C08178C78_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m48BB0241A4C98023239CF2CF4F989F4A3486EB73_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_Instantiate_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBFFBE5F19DBF010277EEACCE9F31DCE0F9E6735D_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC60437D4258CCC0EED436E2308135742FFA1A486_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_Instantiate_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m31926283C0C84C3057DC37C1DA770840CC661F47_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3B0C8A2D533799DB7C894ED49FD99469A4F30379_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_Instantiate_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m20C781C9BF6F5A1A4976D3FB3307BBB54013A22D_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5391C278FF0A30D77C5BA81B4DC8FA234AD0DBB1_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_Instantiate_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8674710498BB040D77CD5485B6159C2E4CB1C905_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m0D082C6C1E325E8A3094CECE4109FA2B6BC845B0_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_Instantiate_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m967DD2CBFA6BC947E4DE2E707BCBFFC9C3934E17_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m356574AB280892F8D70F84B2A9B57B31DFDCE6A2_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_Instantiate_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB6BA523635A2359078BF52FEA9788A0A4B8AA298_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m75AB3D5EF5305A5B9290D155687FCF8E45EF3A7E_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_Instantiate_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mFCE31CF4FFACE349B84F71ABF91EA5C7C023D562_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8C67F670872FC5934653ADE5A00B1A82E371381A_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_Instantiate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0812591A8DD4A523E6213E0EC9E2E87E2603C8BE_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC144E3A67D34A3ADC811A1450B274DF968B1532A_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_Instantiate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mBFDF9F0C56F5150550EC0074D77E66CF3931BA2E_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8F81C8DA8CF30FA56CE13BDA4ED0CABE5A33632A_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_Instantiate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m2BA2550AF563D560E55F3DD1D75E13BDC7B215AF_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAE4D88E99CFBCB527FDB8A69CFC234FFAB8BDC64_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_Instantiate_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1888A6DF19F8A7D8B0EC95CEB7684676AD7B53A2_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m350E3A1013B8463C9CAC39E8CAAAEC2FE3BC4AA0_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_Instantiate_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m60A7F02D1165DBD7B8A86C32223D074AC470A12D_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF99178F8ACBC316A69EF45E4E708AC636A43E18E_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_Instantiate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA4762190B1329BFA260B76486E12EB9C8DC3C395_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mBB86906C84C632622706EB0E1D58592E2F0BE5B9_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeUtility_Instantiate_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m3DEC820AFCE18157B25C29535135BA7D21814B53_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m070E76F9C74340B63FCC7C6B4C3CA7541851A290_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeUtility_Instantiate_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mAB42526165495F7582978DB219445C1B4B3D62E0_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m339A593FE002ECA805FFE4B0CF0B40013569EA0F_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_Instantiate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1F23C60E2F94481CDFA8152E9150C1FB9368DB35_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDD9287DF4B3A05EEAF8E5E0011397A74BBB01006_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_Instantiate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7600CA1EB0951E940C81BF9344258E59D94968A0_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3946F03FE277A0176B3FB92619571D84765E225D_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_Instantiate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m11FA35B9D91781E74463462DA6F839E3DD0A9C79_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_gshared (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_gshared (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_gshared (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_gshared_inline (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_gshared_inline (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_gshared_inline (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_gshared_inline (NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_gshared_inline (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_gshared_inline (NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_gshared (NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_gshared (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_gshared_inline (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_gshared_inline (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_gshared_inline (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mFF3020F1FE2CB644B8E575C1E72B7673C32F7B08_gshared (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 UnsafeUtility_ReadArrayElement_TisSystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59_m247A702DB3228A6ACA31902902653A05C1C9D867_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 UnsafeList_1_get_Item_mBCE13EC244E5D8EA33BC3BF5990E4292A5A32528_gshared_inline (UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 UnsafeList_1_get_Item_m41897491940D3D178691C7F1101DEB99E95BB872_gshared_inline (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mD6AFE8D014CB2BBBB71EAEE48E963F875D5BE036_gshared_inline (UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED UnsafeUtility_ReadArrayElement_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m03D2F38EDF357F60204C91EB1F7B2B4C113FB141_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mE4C5AC9FBE80AB7D62FB657DD32E8D0A74D37F7A_gshared_inline (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* __this, const RuntimeMethod* method) ;

inline bool TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4C08AA0CBE00A46C48B6E967C844ED7568DA130B (uint32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4C08AA0CBE00A46C48B6E967C844ED7568DA130B_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_m49FCA17B1EA82BC89043916AE35B2B25E2F8A926_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_m49FCA17B1EA82BC89043916AE35B2B25E2F8A926_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_mE7CB6E9DBD58D7FF8B091AE465A1D12712C5A22E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_mE7CB6E9DBD58D7FF8B091AE465A1D12712C5A22E_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m297CF439D1BE81CB6A4A877FD0BA32CAF1A3AA04 (uint32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (uint32_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m297CF439D1BE81CB6A4A877FD0BA32CAF1A3AA04_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD95B365E56D531F3C7A22BD069D6C8E86000799D (uint64_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (uint64_t*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD95B365E56D531F3C7A22BD069D6C8E86000799D_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_m770FE830FFEDCE3ADEAA21A7E0AAC6622909A4D6_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_m770FE830FFEDCE3ADEAA21A7E0AAC6622909A4D6_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m03DCC2EF9D433A33DEE8B8CA5ADB5608D098BB87_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m03DCC2EF9D433A33DEE8B8CA5ADB5608D098BB87_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB7AEE61C22890A24D28D86F079E8149195D1A05E (uint64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (uint64_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB7AEE61C22890A24D28D86F079E8149195D1A05E_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_m2F84F7F9AC1F68346A0109A0C8FE9D47971DA728_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2F84F7F9AC1F68346A0109A0C8FE9D47971DA728_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m5C1374A0C8A2CBA514CCD8F6C13D0F44C259EA2A (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m5C1374A0C8A2CBA514CCD8F6C13D0F44C259EA2A_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_m5C49409BCC89BD6CBACAE82DFC71840215BD80E1_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_m5C49409BCC89BD6CBACAE82DFC71840215BD80E1_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m3F4137B5AADCFA7FA0A0CC31D2DA3F808D70A5B7_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m3F4137B5AADCFA7FA0A0CC31D2DA3F808D70A5B7_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m0CB95117997354FFCAB2179C36CC7DBC0567CC90 (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m0CB95117997354FFCAB2179C36CC7DBC0567CC90_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_m18E06B373BB3C37DF8377EF97183F2E7E1343B59_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m18E06B373BB3C37DF8377EF97183F2E7E1343B59_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m64B69A10603259799FC6DBAD8FF5C3743227BEE3 (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m64B69A10603259799FC6DBAD8FF5C3743227BEE3_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_m8D3A5BB3717D0E22B4C5194E8A3122E470C4B42D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_m8D3A5BB3717D0E22B4C5194E8A3122E470C4B42D_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m17982D3DAE7022F28B7FE80462E5CFB7B2F1EAAF_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m17982D3DAE7022F28B7FE80462E5CFB7B2F1EAAF_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m0B2CFA9F782EFC732BECCEFA3AFEA7B2E8379B33 (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m0B2CFA9F782EFC732BECCEFA3AFEA7B2E8379B33_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF09550A8D14871DFCE36A0847467B8FF495E5C3C (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF09550A8D14871DFCE36A0847467B8FF495E5C3C_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_m31BE286C7AFAA4322ADEA3DD8815211F27657EFB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_m31BE286C7AFAA4322ADEA3DD8815211F27657EFB_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m32C6EB6E9D436FBFD63DAEA76A084D911D35ADD2_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m32C6EB6E9D436FBFD63DAEA76A084D911D35ADD2_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8AEEAE4E2B476AA8B33C279C2E47B6B8F76DF4E2 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8AEEAE4E2B476AA8B33C279C2E47B6B8F76DF4E2_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m351753D3808F5DA1BC3543A7506F1A96E793148B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m351753D3808F5DA1BC3543A7506F1A96E793148B_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_mE158D44295F3D0D919D3D85A4639B70E95FB30CE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_mE158D44295F3D0D919D3D85A4639B70E95FB30CE_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m417EEC22DEC155712718382D8109241B1C7FAA16_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m417EEC22DEC155712718382D8109241B1C7FAA16_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4BFC3A92E7609D96721297B94889E54C7741C256 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4BFC3A92E7609D96721297B94889E54C7741C256_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3FECC6C83D6CC4D56DD514888B1E30F8863B8615 (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3FECC6C83D6CC4D56DD514888B1E30F8863B8615_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_m7DBC25CCE21771B1CC5159A7FDAB7175437208F8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_m7DBC25CCE21771B1CC5159A7FDAB7175437208F8_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m127DE2A0AE977263D2EB19FDBB5528AEB0A023F9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m127DE2A0AE977263D2EB19FDBB5528AEB0A023F9_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8CCDE874561FB4D528E1FF9408385C97C2F11574 (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8CCDE874561FB4D528E1FF9408385C97C2F11574_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppSharedGenericObject_m6EE8389B8D87C459484A3BC028D36C0F168FC3B9 (Il2CppSharedGenericObject** ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject**, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppSharedGenericObject_m6EE8389B8D87C459484A3BC028D36C0F168FC3B9_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_mE63E6EDC34CD618E2322A451355260E3E6AEAF0A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_mE63E6EDC34CD618E2322A451355260E3E6AEAF0A_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m059CC2A94ADF230630FB14E4AD41D012B266D701_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m059CC2A94ADF230630FB14E4AD41D012B266D701_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppSharedGenericObject_mFFD315C3A2068D7DBBEA8C204854870078F3F064 (Il2CppSharedGenericObject** ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject**, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppSharedGenericObject_mFFD315C3A2068D7DBBEA8C204854870078F3F064_gshared)(___0_value, ___1_provider, method);
}
inline bool TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromSerializedType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4E59E3AF91FDF6BEE1756022DEBB51355958EA6C (int32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, Type_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromSerializedType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4E59E3AF91FDF6BEE1756022DEBB51355958EA6C_gshared)(___0_value, ___1_type, ___2_provider, method);
}
inline bool TypeTraits_1_get_IsObject_mCFC39B415961472B9D0C975588C5790652D07C5E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsObject_mCFC39B415961472B9D0C975588C5790652D07C5E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsAbstractOrInterface_m6F3B4B3BAB68876720441CCD05E201430A47B62B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsAbstractOrInterface_m6F3B4B3BAB68876720441CCD05E201430A47B62B_gshared_inline)(method);
}
inline void DefaultTypeConstruction_ConstructFromDeclaredType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m01F3DE0F9A6CA73ED229BA2EDC71D744E9CDE674 (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, RuntimeObject*, const RuntimeMethod*))DefaultTypeConstruction_ConstructFromDeclaredType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m01F3DE0F9A6CA73ED229BA2EDC71D744E9CDE674_gshared)(___0_value, ___1_provider, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mB68209A0030BC9F6D196F3A9686AF83D6F603D38 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mB68209A0030BC9F6D196F3A9686AF83D6F603D38_gshared)(___0_count, method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC24893DF578B65F4229D958D2BCEF8F93AFAFB14 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC24893DF578B65F4229D958D2BCEF8F93AFAFB14_gshared)(___0_count, method);
}
inline StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mE5B4D568EF902390F040939DDBDC7094D938F6E7 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mE5B4D568EF902390F040939DDBDC7094D938F6E7_gshared)(___0_count, method);
}
inline StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m2C1D011E1FD01CCB622613A31D60C819D7AF4647 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m2C1D011E1FD01CCB622613A31D60C819D7AF4647_gshared)(___0_count, method);
}
inline StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mF4C388C41960B03A61B493EA419DA83C5F5D2934 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mF4C388C41960B03A61B493EA419DA83C5F5D2934_gshared)(___0_count, method);
}
inline StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m300B1F8A4DB1F2EA7A343FC8398E09B956EC2630 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m300B1F8A4DB1F2EA7A343FC8398E09B956EC2630_gshared)(___0_count, method);
}
inline Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m2FB41FE7F311960DD9587195982B4DA80A9512D6 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m2FB41FE7F311960DD9587195982B4DA80A9512D6_gshared)(___0_count, method);
}
inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mE7702322F8B50FC75D27605D999A23061EFDC79E (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mE7702322F8B50FC75D27605D999A23061EFDC79E_gshared)(___0_count, method);
}
inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mFAFFBF990207AA74216D68A29D75D15797BD5783 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mFAFFBF990207AA74216D68A29D75D15797BD5783_gshared)(___0_count, method);
}
inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m33C14D4F5A73C10A23BF4C58AD1225DF84AE6CDB (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m33C14D4F5A73C10A23BF4C58AD1225DF84AE6CDB_gshared)(___0_count, method);
}
inline BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m46B72CA761B4D1CCA5DE3D49418CFD2A95D3BB13 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m46B72CA761B4D1CCA5DE3D49418CFD2A95D3BB13_gshared)(___0_count, method);
}
inline BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m079BE8AFCE0D35FD7BC7BFD8B9332ADE79B1B3C1 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m079BE8AFCE0D35FD7BC7BFD8B9332ADE79B1B3C1_gshared)(___0_count, method);
}
inline bool TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m93C99FDF8783FA576AE4259A913940EE28A1757E (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  bool (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m93C99FDF8783FA576AE4259A913940EE28A1757E_gshared)(___0_count, method);
}
inline uint8_t TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4C127919F17E4C929E2655C4034EB55EC21CF8FF (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4C127919F17E4C929E2655C4034EB55EC21CF8FF_gshared)(___0_count, method);
}
inline Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m676AC6493B4E7C9435AE4D5B3CCD88CA82F0FEAC (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m676AC6493B4E7C9435AE4D5B3CCD88CA82F0FEAC_gshared)(___0_count, method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF3F78B9E94843CD28EC5DDAF0BD693E759666D14 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF3F78B9E94843CD28EC5DDAF0BD693E759666D14_gshared)(___0_count, method);
}
inline Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB855FAB6AF0A5CA09C9ABBC302B7EF4C260249F2 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB855FAB6AF0A5CA09C9ABBC302B7EF4C260249F2_gshared)(___0_count, method);
}
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mEAB24B0BE2395E92D716C55C47FE4E0C2702DB30 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mEAB24B0BE2395E92D716C55C47FE4E0C2702DB30_gshared)(___0_count, method);
}
inline double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m64655D4B23A6345C99CDA88F2C09CD4BA5701114 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  double (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m64655D4B23A6345C99CDA88F2C09CD4BA5701114_gshared)(___0_count, method);
}
inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9D3CE39F08B2E5DB645CB5C2BBC3236EAF921AC5 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9D3CE39F08B2E5DB645CB5C2BBC3236EAF921AC5_gshared)(___0_count, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m38D334BC983AE8A31801220731C70B529FB91FB9 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m38D334BC983AE8A31801220731C70B529FB91FB9_gshared)(___0_count, method);
}
inline FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m96E9F2F809C013795D66B8C9E80F6403683BE7B4 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m96E9F2F809C013795D66B8C9E80F6403683BE7B4_gshared)(___0_count, method);
}
inline FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m00E8E315807018A3C5C84079A1A61C1D0882D245 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m00E8E315807018A3C5C84079A1A61C1D0882D245_gshared)(___0_count, method);
}
inline Guid_t TypeUtility_InstantiateArray_TisGuid_t_mECFCBA4EA93F443946274B9433836876E91A1984 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisGuid_t_mECFCBA4EA93F443946274B9433836876E91A1984_gshared)(___0_count, method);
}
inline int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6535404DC61AE11D53BF23670652144E127FBE2 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  int16_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6535404DC61AE11D53BF23670652144E127FBE2_gshared)(___0_count, method);
}
inline int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4FD17FF3040D19F1C64154A84088275CAE4390F (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4FD17FF3040D19F1C64154A84088275CAE4390F_gshared)(___0_count, method);
}
inline int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7D04EB848C9F153C75F938B8E6A205C7AE51E3CB (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7D04EB848C9F153C75F938B8E6A205C7AE51E3CB_gshared)(___0_count, method);
}
inline Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4B9956DC88B27A3420B374A86934A1580F95E641 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4B9956DC88B27A3420B374A86934A1580F95E641_gshared)(___0_count, method);
}
inline MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m228F432AA230B8A1D129A86B4282CDEBFF0E8FF1 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m228F432AA230B8A1D129A86B4282CDEBFF0E8FF1_gshared)(___0_count, method);
}
inline Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m65CECBA19C2C6A630F400B878D9A92233A17655A (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m65CECBA19C2C6A630F400B878D9A92233A17655A_gshared)(___0_count, method);
}
inline Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m194E3DA741BDEBF25A3C60B0FC34EF1F3B195181 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m194E3DA741BDEBF25A3C60B0FC34EF1F3B195181_gshared)(___0_count, method);
}
inline int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1C21A325511C1DFF6CBC5E48BCFE2D3535E79222 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  int8_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1C21A325511C1DFF6CBC5E48BCFE2D3535E79222_gshared)(___0_count, method);
}
inline Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCDF7D0BC6E47B30BE64EA588236670B5C24471 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCDF7D0BC6E47B30BE64EA588236670B5C24471_gshared)(___0_count, method);
}
inline SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m4EB769AF4C3059A0CAEC5384DFCC54113F7F8396 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m4EB769AF4C3059A0CAEC5384DFCC54113F7F8396_gshared)(___0_count, method);
}
inline SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mC5D8B8F9EEB58D783AC99030F90C33085E29E0F4 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mC5D8B8F9EEB58D783AC99030F90C33085E29E0F4_gshared)(___0_count, method);
}
inline SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m3BF19D40A8D1A8DC67B748499A90F1D95E5F9D5E (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m3BF19D40A8D1A8DC67B748499A90F1D95E5F9D5E_gshared)(___0_count, method);
}
inline float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDF31B5C8D4CF6F63DBC402F93A4902BB41AF617A (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  float (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDF31B5C8D4CF6F63DBC402F93A4902BB41AF617A_gshared)(___0_count, method);
}
inline StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2BACF7BFD6126FA92934886441023C14606E4D8C (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2BACF7BFD6126FA92934886441023C14606E4D8C_gshared)(___0_count, method);
}
inline StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m46250B5C56ACB8D9C79870A7B547FB2700AF15B3 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m46250B5C56ACB8D9C79870A7B547FB2700AF15B3_gshared)(___0_count, method);
}
inline StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m5D38FA37D87EAA704CFB58AEA11F3EC39AEFF1E7 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m5D38FA37D87EAA704CFB58AEA11F3EC39AEFF1E7_gshared)(___0_count, method);
}
inline StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3637F91F0F17A00FA935D28B4E541C9B060C9BA6 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3637F91F0F17A00FA935D28B4E541C9B060C9BA6_gshared)(___0_count, method);
}
inline StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m259ED3223591E91BEB1F81712D52CCC8D3BAC6A2 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m259ED3223591E91BEB1F81712D52CCC8D3BAC6A2_gshared)(___0_count, method);
}
inline StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m6DEE07D679CA855AFD3A5419D9392C42D17B2DBB (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m6DEE07D679CA855AFD3A5419D9392C42D17B2DBB_gshared)(___0_count, method);
}
inline StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mEB25031BEABB5F3EA90DCA5BB3F5BCF1640CC094 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mEB25031BEABB5F3EA90DCA5BB3F5BCF1640CC094_gshared)(___0_count, method);
}
inline StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mF6CC1C6523FEC87FC4FE2C056B2EA79FF9D86A99 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mF6CC1C6523FEC87FC4FE2C056B2EA79FF9D86A99_gshared)(___0_count, method);
}
inline StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mD207EE98CF8D058E65D12DB022E33A4B5E4DBF37 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mD207EE98CF8D058E65D12DB022E33A4B5E4DBF37_gshared)(___0_count, method);
}
inline StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m6FFB4DCD0AF1BEB615B3D00D50BF35CB0B9342C1 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m6FFB4DCD0AF1BEB615B3D00D50BF35CB0B9342C1_gshared)(___0_count, method);
}
inline StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mF9A7C0989CE2A8051406819F505D0BA6C5D50838 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mF9A7C0989CE2A8051406819F505D0BA6C5D50838_gshared)(___0_count, method);
}
inline StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4CDC2E13990212E21BC38FB599391C977775D485 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4CDC2E13990212E21BC38FB599391C977775D485_gshared)(___0_count, method);
}
inline StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2191540D865D5C6B6E89077C71F21A78C85DA981 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2191540D865D5C6B6E89077C71F21A78C85DA981_gshared)(___0_count, method);
}
inline StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m0C16A19AA37F598E96FC43BAC034C1CE27D61FB4 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m0C16A19AA37F598E96FC43BAC034C1CE27D61FB4_gshared)(___0_count, method);
}
inline StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m1C4E73EB209FC1E0BEB6E7B43C34FC4D6D65F174 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m1C4E73EB209FC1E0BEB6E7B43C34FC4D6D65F174_gshared)(___0_count, method);
}
inline StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1ABB8FA4111774E4DB8BF236FE133FC3B853EB31 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1ABB8FA4111774E4DB8BF236FE133FC3B853EB31_gshared)(___0_count, method);
}
inline StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA634FD62CD696DF6FA017D329A422645957FD156 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA634FD62CD696DF6FA017D329A422645957FD156_gshared)(___0_count, method);
}
inline StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mF96AA496A11ADAECDE405B0CBA3473D8F5EE6619 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mF96AA496A11ADAECDE405B0CBA3473D8F5EE6619_gshared)(___0_count, method);
}
inline StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD8DB6F2EA0ADB994693DD77768291584174A4DE9 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD8DB6F2EA0ADB994693DD77768291584174A4DE9_gshared)(___0_count, method);
}
inline StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8F366B3C02A71BF04557B18BB55876D5CD8B5729 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8F366B3C02A71BF04557B18BB55876D5CD8B5729_gshared)(___0_count, method);
}
inline TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m32FBFE43FB00D4EE2A5BEECD7F1917EE537F64C1 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m32FBFE43FB00D4EE2A5BEECD7F1917EE537F64C1_gshared)(___0_count, method);
}
inline TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB61B6A4D7F0D0D8484013630AEFBA149769B6FE7 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB61B6A4D7F0D0D8484013630AEFBA149769B6FE7_gshared)(___0_count, method);
}
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mBE6CC421D48125AE28A56D9CEB17E48BC28B0BD7 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mBE6CC421D48125AE28A56D9CEB17E48BC28B0BD7_gshared)(___0_count, method);
}
inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mBA193AA99BF2D7E99E6046F941E05C99A235A63B (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mBA193AA99BF2D7E99E6046F941E05C99A235A63B_gshared)(___0_count, method);
}
inline TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF91B67E9FF2B0279DCF329767CEB8D6414F146BB (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF91B67E9FF2B0279DCF329767CEB8D6414F146BB_gshared)(___0_count, method);
}
inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3225CACF659C94C96CDD6A17CA6748484119CFF4 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3225CACF659C94C96CDD6A17CA6748484119CFF4_gshared)(___0_count, method);
}
inline uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA5679E431BDBAE50B0DFC594932302085A788F09 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA5679E431BDBAE50B0DFC594932302085A788F09_gshared)(___0_count, method);
}
inline uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCF9C5D3E23A02EEEA6B3E35B7E443E9DA28CEA (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCF9C5D3E23A02EEEA6B3E35B7E443E9DA28CEA_gshared)(___0_count, method);
}
inline uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF97DADA2889CD0267F74DF9C277E80F0381E68B4 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF97DADA2889CD0267F74DF9C277E80F0381E68B4_gshared)(___0_count, method);
}
inline UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m52D195BCA674D7A5AFAB9D5B0190539F6CD56324 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m52D195BCA674D7A5AFAB9D5B0190539F6CD56324_gshared)(___0_count, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m3EA91B634E3A21FC9EFEE2E64BF37BA4ED935F83 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m3EA91B634E3A21FC9EFEE2E64BF37BA4ED935F83_gshared)(___0_count, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1D21AED87DD63F2A4BD2CD895FD0C931821C1514 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1D21AED87DD63F2A4BD2CD895FD0C931821C1514_gshared)(___0_count, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52C36F69CCBFAD459D6F20B67E282EAD24432F7E (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52C36F69CCBFAD459D6F20B67E282EAD24432F7E_gshared)(___0_count, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2D2C323EE1D18FF02FAA35EA6FB3610F2FCD9DB9 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2D2C323EE1D18FF02FAA35EA6FB3610F2FCD9DB9_gshared)(___0_count, method);
}
inline Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917_gshared)(___0_count, method);
}
inline Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026_gshared)(method);
}
inline int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052_gshared)(___0_count, method);
}
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B_gshared)(___0_derivedType, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9_gshared)(___0_derivedType, method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877_gshared)(___0_derivedType, method);
}
inline StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m281CED37618A25573CC4D58C97152E6FCA744AE8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m281CED37618A25573CC4D58C97152E6FCA744AE8_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_Instantiate_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m7AF6959248FE34418A7CE3EE5E78680F237F3A41 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m7AF6959248FE34418A7CE3EE5E78680F237F3A41_gshared)(___0_derivedType, method);
}
inline StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m4DF96EFBE097C17BF62272A0C6340D8AE72C657C (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m4DF96EFBE097C17BF62272A0C6340D8AE72C657C_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_Instantiate_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE8A1AB2E9E9B49488A93FCD2B86F77A25893346E (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE8A1AB2E9E9B49488A93FCD2B86F77A25893346E_gshared)(___0_derivedType, method);
}
inline StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m0D77DD60514ABFC7B1C56B2D56111E61FEA6FA82 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m0D77DD60514ABFC7B1C56B2D56111E61FEA6FA82_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_Instantiate_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE2FC596D6CE7CB8E9659399EE4C9DABC8D871103 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE2FC596D6CE7CB8E9659399EE4C9DABC8D871103_gshared)(___0_derivedType, method);
}
inline StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m159E2BD6FEBA9EDAE6D74A117DC4FFAA5042E3D0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m159E2BD6FEBA9EDAE6D74A117DC4FFAA5042E3D0_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_Instantiate_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m946658B27C78F1B41B7C365D2C412A2C0C4768D1 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m946658B27C78F1B41B7C365D2C412A2C0C4768D1_gshared)(___0_derivedType, method);
}
inline Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m9A5215A4152CEC4DF1A24F59B24399473DA7F261 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m9A5215A4152CEC4DF1A24F59B24399473DA7F261_gshared)(___0_derivedType, ___1_count, method);
}
inline Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_Instantiate_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAEC3FBA39DEC930DDDEF597E464BD7C804C5D05C (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAEC3FBA39DEC930DDDEF597E464BD7C804C5D05C_gshared)(___0_derivedType, method);
}
inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF8C1E97193ECF4B53A44C3C1ECDAFE16C67B8647 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF8C1E97193ECF4B53A44C3C1ECDAFE16C67B8647_gshared)(___0_derivedType, ___1_count, method);
}
inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_Instantiate_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m6DF338468D32365904E0B2DBDC664DB97D1B0291 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m6DF338468D32365904E0B2DBDC664DB97D1B0291_gshared)(___0_derivedType, method);
}
inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE6DA1D7AC2CE4B25EF152A21566CB5ADA6D8F295 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE6DA1D7AC2CE4B25EF152A21566CB5ADA6D8F295_gshared)(___0_derivedType, ___1_count, method);
}
inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_Instantiate_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m54D4189802174B0AA0E99B59BAD924E484A80696 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m54D4189802174B0AA0E99B59BAD924E484A80696_gshared)(___0_derivedType, method);
}
inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m6AC0170455B90A67CBAACCDD442DC95ABFD6D519 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m6AC0170455B90A67CBAACCDD442DC95ABFD6D519_gshared)(___0_derivedType, ___1_count, method);
}
inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_Instantiate_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0C69A18A43A2E44105889800F21D1215AA8A5E1D (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0C69A18A43A2E44105889800F21D1215AA8A5E1D_gshared)(___0_derivedType, method);
}
inline BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFDEDCB17D521CA4B385F04161EBEA9EA14D95F6E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFDEDCB17D521CA4B385F04161EBEA9EA14D95F6E_gshared)(___0_derivedType, ___1_count, method);
}
inline BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_Instantiate_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m55C8EBC82EDFA8FAFB924ECE0705DB118140972F (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m55C8EBC82EDFA8FAFB924ECE0705DB118140972F_gshared)(___0_derivedType, method);
}
inline BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m006A7164A9139A2EF3A041D65E369D41CB6444DE (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m006A7164A9139A2EF3A041D65E369D41CB6444DE_gshared)(___0_derivedType, ___1_count, method);
}
inline BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeUtility_Instantiate_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m81F1BF80A7E7DAA33D9C22FF3010C44ACE23EC81 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m81F1BF80A7E7DAA33D9C22FF3010C44ACE23EC81_gshared)(___0_derivedType, method);
}
inline bool TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D61874C339DFDB87955AA8F5662B167D5E769C1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D61874C339DFDB87955AA8F5662B167D5E769C1_gshared)(___0_derivedType, ___1_count, method);
}
inline bool TypeUtility_Instantiate_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m61658CC7B6E2962DF750E9611E884DE58CBD7CF1 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  bool (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m61658CC7B6E2962DF750E9611E884DE58CBD7CF1_gshared)(___0_derivedType, method);
}
inline uint8_t TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C80F9E94423A3E2D1E82D97BFCB0A36BB9C8DC7 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C80F9E94423A3E2D1E82D97BFCB0A36BB9C8DC7_gshared)(___0_derivedType, ___1_count, method);
}
inline uint8_t TypeUtility_Instantiate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m019581577126A0BB6BC129144339350367173F2C (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m019581577126A0BB6BC129144339350367173F2C_gshared)(___0_derivedType, method);
}
inline Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDC60F7CBC30F8F1CDB241602647982EFB70B4049 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDC60F7CBC30F8F1CDB241602647982EFB70B4049_gshared)(___0_derivedType, ___1_count, method);
}
inline Il2CppChar TypeUtility_Instantiate_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4E69CBE571B420D4739367A1A684594E9176FA57 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4E69CBE571B420D4739367A1A684594E9176FA57_gshared)(___0_derivedType, method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m59565BEA037538F9616274F0904A21A92E505410 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m59565BEA037538F9616274F0904A21A92E505410_gshared)(___0_derivedType, ___1_count, method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_Instantiate_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6F30A60D4188472BE371258A1BFDB523943245EC (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6F30A60D4188472BE371258A1BFDB523943245EC_gshared)(___0_derivedType, method);
}
inline Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF998B0C8639046CB042624DD1E8E2EEE41483A20 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF998B0C8639046CB042624DD1E8E2EEE41483A20_gshared)(___0_derivedType, ___1_count, method);
}
inline Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_Instantiate_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m231C619D716B7251BE7A56BCB128745D7A365C19 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m231C619D716B7251BE7A56BCB128745D7A365C19_gshared)(___0_derivedType, method);
}
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2A5D0D0C5D4BF967B0002C561CE2B0AC076C0403 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2A5D0D0C5D4BF967B0002C561CE2B0AC076C0403_gshared)(___0_derivedType, ___1_count, method);
}
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_Instantiate_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9FEFFAEBA7DDF77EF7BC781305AF1B539557A7B5 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9FEFFAEBA7DDF77EF7BC781305AF1B539557A7B5_gshared)(___0_derivedType, method);
}
inline double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEFAE44987A1E68F504981A4CDC33EE7BF2DE9A88 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  double (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEFAE44987A1E68F504981A4CDC33EE7BF2DE9A88_gshared)(___0_derivedType, ___1_count, method);
}
inline double TypeUtility_Instantiate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4E3F11E66287C360381FDCB1DA2CA86725108774 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  double (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4E3F11E66287C360381FDCB1DA2CA86725108774_gshared)(___0_derivedType, method);
}
inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA76F2DBF6B6D348502A244EED660C295B53699C8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA76F2DBF6B6D348502A244EED660C295B53699C8_gshared)(___0_derivedType, ___1_count, method);
}
inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_Instantiate_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBD4D352377EE256EE21A9E2178B41FCB240019FF (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBD4D352377EE256EE21A9E2178B41FCB240019FF_gshared)(___0_derivedType, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m75B9862930FC31C729C49492246FBD61799D239D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m75B9862930FC31C729C49492246FBD61799D239D_gshared)(___0_derivedType, ___1_count, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeUtility_Instantiate_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m571A629A5658918FDCA0FD56D52270B49F8E08AC (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m571A629A5658918FDCA0FD56D52270B49F8E08AC_gshared)(___0_derivedType, method);
}
inline FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m45593409D374AE79EA5A1F2A4B6F52B61EE002F8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m45593409D374AE79EA5A1F2A4B6F52B61EE002F8_gshared)(___0_derivedType, ___1_count, method);
}
inline FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_Instantiate_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m463CF737CEC740B04F54A12BE8980E180E704C25 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m463CF737CEC740B04F54A12BE8980E180E704C25_gshared)(___0_derivedType, method);
}
inline FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m7B72C49E6CAE91CFB6C5A545808672BB4FD6A4B8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m7B72C49E6CAE91CFB6C5A545808672BB4FD6A4B8_gshared)(___0_derivedType, ___1_count, method);
}
inline FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_Instantiate_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB244C132A6AC508484D18A78E401891F6D04B921 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB244C132A6AC508484D18A78E401891F6D04B921_gshared)(___0_derivedType, method);
}
inline Guid_t TypeUtility_InstantiateArray_TisGuid_t_mAE74D365457CE44D013FBD6F5C8910BA1685DE5F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisGuid_t_mAE74D365457CE44D013FBD6F5C8910BA1685DE5F_gshared)(___0_derivedType, ___1_count, method);
}
inline Guid_t TypeUtility_Instantiate_TisGuid_t_mA90DC3C8C09A7C9E6568E92268FBFEC92D9DD32C (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisGuid_t_mA90DC3C8C09A7C9E6568E92268FBFEC92D9DD32C_gshared)(___0_derivedType, method);
}
inline int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m77243DEB812D7D2296B1AF569812F8312273A29C (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int16_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m77243DEB812D7D2296B1AF569812F8312273A29C_gshared)(___0_derivedType, ___1_count, method);
}
inline int16_t TypeUtility_Instantiate_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCDB0D19649FB27FA7581762E8F49F57B9B7CDFA3 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  int16_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCDB0D19649FB27FA7581762E8F49F57B9B7CDFA3_gshared)(___0_derivedType, method);
}
inline int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m21D4F0D04451F49CAA1F911345ACECF52DC69E78 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m21D4F0D04451F49CAA1F911345ACECF52DC69E78_gshared)(___0_derivedType, ___1_count, method);
}
inline int32_t TypeUtility_Instantiate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED72462427639D9AEE6A910BD83F37CA49CC7C7 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED72462427639D9AEE6A910BD83F37CA49CC7C7_gshared)(___0_derivedType, method);
}
inline int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2EF2E3C13101502B574BC39E2715C72FB8459364 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2EF2E3C13101502B574BC39E2715C72FB8459364_gshared)(___0_derivedType, ___1_count, method);
}
inline int64_t TypeUtility_Instantiate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA517D386045B05E3C434AF7A8670DD6AE7817C6F (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA517D386045B05E3C434AF7A8670DD6AE7817C6F_gshared)(___0_derivedType, method);
}
inline Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4F8CDB2A2F64850B2325B9FE8089EAFB41DB7CEF (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4F8CDB2A2F64850B2325B9FE8089EAFB41DB7CEF_gshared)(___0_derivedType, ___1_count, method);
}
inline Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_Instantiate_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m24AD2F55FB14086FC4CB1F422B3F4B1CAC7C424C (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m24AD2F55FB14086FC4CB1F422B3F4B1CAC7C424C_gshared)(___0_derivedType, method);
}
inline MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDF64A60F47F7DA7BF9766BA49DFE19C0380CBA02 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDF64A60F47F7DA7BF9766BA49DFE19C0380CBA02_gshared)(___0_derivedType, ___1_count, method);
}
inline MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_Instantiate_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m60B5595B39DAF4209FF6D63C7848715A38C2BB74 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m60B5595B39DAF4209FF6D63C7848715A38C2BB74_gshared)(___0_derivedType, method);
}
inline Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC74924F19E1B4FE89E11350F5E4359CAC02E9031 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC74924F19E1B4FE89E11350F5E4359CAC02E9031_gshared)(___0_derivedType, ___1_count, method);
}
inline Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_Instantiate_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA23957AACEC7AAEEDBC4CC0C62EBBB1CE44AF7E (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA23957AACEC7AAEEDBC4CC0C62EBBB1CE44AF7E_gshared)(___0_derivedType, method);
}
inline Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m535DE2604C90D93B5EF29E60563BF287510E68CD (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m535DE2604C90D93B5EF29E60563BF287510E68CD_gshared)(___0_derivedType, ___1_count, method);
}
inline Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_Instantiate_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m7580D6813951CBE8AFDD15F8F0A4518B3AE2C17C (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m7580D6813951CBE8AFDD15F8F0A4518B3AE2C17C_gshared)(___0_derivedType, method);
}
inline int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9AF7AFAE2BC8E88458985B397188B65D6429F15 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int8_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9AF7AFAE2BC8E88458985B397188B65D6429F15_gshared)(___0_derivedType, ___1_count, method);
}
inline int8_t TypeUtility_Instantiate_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m0E989570F78731ED52B034096038E7CE0D3CCF2F (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  int8_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m0E989570F78731ED52B034096038E7CE0D3CCF2F_gshared)(___0_derivedType, method);
}
inline Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mC2966E423F30D5B816EFD749C8D82415F1A4CB9E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mC2966E423F30D5B816EFD749C8D82415F1A4CB9E_gshared)(___0_derivedType, ___1_count, method);
}
inline Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_Instantiate_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE05F2EAF164B530101B9452875662EA603AF0943 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE05F2EAF164B530101B9452875662EA603AF0943_gshared)(___0_derivedType, method);
}
inline SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m48083B48EE4106A0A4B2A2F753654C22A0B2CD57 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m48083B48EE4106A0A4B2A2F753654C22A0B2CD57_gshared)(___0_derivedType, ___1_count, method);
}
inline SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 TypeUtility_Instantiate_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m2F782C8E3367E118D7005949C9EEF78B40453A30 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m2F782C8E3367E118D7005949C9EEF78B40453A30_gshared)(___0_derivedType, method);
}
inline SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m186DF1FFCA5C1283B94C0E9C682C8D450D7A0322 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m186DF1FFCA5C1283B94C0E9C682C8D450D7A0322_gshared)(___0_derivedType, ___1_count, method);
}
inline SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 TypeUtility_Instantiate_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m467D8399F884B6D33BE790AE7645AF12EF4D0B0E (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m467D8399F884B6D33BE790AE7645AF12EF4D0B0E_gshared)(___0_derivedType, method);
}
inline SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m5B5F510277B7F1AE98BC66363D93731E7B3A2C38 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m5B5F510277B7F1AE98BC66363D93731E7B3A2C38_gshared)(___0_derivedType, ___1_count, method);
}
inline SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC TypeUtility_Instantiate_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m8EBAB63E9115044FB7F43F5D64326813EC053159 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m8EBAB63E9115044FB7F43F5D64326813EC053159_gshared)(___0_derivedType, method);
}
inline float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF09E7466EBA4308168509A2F9728A7EA9E6CED6 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  float (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF09E7466EBA4308168509A2F9728A7EA9E6CED6_gshared)(___0_derivedType, ___1_count, method);
}
inline float TypeUtility_Instantiate_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m250E596A76F4E90F0DA755803C33EBDBFE539487 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  float (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m250E596A76F4E90F0DA755803C33EBDBFE539487_gshared)(___0_derivedType, method);
}
inline StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m57B789863DAB7572F3BD82A3E4725BABADD7EEF1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m57B789863DAB7572F3BD82A3E4725BABADD7EEF1_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_Instantiate_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8135215FC2AB524181F24E66F7435414D834E2BB (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8135215FC2AB524181F24E66F7435414D834E2BB_gshared)(___0_derivedType, method);
}
inline StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m8CC06B652F2EDCE2EC3632D5DF1D101B2926EBC9 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m8CC06B652F2EDCE2EC3632D5DF1D101B2926EBC9_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_Instantiate_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE343813C9CA5A97BC75783CB6DAF2F616B3B55AE (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE343813C9CA5A97BC75783CB6DAF2F616B3B55AE_gshared)(___0_derivedType, method);
}
inline StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0A1D4C8D7477CED01A3F834003DB6E501DCFDE69 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0A1D4C8D7477CED01A3F834003DB6E501DCFDE69_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_Instantiate_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA0D45D320F2FF075FAC8E7D1DC59525229D3725B (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA0D45D320F2FF075FAC8E7D1DC59525229D3725B_gshared)(___0_derivedType, method);
}
inline StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m6063BE63BFEE553B550EDAA3CF5EB963962631DB (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m6063BE63BFEE553B550EDAA3CF5EB963962631DB_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_Instantiate_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m87FB8CC317081B9CDD71674EB3781C942CC548DA (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m87FB8CC317081B9CDD71674EB3781C942CC548DA_gshared)(___0_derivedType, method);
}
inline StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m34A0EBBE05C15B267EBD94EEBB155A53A0FDA121 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m34A0EBBE05C15B267EBD94EEBB155A53A0FDA121_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_Instantiate_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m0FA12EC0938963C3D515A0E51C10A1361572DE60 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m0FA12EC0938963C3D515A0E51C10A1361572DE60_gshared)(___0_derivedType, method);
}
inline StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m014366206E3CB9987B29A33B4C65423A04C1F7F2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m014366206E3CB9987B29A33B4C65423A04C1F7F2_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_Instantiate_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m70E21575B0F6E9AD50345A82D64B3CFB514689F9 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m70E21575B0F6E9AD50345A82D64B3CFB514689F9_gshared)(___0_derivedType, method);
}
inline StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF7E17FA9A5CF34996D23E79DDB9E5A20927DB9FB (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF7E17FA9A5CF34996D23E79DDB9E5A20927DB9FB_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_Instantiate_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m50EDC2B685C7A805F736D71A9F2C53718CBD0A15 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m50EDC2B685C7A805F736D71A9F2C53718CBD0A15_gshared)(___0_derivedType, method);
}
inline StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6B000117BFE4A9051BFE17BFA36CB9757F702219 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6B000117BFE4A9051BFE17BFA36CB9757F702219_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_Instantiate_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0F2B5235B5E057586363B03F727359967889C90B (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0F2B5235B5E057586363B03F727359967889C90B_gshared)(___0_derivedType, method);
}
inline StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8A0C7DB3A87350D4B09D2895CC4E63DEB2B848F2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8A0C7DB3A87350D4B09D2895CC4E63DEB2B848F2_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_Instantiate_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8ABF236CBC8462A860F41962378F343ED976194A (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8ABF236CBC8462A860F41962378F343ED976194A_gshared)(___0_derivedType, method);
}
inline StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBF031D97952C18A00E5BDEB0721BF94BF16CD11A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBF031D97952C18A00E5BDEB0721BF94BF16CD11A_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_Instantiate_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mAE76E5A7A00036D7B4F5F084D60FD3A552229EAF (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mAE76E5A7A00036D7B4F5F084D60FD3A552229EAF_gshared)(___0_derivedType, method);
}
inline StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3D788ADEA04B7BE35B443C002B92D07035EF0DC4 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3D788ADEA04B7BE35B443C002B92D07035EF0DC4_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_Instantiate_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m60378479ECF71A3A591DCD4BA34761B4F0C3DE9A (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m60378479ECF71A3A591DCD4BA34761B4F0C3DE9A_gshared)(___0_derivedType, method);
}
inline StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mE590319AC35556C5E5507A5A2FABB8063FE182A5 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mE590319AC35556C5E5507A5A2FABB8063FE182A5_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_Instantiate_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1837276E59C8F890FA9BD44A8E51670023ECE350 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1837276E59C8F890FA9BD44A8E51670023ECE350_gshared)(___0_derivedType, method);
}
inline StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDEE17C84F12ED15070F7EBBEE81874E3E0C6818D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDEE17C84F12ED15070F7EBBEE81874E3E0C6818D_gshared)(___0_derivedType, ___1_count, method);
}
inline StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_Instantiate_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m46FB416B10EDE0BAF84497C1B05A233320C5B6F7 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m46FB416B10EDE0BAF84497C1B05A233320C5B6F7_gshared)(___0_derivedType, method);
}
inline StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA756B0A0DC07FEF686A4B6DD4B65E8B8DBDE19E7 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA756B0A0DC07FEF686A4B6DD4B65E8B8DBDE19E7_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_Instantiate_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m29FD1830C307E4141B84C66A9C31AFC09D375C16 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m29FD1830C307E4141B84C66A9C31AFC09D375C16_gshared)(___0_derivedType, method);
}
inline StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5374D0E9476392FC56CA0A195B4DE560BFF8E25B (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5374D0E9476392FC56CA0A195B4DE560BFF8E25B_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_Instantiate_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mADFA8E2A5519178DEFEA9FC206101B9A6A935215 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mADFA8E2A5519178DEFEA9FC206101B9A6A935215_gshared)(___0_derivedType, method);
}
inline StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m29B340D26E10C35961DE46EA02E9B226747BDB03 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m29B340D26E10C35961DE46EA02E9B226747BDB03_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_Instantiate_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m89DC23C50C35515832873025FB64E06C08178C78 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m89DC23C50C35515832873025FB64E06C08178C78_gshared)(___0_derivedType, method);
}
inline StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m48BB0241A4C98023239CF2CF4F989F4A3486EB73 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m48BB0241A4C98023239CF2CF4F989F4A3486EB73_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_Instantiate_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBFFBE5F19DBF010277EEACCE9F31DCE0F9E6735D (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBFFBE5F19DBF010277EEACCE9F31DCE0F9E6735D_gshared)(___0_derivedType, method);
}
inline StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC60437D4258CCC0EED436E2308135742FFA1A486 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC60437D4258CCC0EED436E2308135742FFA1A486_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_Instantiate_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m31926283C0C84C3057DC37C1DA770840CC661F47 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m31926283C0C84C3057DC37C1DA770840CC661F47_gshared)(___0_derivedType, method);
}
inline StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3B0C8A2D533799DB7C894ED49FD99469A4F30379 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3B0C8A2D533799DB7C894ED49FD99469A4F30379_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_Instantiate_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m20C781C9BF6F5A1A4976D3FB3307BBB54013A22D (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m20C781C9BF6F5A1A4976D3FB3307BBB54013A22D_gshared)(___0_derivedType, method);
}
inline StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5391C278FF0A30D77C5BA81B4DC8FA234AD0DBB1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5391C278FF0A30D77C5BA81B4DC8FA234AD0DBB1_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_Instantiate_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8674710498BB040D77CD5485B6159C2E4CB1C905 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8674710498BB040D77CD5485B6159C2E4CB1C905_gshared)(___0_derivedType, method);
}
inline TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m0D082C6C1E325E8A3094CECE4109FA2B6BC845B0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m0D082C6C1E325E8A3094CECE4109FA2B6BC845B0_gshared)(___0_derivedType, ___1_count, method);
}
inline TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_Instantiate_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m967DD2CBFA6BC947E4DE2E707BCBFFC9C3934E17 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m967DD2CBFA6BC947E4DE2E707BCBFFC9C3934E17_gshared)(___0_derivedType, method);
}
inline TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m356574AB280892F8D70F84B2A9B57B31DFDCE6A2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m356574AB280892F8D70F84B2A9B57B31DFDCE6A2_gshared)(___0_derivedType, ___1_count, method);
}
inline TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_Instantiate_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB6BA523635A2359078BF52FEA9788A0A4B8AA298 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB6BA523635A2359078BF52FEA9788A0A4B8AA298_gshared)(___0_derivedType, method);
}
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m75AB3D5EF5305A5B9290D155687FCF8E45EF3A7E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m75AB3D5EF5305A5B9290D155687FCF8E45EF3A7E_gshared)(___0_derivedType, ___1_count, method);
}
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_Instantiate_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mFCE31CF4FFACE349B84F71ABF91EA5C7C023D562 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mFCE31CF4FFACE349B84F71ABF91EA5C7C023D562_gshared)(___0_derivedType, method);
}
inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8C67F670872FC5934653ADE5A00B1A82E371381A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8C67F670872FC5934653ADE5A00B1A82E371381A_gshared)(___0_derivedType, ___1_count, method);
}
inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_Instantiate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0812591A8DD4A523E6213E0EC9E2E87E2603C8BE (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0812591A8DD4A523E6213E0EC9E2E87E2603C8BE_gshared)(___0_derivedType, method);
}
inline TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC144E3A67D34A3ADC811A1450B274DF968B1532A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC144E3A67D34A3ADC811A1450B274DF968B1532A_gshared)(___0_derivedType, ___1_count, method);
}
inline TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_Instantiate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mBFDF9F0C56F5150550EC0074D77E66CF3931BA2E (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mBFDF9F0C56F5150550EC0074D77E66CF3931BA2E_gshared)(___0_derivedType, method);
}
inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8F81C8DA8CF30FA56CE13BDA4ED0CABE5A33632A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8F81C8DA8CF30FA56CE13BDA4ED0CABE5A33632A_gshared)(___0_derivedType, ___1_count, method);
}
inline Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_Instantiate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m2BA2550AF563D560E55F3DD1D75E13BDC7B215AF (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m2BA2550AF563D560E55F3DD1D75E13BDC7B215AF_gshared)(___0_derivedType, method);
}
inline uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAE4D88E99CFBCB527FDB8A69CFC234FFAB8BDC64 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAE4D88E99CFBCB527FDB8A69CFC234FFAB8BDC64_gshared)(___0_derivedType, ___1_count, method);
}
inline uint16_t TypeUtility_Instantiate_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1888A6DF19F8A7D8B0EC95CEB7684676AD7B53A2 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1888A6DF19F8A7D8B0EC95CEB7684676AD7B53A2_gshared)(___0_derivedType, method);
}
inline uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m350E3A1013B8463C9CAC39E8CAAAEC2FE3BC4AA0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m350E3A1013B8463C9CAC39E8CAAAEC2FE3BC4AA0_gshared)(___0_derivedType, ___1_count, method);
}
inline uint32_t TypeUtility_Instantiate_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m60A7F02D1165DBD7B8A86C32223D074AC470A12D (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m60A7F02D1165DBD7B8A86C32223D074AC470A12D_gshared)(___0_derivedType, method);
}
inline uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF99178F8ACBC316A69EF45E4E708AC636A43E18E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF99178F8ACBC316A69EF45E4E708AC636A43E18E_gshared)(___0_derivedType, ___1_count, method);
}
inline uint64_t TypeUtility_Instantiate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA4762190B1329BFA260B76486E12EB9C8DC3C395 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA4762190B1329BFA260B76486E12EB9C8DC3C395_gshared)(___0_derivedType, method);
}
inline UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mBB86906C84C632622706EB0E1D58592E2F0BE5B9 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mBB86906C84C632622706EB0E1D58592E2F0BE5B9_gshared)(___0_derivedType, ___1_count, method);
}
inline UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B TypeUtility_Instantiate_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m3DEC820AFCE18157B25C29535135BA7D21814B53 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m3DEC820AFCE18157B25C29535135BA7D21814B53_gshared)(___0_derivedType, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m070E76F9C74340B63FCC7C6B4C3CA7541851A290 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m070E76F9C74340B63FCC7C6B4C3CA7541851A290_gshared)(___0_derivedType, ___1_count, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A TypeUtility_Instantiate_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mAB42526165495F7582978DB219445C1B4B3D62E0 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mAB42526165495F7582978DB219445C1B4B3D62E0_gshared)(___0_derivedType, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m339A593FE002ECA805FFE4B0CF0B40013569EA0F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m339A593FE002ECA805FFE4B0CF0B40013569EA0F_gshared)(___0_derivedType, ___1_count, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_Instantiate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1F23C60E2F94481CDFA8152E9150C1FB9368DB35 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1F23C60E2F94481CDFA8152E9150C1FB9368DB35_gshared)(___0_derivedType, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDD9287DF4B3A05EEAF8E5E0011397A74BBB01006 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDD9287DF4B3A05EEAF8E5E0011397A74BBB01006_gshared)(___0_derivedType, ___1_count, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_Instantiate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7600CA1EB0951E940C81BF9344258E59D94968A0 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7600CA1EB0951E940C81BF9344258E59D94968A0_gshared)(___0_derivedType, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3946F03FE277A0176B3FB92619571D84765E225D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3946F03FE277A0176B3FB92619571D84765E225D_gshared)(___0_derivedType, ___1_count, method);
}
inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_Instantiate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m11FA35B9D91781E74463462DA6F839E3DD0A9C79 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m11FA35B9D91781E74463462DA6F839E3DD0A9C79_gshared)(___0_derivedType, method);
}
inline Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F_gshared)(___0_derivedType, ___1_count, method);
}
inline Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56_gshared)(___0_derivedType, method);
}
inline int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F_gshared)(___0_derivedType, ___1_count, method);
}
inline int32_t TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B_gshared)(___0_derivedType, method);
}
inline void List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23 (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*, const RuntimeMethod*))List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_gshared)(__this, method);
}
inline Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18 (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 (*) (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F*, const RuntimeMethod*))NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_gshared)(__this, method);
}
inline void Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07 (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0*, const RuntimeMethod*))Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_gshared)(__this, method);
}
inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_inline (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method)
{
	return ((  SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 (*) (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0*, const RuntimeMethod*))Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_IsSystemTypeIndex_m281B2FF063FF5559B1A5782E3805A1E53C49FBF4 (SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_systemTypeIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SystemTypeIndex_get_IsManaged_mE9C5C77E4D786662043B2BF8F52EE670C60BF231_inline (SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* __this, const RuntimeMethod* method) ;
inline void List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59, const RuntimeMethod*))List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_gshared_inline)(__this, ___0_item, method);
}
inline bool Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_inline (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0*, const RuntimeMethod*))Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 World_GetOrCreateSystemsAndLogException_m65330BDD5D6A373B21E2B969BF898BDF4B9848D0 (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* __this, NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F ___0_types, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_inline (NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 (*) (NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303*, int32_t, const RuntimeMethod*))NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_gshared_inline)(__this, ___0_index, method);
}
inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 (*) (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F*, int32_t, const RuntimeMethod*))NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB TypeManager_GetSystemAttributes_m05CE73E97544DCD7953A6DD51A36AB2095D43E94 (SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_systemTypeIndex, int32_t ___1_kind, int32_t ___2_allocator, const RuntimeMethod* method) ;
inline int32_t NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_inline (NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB*, const RuntimeMethod*))NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A (ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* __this, SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 ___0_sysHandle, const RuntimeMethod* method) ;
inline Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944 (NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 (*) (NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB*, const RuntimeMethod*))NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_gshared)(__this, method);
}
inline void Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5 (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69*, const RuntimeMethod*))Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_gshared)(__this, method);
}
inline SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_inline (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method)
{
	return ((  SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED (*) (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69*, const RuntimeMethod*))Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* DefaultWorldInitialization_FindGroup_m9E840B43C7C3E340774EC853D0A45B19B69998FA (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___0_world, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___1_systemType, SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED ___2_attr, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_inline (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69*, const RuntimeMethod*))Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_gshared_inline)(__this, method);
}
inline int32_t NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_inline (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F*, const RuntimeMethod*))NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BakingRootGroups_IsRootGroup_m71DDEC3949841A5C6490669B7862BCFF8CF2BC91 (BakingRootGroups_t525A9114FE18B7F21E99D5D6AD771EF8FFD6D9F2* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultRootGroups_IsRootGroup_m942A464A4624624356C9FEF106EE75518D8F2142 (DefaultRootGroups_t7281EBC4DB68ACD923E7D99CD1882B8F517F0352* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessAfterLoadRootGroups_IsRootGroup_mDDC8B86CD38C11D8EF9B854909DB8ACF37948ABF (ProcessAfterLoadRootGroups_tB32005DD473CCB87A1D965140E244A9192332E0D* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_type, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mFF3020F1FE2CB644B8E575C1E72B7673C32F7B08 (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59, const RuntimeMethod*))List_1_AddWithResize_mFF3020F1FE2CB644B8E575C1E72B7673C32F7B08_gshared)(__this, ___0_item, method);
}
inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 UnsafeUtility_ReadArrayElement_TisSystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59_m247A702DB3228A6ACA31902902653A05C1C9D867_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisSystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59_m247A702DB3228A6ACA31902902653A05C1C9D867_gshared_inline)(___0_source, ___1_index, method);
}
inline SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 UnsafeList_1_get_Item_mBCE13EC244E5D8EA33BC3BF5990E4292A5A32528_inline (UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 (*) (UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD*, int32_t, const RuntimeMethod*))UnsafeList_1_get_Item_mBCE13EC244E5D8EA33BC3BF5990E4292A5A32528_gshared_inline)(__this, ___0_index, method);
}
inline SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 UnsafeList_1_get_Item_m41897491940D3D178691C7F1101DEB99E95BB872_inline (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 (*) (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65*, int32_t, const RuntimeMethod*))UnsafeList_1_get_Item_m41897491940D3D178691C7F1101DEB99E95BB872_gshared_inline)(__this, ___0_index, method);
}
inline int32_t UnsafeList_1_get_Length_mD6AFE8D014CB2BBBB71EAEE48E963F875D5BE036_inline (UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5*, const RuntimeMethod*))UnsafeList_1_get_Length_mD6AFE8D014CB2BBBB71EAEE48E963F875D5BE036_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED UnsafeUtility_ReadArrayElement_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m03D2F38EDF357F60204C91EB1F7B2B4C113FB141_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m03D2F38EDF357F60204C91EB1F7B2B4C113FB141_gshared_inline)(___0_source, ___1_index, method);
}
inline int32_t UnsafeList_1_get_Length_mE4C5AC9FBE80AB7D62FB657DD32E8D0A74D37F7A_inline (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65*, const RuntimeMethod*))UnsafeList_1_get_Length_mE4C5AC9FBE80AB7D62FB657DD32E8D0A74D37F7A_gshared_inline)(__this, method);
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD2E356C058B3F18CBF5581BCE77F04BF3B0BAC1C_gshared (uint32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		uint32_t* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4C08AA0CBE00A46C48B6E967C844ED7568DA130B(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_m49FCA17B1EA82BC89043916AE35B2B25E2F8A926_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_mE7CB6E9DBD58D7FF8B091AE465A1D12712C5A22E_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		uint32_t* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m297CF439D1BE81CB6A4A877FD0BA32CAF1A3AA04(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m9AA789A814843BC77DB8ADC09BACA0CFA3E57FFC_gshared (uint64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		uint64_t* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD95B365E56D531F3C7A22BD069D6C8E86000799D(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_m770FE830FFEDCE3ADEAA21A7E0AAC6622909A4D6_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_m03DCC2EF9D433A33DEE8B8CA5ADB5608D098BB87_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		uint64_t* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB7AEE61C22890A24D28D86F079E8149195D1A05E(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m1EC1785B6B92C27C7AD49C24E32F3F7A1F42854E_gshared (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_m2F84F7F9AC1F68346A0109A0C8FE9D47971DA728_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m5C1374A0C8A2CBA514CCD8F6C13D0F44C259EA2A(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_m5C49409BCC89BD6CBACAE82DFC71840215BD80E1_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_m3F4137B5AADCFA7FA0A0CC31D2DA3F808D70A5B7_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m0CB95117997354FFCAB2179C36CC7DBC0567CC90(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mC1D5FF9CE704B77B2710101D9236EE2BD80327BF_gshared (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_m18E06B373BB3C37DF8377EF97183F2E7E1343B59_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m64B69A10603259799FC6DBAD8FF5C3743227BEE3(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_m8D3A5BB3717D0E22B4C5194E8A3122E470C4B42D_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_m17982D3DAE7022F28B7FE80462E5CFB7B2F1EAAF_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m0B2CFA9F782EFC732BECCEFA3AFEA7B2E8379B33(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mCFEDE313798B7332DCC4A84FCB6DC5321A2CCB9C_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF09550A8D14871DFCE36A0847467B8FF495E5C3C(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_m31BE286C7AFAA4322ADEA3DD8815211F27657EFB_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_m32C6EB6E9D436FBFD63DAEA76A084D911D35ADD2_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8AEEAE4E2B476AA8B33C279C2E47B6B8F76DF4E2(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1F1C761E2D540947A18893783FF329BB2A3122BF_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m351753D3808F5DA1BC3543A7506F1A96E793148B(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_mE158D44295F3D0D919D3D85A4639B70E95FB30CE_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_m417EEC22DEC155712718382D8109241B1C7FAA16_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4BFC3A92E7609D96721297B94889E54C7741C256(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8DAAB21C73A86E89BC37803EBF6ED23FEAB75886_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3FECC6C83D6CC4D56DD514888B1E30F8863B8615(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_m7DBC25CCE21771B1CC5159A7FDAB7175437208F8_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_m127DE2A0AE977263D2EB19FDBB5528AEB0A023F9_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8CCDE874561FB4D528E1FF9408385C97C2F11574(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
// Method Definition Index: 118035
// Method Definition Index: 118035
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisIl2CppSharedGenericObject_m3F9A3C05698F58C6B64445866A5AA01E19388F4F_gshared (Il2CppSharedGenericObject** ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		Il2CppSharedGenericObject** L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppSharedGenericObject_m6EE8389B8D87C459484A3BC028D36C0F168FC3B9(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_mE63E6EDC34CD618E2322A451355260E3E6AEAF0A_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		Il2CppSharedGenericObject** L_23 = ___0_value;
		Il2CppSharedGenericObject* L_24 = (*(Il2CppSharedGenericObject**)L_23);
		if (L_24)
		{
			goto IL_0091;
		}
	}
	{
		Il2CppSharedGenericObject** L_25 = ___0_value;
		RuntimeObject* L_26 = ___1_provider;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_26);
		*(Il2CppSharedGenericObject**)L_25 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_25, (void*)((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 4))));
		return;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_28;
		L_28 = TypeTraits_1_get_IsAbstractOrInterface_m059CC2A94ADF230630FB14E4AD41D012B266D701_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_28)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, method);
	}

IL_009e:
	{
		Il2CppSharedGenericObject** L_30 = ___0_value;
		RuntimeObject* L_31 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppSharedGenericObject_mFFD315C3A2068D7DBBEA8C204854870078F3F064(L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_TisIl2CppFullySharedGenericAny_m04A099DDB2032FEB24AB43F3558594E4D1C6A4E3_gshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t9191BA6F24898B3B955C5C726ABEE0A0D45B068E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TValue_t9191BA6F24898B3B955C5C726ABEE0A0D45B068E);
	const Il2CppFullySharedGenericAny L_29 = L_24;
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		Il2CppFullySharedGenericAny* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		((  void (*) (Il2CppFullySharedGenericAny*, Type_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_23 = ___0_value;
		il2cpp_codegen_memcpy(L_24, L_23, SizeOf_TValue_t9191BA6F24898B3B955C5C726ABEE0A0D45B068E);
		bool L_25 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_24);
		if (L_25)
		{
			goto IL_0091;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_27);
		void* L_30 = UnBox_Any(L_28, il2cpp_rgctx_data(method->rgctx_data, 4), L_29);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_26, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)), SizeOf_TValue_t9191BA6F24898B3B955C5C726ABEE0A0D45B068E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_26, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)));
		return;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_31;
		L_31 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_31)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_32 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_009e:
	{
		Il2CppFullySharedGenericAny* L_33 = ___0_value;
		RuntimeObject* L_34 = ___1_provider;
		((  void (*) (Il2CppFullySharedGenericAny*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118035
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_Construct_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mEA374FB3B8010489AD62E7A55C6D600DF1FDF14A_gshared (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_1;
		L_1 = TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4;
		L_4 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_4, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		return;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___1_provider;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = InterfaceFuncInvoker0< Type_t* >::Invoke(0, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (L_13)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295FB767DA80CE0D7EFE2DE6E2C1CF60EF808615)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_0062:
	{
		int32_t* L_19 = ___0_value;
		Type_t* L_20 = V_0;
		RuntimeObject* L_21 = ___1_provider;
		DefaultTypeConstruction_ConstructFromSerializedType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4E59E3AF91FDF6BEE1756022DEBB51355958EA6C(L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 6));
		return;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_22;
		L_22 = TypeTraits_1_get_IsObject_mCFC39B415961472B9D0C975588C5790652D07C5E_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_0091;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_24;
		L_24 = TypeTraits_1_get_IsAbstractOrInterface_m6F3B4B3BAB68876720441CCD05E201430A47B62B_inline(il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_009e:
	{
		int32_t* L_26 = ___0_value;
		RuntimeObject* L_27 = ___1_provider;
		DefaultTypeConstruction_ConstructFromDeclaredType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m01F3DE0F9A6CA73ED229BA2EDC71D744E9CDE674(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 9));
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mEAAD10FD14A9E792B9C8431E75C83BD70F9021CF_gshared (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_6 = ___0_value;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_7 = (*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_12;
		L_12 = TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mB68209A0030BC9F6D196F3A9686AF83D6F603D38(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_10)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_10)->___value), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m3FBC26CBB34153F97E81DED982CC4D5EB584791D_gshared (StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_6 = ___0_value;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_7 = (*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC24893DF578B65F4229D958D2BCEF8F93AFAFB14(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m772543404FFF8E2DF08D35273198DD4F2A56A4EE_gshared (StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_6 = ___0_value;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_7 = (*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mE5B4D568EF902390F040939DDBDC7094D938F6E7(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_10)->___m_Value), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m569414A3AA85CDC9FFE8E0801C507B2087F57F63_gshared (StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_6 = ___0_value;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_7 = (*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m2C1D011E1FD01CCB622613A31D60C819D7AF4647(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_10)->___m_Value), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m92CC82E99213A55420B6C4E0A7E863924B1CDFBD_gshared (StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_6 = ___0_value;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_7 = (*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mF4C388C41960B03A61B493EA419DA83C5F5D2934(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_10)->___m_Value), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mA83FBD4D16E509D107FCCFEA73E4AB88FF87CD66_gshared (StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_6 = ___0_value;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_7 = (*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m300B1F8A4DB1F2EA7A343FC8398E09B956EC2630(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_10)->___m_Value), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m875F11770B5BFBA4EAD1D359EBDA40D6255EC503_gshared (Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_6 = ___0_value;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_7 = (*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_12;
		L_12 = TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m2FB41FE7F311960DD9587195982B4DA80A9512D6(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m7B6475EEA339071E8BC688A1AD7081F563853E59_gshared (Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_6 = ___0_value;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_7 = (*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_12;
		L_12 = TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mE7702322F8B50FC75D27605D999A23061EFDC79E(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_10)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_10)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_10)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_10)->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mA70D6D09253A0FC7C010CDB5B4A6BC8BCA45050A_gshared (BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_6 = ___0_value;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_7 = (*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_12;
		L_12 = TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mFAFFBF990207AA74216D68A29D75D15797BD5783(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m39EF20EBB3073EAD20554DC6A25E86C9601E5787_gshared (BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_6 = ___0_value;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_7 = (*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_12;
		L_12 = TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m33C14D4F5A73C10A23BF4C58AD1225DF84AE6CDB(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mD6E6428DE8C101922892312BB34E80CD47051B67_gshared (BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_6 = ___0_value;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_7 = (*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_12;
		L_12 = TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m46B72CA761B4D1CCA5DE3D49418CFD2A95D3BB13(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m7BD2889D07ED192967806BB2CB19A98DE71E23F9_gshared (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_6 = ___0_value;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_7 = (*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_12;
		L_12 = TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m079BE8AFCE0D35FD7BC7BFD8B9332ADE79B1B3C1(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mEDAEC17AEA2F2563049D59CF099AE152B5C4A5CE_gshared (bool* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		bool* L_6 = ___0_value;
		bool L_7 = (*(bool*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		bool* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m93C99FDF8783FA576AE4259A913940EE28A1757E(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(bool*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m604C9D5074E5499ED3510F6C06F1F699A5B405FC_gshared (uint8_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		uint8_t* L_6 = ___0_value;
		uint8_t L_7 = (*(uint8_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		uint8_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint8_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4C127919F17E4C929E2655C4034EB55EC21CF8FF(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint8_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEF042C26669B86DF96C1B9764D6086861FFB26EC_gshared (Il2CppChar* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Il2CppChar* L_6 = ___0_value;
		Il2CppChar L_7 = (*(Il2CppChar*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Il2CppChar* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Il2CppChar L_12;
		L_12 = TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m676AC6493B4E7C9435AE4D5B3CCD88CA82F0FEAC(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Il2CppChar*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5CD601D6141BD38C05036DCA2FA5690AFA942135_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF3F78B9E94843CD28EC5DDAF0BD693E759666D14(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mDD777297EF66679114BCFE216A51FF4A92009752_gshared (Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_6 = ___0_value;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_7 = (*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_12;
		L_12 = TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB855FAB6AF0A5CA09C9ABBC302B7EF4C260249F2(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m77F295F3C89CCFE78BBC37CE549356DA79E1631D_gshared (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___0_value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = (*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mEAB24B0BE2395E92D716C55C47FE4E0C2702DB30(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1E500A125B584CA98CA66DBA9AD4A1F4B07C905E_gshared (double* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		double* L_6 = ___0_value;
		double L_7 = (*(double*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		double* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m64655D4B23A6345C99CDA88F2C09CD4BA5701114(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(double*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m3CC8548CC819C9E9453AD8D3212BF5435A4913B0_gshared (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6 = ___0_value;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_7 = (*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_12;
		L_12 = TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9D3CE39F08B2E5DB645CB5C2BBC3236EAF921AC5(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m5B92EC70A571FA3CF4987D1E8BF74E8BDD84CCA6_gshared (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_6 = ___0_value;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_7 = (*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_12;
		L_12 = TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m38D334BC983AE8A31801220731C70B529FB91FB9(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m364F2276888AEC4D63F1084371DA2446D9768A0F_gshared (FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_6 = ___0_value;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_7 = (*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_12;
		L_12 = TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m96E9F2F809C013795D66B8C9E80F6403683BE7B4(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_10)->___m_CustomDefinition), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m89BEFB6B10F1473A1A93FEBBCB696AFF0FF225AD_gshared (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_6 = ___0_value;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_7 = (*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_12;
		L_12 = TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m00E8E315807018A3C5C84079A1A61C1D0882D245(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_10)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_10)->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisGuid_t_m24C3DE30952DC971F9DE3488B677A56C2DCF3030_gshared (Guid_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Guid_t* L_6 = ___0_value;
		Guid_t L_7 = (*(Guid_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Guid_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Guid_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisGuid_t_mECFCBA4EA93F443946274B9433836876E91A1984(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Guid_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mBDD923936A5BA6C892D5DC07C31E73322C6B2805_gshared (int16_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int16_t* L_6 = ___0_value;
		int16_t L_7 = (*(int16_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int16_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int16_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6535404DC61AE11D53BF23670652144E127FBE2(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int16_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9A7052CA2AE15AF4BF7BB6EAEBB51C92EBE29A9A_gshared (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int32_t* L_6 = ___0_value;
		int32_t L_7 = (*(int32_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int32_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4FD17FF3040D19F1C64154A84088275CAE4390F(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m76B6148B3DEB5D6BA87E16CBE34D86A7161D99BE_gshared (int64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int64_t* L_6 = ___0_value;
		int64_t L_7 = (*(int64_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int64_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int64_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7D04EB848C9F153C75F938B8E6A205C7AE51E3CB(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int64_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mF65310E952866CCF3E25885DA15E2DE6C65BFE04_gshared (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_6 = ___0_value;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_7 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_12;
		L_12 = TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4B9956DC88B27A3420B374A86934A1580F95E641(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m53B8F46B671EE42BE04A82BC491D1BBC3548CE6A_gshared (MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_6 = ___0_value;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_7 = (*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_12;
		L_12 = TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m228F432AA230B8A1D129A86B4282CDEBFF0E8FF1(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_10)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_10)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC49192D678E3D7C2D78919C4A7E78FABAAE65AEB_gshared (Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_6 = ___0_value;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_7 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_12;
		L_12 = TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m65CECBA19C2C6A630F400B878D9A92233A17655A(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mF4E67645DD4C8893DAE96CC2D833995FE9E14069_gshared (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_6 = ___0_value;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_7 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_12;
		L_12 = TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m194E3DA741BDEBF25A3C60B0FC34EF1F3B195181(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m78F3789F8EF8DD77BC794F6E83348B2AC3F22DA3_gshared (int8_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int8_t* L_6 = ___0_value;
		int8_t L_7 = (*(int8_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int8_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int8_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1C21A325511C1DFF6CBC5E48BCFE2D3535E79222(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int8_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mF4288D5BE14AD9AE051C865FAB0A6B61779DB5EC_gshared (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_6 = ___0_value;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_7 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_12;
		L_12 = TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCDF7D0BC6E47B30BE64EA588236670B5C24471(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m9459FA0DC81D07516504071C1B5A0A807DD387A2_gshared (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_6 = ___0_value;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_7 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_12;
		L_12 = TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m4EB769AF4C3059A0CAEC5384DFCC54113F7F8396(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mB18369C278CBA1D6A41D7FDE4B890F0F46605BB7_gshared (SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_6 = ___0_value;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_7 = (*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_12;
		L_12 = TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mC5D8B8F9EEB58D783AC99030F90C33085E29E0F4(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m776CBDD856554FB5A2C7AB9773E1BF2412A96901_gshared (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___0_value;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_7 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_12;
		L_12 = TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m3BF19D40A8D1A8DC67B748499A90F1D95E5F9D5E(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE90D52FFD80EE44D458B2DFBA79EACBBD406B96_gshared (float* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		float* L_6 = ___0_value;
		float L_7 = (*(float*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		float* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDF31B5C8D4CF6F63DBC402F93A4902BB41AF617A(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(float*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mEFB5BEB5FDEC28A5D09202EA365372AA31D3033C_gshared (StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_6 = ___0_value;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_7 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2BACF7BFD6126FA92934886441023C14606E4D8C(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m00C9F1C19BC3B939EE4470420920F50C55BF388D_gshared (StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_6 = ___0_value;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_7 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m46250B5C56ACB8D9C79870A7B547FB2700AF15B3(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m847D894AC5B7189AA57A60E52296E94747210A3E_gshared (StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_6 = ___0_value;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_7 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m5D38FA37D87EAA704CFB58AEA11F3EC39AEFF1E7(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mF3AA599566FCE58578CBA1DA74685B58E643ABA0_gshared (StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_6 = ___0_value;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_7 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3637F91F0F17A00FA935D28B4E541C9B060C9BA6(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m3A29E116CC6818B3C37647F583F631517695886B_gshared (StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_6 = ___0_value;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_7 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m259ED3223591E91BEB1F81712D52CCC8D3BAC6A2(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mDDF670FDB5E8804FE71F4EBD6C4A00FFE644AC51_gshared (StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_6 = ___0_value;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_7 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m6DEE07D679CA855AFD3A5419D9392C42D17B2DBB(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF8926E4A927D099A287611E1F514687A0B551F80_gshared (StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_6 = ___0_value;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_7 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mEB25031BEABB5F3EA90DCA5BB3F5BCF1640CC094(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m01A1CD774ABEA31C2084F5914F48645627BDB956_gshared (StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_6 = ___0_value;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_7 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mF6CC1C6523FEC87FC4FE2C056B2EA79FF9D86A99(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_10)->___m_Value), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m2F0D2ADE84D98D0E039EB5F586FA61550F71C336_gshared (StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_6 = ___0_value;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_7 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mD207EE98CF8D058E65D12DB022E33A4B5E4DBF37(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_10)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_10)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m49812FB28C505CBA20D012B6F8831009463ABD66_gshared (StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_6 = ___0_value;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_7 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m6FFB4DCD0AF1BEB615B3D00D50BF35CB0B9342C1(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m6B4FC6E7B434FC82E27649A4701A0F3AB039DCE6_gshared (StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_6 = ___0_value;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_7 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mF9A7C0989CE2A8051406819F505D0BA6C5D50838(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4F484756BC2765B919660E4B2BFA7D9319854D01_gshared (StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_6 = ___0_value;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_7 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4CDC2E13990212E21BC38FB599391C977775D485(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_10)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_10)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mC8C9DED372AB813363BE8764CFD1156E610B7660_gshared (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_6 = ___0_value;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_7 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_12;
		L_12 = TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2191540D865D5C6B6E89077C71F21A78C85DA981(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_10)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mF3D3B9E917E91E2EF3384B3942A29B65097D59D1_gshared (StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_6 = ___0_value;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_7 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m0C16A19AA37F598E96FC43BAC034C1CE27D61FB4(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m40B6FA59BDCC21207EF68E533E8F358C9336E697_gshared (StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_6 = ___0_value;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_7 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m1C4E73EB209FC1E0BEB6E7B43C34FC4D6D65F174(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mF3173E82F5C35D96E40174140388A0C49B4E8446_gshared (StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_6 = ___0_value;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_7 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1ABB8FA4111774E4DB8BF236FE133FC3B853EB31(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m990A4000698F5D7A6E19D202EC346376575B7071_gshared (StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_6 = ___0_value;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_7 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA634FD62CD696DF6FA017D329A422645957FD156(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC57F2086DA17D48CC6B0D81C4B26B0ADF2868BDC_gshared (StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_6 = ___0_value;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_7 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mF96AA496A11ADAECDE405B0CBA3473D8F5EE6619(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m52739BB665B4AE5BC1F03EEA9A5D4A08BA00BEBC_gshared (StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_6 = ___0_value;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_7 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD8DB6F2EA0ADB994693DD77768291584174A4DE9(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m95558AE95B05BA2AC2C98EBE1BE4DF8C43A58C88_gshared (StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_6 = ___0_value;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_7 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8F366B3C02A71BF04557B18BB55876D5CD8B5729(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mEC38548D1BD8381C1124E56171BBAB709759E1AD_gshared (TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_6 = ___0_value;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_7 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_12;
		L_12 = TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m32FBFE43FB00D4EE2A5BEECD7F1917EE537F64C1(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m1EEA3AB22FD48FBC88905FCF8E347FF82EBF2786_gshared (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_6 = ___0_value;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_7 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_12;
		L_12 = TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB61B6A4D7F0D0D8484013630AEFBA149769B6FE7(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mB953A2ADD5A9C0B6EFA84DE40FFCD15D99CCDFF0_gshared (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___0_value;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
		L_12 = TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mBE6CC421D48125AE28A56D9CEB17E48BC28B0BD7(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m4F75049000596F3FAA6922CE9D4ADD8B13730261_gshared (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_6 = ___0_value;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_7 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_12;
		L_12 = TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mBA193AA99BF2D7E99E6046F941E05C99A235A63B(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mEF0B747BC952130E59648D130AF59C23520743E4_gshared (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_6 = ___0_value;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_7 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_12;
		L_12 = TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF91B67E9FF2B0279DCF329767CEB8D6414F146BB(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mD702F3DCDD1C319EB58FB3B2E403662170EAA070_gshared (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_6 = ___0_value;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_7 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_12;
		L_12 = TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3225CACF659C94C96CDD6A17CA6748484119CFF4(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0A207A1390DDB387150D3EC544D60D0269EF7B16_gshared (uint16_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		uint16_t* L_6 = ___0_value;
		uint16_t L_7 = (*(uint16_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		uint16_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint16_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA5679E431BDBAE50B0DFC594932302085A788F09(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint16_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m297CF439D1BE81CB6A4A877FD0BA32CAF1A3AA04_gshared (uint32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		uint32_t* L_6 = ___0_value;
		uint32_t L_7 = (*(uint32_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		uint32_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint32_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCF9C5D3E23A02EEEA6B3E35B7E443E9DA28CEA(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint32_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mB7AEE61C22890A24D28D86F079E8149195D1A05E_gshared (uint64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		uint64_t* L_6 = ___0_value;
		uint64_t L_7 = (*(uint64_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		uint64_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint64_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF97DADA2889CD0267F74DF9C277E80F0381E68B4(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint64_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m0CB95117997354FFCAB2179C36CC7DBC0567CC90_gshared (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_6 = ___0_value;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_7 = (*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_12;
		L_12 = TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m52D195BCA674D7A5AFAB9D5B0190539F6CD56324(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m0B2CFA9F782EFC732BECCEFA3AFEA7B2E8379B33_gshared (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_6 = ___0_value;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_7 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_12;
		L_12 = TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m3EA91B634E3A21FC9EFEE2E64BF37BA4ED935F83(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8AEEAE4E2B476AA8B33C279C2E47B6B8F76DF4E2_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1D21AED87DD63F2A4BD2CD895FD0C931821C1514(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4BFC3A92E7609D96721297B94889E54C7741C256_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52C36F69CCBFAD459D6F20B67E282EAD24432F7E(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8CCDE874561FB4D528E1FF9408385C97C2F11574_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___0_value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_12;
		L_12 = TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2D2C323EE1D18FF02FAA35EA6FB3610F2FCD9DB9(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppSharedGenericObject_mFFD315C3A2068D7DBBEA8C204854870078F3F064_gshared (Il2CppSharedGenericObject** ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		Il2CppSharedGenericObject** L_5 = ___0_value;
		Il2CppSharedGenericObject* L_6 = (*(Il2CppSharedGenericObject**)L_5);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		Il2CppSharedGenericObject** L_7 = ___0_value;
		Il2CppSharedGenericObject* L_8 = (*(Il2CppSharedGenericObject**)L_7);
		RuntimeArray* L_9 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_8, il2cpp_defaults.array_class));
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_003c;
		}
		G_B3_0 = L_9;
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_10;
		L_10 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_11 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Il2CppSharedGenericObject** L_12 = ___0_value;
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_14;
		L_14 = TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917(L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Il2CppSharedGenericObject**)L_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_12, (void*)L_14);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		Il2CppSharedGenericObject** L_15 = ___0_value;
		Il2CppSharedGenericObject* L_16 = (*(Il2CppSharedGenericObject**)L_15);
		if (L_16)
		{
			goto IL_006f;
		}
	}
	{
		Il2CppSharedGenericObject** L_17 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_18;
		L_18 = TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026(il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Il2CppSharedGenericObject**)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_17, (void*)L_18);
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppFullySharedGenericAny_m71A1FEF939D361B44DAB613DD59CF2129027E531_gshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t242EBBBE2535A9B5C2F45562687319EBA47A28D7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t242EBBBE2535A9B5C2F45562687319EBA47A28D7);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_16 = L_6;
	const Il2CppFullySharedGenericAny L_18 = L_6;
	const Il2CppFullySharedGenericAny L_21 = L_6;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___0_value;
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TValue_t242EBBBE2535A9B5C2F45562687319EBA47A28D7);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_value;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TValue_t242EBBBE2535A9B5C2F45562687319EBA47A28D7);
		RuntimeObject* L_10 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_defaults.array_class, L_9);;
		RuntimeObject* L_11 = L_10;
		if (L_11)
		{
			G_B4_0 = ((RuntimeArray*)(L_11));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(L_11));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_12;
		L_12 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_13 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Il2CppFullySharedGenericAny* L_14 = ___0_value;
		int32_t L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_15, (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_14, L_16, SizeOf_TValue_t242EBBBE2535A9B5C2F45562687319EBA47A28D7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_14, (void*)L_16);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		Il2CppFullySharedGenericAny* L_17 = ___0_value;
		il2cpp_codegen_memcpy(L_18, L_17, SizeOf_TValue_t242EBBBE2535A9B5C2F45562687319EBA47A28D7);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_18);
		if (L_19)
		{
			goto IL_006f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_20 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, (Il2CppFullySharedGenericAny*)L_21);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_20, L_21, SizeOf_TValue_t242EBBBE2535A9B5C2F45562687319EBA47A28D7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_20, (void*)L_21);
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m01F3DE0F9A6CA73ED229BA2EDC71D744E9CDE674_gshared (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int32_t* L_6 = ___0_value;
		int32_t L_7 = (*(int32_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int32_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m28D968A9EF7B221F20A5A6F2853F69585EDDF55C_gshared (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_7;
		L_7 = TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_4)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_4)->___value), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_9 = ___0_value;
		Il2CppFakeBox<KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_16;
		L_16 = TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_14)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_14)->___value), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mAF264B740E618C6952A4F4E0715629CF783CC0EE_gshared (StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_9 = ___0_value;
		Il2CppFakeBox<StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m235AF4A1DE0BFCF83769FA2679D85413D7E3833B_gshared (StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m281CED37618A25573CC4D58C97152E6FCA744AE8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m7AF6959248FE34418A7CE3EE5E78680F237F3A41(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mF96F7C95E121ED00446070B432385B114D58AC69_gshared (StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m4DF96EFBE097C17BF62272A0C6340D8AE72C657C(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE8A1AB2E9E9B49488A93FCD2B86F77A25893346E(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m24A35097CB788FFB6323D0D89249F1B5EF1809A8_gshared (StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m0D77DD60514ABFC7B1C56B2D56111E61FEA6FA82(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE2FC596D6CE7CB8E9659399EE4C9DABC8D871103(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m8D330D30C54538F45F48B3A654D0F3466F3ACFB9_gshared (StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m159E2BD6FEBA9EDAE6D74A117DC4FFAA5042E3D0(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m946658B27C78F1B41B7C365D2C412A2C0C4768D1(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mA6B21070552A6009D07635DF6E7789ABB7722279_gshared (Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_7;
		L_7 = TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m9A5215A4152CEC4DF1A24F59B24399473DA7F261(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_9 = ___0_value;
		Il2CppFakeBox<Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_16;
		L_16 = TypeUtility_Instantiate_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAEC3FBA39DEC930DDDEF597E464BD7C804C5D05C(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mD083F082DAEFDECF3A9F25C2829A7BDB9353AF27_gshared (Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF8C1E97193ECF4B53A44C3C1ECDAFE16C67B8647(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_9 = ___0_value;
		Il2CppFakeBox<Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_16;
		L_16 = TypeUtility_Instantiate_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m6DF338468D32365904E0B2DBDC664DB97D1B0291(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m5A4477C18C075975B8774950C87E25F1FFA7D75B_gshared (BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE6DA1D7AC2CE4B25EF152A21566CB5ADA6D8F295(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_9 = ___0_value;
		Il2CppFakeBox<BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_16;
		L_16 = TypeUtility_Instantiate_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m54D4189802174B0AA0E99B59BAD924E484A80696(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_mBE2921D79A6BB64048FC8CF581C0A42B9BBCE5AC_gshared (BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m6AC0170455B90A67CBAACCDD442DC95ABFD6D519(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_9 = ___0_value;
		Il2CppFakeBox<BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_16;
		L_16 = TypeUtility_Instantiate_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0C69A18A43A2E44105889800F21D1215AA8A5E1D(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m764E82D01F79078C65BC88FB94CA13E010963C91_gshared (BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFDEDCB17D521CA4B385F04161EBEA9EA14D95F6E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_9 = ___0_value;
		Il2CppFakeBox<BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_16;
		L_16 = TypeUtility_Instantiate_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m55C8EBC82EDFA8FAFB924ECE0705DB118140972F(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mF475AC32FDB21BEB94275DA284698B33D6D21343_gshared (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_7;
		L_7 = TypeUtility_InstantiateArray_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m006A7164A9139A2EF3A041D65E369D41CB6444DE(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_9 = ___0_value;
		Il2CppFakeBox<BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_16;
		L_16 = TypeUtility_Instantiate_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m81F1BF80A7E7DAA33D9C22FF3010C44ACE23EC81(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m70A293A86E05E0412470583AC2A5C667179E5B5C_gshared (bool* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		bool* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D61874C339DFDB87955AA8F5662B167D5E769C1(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(bool*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		bool* L_9 = ___0_value;
		Il2CppFakeBox<bool> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		bool* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = TypeUtility_Instantiate_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m61658CC7B6E2962DF750E9611E884DE58CBD7CF1(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(bool*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3F8B61F9D52F900CB8C5767FA7DD50FD37C9C480_gshared (uint8_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint8_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint8_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C80F9E94423A3E2D1E82D97BFCB0A36BB9C8DC7(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(uint8_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint8_t* L_9 = ___0_value;
		Il2CppFakeBox<uint8_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint8_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint8_t L_16;
		L_16 = TypeUtility_Instantiate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m019581577126A0BB6BC129144339350367173F2C(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(uint8_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9B09D05A438A3EE8E7715CF067186B655C63A412_gshared (Il2CppChar* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Il2CppChar* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Il2CppChar L_7;
		L_7 = TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDC60F7CBC30F8F1CDB241602647982EFB70B4049(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Il2CppChar*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Il2CppChar* L_9 = ___0_value;
		Il2CppFakeBox<Il2CppChar> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Il2CppChar* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Il2CppChar L_16;
		L_16 = TypeUtility_Instantiate_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4E69CBE571B420D4739367A1A684594E9176FA57(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Il2CppChar*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mC3CB2D335373C9CCFF640902ED3A0E3ED615A70B_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m59565BEA037538F9616274F0904A21A92E505410(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = ___0_value;
		Il2CppFakeBox<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = TypeUtility_Instantiate_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6F30A60D4188472BE371258A1BFDB523943245EC(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m6DEE0AA38FED165F9B8155B2973421601E865685_gshared (Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_7;
		L_7 = TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF998B0C8639046CB042624DD1E8E2EEE41483A20(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_9 = ___0_value;
		Il2CppFakeBox<Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_16;
		L_16 = TypeUtility_Instantiate_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m231C619D716B7251BE7A56BCB128745D7A365C19(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m814B6363665FBBC032E931F432B32DEAC7051D44_gshared (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2A5D0D0C5D4BF967B0002C561CE2B0AC076C0403(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_9 = ___0_value;
		Il2CppFakeBox<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = TypeUtility_Instantiate_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9FEFFAEBA7DDF77EF7BC781305AF1B539557A7B5(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m2FFC5459031720B3F26B7A296D2DA3D824F9D4FF_gshared (double* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		double* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEFAE44987A1E68F504981A4CDC33EE7BF2DE9A88(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(double*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		double* L_9 = ___0_value;
		Il2CppFakeBox<double> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		double* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = TypeUtility_Instantiate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4E3F11E66287C360381FDCB1DA2CA86725108774(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(double*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mCC65E81157487362C380EF31F8583F32AF9C0FB8_gshared (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_7;
		L_7 = TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA76F2DBF6B6D348502A244EED660C295B53699C8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_9 = ___0_value;
		Il2CppFakeBox<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_16;
		L_16 = TypeUtility_Instantiate_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBD4D352377EE256EE21A9E2178B41FCB240019FF(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m7BFA6A7E4D07E860C65B775E03D0F8E7F6107350_gshared (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_7;
		L_7 = TypeUtility_InstantiateArray_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m75B9862930FC31C729C49492246FBD61799D239D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_9 = ___0_value;
		Il2CppFakeBox<Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_16;
		L_16 = TypeUtility_Instantiate_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m571A629A5658918FDCA0FD56D52270B49F8E08AC(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m10F4D600384100472A4C3915231A5C121DC90696_gshared (FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_7;
		L_7 = TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m45593409D374AE79EA5A1F2A4B6F52B61EE002F8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_4)->___m_CustomDefinition), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_9 = ___0_value;
		Il2CppFakeBox<FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_16;
		L_16 = TypeUtility_Instantiate_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m463CF737CEC740B04F54A12BE8980E180E704C25(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_14)->___m_CustomDefinition), (void*)NULL);
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m15E2A8D5004CC018972C429E9237F84CBA7282E9_gshared (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_7;
		L_7 = TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m7B72C49E6CAE91CFB6C5A545808672BB4FD6A4B8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_4)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_4)->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_9 = ___0_value;
		Il2CppFakeBox<FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_16;
		L_16 = TypeUtility_Instantiate_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB244C132A6AC508484D18A78E401891F6D04B921(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_14)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_14)->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisGuid_t_m373D7B7681452AF9BF0B08F1009C4C51F2D34C21_gshared (Guid_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Guid_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Guid_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisGuid_t_mAE74D365457CE44D013FBD6F5C8910BA1685DE5F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Guid_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Guid_t* L_9 = ___0_value;
		Il2CppFakeBox<Guid_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Guid_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Guid_t L_16;
		L_16 = TypeUtility_Instantiate_TisGuid_t_mA90DC3C8C09A7C9E6568E92268FBFEC92D9DD32C(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Guid_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m45F8974479F366DACAFFB58D4344AADC9F84C108_gshared (int16_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int16_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int16_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m77243DEB812D7D2296B1AF569812F8312273A29C(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int16_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int16_t* L_9 = ___0_value;
		Il2CppFakeBox<int16_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int16_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int16_t L_16;
		L_16 = TypeUtility_Instantiate_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCDB0D19649FB27FA7581762E8F49F57B9B7CDFA3(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(int16_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB820FD22B70937B4CFC277F33CC6C8D24317C29F_gshared (int32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m21D4F0D04451F49CAA1F911345ACECF52DC69E78(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int32_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int32_t* L_9 = ___0_value;
		Il2CppFakeBox<int32_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int32_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = TypeUtility_Instantiate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED72462427639D9AEE6A910BD83F37CA49CC7C7(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(int32_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A1EC2DB3428D0356639EBAB351903DBA5D2522B_gshared (int64_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int64_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2EF2E3C13101502B574BC39E2715C72FB8459364(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int64_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int64_t* L_9 = ___0_value;
		Il2CppFakeBox<int64_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int64_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int64_t L_16;
		L_16 = TypeUtility_Instantiate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA517D386045B05E3C434AF7A8670DD6AE7817C6F(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(int64_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m35E4D801CF5C40778B5BD08285056128187D984E_gshared (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_7;
		L_7 = TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4F8CDB2A2F64850B2325B9FE8089EAFB41DB7CEF(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_9 = ___0_value;
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_16;
		L_16 = TypeUtility_Instantiate_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m24AD2F55FB14086FC4CB1F422B3F4B1CAC7C424C(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m200F78C36CFAA916A443A27A597576E96442CB79_gshared (MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_7;
		L_7 = TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDF64A60F47F7DA7BF9766BA49DFE19C0380CBA02(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_4)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_4)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_9 = ___0_value;
		Il2CppFakeBox<MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_16;
		L_16 = TypeUtility_Instantiate_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m60B5595B39DAF4209FF6D63C7848715A38C2BB74(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_14)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_14)->___propertyValues), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m7D5402B4F97F38D206368AA1ECFDA324285B6251_gshared (Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_7;
		L_7 = TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC74924F19E1B4FE89E11350F5E4359CAC02E9031(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_9 = ___0_value;
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_16;
		L_16 = TypeUtility_Instantiate_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA23957AACEC7AAEEDBC4CC0C62EBBB1CE44AF7E(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m88C91A6DBA7B9BFBE1E23B2FE7AA5DD2C0578831_gshared (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m535DE2604C90D93B5EF29E60563BF287510E68CD(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_9 = ___0_value;
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_16;
		L_16 = TypeUtility_Instantiate_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m7580D6813951CBE8AFDD15F8F0A4518B3AE2C17C(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEE43F5D7057D3CB4259DD8925788D72BDDE0E39B_gshared (int8_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int8_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int8_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9AF7AFAE2BC8E88458985B397188B65D6429F15(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int8_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int8_t* L_9 = ___0_value;
		Il2CppFakeBox<int8_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int8_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int8_t L_16;
		L_16 = TypeUtility_Instantiate_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m0E989570F78731ED52B034096038E7CE0D3CCF2F(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(int8_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m1FB43C1CE60575ED88D313FD25CDB559EDB1AF50_gshared (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mC2966E423F30D5B816EFD749C8D82415F1A4CB9E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_9 = ___0_value;
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_16;
		L_16 = TypeUtility_Instantiate_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE05F2EAF164B530101B9452875662EA603AF0943(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mD058CA912F58AD6CB0F6060E622A2642CD0CF9DF_gshared (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_7;
		L_7 = TypeUtility_InstantiateArray_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m48083B48EE4106A0A4B2A2F753654C22A0B2CD57(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_9 = ___0_value;
		Il2CppFakeBox<SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_16;
		L_16 = TypeUtility_Instantiate_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m2F782C8E3367E118D7005949C9EEF78B40453A30(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m8849687B91E7AD3A690DC40B263EB2D71341049B_gshared (SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_7;
		L_7 = TypeUtility_InstantiateArray_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m186DF1FFCA5C1283B94C0E9C682C8D450D7A0322(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_9 = ___0_value;
		Il2CppFakeBox<SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_16;
		L_16 = TypeUtility_Instantiate_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_m467D8399F884B6D33BE790AE7645AF12EF4D0B0E(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m4A90D248CA7148FC9EA9511C88D2FDF613A1CBB7_gshared (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_7;
		L_7 = TypeUtility_InstantiateArray_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m5B5F510277B7F1AE98BC66363D93731E7B3A2C38(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_9 = ___0_value;
		Il2CppFakeBox<SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_16;
		L_16 = TypeUtility_Instantiate_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m8EBAB63E9115044FB7F43F5D64326813EC053159(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m59BE1148E095904C69F4CC3DBCFC6F7A9449309E_gshared (float* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		float* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF09E7466EBA4308168509A2F9728A7EA9E6CED6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(float*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		float* L_9 = ___0_value;
		Il2CppFakeBox<float> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		float* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		float L_16;
		L_16 = TypeUtility_Instantiate_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m250E596A76F4E90F0DA755803C33EBDBFE539487(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(float*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mE324A50B9DE0A2C3E774380C5EA4F3A5E6AB80AA_gshared (StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m57B789863DAB7572F3BD82A3E4725BABADD7EEF1(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8135215FC2AB524181F24E66F7435414D834E2BB(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m1276E1D510D4433572AAC99736ABC70EC1DEDDC5_gshared (StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m8CC06B652F2EDCE2EC3632D5DF1D101B2926EBC9(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE343813C9CA5A97BC75783CB6DAF2F616B3B55AE(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m209101A5876A7E297D4AD7B82B56F36E1FDF0B6F_gshared (StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0A1D4C8D7477CED01A3F834003DB6E501DCFDE69(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA0D45D320F2FF075FAC8E7D1DC59525229D3725B(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mE18FE3E912D94303BE5FA537BB385DDA1B4EFF69_gshared (StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m6063BE63BFEE553B550EDAA3CF5EB963962631DB(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m87FB8CC317081B9CDD71674EB3781C942CC548DA(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m3654FC305FED7F4CD725D5E02C2C7E7EA2F65F15_gshared (StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m34A0EBBE05C15B267EBD94EEBB155A53A0FDA121(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_9 = ___0_value;
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m0FA12EC0938963C3D515A0E51C10A1361572DE60(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mCEF73D2AE122C113D85D92DD704609ECE779CD70_gshared (StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m014366206E3CB9987B29A33B4C65423A04C1F7F2(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_9 = ___0_value;
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m70E21575B0F6E9AD50345A82D64B3CFB514689F9(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m5D5323C65D50CA3DD4AAC1C3ED314DC9FD009FB8_gshared (StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF7E17FA9A5CF34996D23E79DDB9E5A20927DB9FB(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_9 = ___0_value;
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m50EDC2B685C7A805F736D71A9F2C53718CBD0A15(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mBB5DCF6EC63FEC323A37D31F19ACB4477D49D0C6_gshared (StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6B000117BFE4A9051BFE17BFA36CB9757F702219(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_9 = ___0_value;
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_16;
		L_16 = TypeUtility_Instantiate_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0F2B5235B5E057586363B03F727359967889C90B(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mC59E1554BF9B8D93CACC8051188D812A076FBBB2_gshared (StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8A0C7DB3A87350D4B09D2895CC4E63DEB2B848F2(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_4)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_4)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_9 = ___0_value;
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8ABF236CBC8462A860F41962378F343ED976194A(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_14)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_14)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m65BBFE862EAB346481CD54FC48AB815F83BAAC94_gshared (StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBF031D97952C18A00E5BDEB0721BF94BF16CD11A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_9 = ___0_value;
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_16;
		L_16 = TypeUtility_Instantiate_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mAE76E5A7A00036D7B4F5F084D60FD3A552229EAF(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mCC82E05F0EB4027C34DABADAF0C976FD9E1DE960_gshared (StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3D788ADEA04B7BE35B443C002B92D07035EF0DC4(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_9 = ___0_value;
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m60378479ECF71A3A591DCD4BA34761B4F0C3DE9A(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4B585B38C16F95E302C96B84FA229E484211088F_gshared (StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mE590319AC35556C5E5507A5A2FABB8063FE182A5(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_4)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_4)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_9 = ___0_value;
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1837276E59C8F890FA9BD44A8E51670023ECE350(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_14)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_14)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA517E36622A6F6759D92A53187CF0394697BEFA1_gshared (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_7;
		L_7 = TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDEE17C84F12ED15070F7EBBEE81874E3E0C6818D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_4)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_9 = ___0_value;
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_16;
		L_16 = TypeUtility_Instantiate_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m46FB416B10EDE0BAF84497C1B05A233320C5B6F7(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_14)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m5E61A620CB3C3667DCA3999F1A0429F84E1CDDB4_gshared (StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA756B0A0DC07FEF686A4B6DD4B65E8B8DBDE19E7(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_9 = ___0_value;
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m29FD1830C307E4141B84C66A9C31AFC09D375C16(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m648B07EF6E0B1FF32766E5CA6FB2E2F6A64BF496_gshared (StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5374D0E9476392FC56CA0A195B4DE560BFF8E25B(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_9 = ___0_value;
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_16;
		L_16 = TypeUtility_Instantiate_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mADFA8E2A5519178DEFEA9FC206101B9A6A935215(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mD56A4D734D0D263ABEC1803D77E94DFEC8028169_gshared (StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m29B340D26E10C35961DE46EA02E9B226747BDB03(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_9 = ___0_value;
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_16;
		L_16 = TypeUtility_Instantiate_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m89DC23C50C35515832873025FB64E06C08178C78(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBE15D3F788891B5F260D33FAC7D340968C78D795_gshared (StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m48BB0241A4C98023239CF2CF4F989F4A3486EB73(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_9 = ___0_value;
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBFFBE5F19DBF010277EEACCE9F31DCE0F9E6735D(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mD473FF119E5ECC61ED785574E9BF7694E1F531C4_gshared (StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC60437D4258CCC0EED436E2308135742FFA1A486(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_9 = ___0_value;
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m31926283C0C84C3057DC37C1DA770840CC661F47(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m9C1D9DC7194CF1C30BAD71B15F20C49BC5B63AD2_gshared (StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3B0C8A2D533799DB7C894ED49FD99469A4F30379(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_9 = ___0_value;
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m20C781C9BF6F5A1A4976D3FB3307BBB54013A22D(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m6F95B372358579B6081E9DB7D687F871ECC37E7E_gshared (StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5391C278FF0A30D77C5BA81B4DC8FA234AD0DBB1(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_9 = ___0_value;
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8674710498BB040D77CD5485B6159C2E4CB1C905(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m2BD0AAEF33B95A3E8D9866C9A69A44A8EE183AFE_gshared (TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_7;
		L_7 = TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m0D082C6C1E325E8A3094CECE4109FA2B6BC845B0(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_9 = ___0_value;
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_16;
		L_16 = TypeUtility_Instantiate_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m967DD2CBFA6BC947E4DE2E707BCBFFC9C3934E17(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mBC82ACA33F525F52C9E2121D10ACCC58BBB8D3A4_gshared (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_7;
		L_7 = TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m356574AB280892F8D70F84B2A9B57B31DFDCE6A2(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_9 = ___0_value;
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_16;
		L_16 = TypeUtility_Instantiate_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB6BA523635A2359078BF52FEA9788A0A4B8AA298(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m5FB51A86BB1B9DE625F5028713B4468C344A0214_gshared (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
		L_7 = TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m75AB3D5EF5305A5B9290D155687FCF8E45EF3A7E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_9 = ___0_value;
		Il2CppFakeBox<TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_16;
		L_16 = TypeUtility_Instantiate_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mFCE31CF4FFACE349B84F71ABF91EA5C7C023D562(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m3C5173FC3D2FE468C7A4AB04C236960E7A16AA07_gshared (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_7;
		L_7 = TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8C67F670872FC5934653ADE5A00B1A82E371381A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_9 = ___0_value;
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_16;
		L_16 = TypeUtility_Instantiate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0812591A8DD4A523E6213E0EC9E2E87E2603C8BE(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m4D7415F991D31F5E46D020A0C936F7091F808EAF_gshared (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_7;
		L_7 = TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC144E3A67D34A3ADC811A1450B274DF968B1532A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_9 = ___0_value;
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_16;
		L_16 = TypeUtility_Instantiate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mBFDF9F0C56F5150550EC0074D77E66CF3931BA2E(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mAB2DB89846F6335B8ACE93881293667963BA33A4_gshared (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_7;
		L_7 = TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8F81C8DA8CF30FA56CE13BDA4ED0CABE5A33632A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_9 = ___0_value;
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_16;
		L_16 = TypeUtility_Instantiate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m2BA2550AF563D560E55F3DD1D75E13BDC7B215AF(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6FFE10C5369412576D2B9B5201FD47AEF0A71978_gshared (uint16_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint16_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint16_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAE4D88E99CFBCB527FDB8A69CFC234FFAB8BDC64(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(uint16_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint16_t* L_9 = ___0_value;
		Il2CppFakeBox<uint16_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint16_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint16_t L_16;
		L_16 = TypeUtility_Instantiate_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1888A6DF19F8A7D8B0EC95CEB7684676AD7B53A2(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(uint16_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m4C08AA0CBE00A46C48B6E967C844ED7568DA130B_gshared (uint32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint32_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint32_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m350E3A1013B8463C9CAC39E8CAAAEC2FE3BC4AA0(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(uint32_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint32_t* L_9 = ___0_value;
		Il2CppFakeBox<uint32_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint32_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint32_t L_16;
		L_16 = TypeUtility_Instantiate_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m60A7F02D1165DBD7B8A86C32223D074AC470A12D(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(uint32_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD95B365E56D531F3C7A22BD069D6C8E86000799D_gshared (uint64_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint64_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint64_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF99178F8ACBC316A69EF45E4E708AC636A43E18E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(uint64_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint64_t* L_9 = ___0_value;
		Il2CppFakeBox<uint64_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint64_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		uint64_t L_16;
		L_16 = TypeUtility_Instantiate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA4762190B1329BFA260B76486E12EB9C8DC3C395(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(uint64_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m5C1374A0C8A2CBA514CCD8F6C13D0F44C259EA2A_gshared (UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_7;
		L_7 = TypeUtility_InstantiateArray_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_mBB86906C84C632622706EB0E1D58592E2F0BE5B9(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_9 = ___0_value;
		Il2CppFakeBox<UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B L_16;
		L_16 = TypeUtility_Instantiate_TisUntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B_m3DEC820AFCE18157B25C29535135BA7D21814B53(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m64B69A10603259799FC6DBAD8FF5C3743227BEE3_gshared (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_7;
		L_7 = TypeUtility_InstantiateArray_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m070E76F9C74340B63FCC7C6B4C3CA7541851A290(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_9 = ___0_value;
		Il2CppFakeBox<UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_16;
		L_16 = TypeUtility_Instantiate_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mAB42526165495F7582978DB219445C1B4B3D62E0(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mF09550A8D14871DFCE36A0847467B8FF495E5C3C_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m339A593FE002ECA805FFE4B0CF0B40013569EA0F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = ___0_value;
		Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = TypeUtility_Instantiate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1F23C60E2F94481CDFA8152E9150C1FB9368DB35(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m351753D3808F5DA1BC3543A7506F1A96E793148B_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDD9287DF4B3A05EEAF8E5E0011397A74BBB01006(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___0_value;
		Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = TypeUtility_Instantiate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7600CA1EB0951E940C81BF9344258E59D94968A0(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3FECC6C83D6CC4D56DD514888B1E30F8863B8615_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7;
		L_7 = TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3946F03FE277A0176B3FB92619571D84765E225D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_9 = ___0_value;
		Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16;
		L_16 = TypeUtility_Instantiate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m11FA35B9D91781E74463462DA6F839E3DD0A9C79(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppSharedGenericObject_m6EE8389B8D87C459484A3BC028D36C0F168FC3B9_gshared (Il2CppSharedGenericObject** ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Il2CppSharedGenericObject** L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_7;
		L_7 = TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Il2CppSharedGenericObject**)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_4, (void*)L_7);
		return;
	}

IL_001d:
	{
		Il2CppSharedGenericObject** L_8 = ___0_value;
		Il2CppSharedGenericObject* L_9 = (*(Il2CppSharedGenericObject**)L_8);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppSharedGenericObject** L_10 = ___0_value;
		NullCheck((RuntimeObject*)(*L_10));
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((RuntimeObject*)(*L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Il2CppSharedGenericObject** L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_16;
		L_16 = TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Il2CppSharedGenericObject**)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_14, (void*)L_16);
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppFullySharedGenericAny_m322129360277A30BF534B88D002DBB36E7C9C090_gshared (Il2CppFullySharedGenericAny* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t6993705FAD8F8B9A5EE3C2F89F7784E76FC10BDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t6993705FAD8F8B9A5EE3C2F89F7784E76FC10BDA);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_21 = L_7;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		InvokerActionInvoker3< Type_t*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_7, SizeOf_TValue_t6993705FAD8F8B9A5EE3C2F89F7784E76FC10BDA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_7);
		return;
	}

IL_001d:
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_value;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TValue_t6993705FAD8F8B9A5EE3C2F89F7784E76FC10BDA);
		bool L_10 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), L_9);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_11 = ___0_value;
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_11, &L_13, L_12);
		typedef Type_t* ( *func_L_15)(void*,const RuntimeMethod*);
		Type_t* L_16 = ((func_L_15)L_14)(L_13.thisPtr,L_13.method);
		Type_t* L_17 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Il2CppFullySharedGenericAny* L_19 = ___0_value;
		Type_t* L_20 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< Type_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_20, (Il2CppFullySharedGenericAny*)L_21);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_19, L_21, SizeOf_TValue_t6993705FAD8F8B9A5EE3C2F89F7784E76FC10BDA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_19, (void*)L_21);
		return;
	}
}
// Method Definition Index: 118036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m4E59E3AF91FDF6BEE1756022DEBB51355958EA6C_gshared (int32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_tB32098E7A2C575C781987FDE63461C479CE807FB_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int32_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int32_t* L_9 = ___0_value;
		Il2CppFakeBox<int32_t> L_10(il2cpp_rgctx_data_no_init(method->rgctx_data, 2), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int32_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B(L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		*(int32_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 32452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWorldInitialization_AddSystemToRootLevelSystemGroupsInternal_TisIl2CppFullySharedGenericStruct_mEE3909D380AF3AAA92FC9B7049D92F3E38E7CF19_gshared (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___0_world, NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F ___1_systemTypesOrig, ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* ___2_defaultGroup, Il2CppFullySharedGenericStruct ___3_rootGroups, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)));
	//<source_info:<no-source>:1>
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_0 = NULL;
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_1 = NULL;
	NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED V_9;
	memset((&V_9), 0, sizeof(V_9));
	ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* V_10 = NULL;
	{
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_0 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_0, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_1 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_1, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_1 = L_1;
		Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 L_2;
		L_2 = NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18((&___1_systemTypesOrig), NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		V_3 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{
				Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07((&V_3), Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004e_1;
			}

IL_0016_1:
			{
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_3;
				L_3 = Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_inline((&V_3), Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
				V_4 = L_3;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_4 = V_4;
				bool L_5;
				L_5 = TypeManager_IsSystemTypeIndex_m281B2FF063FF5559B1A5782E3805A1E53C49FBF4(L_4, NULL);
				if (L_5)
				{
					goto IL_0033_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CCB827429B43A1CFA1F345B1209CDCBE15BEB81)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
			}

IL_0033_1:
			{
				bool L_7;
				L_7 = SystemTypeIndex_get_IsManaged_mE9C5C77E4D786662043B2BF8F52EE670C60BF231_inline((&V_4), NULL);
				if (!L_7)
				{
					goto IL_0046_1;
				}
			}
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_8 = V_0;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_9 = V_4;
				NullCheck(L_8);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_8, L_9, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
				goto IL_004e_1;
			}

IL_0046_1:
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_10 = V_1;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_11 = V_4;
				NullCheck(L_10);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_10, L_11, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
			}

IL_004e_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_inline((&V_3), Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0067;
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

IL_0067:
	{
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_13 = ___0_world;
		NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F L_14 = ___1_systemTypesOrig;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_15;
		L_15 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NullCheck(L_13);
		NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 L_16;
		L_16 = World_GetOrCreateSystemsAndLogException_m65330BDD5D6A373B21E2B969BF898BDF4B9848D0(L_13, L_14, L_15, NULL);
		V_2 = L_16;
		V_5 = 0;
		goto IL_0116;
	}

IL_007d:
	{
		int32_t L_17 = V_5;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_18;
		L_18 = NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_inline((&V_2), L_17, NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		V_6 = L_18;
		int32_t L_19 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_20;
		L_20 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_19, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericStruct*)___3_rootGroups, &L_22, L_21);
		typedef bool ( *func_L_24)(void*,SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59,const RuntimeMethod*);
		bool L_25 = ((func_L_24)L_23)(L_22.thisPtr, L_20,L_22.method);
		if (L_25)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_26 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_27;
		L_27 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_26, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB L_28;
		L_28 = TypeManager_GetSystemAttributes_m05CE73E97544DCD7953A6DD51A36AB2095D43E94(L_27, (int32_t)5, (int32_t)2, NULL);
		V_7 = L_28;
		int32_t L_29;
		L_29 = NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_inline((&V_7), NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_00c3;
		}
	}
	{
		ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_30 = ___2_defaultGroup;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_31 = V_6;
		NullCheck(L_30);
		ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_30, L_31, NULL);
	}

IL_00c3:
	{
		Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 L_32;
		L_32 = NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944((&V_7), NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		V_8 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0102:
			{
				Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5((&V_8), Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00f7_1;
			}

IL_00ce_1:
			{
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_33;
				L_33 = Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_inline((&V_8), Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
				V_9 = L_33;
				World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_34 = ___0_world;
				int32_t L_35 = V_5;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_36;
				L_36 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_35, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_37 = V_9;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_38;
				L_38 = DefaultWorldInitialization_FindGroup_m9E840B43C7C3E340774EC853D0A45B19B69998FA(L_34, L_36, L_37, NULL);
				V_10 = L_38;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_39 = V_10;
				if (!L_39)
				{
					goto IL_00f7_1;
				}
			}
			{
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_40 = V_10;
				SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_41 = V_6;
				NullCheck(L_40);
				ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_40, L_41, NULL);
			}

IL_00f7_1:
			{
				bool L_42;
				L_42 = Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_inline((&V_8), Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_0110;
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

IL_0110:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0116:
	{
		int32_t L_44 = V_5;
		int32_t L_45;
		L_45 = NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_inline((&___1_systemTypesOrig), NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 32452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWorldInitialization_AddSystemToRootLevelSystemGroupsInternal_TisBakingRootGroups_t525A9114FE18B7F21E99D5D6AD771EF8FFD6D9F2_m49841D9D852CEE8929982A1E10C7B1222665FD57_gshared (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___0_world, NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F ___1_systemTypesOrig, ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* ___2_defaultGroup, BakingRootGroups_t525A9114FE18B7F21E99D5D6AD771EF8FFD6D9F2 ___3_rootGroups, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_0 = NULL;
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_1 = NULL;
	NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED V_9;
	memset((&V_9), 0, sizeof(V_9));
	ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* V_10 = NULL;
	{
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_0 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_0, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_1 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_1, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_1 = L_1;
		Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 L_2;
		L_2 = NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18((&___1_systemTypesOrig), NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		V_3 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{
				Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07((&V_3), Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004e_1;
			}

IL_0016_1:
			{
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_3;
				L_3 = Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_inline((&V_3), Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
				V_4 = L_3;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_4 = V_4;
				bool L_5;
				L_5 = TypeManager_IsSystemTypeIndex_m281B2FF063FF5559B1A5782E3805A1E53C49FBF4(L_4, NULL);
				if (L_5)
				{
					goto IL_0033_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CCB827429B43A1CFA1F345B1209CDCBE15BEB81)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
			}

IL_0033_1:
			{
				bool L_7;
				L_7 = SystemTypeIndex_get_IsManaged_mE9C5C77E4D786662043B2BF8F52EE670C60BF231_inline((&V_4), NULL);
				if (!L_7)
				{
					goto IL_0046_1;
				}
			}
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_8 = V_0;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_9 = V_4;
				NullCheck(L_8);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_8, L_9, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
				goto IL_004e_1;
			}

IL_0046_1:
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_10 = V_1;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_11 = V_4;
				NullCheck(L_10);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_10, L_11, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
			}

IL_004e_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_inline((&V_3), Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0067;
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

IL_0067:
	{
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_13 = ___0_world;
		NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F L_14 = ___1_systemTypesOrig;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_15;
		L_15 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NullCheck(L_13);
		NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 L_16;
		L_16 = World_GetOrCreateSystemsAndLogException_m65330BDD5D6A373B21E2B969BF898BDF4B9848D0(L_13, L_14, L_15, NULL);
		V_2 = L_16;
		V_5 = 0;
		goto IL_0116;
	}

IL_007d:
	{
		int32_t L_17 = V_5;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_18;
		L_18 = NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_inline((&V_2), L_17, NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		V_6 = L_18;
		int32_t L_19 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_20;
		L_20 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_19, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		bool L_21;
		L_21 = BakingRootGroups_IsRootGroup_m71DDEC3949841A5C6490669B7862BCFF8CF2BC91((&___3_rootGroups), L_20, NULL);
		if (L_21)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_22 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_23;
		L_23 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_22, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB L_24;
		L_24 = TypeManager_GetSystemAttributes_m05CE73E97544DCD7953A6DD51A36AB2095D43E94(L_23, (int32_t)5, (int32_t)2, NULL);
		V_7 = L_24;
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_inline((&V_7), NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_00c3;
		}
	}
	{
		ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_26 = ___2_defaultGroup;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_27 = V_6;
		NullCheck(L_26);
		ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_26, L_27, NULL);
	}

IL_00c3:
	{
		Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 L_28;
		L_28 = NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944((&V_7), NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		V_8 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0102:
			{
				Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5((&V_8), Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00f7_1;
			}

IL_00ce_1:
			{
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_29;
				L_29 = Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_inline((&V_8), Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
				V_9 = L_29;
				World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_30 = ___0_world;
				int32_t L_31 = V_5;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_32;
				L_32 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_31, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_33 = V_9;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_34;
				L_34 = DefaultWorldInitialization_FindGroup_m9E840B43C7C3E340774EC853D0A45B19B69998FA(L_30, L_32, L_33, NULL);
				V_10 = L_34;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_35 = V_10;
				if (!L_35)
				{
					goto IL_00f7_1;
				}
			}
			{
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_36 = V_10;
				SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_37 = V_6;
				NullCheck(L_36);
				ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_36, L_37, NULL);
			}

IL_00f7_1:
			{
				bool L_38;
				L_38 = Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_inline((&V_8), Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_0110;
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

IL_0110:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0116:
	{
		int32_t L_40 = V_5;
		int32_t L_41;
		L_41 = NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_inline((&___1_systemTypesOrig), NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 32452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWorldInitialization_AddSystemToRootLevelSystemGroupsInternal_TisDefaultRootGroups_t7281EBC4DB68ACD923E7D99CD1882B8F517F0352_mA6CD87DE5B84E8808781EB42C46F3C5074F2F676_gshared (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___0_world, NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F ___1_systemTypesOrig, ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* ___2_defaultGroup, DefaultRootGroups_t7281EBC4DB68ACD923E7D99CD1882B8F517F0352 ___3_rootGroups, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_0 = NULL;
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_1 = NULL;
	NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED V_9;
	memset((&V_9), 0, sizeof(V_9));
	ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* V_10 = NULL;
	{
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_0 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_0, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_1 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_1, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_1 = L_1;
		Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 L_2;
		L_2 = NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18((&___1_systemTypesOrig), NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		V_3 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{
				Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07((&V_3), Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004e_1;
			}

IL_0016_1:
			{
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_3;
				L_3 = Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_inline((&V_3), Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
				V_4 = L_3;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_4 = V_4;
				bool L_5;
				L_5 = TypeManager_IsSystemTypeIndex_m281B2FF063FF5559B1A5782E3805A1E53C49FBF4(L_4, NULL);
				if (L_5)
				{
					goto IL_0033_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CCB827429B43A1CFA1F345B1209CDCBE15BEB81)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
			}

IL_0033_1:
			{
				bool L_7;
				L_7 = SystemTypeIndex_get_IsManaged_mE9C5C77E4D786662043B2BF8F52EE670C60BF231_inline((&V_4), NULL);
				if (!L_7)
				{
					goto IL_0046_1;
				}
			}
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_8 = V_0;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_9 = V_4;
				NullCheck(L_8);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_8, L_9, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
				goto IL_004e_1;
			}

IL_0046_1:
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_10 = V_1;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_11 = V_4;
				NullCheck(L_10);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_10, L_11, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
			}

IL_004e_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_inline((&V_3), Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0067;
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

IL_0067:
	{
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_13 = ___0_world;
		NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F L_14 = ___1_systemTypesOrig;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_15;
		L_15 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NullCheck(L_13);
		NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 L_16;
		L_16 = World_GetOrCreateSystemsAndLogException_m65330BDD5D6A373B21E2B969BF898BDF4B9848D0(L_13, L_14, L_15, NULL);
		V_2 = L_16;
		V_5 = 0;
		goto IL_0116;
	}

IL_007d:
	{
		int32_t L_17 = V_5;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_18;
		L_18 = NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_inline((&V_2), L_17, NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		V_6 = L_18;
		int32_t L_19 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_20;
		L_20 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_19, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		bool L_21;
		L_21 = DefaultRootGroups_IsRootGroup_m942A464A4624624356C9FEF106EE75518D8F2142((&___3_rootGroups), L_20, NULL);
		if (L_21)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_22 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_23;
		L_23 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_22, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB L_24;
		L_24 = TypeManager_GetSystemAttributes_m05CE73E97544DCD7953A6DD51A36AB2095D43E94(L_23, (int32_t)5, (int32_t)2, NULL);
		V_7 = L_24;
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_inline((&V_7), NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_00c3;
		}
	}
	{
		ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_26 = ___2_defaultGroup;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_27 = V_6;
		NullCheck(L_26);
		ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_26, L_27, NULL);
	}

IL_00c3:
	{
		Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 L_28;
		L_28 = NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944((&V_7), NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		V_8 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0102:
			{
				Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5((&V_8), Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00f7_1;
			}

IL_00ce_1:
			{
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_29;
				L_29 = Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_inline((&V_8), Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
				V_9 = L_29;
				World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_30 = ___0_world;
				int32_t L_31 = V_5;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_32;
				L_32 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_31, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_33 = V_9;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_34;
				L_34 = DefaultWorldInitialization_FindGroup_m9E840B43C7C3E340774EC853D0A45B19B69998FA(L_30, L_32, L_33, NULL);
				V_10 = L_34;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_35 = V_10;
				if (!L_35)
				{
					goto IL_00f7_1;
				}
			}
			{
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_36 = V_10;
				SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_37 = V_6;
				NullCheck(L_36);
				ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_36, L_37, NULL);
			}

IL_00f7_1:
			{
				bool L_38;
				L_38 = Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_inline((&V_8), Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_0110;
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

IL_0110:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0116:
	{
		int32_t L_40 = V_5;
		int32_t L_41;
		L_41 = NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_inline((&___1_systemTypesOrig), NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 32452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultWorldInitialization_AddSystemToRootLevelSystemGroupsInternal_TisProcessAfterLoadRootGroups_tB32005DD473CCB87A1D965140E244A9192332E0D_m6D6AC84E77B497EF0DB1E52907545AE49516A354_gshared (World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* ___0_world, NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F ___1_systemTypesOrig, ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* ___2_defaultGroup, ProcessAfterLoadRootGroups_tB32005DD473CCB87A1D965140E244A9192332E0D ___3_rootGroups, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_0 = NULL;
	List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* V_1 = NULL;
	NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED V_9;
	memset((&V_9), 0, sizeof(V_9));
	ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* V_10 = NULL;
	{
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_0 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_0, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_1 = (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9*)il2cpp_codegen_object_new(List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9_il2cpp_TypeInfo_var);
		List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23(L_1, List_1__ctor_m7D7D83D3BCD79A2FFB2E59DB8E592559ED6EEB23_RuntimeMethod_var);
		V_1 = L_1;
		Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0 L_2;
		L_2 = NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18((&___1_systemTypesOrig), NativeList_1_GetEnumerator_mAAA842FDCBA7890BA468B50A6249CC2397F01F18_RuntimeMethod_var);
		V_3 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{
				Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07((&V_3), Enumerator_Dispose_m128C45EBE2D55178CC920173B45E67704C882A07_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_004e_1;
			}

IL_0016_1:
			{
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_3;
				L_3 = Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_inline((&V_3), Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_RuntimeMethod_var);
				V_4 = L_3;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_4 = V_4;
				bool L_5;
				L_5 = TypeManager_IsSystemTypeIndex_m281B2FF063FF5559B1A5782E3805A1E53C49FBF4(L_4, NULL);
				if (L_5)
				{
					goto IL_0033_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CCB827429B43A1CFA1F345B1209CDCBE15BEB81)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
			}

IL_0033_1:
			{
				bool L_7;
				L_7 = SystemTypeIndex_get_IsManaged_mE9C5C77E4D786662043B2BF8F52EE670C60BF231_inline((&V_4), NULL);
				if (!L_7)
				{
					goto IL_0046_1;
				}
			}
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_8 = V_0;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_9 = V_4;
				NullCheck(L_8);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_8, L_9, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
				goto IL_004e_1;
			}

IL_0046_1:
			{
				List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* L_10 = V_1;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_11 = V_4;
				NullCheck(L_10);
				List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_inline(L_10, L_11, List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_RuntimeMethod_var);
			}

IL_004e_1:
			{
				bool L_12;
				L_12 = Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_inline((&V_3), Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0067;
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

IL_0067:
	{
		World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_13 = ___0_world;
		NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F L_14 = ___1_systemTypesOrig;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_15;
		L_15 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NullCheck(L_13);
		NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303 L_16;
		L_16 = World_GetOrCreateSystemsAndLogException_m65330BDD5D6A373B21E2B969BF898BDF4B9848D0(L_13, L_14, L_15, NULL);
		V_2 = L_16;
		V_5 = 0;
		goto IL_0116;
	}

IL_007d:
	{
		int32_t L_17 = V_5;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_18;
		L_18 = NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_inline((&V_2), L_17, NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_RuntimeMethod_var);
		V_6 = L_18;
		int32_t L_19 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_20;
		L_20 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_19, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		bool L_21;
		L_21 = ProcessAfterLoadRootGroups_IsRootGroup_mDDC8B86CD38C11D8EF9B854909DB8ACF37948ABF((&___3_rootGroups), L_20, NULL);
		if (L_21)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_22 = V_5;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_23;
		L_23 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_22, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
		NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB L_24;
		L_24 = TypeManager_GetSystemAttributes_m05CE73E97544DCD7953A6DD51A36AB2095D43E94(L_23, (int32_t)5, (int32_t)2, NULL);
		V_7 = L_24;
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_inline((&V_7), NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_00c3;
		}
	}
	{
		ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_26 = ___2_defaultGroup;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_27 = V_6;
		NullCheck(L_26);
		ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_26, L_27, NULL);
	}

IL_00c3:
	{
		Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69 L_28;
		L_28 = NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944((&V_7), NativeList_1_GetEnumerator_m485F7EB0FF3D2A1CF699D0F4C1AA577E64B2F944_RuntimeMethod_var);
		V_8 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0102:
			{
				Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5((&V_8), Enumerator_Dispose_m605F9109115556B46AA17AAE3D68AE63D68DEEA5_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00f7_1;
			}

IL_00ce_1:
			{
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_29;
				L_29 = Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_inline((&V_8), Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_RuntimeMethod_var);
				V_9 = L_29;
				World_t55FCE40A4C47400A27AE7BF5A0FED66B34C8726A* L_30 = ___0_world;
				int32_t L_31 = V_5;
				SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_32;
				L_32 = NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_inline((&___1_systemTypesOrig), L_31, NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_RuntimeMethod_var);
				SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_33 = V_9;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_34;
				L_34 = DefaultWorldInitialization_FindGroup_m9E840B43C7C3E340774EC853D0A45B19B69998FA(L_30, L_32, L_33, NULL);
				V_10 = L_34;
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_35 = V_10;
				if (!L_35)
				{
					goto IL_00f7_1;
				}
			}
			{
				ComponentSystemGroup_t0D346A735463F650D032D4386FA23D62BB24D24D* L_36 = V_10;
				SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_37 = V_6;
				NullCheck(L_36);
				ComponentSystemGroup_AddSystemToUpdateList_m0A4F99EACEDE3C7AC8F96D5EA3ABDB8BD3AA282A(L_36, L_37, NULL);
			}

IL_00f7_1:
			{
				bool L_38;
				L_38 = Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_inline((&V_8), Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_0110;
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

IL_0110:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0116:
	{
		int32_t L_40 = V_5;
		int32_t L_41;
		L_41 = NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_inline((&___1_systemTypesOrig), NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_RuntimeMethod_var);
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 37136
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SystemTypeIndex_get_IsManaged_mE9C5C77E4D786662043B2BF8F52EE670C60BF231_inline (SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___Value;
		return (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)536870912)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m02A4DA8D6AD8CF894C842645F3A52AD137819401_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m49FCA17B1EA82BC89043916AE35B2B25E2F8A926_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_mE7CB6E9DBD58D7FF8B091AE465A1D12712C5A22E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_m4F3C6DF960CFB62B278B69098BDFEE54DC94BDE4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m770FE830FFEDCE3ADEAA21A7E0AAC6622909A4D6_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m03DCC2EF9D433A33DEE8B8CA5ADB5608D098BB87_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2F84F7F9AC1F68346A0109A0C8FE9D47971DA728_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mFDFF486A84F188A2ABAA967E605EA3ED22EA071C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m5C49409BCC89BD6CBACAE82DFC71840215BD80E1_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m3F4137B5AADCFA7FA0A0CC31D2DA3F808D70A5B7_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF010950324C4AFC06B648AA61FFAD68F3CD5B79E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m18E06B373BB3C37DF8377EF97183F2E7E1343B59_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mAB2BC9E1C6A5A947C2CD6389B7B25A4FA7252BBB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m8D3A5BB3717D0E22B4C5194E8A3122E470C4B42D_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m17982D3DAE7022F28B7FE80462E5CFB7B2F1EAAF_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t053EE148B92E0A6A07A653FA46A9E4BA7CD6F44F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mCC125353A8BC96C1462EF27C2B05293D91763D6A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m31BE286C7AFAA4322ADEA3DD8815211F27657EFB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m32C6EB6E9D436FBFD63DAEA76A084D911D35ADD2_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mDB2868A1A7C24D7C3222957A7FF6D169B6BA8747_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_mE158D44295F3D0D919D3D85A4639B70E95FB30CE_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m417EEC22DEC155712718382D8109241B1C7FAA16_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mC26E699C0DBB1A6C28519750D4C5B71D1E1A2103_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_m7DBC25CCE21771B1CC5159A7FDAB7175437208F8_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m127DE2A0AE977263D2EB19FDBB5528AEB0A023F9_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mBE46264D85E1E633B2AC6FABC598C1AC40D9573C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_mE63E6EDC34CD618E2322A451355260E3E6AEAF0A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m059CC2A94ADF230630FB14E4AD41D012B266D701_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsNullable_mE4109548EAB9509D5FAF55F93302DEB5781123FC_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsNullableU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127948
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsObject_mCFC39B415961472B9D0C975588C5790652D07C5E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsObjectU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127953
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsAbstractOrInterface_m6F3B4B3BAB68876720441CCD05E201430A47B62B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsAbstractOrInterfaceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 66768
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 Enumerator_get_Current_m0310D25D8B939E9591D268E2FFA9556CEEA67BBE_gshared_inline (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 12172
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD517D59812C8FD374BF6C176C7827BE49AE5F4CC_gshared_inline (List_1_t17DFFC96FBC92D6BCBE25126F8E1CA50E0F5B8B9* __this, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32* L_4 = V_0;
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
		SystemTypeIndexU5BU5D_tC60EA760677E760FB6A931655E23FDDFF8506E32* L_7 = V_0;
		int32_t L_8 = V_1;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59)L_9);
		return;
	}

IL_0034:
	{
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_10 = ___0_item;
		List_1_AddWithResize_mFF3020F1FE2CB644B8E575C1E72B7673C32F7B08(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// Method Definition Index: 66766
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE6A292056A82D3811A801CBEF7E1499F744BF38B_gshared_inline (Enumerator_t2582C5B9A0C4C0F22920BA050E2FDEDDD1BD41D0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA* L_2 = (NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA*)(&__this->___m_Array);
		int32_t L_3 = L_2->___m_Length;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA* L_4 = (NativeArray_1_t9A7587FC11D011DF514C6BB1CE4372E55A3FB5DA*)(&__this->___m_Array);
		void* L_5 = L_4->___m_Buffer;
		int32_t L_6 = __this->___m_Index;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisSystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59_m247A702DB3228A6ACA31902902653A05C1C9D867_inline(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		__this->___value = L_7;
		return (bool)1;
	}

IL_003f:
	{
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* L_8 = (SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59*)(&__this->___value);
		il2cpp_codegen_initobj(L_8, sizeof(SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59));
		return (bool)0;
	}
}
// Method Definition Index: 90051
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 NativeList_1_get_Item_mB0A27CBCCA2AAE318265A6AD7B62A8A8EA8325D4_gshared_inline (NativeList_1_tC8DD648B9E4C08DD7F3C9D8F11209BA01D0C9303* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD* L_0 = __this->___m_ListData;
		int32_t L_1 = ___0_index;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_2;
		L_2 = UnsafeList_1_get_Item_mBCE13EC244E5D8EA33BC3BF5990E4292A5A32528_inline((UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD*)L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_2;
	}
}
// Method Definition Index: 90051
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 NativeList_1_get_Item_m68B535A2686C1121707F5C8AB6533C2EB5D17B6F_gshared_inline (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* L_0 = __this->___m_ListData;
		int32_t L_1 = ___0_index;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_2;
		L_2 = UnsafeList_1_get_Item_m41897491940D3D178691C7F1101DEB99E95BB872_inline((UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65*)L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_2;
	}
}
// Method Definition Index: 90054
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m2C23D29FDE88C9F6184A6E95D5E270970DA8CA02_gshared_inline (NativeList_1_t7811192BC4EB67CD7ED43EAA833CB1E6A0AFF6DB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mD6AFE8D014CB2BBBB71EAEE48E963F875D5BE036_inline((UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 66768
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED Enumerator_get_Current_m33E89C8997E6FC942BD7FE940F010C76F216432C_gshared_inline (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 66766
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE4FD66EB3E943812198F58A1B55916E70871628F_gshared_inline (Enumerator_t2919CBCED9065C8458CB019DA1AF022AE52D9D69* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_2 = (NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18*)(&__this->___m_Array);
		int32_t L_3 = L_2->___m_Length;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_003f;
		}
	}
	{
		NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18* L_4 = (NativeArray_1_tE939294C871AFB74F301794BEF2D040446A51F18*)(&__this->___m_Array);
		void* L_5 = L_4->___m_Buffer;
		int32_t L_6 = __this->___m_Index;
		SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_7;
		L_7 = UnsafeUtility_ReadArrayElement_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m03D2F38EDF357F60204C91EB1F7B2B4C113FB141_inline(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		__this->___value = L_7;
		return (bool)1;
	}

IL_003f:
	{
		SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED* L_8 = (SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED*)(&__this->___value);
		il2cpp_codegen_initobj(L_8, sizeof(SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED));
		return (bool)0;
	}
}
// Method Definition Index: 90054
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m71357FF9FFB1F7237DB59E19150F655F964D0972_gshared_inline (NativeList_1_t97C774EEA61796AECE539567CCB8D13FB30A821F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mE4C5AC9FBE80AB7D62FB657DD32E8D0A74D37F7A_inline((UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 88367
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		return L_0;
	}
}
// Method Definition Index: 66879
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 UnsafeUtility_ReadArrayElement_TisSystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59_m247A702DB3228A6ACA31902902653A05C1C9D867_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_6 = (*(SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 91130
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 UnsafeList_1_get_Item_mBCE13EC244E5D8EA33BC3BF5990E4292A5A32528_gshared_inline (UnsafeList_1_t0F469FB8A7D7465244FAADEFA2D7C7A3AED8FACD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894);
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 L_5 = (*(SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894*)((SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))));
		return L_5;
	}
}
// Method Definition Index: 91130
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 UnsafeList_1_get_Item_m41897491940D3D178691C7F1101DEB99E95BB872_gshared_inline (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = sizeof(SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59);
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 L_5 = (*(SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59*)((SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))));
		return L_5;
	}
}
// Method Definition Index: 91126
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mD6AFE8D014CB2BBBB71EAEE48E963F875D5BE036_gshared_inline (UnsafeList_1_tCB1217FF37856942AD369F0795495868E6E658A5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 66879
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED UnsafeUtility_ReadArrayElement_TisSystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED_m03D2F38EDF357F60204C91EB1F7B2B4C113FB141_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED L_6 = (*(SystemAttribute_tEC92E58EB4837B03529C4F84AB31CEAC363C76ED*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 91126
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mE4C5AC9FBE80AB7D62FB657DD32E8D0A74D37F7A_gshared_inline (UnsafeList_1_t20BD67D381C3B1456761B8FBA007FA6D89913B65* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
