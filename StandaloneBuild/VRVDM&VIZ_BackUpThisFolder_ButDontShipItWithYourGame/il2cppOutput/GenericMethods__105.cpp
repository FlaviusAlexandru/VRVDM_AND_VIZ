#include "pch-cpp.hpp"





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

struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys;
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values;
	RuntimeObject* ____syncRoot;
};
struct TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF  : public RuntimeObject
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
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A  : public RuntimeObject
{
};
struct TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E  : public RuntimeObject
{
};
struct TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B  : public RuntimeObject
{
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE  : public RuntimeObject
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
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310  : public RuntimeObject
{
};
struct ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6  : public RuntimeObject
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___m_References;
	RuntimeObject* ___m_RootSource;
	RuntimeObject* ___m_RootDestination;
	RuntimeObject* ___m_Stack;
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
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
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
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
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
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
struct TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields
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
struct TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields
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
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields
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
struct TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09_gshared (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1_gshared (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m6297ED590646B14048B5FC3125D3B357266FF433_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m109DD5445E24831B7BC78C7D27802788FA113D53_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m6C14DD0BC2689D9B1B582FC2AE9F3B1699434DDC_gshared (RuntimeObject* ___0_visitor, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mEDC6BA66D8D6DE00FD0F9B4C5AD0519B03FA6BFD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mF61CE687FAE6BDC2753CDF6BEFE826CB51D6959F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m439E9D9A3CFCC69D7BFF7BCF1FE58E711AC66BAA_gshared (RuntimeObject* ___0_visitor, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A_gshared (RuntimeObject* ___0_visitor, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D_gshared (RuntimeObject* ___0_visitor, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB_gshared (RuntimeObject* ___0_visitor, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799_gshared (RuntimeObject* ___0_visitor, float* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F_gshared (RuntimeObject* ___0_visitor, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4_gshared (RuntimeObject* ___0_visitor, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A_gshared (RuntimeObject* ___0_visitor, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4_gshared (RuntimeObject* ___0_visitor, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F_gshared (RuntimeObject* ___0_visitor, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328_gshared (RuntimeObject* ___0_visitor, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F_gshared (RuntimeObject* ___0_visitor, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B_gshared (RuntimeObject* ___0_visitor, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D_gshared (RuntimeObject* ___0_visitor, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19_gshared (RuntimeObject* ___0_visitor, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE_gshared (RuntimeObject* ___0_visitor, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m5FF237ACEB3949B5D7C53E07DF3A4B0AEE554D03_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m90C462E5A806C5EC3C1E0134E4E0C56E798F9D73_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4742E9EE4B9553E960851A662A8A02117EEBDC3E_gshared (RuntimeObject* ___0_visitor, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8_gshared (RuntimeObject* ___0_visitor, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m1699307848A28762B1010388F526687D0612FE8C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mDDF59CCA9011F103CD8832B926F4E2F4D4DB7D72_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m80327FC0F910B1427CB26814FC1178C4F71E2843_gshared (RuntimeObject* ___0_visitor, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED_gshared (RuntimeObject* ___0_visitor, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B_gshared (RuntimeObject* ___0_visitor, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3528699D334233C1837CB704EFA7ABC98DD3531E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0968B5BFDFB836EB13201A24FBB799979C83A650_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mAC56AB6784215F3C91A574B11BE076362AF936BB_gshared (RuntimeObject* ___0_visitor, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC_gshared (RuntimeObject* ___0_visitor, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557_gshared (RuntimeObject* ___0_visitor, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F_gshared (RuntimeObject* ___0_visitor, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mEED007E5AEE0AE010EB1B1E61BBB12A7AA6765DE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m9D483C625CFC438BB83CFB250DE2E7525F21355A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m43A778514AAC83FC5155373F8DBCE48A5AEB1287_gshared (RuntimeObject* ___0_visitor, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224_gshared (RuntimeObject* ___0_visitor, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A_gshared (RuntimeObject* ___0_visitor, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4_gshared (RuntimeObject* ___0_visitor, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1_gshared (RuntimeObject* ___0_visitor, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;

inline bool TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared)(__this, method);
}
inline void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09 (RuntimeObject* ___0_visitor, int32_t* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1 (RuntimeObject* ___0_visitor, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m6297ED590646B14048B5FC3125D3B357266FF433_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m6297ED590646B14048B5FC3125D3B357266FF433_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m109DD5445E24831B7BC78C7D27802788FA113D53_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m109DD5445E24831B7BC78C7D27802788FA113D53_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m6C14DD0BC2689D9B1B582FC2AE9F3B1699434DDC (RuntimeObject* ___0_visitor, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m6C14DD0BC2689D9B1B582FC2AE9F3B1699434DDC_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mEDC6BA66D8D6DE00FD0F9B4C5AD0519B03FA6BFD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mEDC6BA66D8D6DE00FD0F9B4C5AD0519B03FA6BFD_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mF61CE687FAE6BDC2753CDF6BEFE826CB51D6959F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mF61CE687FAE6BDC2753CDF6BEFE826CB51D6959F_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m439E9D9A3CFCC69D7BFF7BCF1FE58E711AC66BAA (RuntimeObject* ___0_visitor, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m439E9D9A3CFCC69D7BFF7BCF1FE58E711AC66BAA_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A (RuntimeObject* ___0_visitor, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D (RuntimeObject* ___0_visitor, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB (RuntimeObject* ___0_visitor, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799 (RuntimeObject* ___0_visitor, float* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, float*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F (RuntimeObject* ___0_visitor, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4 (RuntimeObject* ___0_visitor, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A (RuntimeObject* ___0_visitor, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4 (RuntimeObject* ___0_visitor, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F (RuntimeObject* ___0_visitor, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328 (RuntimeObject* ___0_visitor, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F (RuntimeObject* ___0_visitor, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B (RuntimeObject* ___0_visitor, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D (RuntimeObject* ___0_visitor, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19 (RuntimeObject* ___0_visitor, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE (RuntimeObject* ___0_visitor, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m5FF237ACEB3949B5D7C53E07DF3A4B0AEE554D03_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m5FF237ACEB3949B5D7C53E07DF3A4B0AEE554D03_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m90C462E5A806C5EC3C1E0134E4E0C56E798F9D73_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m90C462E5A806C5EC3C1E0134E4E0C56E798F9D73_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4742E9EE4B9553E960851A662A8A02117EEBDC3E (RuntimeObject* ___0_visitor, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4742E9EE4B9553E960851A662A8A02117EEBDC3E_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8 (RuntimeObject* ___0_visitor, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m1699307848A28762B1010388F526687D0612FE8C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m1699307848A28762B1010388F526687D0612FE8C_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mDDF59CCA9011F103CD8832B926F4E2F4D4DB7D72_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mDDF59CCA9011F103CD8832B926F4E2F4D4DB7D72_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m80327FC0F910B1427CB26814FC1178C4F71E2843 (RuntimeObject* ___0_visitor, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m80327FC0F910B1427CB26814FC1178C4F71E2843_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED (RuntimeObject* ___0_visitor, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B (RuntimeObject* ___0_visitor, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m3528699D334233C1837CB704EFA7ABC98DD3531E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m3528699D334233C1837CB704EFA7ABC98DD3531E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m0968B5BFDFB836EB13201A24FBB799979C83A650_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m0968B5BFDFB836EB13201A24FBB799979C83A650_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mAC56AB6784215F3C91A574B11BE076362AF936BB (RuntimeObject* ___0_visitor, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mAC56AB6784215F3C91A574B11BE076362AF936BB_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC (RuntimeObject* ___0_visitor, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557 (RuntimeObject* ___0_visitor, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F (RuntimeObject* ___0_visitor, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_mEED007E5AEE0AE010EB1B1E61BBB12A7AA6765DE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_mEED007E5AEE0AE010EB1B1E61BBB12A7AA6765DE_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m9D483C625CFC438BB83CFB250DE2E7525F21355A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m9D483C625CFC438BB83CFB250DE2E7525F21355A_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m43A778514AAC83FC5155373F8DBCE48A5AEB1287 (RuntimeObject* ___0_visitor, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m43A778514AAC83FC5155373F8DBCE48A5AEB1287_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224 (RuntimeObject* ___0_visitor, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A (RuntimeObject* ___0_visitor, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4 (RuntimeObject* ___0_visitor, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
inline bool TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_gshared_inline)(method);
}
inline bool TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_gshared_inline)(method);
}
inline bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_gshared_inline)(method);
}
inline bool PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1 (RuntimeObject* ___0_visitor, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1_gshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m142C6205DEB9F2F711696D3E7627DE45C006CF25_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, int32_t* ___0_dstValue, int32_t ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t* L_1 = ___0_dstValue;
		int32_t L_2 = ___1_srcValue;
		*(int32_t*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		int32_t* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<int32_t> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		int32_t* L_13 = ___0_dstValue;
		int32_t L_14 = ___1_srcValue;
		*(int32_t*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		int32_t* L_17 = ___0_dstValue;
		int32_t L_18 = ___1_srcValue;
		*(int32_t*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		int32_t L_27 = ___1_srcValue;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(int32_t*)L_30 = ((*(int32_t*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		int32_t L_34 = ___1_srcValue;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(int32_t*)L_38 = ((*(int32_t*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		int32_t* L_47 = ___0_dstValue;
		int32_t L_48 = (*(int32_t*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		int32_t* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(int32_t*)L_51 = ((*(int32_t*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		int32_t* L_57 = ___0_dstValue;
		Il2CppFakeBox<int32_t> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		int32_t* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(int32_t*)L_62 = ((*(int32_t*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		int32_t L_69 = ___1_srcValue;
		int32_t L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		int32_t* L_72 = ___0_dstValue;
		int32_t L_73 = (*(int32_t*)L_72);
		int32_t L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		int32_t* L_77 = ___0_dstValue;
		int32_t L_78 = (*(int32_t*)L_77);
		int32_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mABCC1382ABBE35AC40535DC61778853B410E6E09((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		int32_t* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(int32_t*)L_83 = ((*(int32_t*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m1FCBB3CED58B13DF6D6E6EC910C06E8BD42F17F9_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_dstValue, Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_1 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_2 = ___1_srcValue;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mA5B381E720E0FDAE69EC5B76BA5DD0C67DEABD63_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_13 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_14 = ___1_srcValue;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_17 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_18 = ___1_srcValue;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_27 = ___1_srcValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_30 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_34 = ___1_srcValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_38 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_47 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_48 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_51 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_57 = ___0_dstValue;
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_62 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_69 = ___1_srcValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_72 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_73 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_72);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_77 = ___0_dstValue;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_78 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_77);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mFD5C09CC7FB80860303CD624D0FE8482999D38E1((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_83 = ((*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m73A568E7D677454FD20CF7BCEEEA001E0D4AB93E_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_dstValue, MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m6297ED590646B14048B5FC3125D3B357266FF433_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_1 = ___0_dstValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_2 = ___1_srcValue;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_1)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_1)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m109DD5445E24831B7BC78C7D27802788FA113D53_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m09227AE5DDADBF5BD70FFF0379C4BA16C0052EC2_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_13 = ___0_dstValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_14 = ___1_srcValue;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_13)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_13)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_17 = ___0_dstValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_18 = ___1_srcValue;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_17)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_17)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_27 = ___1_srcValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_30 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_30)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_30)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_34 = ___1_srcValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_38 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_38)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_38)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_47 = ___0_dstValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_48 = (*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_51 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_51)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_51)->___propertyValues), (void*)NULL);
		#endif
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_57 = ___0_dstValue;
		Il2CppFakeBox<MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_62 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_62)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_62)->___propertyValues), (void*)NULL);
		#endif
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_69 = ___1_srcValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_72 = ___0_dstValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_73 = (*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_72);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_77 = ___0_dstValue;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_78 = (*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_77);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m6C14DD0BC2689D9B1B582FC2AE9F3B1699434DDC((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_83 = ((*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_83)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_83)->___propertyValues), (void*)NULL);
		#endif
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
// Method Definition Index: 35377
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m4EA409EDE2E220F50F6EE71FEA45423FAC047287_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_dstValue, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mEDC6BA66D8D6DE00FD0F9B4C5AD0519B03FA6BFD_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_1 = ___0_dstValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_2 = ___1_srcValue;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mF61CE687FAE6BDC2753CDF6BEFE826CB51D6959F_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_13 = ___0_dstValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_14 = ___1_srcValue;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_17 = ___0_dstValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_18 = ___1_srcValue;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_27 = ___1_srcValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_30 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_34 = ___1_srcValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_38 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_47 = ___0_dstValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_48 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_51 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_57 = ___0_dstValue;
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_62 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_69 = ___1_srcValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_72 = ___0_dstValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_73 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_72);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_77 = ___0_dstValue;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_78 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_77);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m439E9D9A3CFCC69D7BFF7BCF1FE58E711AC66BAA((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_83 = ((*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m80480375886F03AE4FCD7070F1BD00A708285ADD_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_dstValue, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_1 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_2 = ___1_srcValue;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_13 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_14 = ___1_srcValue;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_17 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_18 = ___1_srcValue;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_27 = ___1_srcValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_30 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_34 = ___1_srcValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_38 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_47 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_48 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_51 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_57 = ___0_dstValue;
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_62 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_69 = ___1_srcValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_72 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_73 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_72);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_77 = ___0_dstValue;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_78 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_77);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m197D2A535A0FA83B533E74E8EC98DF87A07B836A((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_83 = ((*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m7FC5FFFAE6389F883CBDA8BF03D74A9DFF8267A8_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_dstValue, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_1 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_2 = ___1_srcValue;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_13 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_14 = ___1_srcValue;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_17 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_18 = ___1_srcValue;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_27 = ___1_srcValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_30 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_34 = ___1_srcValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_38 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_47 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_48 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_51 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_57 = ___0_dstValue;
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_62 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_69 = ___1_srcValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_72 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_73 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_72);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_77 = ___0_dstValue;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_78 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_77);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m93AC34DAE08AE05780AA25F16DC96BCDC02FE91D((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_83 = ((*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m1235A75D8E0E59C890E79D5BA6B8CC733C7EC4A8_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_dstValue, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_1 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_2 = ___1_srcValue;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_13 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_14 = ___1_srcValue;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_17 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_18 = ___1_srcValue;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_27 = ___1_srcValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_30 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_34 = ___1_srcValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_38 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_47 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_48 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_51 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_57 = ___0_dstValue;
		Il2CppFakeBox<SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_62 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_69 = ___1_srcValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_72 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_73 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_72);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_77 = ___0_dstValue;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_78 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_77);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mB8750F45235AFA82A6724320A2F8ACA1AA525DDB((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_83 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m450B1879D88E148B64C001C8E5E10CA750B240E7_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, float* ___0_dstValue, float ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		float* L_1 = ___0_dstValue;
		float L_2 = ___1_srcValue;
		*(float*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		float* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(float));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<float> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		float* L_13 = ___0_dstValue;
		float L_14 = ___1_srcValue;
		*(float*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		float* L_17 = ___0_dstValue;
		float L_18 = ___1_srcValue;
		*(float*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		float L_27 = ___1_srcValue;
		float L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		float* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(float*)L_30 = ((*(float*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		float L_34 = ___1_srcValue;
		float L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		float* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(float*)L_38 = ((*(float*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		float L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		float* L_47 = ___0_dstValue;
		float L_48 = (*(float*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		float* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(float*)L_51 = ((*(float*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		float* L_57 = ___0_dstValue;
		Il2CppFakeBox<float> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		float* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(float*)L_62 = ((*(float*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		float L_69 = ___1_srcValue;
		float L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		float* L_72 = ___0_dstValue;
		float L_73 = (*(float*)L_72);
		float L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		float* L_77 = ___0_dstValue;
		float L_78 = (*(float*)L_77);
		float L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9CDE3AA2B96127B4CE0770D082481A17743A7799((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		float* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(float*)L_83 = ((*(float*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m1B0423B8E424AFEAC70F9D9364693066211C9511_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_dstValue, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_1 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_2 = ___1_srcValue;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_1)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_1)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_1)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_1)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_13 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_14 = ___1_srcValue;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_13)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_13)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_13)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_13)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_17 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_18 = ___1_srcValue;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_17)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_17)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_17)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_17)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_27 = ___1_srcValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_30 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_30)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_30)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_30)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_30)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_34 = ___1_srcValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_38)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_47 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_48 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_51 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_51)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_51)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_51)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_51)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_62 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_62)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_62)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_62)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_62)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_69 = ___1_srcValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_72 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_73 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_72);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_77 = ___0_dstValue;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_78 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_77);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8371037627164AAAFB02CA8C9B1A8E9B7D45904F((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_83 = ((*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_83)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_83)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_83)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_83)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mCE4BAB88D5CF387644E6F54522BA4FD3716FAF7E_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_dstValue, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_1 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_2 = ___1_srcValue;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_13 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_14 = ___1_srcValue;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_17 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_18 = ___1_srcValue;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_27 = ___1_srcValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_30 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_34 = ___1_srcValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_38 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_47 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_48 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_51 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_62 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_69 = ___1_srcValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_72 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_73 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_72);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_77 = ___0_dstValue;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_78 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_77);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE8575A040F0962B42852A5EBDAA07B6B7DA6EDE4((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_83 = ((*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m9B17BB253521946795508B19D91D0E47BC02E4E3_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_dstValue, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_1 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_2 = ___1_srcValue;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_13 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_14 = ___1_srcValue;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_17 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_18 = ___1_srcValue;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_27 = ___1_srcValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_30 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_34 = ___1_srcValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_38 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_47 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_48 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_51 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_62 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_69 = ___1_srcValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_72 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_73 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_72);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_77 = ___0_dstValue;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_78 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_77);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mD3FB81C2CEE20D3AC2B423BB0560D963465E524A((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_83 = ((*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m27D37F43C6082EA1CA0D9594621C39A2B12798BD_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_dstValue, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_1 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_2 = ___1_srcValue;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_13 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_14 = ___1_srcValue;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_17 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_18 = ___1_srcValue;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_27 = ___1_srcValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_30 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_34 = ___1_srcValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_38 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_47 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_48 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_51 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_62 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_69 = ___1_srcValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_72 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_73 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_72);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_77 = ___0_dstValue;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_78 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_77);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m84F0CCCB010274BA518744F14B2FC6445DCA64E4((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_83 = ((*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m20E4444AC7870670F75AD57DCB4F9C06A0A9EA44_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_dstValue, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_1 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_2 = ___1_srcValue;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_13 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_14 = ___1_srcValue;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_17 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_18 = ___1_srcValue;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_27 = ___1_srcValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_30 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_34 = ___1_srcValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_38 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_47 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_48 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_51 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_62 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_69 = ___1_srcValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_72 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_73 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_72);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_77 = ___0_dstValue;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_78 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_77);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mCBBB30A4AD883F139CE44666FD3C8778CB07B16F((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_83 = ((*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mD6014A050BB768E6183080E989F906A9E8F4E922_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_dstValue, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_1 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_2 = ___1_srcValue;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_13 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_14 = ___1_srcValue;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_17 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_18 = ___1_srcValue;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_27 = ___1_srcValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_30 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_34 = ___1_srcValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_38 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_47 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_48 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_51 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_62 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_69 = ___1_srcValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_72 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_73 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_72);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_77 = ___0_dstValue;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_78 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_77);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m2C02CF1F5A9538E557BF82F156DCE7A2995A5328((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_83 = ((*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m2ED1F5A2A329D869B6DA02669313EB9740641397_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_dstValue, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_1 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_2 = ___1_srcValue;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_13 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_14 = ___1_srcValue;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_17 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_18 = ___1_srcValue;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_27 = ___1_srcValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_30 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_34 = ___1_srcValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_38 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_47 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_48 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_51 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_62 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_69 = ___1_srcValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_72 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_73 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_72);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_77 = ___0_dstValue;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_78 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_77);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mC1145110F1C81F318995CEEFB20B682D49804A7F((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_83 = ((*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6024479D15E5F148F831C7BBC1C668487893C347_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_dstValue, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_1 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_2 = ___1_srcValue;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_1)->___m_Value), (void*)NULL);
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_13 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_14 = ___1_srcValue;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_13)->___m_Value), (void*)NULL);
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_17 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_18 = ___1_srcValue;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_17)->___m_Value), (void*)NULL);
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_27 = ___1_srcValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_30 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_30)->___m_Value), (void*)NULL);
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_34 = ___1_srcValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_38 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_38)->___m_Value), (void*)NULL);
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_47 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_48 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_51 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_51)->___m_Value), (void*)NULL);
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_62 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_62)->___m_Value), (void*)NULL);
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_69 = ___1_srcValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_72 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_73 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_72);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_77 = ___0_dstValue;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_78 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_77);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m3B228336F8CC4BED768530FB6DCDC469BC79AB2B((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_83 = ((*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_83)->___m_Value), (void*)NULL);
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mBCD273E33B26652566C077E5FCFDD03803401961_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_dstValue, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_1 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_2 = ___1_srcValue;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_1)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_1)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_13 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_14 = ___1_srcValue;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_13)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_13)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_17 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_18 = ___1_srcValue;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_17)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_17)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_27 = ___1_srcValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_30 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_30)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_30)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_34 = ___1_srcValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_38 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_38)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_38)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_47 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_48 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_51 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_51)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_51)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_62 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_62)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_62)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_69 = ___1_srcValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_72 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_73 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_72);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_77 = ___0_dstValue;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_78 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_77);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1440A46C83BF7263E40864A952DEC63AF982643D((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_83 = ((*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_83)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_83)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mD024C33B171AEA347811E743E862D75C04AE44BE_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_dstValue, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_1 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_2 = ___1_srcValue;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_13 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_14 = ___1_srcValue;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_17 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_18 = ___1_srcValue;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_27 = ___1_srcValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_30 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_34 = ___1_srcValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_38 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_47 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_48 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_51 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_62 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_69 = ___1_srcValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_72 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_73 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_72);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_77 = ___0_dstValue;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_78 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_77);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mF91BAFA67958A7398E1F94B6762EBA9CFF390C19((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_83 = ((*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m7EE0B90CCD253F02E96F343529DD3FC62FA5741F_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_dstValue, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_1 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_2 = ___1_srcValue;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_13 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_14 = ___1_srcValue;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_17 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_18 = ___1_srcValue;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_27 = ___1_srcValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_30 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_34 = ___1_srcValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_38 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_47 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_48 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_51 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_62 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_69 = ___1_srcValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_72 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_73 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_72);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_77 = ___0_dstValue;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_78 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_77);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mB9341E816B066B0A26BAD0F13896EBF26F51E9CE((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_83 = ((*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mB4B6ADD1C5E10A316D0A1B1F327C4DAAEBEB037F_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_dstValue, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m5FF237ACEB3949B5D7C53E07DF3A4B0AEE554D03_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_1 = ___0_dstValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_2 = ___1_srcValue;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_1)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_1)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m90C462E5A806C5EC3C1E0134E4E0C56E798F9D73_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_13 = ___0_dstValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_14 = ___1_srcValue;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_13)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_13)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_17 = ___0_dstValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_18 = ___1_srcValue;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_17)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_17)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_27 = ___1_srcValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_30 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_30)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_30)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_34 = ___1_srcValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_38 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_38)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_38)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_47 = ___0_dstValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_48 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_51 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_51)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_51)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_62 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_62)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_62)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_69 = ___1_srcValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_72 = ___0_dstValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_73 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_72);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_77 = ___0_dstValue;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_78 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_77);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4742E9EE4B9553E960851A662A8A02117EEBDC3E((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_83 = ((*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_83)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_83)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m07434CE1169A321996879366509DD835A4CB8353_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_dstValue, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_1 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_2 = ___1_srcValue;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_1)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_13 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_14 = ___1_srcValue;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_13 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_13)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_17 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_18 = ___1_srcValue;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_17)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_27 = ___1_srcValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_30 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_30)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_34 = ___1_srcValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_38 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_38)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_47 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_48 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_51 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_51)->___U3CnameU3Ek__BackingField), (void*)NULL);
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_57 = ___0_dstValue;
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_62 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_62)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_69 = ___1_srcValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_72 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_73 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_72);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_77 = ___0_dstValue;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_78 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_77);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m7B2D8DCCDFA8462A7A8420D259FAF18714AE26C8((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_83 = ((*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_83)->___U3CnameU3Ek__BackingField), (void*)NULL);
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m583C23B86F26D5B069C1B37CCEC80B571911ACE5_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_dstValue, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m1699307848A28762B1010388F526687D0612FE8C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_1 = ___0_dstValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_2 = ___1_srcValue;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mDDF59CCA9011F103CD8832B926F4E2F4D4DB7D72_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_13 = ___0_dstValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_14 = ___1_srcValue;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_17 = ___0_dstValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_18 = ___1_srcValue;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_27 = ___1_srcValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_30 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_34 = ___1_srcValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_38 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_47 = ___0_dstValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_48 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_51 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_62 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_69 = ___1_srcValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_72 = ___0_dstValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_73 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_72);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_77 = ___0_dstValue;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_78 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_77);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m80327FC0F910B1427CB26814FC1178C4F71E2843((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_83 = ((*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m66B1E68BAA4DD250849358FC56305CCD8BCE2976_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_dstValue, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_1 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_2 = ___1_srcValue;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_13 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_14 = ___1_srcValue;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_17 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_18 = ___1_srcValue;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_27 = ___1_srcValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_30 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_34 = ___1_srcValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_38 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_47 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_48 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_51 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_62 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_69 = ___1_srcValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_72 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_73 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_72);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_77 = ___0_dstValue;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_78 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_77);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m56D96CE7F98A37D61EFD5E3531CCC994A95F1EED((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_83 = ((*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_mDF864D01E47C2275D9992A5DCED819CE0B0EA61D_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_dstValue, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_1 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_2 = ___1_srcValue;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_13 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_14 = ___1_srcValue;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_17 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_18 = ___1_srcValue;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_27 = ___1_srcValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_30 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_34 = ___1_srcValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_38 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_47 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_48 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_51 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_62 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_69 = ___1_srcValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_72 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_73 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_72);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_77 = ___0_dstValue;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_78 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_77);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m0AC52A2D94D76CAE679622449130C1C2D8BC8F1B((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_83 = ((*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m414483ED7B4B0F61DA2F053FC554D05CB0CAA580_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_dstValue, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m3528699D334233C1837CB704EFA7ABC98DD3531E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_1 = ___0_dstValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_2 = ___1_srcValue;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m0968B5BFDFB836EB13201A24FBB799979C83A650_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_13 = ___0_dstValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_14 = ___1_srcValue;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_17 = ___0_dstValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_18 = ___1_srcValue;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_27 = ___1_srcValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_30 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_34 = ___1_srcValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_38 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_47 = ___0_dstValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_48 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_51 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_62 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_69 = ___1_srcValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_72 = ___0_dstValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_73 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_72);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_77 = ___0_dstValue;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_78 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_77);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mAC56AB6784215F3C91A574B11BE076362AF936BB((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_83 = ((*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m11CBB2950A0F060C0A44048FDFDBE8F12DFA2268_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_dstValue, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_1 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_2 = ___1_srcValue;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_13 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_14 = ___1_srcValue;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_17 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_18 = ___1_srcValue;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_27 = ___1_srcValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_30 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_34 = ___1_srcValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_38 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_47 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_48 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_51 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_62 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_69 = ___1_srcValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_72 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_73 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_72);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_77 = ___0_dstValue;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_78 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_77);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mEE806BBA02B2263493CED060EEE1BB5658A03DFC((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_83 = ((*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m8C2E83221E2F808A2A94D87F4B07B4D5A966FE46_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_dstValue, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_1 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_2 = ___1_srcValue;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_13 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_14 = ___1_srcValue;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_17 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_18 = ___1_srcValue;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_27 = ___1_srcValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_30 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_34 = ___1_srcValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_38 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_47 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_48 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_51 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_62 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_69 = ___1_srcValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_72 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_73 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_72);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_77 = ___0_dstValue;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_78 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_77);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m881CEAED0013770CEC9FF3D498862D9D361EC557((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_83 = ((*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mD1DC8FA0A5E3DA3CB3821FF8D37282B106358A32_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_dstValue, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_1 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_2 = ___1_srcValue;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_13 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_14 = ___1_srcValue;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_17 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_18 = ___1_srcValue;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_27 = ___1_srcValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_30 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_34 = ___1_srcValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_38 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_47 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_48 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_51 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_57 = ___0_dstValue;
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_62 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_69 = ___1_srcValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_72 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_73 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_72);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_77 = ___0_dstValue;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_78 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_77);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDD40AB576CCBA8847DD3C5DC38B09914537AF56F((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_83 = ((*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m64454D28E15E76B0D801056A27974681AC806A71_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_dstValue, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_mEED007E5AEE0AE010EB1B1E61BBB12A7AA6765DE_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_1 = ___0_dstValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_2 = ___1_srcValue;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m9D483C625CFC438BB83CFB250DE2E7525F21355A_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_13 = ___0_dstValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_14 = ___1_srcValue;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_17 = ___0_dstValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_18 = ___1_srcValue;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_27 = ___1_srcValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_30 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_34 = ___1_srcValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_38 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_47 = ___0_dstValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_48 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_51 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_57 = ___0_dstValue;
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_62 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_69 = ___1_srcValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_72 = ___0_dstValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_73 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_72);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_77 = ___0_dstValue;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_78 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_77);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m43A778514AAC83FC5155373F8DBCE48A5AEB1287((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_83 = ((*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
// Method Definition Index: 35377
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mD4340BC97A879404DB779E2CADDDD21E802FAB6A_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_dstValue, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_1 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_2 = ___1_srcValue;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_13 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_14 = ___1_srcValue;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_17 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_18 = ___1_srcValue;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_27 = ___1_srcValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_30 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_34 = ___1_srcValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_38 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_47 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_48 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_51 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_57 = ___0_dstValue;
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_62 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_69 = ___1_srcValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_72 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_73 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_72);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_77 = ___0_dstValue;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_78 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_77);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m4ADF89A14B52E7B6CCBAFF6E49ACAE830A118224((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_83 = ((*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mF07DB745CAF8FA92CEDD28FA68B8422FBE99B3DC_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_dstValue, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_1 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2 = ___1_srcValue;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_13 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_14 = ___1_srcValue;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_17 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_18 = ___1_srcValue;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_27 = ___1_srcValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_30 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_34 = ___1_srcValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_38 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_47 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_48 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_51 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_57 = ___0_dstValue;
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_62 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_69 = ___1_srcValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_72 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_73 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_72);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_77 = ___0_dstValue;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_78 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_77);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m819FAFDED283FA7D709E3A9C5E5452897535732A((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_83 = ((*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m3AECC1E2BFA4064F002AFD05EECFBBE46F2D4C0D_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_dstValue, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_1 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_2 = ___1_srcValue;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_13 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_14 = ___1_srcValue;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_17 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_18 = ___1_srcValue;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_27 = ___1_srcValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_30 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_34 = ___1_srcValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_38 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_47 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_48 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_51 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_57 = ___0_dstValue;
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_62 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_69 = ___1_srcValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_72 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_73 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_72);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_77 = ___0_dstValue;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_78 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_77);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mE5EBF77562B54CD1975DF95AFDDBBA0B8B0BF9E4((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_83 = ((*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 35377
// Method Definition Index: 35377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectClone_CloneValue_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8B59EFB23AAE7744DE0AEF22B254F6CD3AE2C00E_gshared (ManagedObjectClone_t6E754ED2624B829553A94A85A0D62AD51B58FCD6* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_dstValue, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E ___1_srcValue, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	RuntimeArray* G_B27_0 = NULL;
	RuntimeArray* G_B26_0 = NULL;
	int32_t G_B28_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_0;
		L_0 = TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_1 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_2 = ___1_srcValue;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_1 = L_2;
		return;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_3;
		L_3 = TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		bool L_5;
		L_5 = TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_6 = ___0_dstValue;
		il2cpp_codegen_initobj(L_6, sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		goto IL_01b2;
	}

IL_0039:
	{
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_7(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), ___1_srcValue);
		Type_t* L_8;
		L_8 = il2cpp_codegen_object_get_type((&L_7));
		V_1 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		Type_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_10, L_11);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_13 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_14 = ___1_srcValue;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_13 = L_14;
		return;
	}

IL_0061:
	{
		Type_t* L_15 = V_1;
		bool L_16;
		L_16 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_15, NULL);
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_17 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_18 = ___1_srcValue;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_17 = L_18;
		return;
	}

IL_0071:
	{
		Type_t* L_19 = V_1;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Type_t* L_21 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		G_B14_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_008f;
	}

IL_008e:
	{
		G_B14_0 = 0;
	}

IL_008f:
	{
		V_2 = (bool)G_B14_0;
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_26 = __this->___m_RootSource;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_27 = ___1_srcValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_28);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(RuntimeObject*)L_29))))
		{
			goto IL_00b3;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_30 = ___0_dstValue;
		RuntimeObject* L_31 = __this->___m_RootDestination;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_30 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_31, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00b3:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_32 = __this->___m_References;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_33 = __this->___m_References;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_34 = ___1_srcValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_35);
		NullCheck(L_33);
		bool L_37;
		L_37 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_33, L_36, (&V_3), Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_00dd;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_38 = ___0_dstValue;
		RuntimeObject* L_39 = V_3;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_38 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_39, il2cpp_rgctx_data(method->rgctx_data, 3))));
		return;
	}

IL_00dd:
	{
		Type_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_40, NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_42 = ___1_srcValue;
		V_5 = (RuntimeObject*)NULL;
		RuntimeObject* L_43 = V_5;
		if (L_43)
		{
			goto IL_00f9;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_0100;
	}

IL_00f9:
	{
		RuntimeObject* L_44 = V_5;
		NullCheck((RuntimeObject*)L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
		G_B24_0 = L_45;
	}

IL_0100:
	{
		V_4 = G_B24_0;
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_47 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_48 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_47);
		if (NULL)
		{
			G_B27_0 = ((RuntimeArray*)(NULL));
			goto IL_0126;
		}
		G_B26_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B28_0 = 1;
		goto IL_0132;
	}

IL_0126:
	{
		NullCheck(G_B27_0);
		int32_t L_49;
		L_49 = il2cpp_codegen_array_get_length(G_B27_0);
		int32_t L_50 = V_4;
		G_B28_0 = ((((int32_t)((((int32_t)L_49) == ((int32_t)L_50))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0132:
	{
		if (!G_B28_0)
		{
			goto IL_0180;
		}
	}

IL_0134:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_51 = ___0_dstValue;
		Type_t* L_52 = V_1;
		NullCheck(L_52);
		Type_t* L_53;
		L_53 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_52);
		int32_t L_54 = V_4;
		RuntimeArray* L_55;
		L_55 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_53, L_54, NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_51 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 3))));
		goto IL_0180;
	}

IL_014e:
	{
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_57 = ___0_dstValue;
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_58(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), *L_57);
		Type_t* L_59;
		L_59 = il2cpp_codegen_object_get_type((&L_58));
		Type_t* L_60 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_61;
		L_61 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0180;
		}
	}

IL_016f:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_62 = ___0_dstValue;
		Type_t* L_63 = V_1;
		RuntimeObject* L_64;
		L_64 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_63, NULL);
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_62 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_64, il2cpp_rgctx_data(method->rgctx_data, 3))));
	}

IL_0180:
	{
		bool L_65 = V_2;
		if (!L_65)
		{
			goto IL_01b2;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_66 = __this->___m_References;
		if (L_66)
		{
			goto IL_0196;
		}
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_67 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_67, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		__this->___m_References = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_References), (void*)L_67);
	}

IL_0196:
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_68 = __this->___m_References;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_69 = ___1_srcValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_70 = L_69;
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_70);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_72 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_73 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_72);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_74 = L_73;
		RuntimeObject* L_75 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_74);
		NullCheck(L_68);
		Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1(L_68, L_71, L_75, Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject* L_76 = __this->___m_Stack;
		V_0 = L_76;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_77 = ___0_dstValue;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_78 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_77);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 3), &L_79);
		__this->___m_Stack = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_80);
		il2cpp_codegen_initobj((&V_7), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_81 = V_7;
		bool L_82;
		L_82 = PropertyContainer_TryAccept_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m13B506EBE2662AA1EC36B1496B8EC4914253AAB1((RuntimeObject*)__this, (&___1_srcValue), (&V_6), L_81, il2cpp_rgctx_method(method->rgctx_data, 7));
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_83 = ___0_dstValue;
		RuntimeObject* L_84 = __this->___m_Stack;
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_83 = ((*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)UnBox(L_84, il2cpp_rgctx_data(method->rgctx_data, 3))));
		RuntimeObject* L_85 = V_0;
		__this->___m_Stack = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Stack), (void*)L_85);
		return;
	}
}
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m0D78DAA55CA1CA3AE94272FDFF02D1C1BC1763C6_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE0F90826548B0C3102050B135AABD7FCF73A5120_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m11497792427A6500E5BEC1F44B26CED5E4E210BB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t94405784E845EA464968A7BA6455EE4082C988EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2299324716E9073847D43B5EE074036241CE2FDB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0D87D0851EC5F34630C609FC128C8673317DCEAA_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8883CD81D797B05BC15979287C7B2BC58F033BC9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m6297ED590646B14048B5FC3125D3B357266FF433_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m109DD5445E24831B7BC78C7D27802788FA113D53_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t8AB7CD711706308490EFF51F31AF45C6AB97DDF6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mEDC6BA66D8D6DE00FD0F9B4C5AD0519B03FA6BFD_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mF61CE687FAE6BDC2753CDF6BEFE826CB51D6959F_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m8743C852501A5A11E54F14DEA2070D10EB63A21F_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mB861B1B55CFCEBC9DFF4387F456C2AC80B02A103_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m55AA7A282B79A29C3DA24B56683A5897E5F7E9A0_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC0DCE60D34CB3B625A7E957DD755BAAE3F5ADE91_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC6016152C0B1EA884A010EA192A177AF6D450C2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m371300A2F6CA88E8CC34EA1D30226DADF20DF159_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE4C358BCE5CA8EAEC8AFCE80969A622525644AE4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0581F21AE7DCD3653CA50C2B1A83596515E469CE_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2F0140ACB0515BDDC870EC97E27CB7FE1A3E632B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m66017AAD546A97E689F25A40839FDDB2DDC69F2C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1070B18AE5014C462C176214EB504B80ABCF9E56_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mD0ED35F34834D1848D0D597AF906C3F712DAE09B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7220BB2ACCEE1EA2053D2E92E0DBE25DC43647B8_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB9DCCD3BBF3EE862519183C720AAC6BA3A86B1D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m37D42BF4D5B4D9B0438EC68FF5805247017DD90D_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0285698C5170350BB9326DA5102DE8A5CA6DE357_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t7FBD6A3FBFE466CC7C2D8D3C046790A1B7E343E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m71E5DD5E57922A24E5D8ACDC63720DA12180D119_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mD22045184FA0539BA7AFCFABEAD125438AD5D418_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFAC2D7C6B051CC5476CDC3CD6449AED4A5D87408_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m392F4C8C66B4A071756DB71F627CAC269285D1BA_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m33625EC55E4DE2F45D4BB9979B71B6394DCAA84B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3F99D60DF484D7154D83563634764473B340414C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m464DECD495CB2BC744CE122AAD07403C501AF87B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE961AAB25B0D1DD6A17564895842AF7BD52468DB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t202E31FDCB5BFA14FDF87807FDAF5B04EB5F8034_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m28DFE80F9F70333A9ECB62AE877098092F39A47B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mFE2AA6D4EF3606873E12E0201D79FECF7E52BFF5_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tD909FCFAF79D42896A1FC2CD20FB1ABCAAA257DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m72D732937C93BD7AE8F529A0430A8C7906DCD0F3_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m7A2EAA2C303B5864C0220CBD342C75E269A4AAA3_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFA0B43A2A3A7C2204717987FEC00B04AA9F81F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mC27F117CAABDF35DCE60B44ED90CA5E0C316E87B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m171E276B62877B02E9840B204D3ED28130D8DFCD_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t1702AD010C5DC0B1F26D46D5D2A182E9CAFCD640_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m2503D4240E029F16D5C98BD8DC5B732B8A02C98E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m9812594FA23CC694FBDE4CA32625D3FBA1177A29_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tFB3FC779258BD8C9717811E3C3FB85E125EFC8FB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m748E564407EE5311B3129B6563800575345A24B3_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBF67FA3A6F82EA4FD80F246E3D2AB424D28FD667_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCFF7A75C3914FB515773955DB32BE7BC4A1346DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m916B9C203D96F12013B160116CA44AA967C225D4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mBE2469309A59E9E64ED306132C6DB40EA211B02B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tCC4BDF8E0A12FD764908EC189D75E770E4C60943_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m5FF237ACEB3949B5D7C53E07DF3A4B0AEE554D03_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m90C462E5A806C5EC3C1E0134E4E0C56E798F9D73_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t0671FE8E5B12D2B48C84E8F9F22F08BE9CA2FB84_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m9DFB57E57F4AC783DEAAC4F0A5E1CB11A90BA299_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAB96CAD5D360071A2AC29CEFA10D8376FE5A716C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t757ADFB4D991E864C5C73DA2C8ECE7DB437E2DDF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m1699307848A28762B1010388F526687D0612FE8C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mDDF59CCA9011F103CD8832B926F4E2F4D4DB7D72_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEF6310A0910FEA8D9823620EA14ACAEC9AE964AD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m908BDA55B06C8C24176F0E7F23FBE5D2CC34DC25_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mC18B485E8C55F324812CBB67B78A007B739115E4_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tC847C5AECFD56D7A03E78146847095A698E8A9D6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m26D8E5CB65881B90C23D386F1820AF754B074F26_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mE022DBB0602AAADCAA703B4A54242852A8965853_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t2745081C9EBBFB683CA88BDE5D022B3E28F023BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3528699D334233C1837CB704EFA7ABC98DD3531E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m0968B5BFDFB836EB13201A24FBB799979C83A650_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tF87930A08DE9EF913CCD9ADBE4F0515D6A46B444_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m1D1A832B4A280B5CC5A8F6103512BD85C232D534_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m989233B2F7F633EFE624A0CF8A5F9D3DAC75F00E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t9E0AB7A057AA6EE1CF91911858169EA0D58BB816_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mB84DCA55DC40F517EE6B897F549822CF99051417_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m1499F4A014158A9E43B430FA922C10FA9BF42BDA_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tEC4AD2AA03E1549DCDDCA8138E36D91F7BF393BB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m423D4EE31271BFF343FB125B5237B9FF71CFF524_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m4BCDE88FF19C72620C04896DCEC626E7A9621B31_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_tB395B95685AE971ABD5B79C40A58224E776FC934_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_mEED007E5AEE0AE010EB1B1E61BBB12A7AA6765DE_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m9D483C625CFC438BB83CFB250DE2E7525F21355A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t4CFE7EF9DB9BB1CAE6CCA93CF3D6BE4308502C60_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m3D4A64F52976BCB0D13C18E6667B03A7DDCBACED_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_m867A30A06DF4DAE601C1437681BE61D0B03D0735_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t71057E7D8F22A723DE8C778E71218D6DDFD2BAF0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m35FC9B6070CEB5A54D8C4333B165F7DCB68D66D9_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA68BE2F93E951687D0F1ABE4A6A4A65A00DBB8B3_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m6A352A501393CAE8E5F280361DA8F7D8C4689AF9_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mAC32D5C4424D52F5A3E7FE46DC053073AC0B2521_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
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
// Method Definition Index: 127950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsContainer_m5324709E9C1E2AFCCE54DFE57CA9E5A134A5D7FC_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsContainerU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_CanBeNull_mA069B0BDEC214B763CC8ECBCE3B72C13664A29E8_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CCanBeNullU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 127940
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
