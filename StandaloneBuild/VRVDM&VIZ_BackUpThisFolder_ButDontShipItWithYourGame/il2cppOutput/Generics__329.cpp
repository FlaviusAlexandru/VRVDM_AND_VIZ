#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { p1, p2, &p3, &p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct VirtualActionInvoker12Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct VirtualActionInvoker12Invoker<T1*, T2*, T3, T4*, T5*, T6, T7*, T8*, T9, T10, T11, T12>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5, T6 p6, T7* p7, T8* p8, T9 p9, T10 p10, T11 p11, T12 p12)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[12] = { p1, p2, &p3, p4, p5, &p6, p7, p8, &p9, &p10, &p11, &p12 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[11]);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1;
struct DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14;
struct DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5;
struct Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54;
struct Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57;
struct Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160;
struct Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2;
struct Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C;
struct Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377;
struct Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72;
struct Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400;
struct Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3;
struct Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD;
struct Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF;
struct Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C;
struct Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171;
struct Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685;
struct Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1;
struct Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E;
struct Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65;
struct Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828;
struct Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1;
struct Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321;
struct Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9;
struct Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44;
struct Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3;
struct Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560;
struct Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C;
struct Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4;
struct Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6;
struct Func_1_t9F006B810716B4758B3E530CF59363AF647B7A0C;
struct Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB;
struct Func_1_t9F553B6FE8B4B1BC8E41DF963346CF2E540BF408;
struct Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659;
struct Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F;
struct Func_1_t4D51EED6AE06E76A82226D5A5384FA37AD2E02CA;
struct Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6;
struct Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5;
struct Func_1_t09A60B2234FC456C533DC471A407079122170E31;
struct Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2;
struct Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B;
struct Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C;
struct Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC;
struct Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C;
struct Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD;
struct Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC;
struct Func_1_tDAF364C4F678BFDAA180FE8083B68CA870FE8A3D;
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7;
struct Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159;
struct Func_1_tA90B32DB876C15DF432BC9AB01DCF9307A7D04CD;
struct Func_1_tD15DFB62ABCDB80E76F95385AB050FD2C7A6EA57;
struct Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B;
struct Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2;
struct Func_3_t6E57AF981293DC26E9631AA2A14D231440CC20A3;
struct IConstructor_1_tA5458B0D1E8635A10570E306341BE807D0F2686B;
struct IConstructor_1_t2960F21878750911147E68CD1F959445905C4ABC;
struct IConstructor_1_t930621BC4EAA12FEB41FC2B594D13E4343E2618D;
struct IConstructor_1_t47BF822E241693DAECC4ECCAE299ADDA44CFC4C0;
struct IConstructor_1_t411A5B8EF19EC461DA4BC7BA6E5079CCEE6D62B2;
struct IConstructor_1_t8EB10577432A770766B16D8B92A40940DFB11E82;
struct IConstructor_1_t54F4F7648838AEA450736B43973635CB75783D91;
struct IConstructor_1_t300FDB711D1BC0C69B0B0E4AAAE0B6A647345B42;
struct IConstructor_1_tCCC70297AF4FE980FDC2AE0B96E147AC14599A3D;
struct IConstructor_1_tB1CEFFAE1CE6022168805E328A5CEABBE836716A;
struct IConstructor_1_tE34B96BC40F13146D7C2438B1CA0E4D1E47B1FED;
struct IConstructor_1_t95AC4FC1EA5E833F6A11E6EB5ADA01811A558279;
struct IConstructor_1_t28A8380765092C5D4291F5EDC06C99342EB825FB;
struct IConstructor_1_tB52973DDA944E82C16EE1B40EE3B0B77C3A1AA4D;
struct IConstructor_1_tDB1CE5779EED69233DDD6868F9CE38E960F8AC94;
struct IConstructor_1_t8524B017A05D85D47528F71F5E85596E7A503F9E;
struct IConstructor_1_t391A251ECF03B0C64D3671C41D00CBDFEC3FA357;
struct IConstructor_1_t0EB4E64ACB720943AF49F451A0D4359D442999FD;
struct IConstructor_1_t4B7C7EA4746B1E5758FDEF9AAE982D0BF8ACD539;
struct IConstructor_1_t1E8D6866DB6F30C638EE8ADE11DA73150187CE44;
struct IConstructor_1_tFA4915349F3839A9891E8602A2ED6786740ECD7D;
struct IConstructor_1_t459295021B8FCB54CA76176BD223C9BA51557E32;
struct IConstructor_1_t9E5C643DA9C5622B68D840EDFF390A70ECF2AEA2;
struct IConstructor_1_tD2F0204B018332308BBFE26F5F8B8042F4D3D059;
struct IConstructor_1_tE51AA760737252530326DC43276D34FA2CEE0F9A;
struct IConstructor_1_t796EE1140793AFF116FA892025F4E9DC1EE01995;
struct IConstructor_1_t6ED67945DAFBA6E7912283FDDA2347783F44FB5D;
struct IConstructor_1_t5F014F2823FA5977FD2248DA641BFA7ACC19B72E;
struct IConstructor_1_t7881B18DED839EC864024A317E2D41EFE80F886C;
struct IConstructor_1_t49F74C6B918F55A7E99A10D938EF2B58FFCEDBA1;
struct IConstructor_1_t0ACEBC18A86FD28A8CC2BA0ED3239EC693CF7AA0;
struct IConstructor_1_t5AD3C56A5054DF1BFCEA9954D4AB6E6CFB76B7CA;
struct IConstructor_1_t2522DB3785B984B4627CA8176690F60C47D1BAD3;
struct IConstructor_1_t25EA7EC1F3883D5B844FE3771006B279298A276A;
struct IConstructor_1_t45B3820CA05F1B9B9E49A3CACF573C4E2FB8C199;
struct IConstructor_1_t0BEAEB22F43824D35B4CDE12AAABB4B7FB0FD543;
struct IConstructor_1_t05C60754E43502E64B32477899DEC4A4E0C03341;
struct IConstructor_1_t4FA0A3C79CE5E02F6C521DF2FA9202AB05CFCB74;
struct IConstructor_1_tBC4B238B01274133EECF8DAD08108F6D222DEADD;
struct IConstructor_1_t943F43022B5DD77D92BF54CCD22377BDC30F631E;
struct IConstructor_1_tB4817FCBFD3A44F10C3F86B2C4E1B216E1FCEDB5;
struct IConstructor_1_tDD86C10136B0BA3E56D1CD481C363158964E7F0F;
struct IConstructor_1_t1884EA3CD46E94F4D28CA8DE00D459F69A91D0DE;
struct IConstructor_1_t5F6E2B4293606962F689E382293BFEA5BAFA4D7B;
struct IConstructor_1_t2FF8EFB5BD43525357B54CCC4FE9389902CA78B0;
struct IConstructor_1_t0424BF286BCE96A770AB44F11484FA6ACE9518A3;
struct IConstructor_1_t84CE59BB5A9AC249CE7ED6B567A11E5EE491BE2C;
struct IConstructor_1_tA12E5DE037D3295F3B52C2EEAAFCEB121A9F9AB8;
struct IConstructor_1_t4AE53D6639369EA51B98B27DF715BDC6E347D616;
struct IConstructor_1_t16740C6899CB84817E4A3888DB886677372B1F85;
struct IConstructor_1_tC2B82CFB0625675FF535D7F10B38B938EAF8B958;
struct IConstructor_1_tE2963477BCF3159E6AB4A5424723C29ADD8CC300;
struct IConstructor_1_t7118E5571F3589D1E62B72DB3363A2D8B1A10E89;
struct IPropertyBag_1_t78E3D9B225A7497CC0AE3364C09CAB5199CB2D51;
struct IPropertyBag_1_tBAB240BB30992D17423BF36CE017B0A656625F13;
struct IPropertyBag_1_tFBCE7A7420E0A61651C8A11A7451DC0876AC3988;
struct IPropertyBag_1_t34647E6DBA2B3FBAF772A30AB58389B957EB2353;
struct IPropertyBag_1_tE29BEC42A2C3E7DF88983A6F59E88D596AEC9E43;
struct IPropertyBag_1_t4503949B37B2AF7B859307C5B9FC0D205FBBB58C;
struct IPropertyBag_1_t0C3656FAD043E643AE0AF2CE556A8B0EFC08BAF0;
struct IPropertyBag_1_t12476CBFA03E553669FC0F78B8B392643D0EA98D;
struct IPropertyBag_1_tC89C7D801308BB118F51FC38D2EDF9150099CD87;
struct IPropertyBag_1_tA5F5E06CD7B6D9DA44B0C96DD751E125A2838965;
struct IPropertyBag_1_tB4F574342A3326282E305E935876E09BA8AC2A2E;
struct IPropertyBag_1_t0F569CB3E3DD679044B9F9E594B94E991D876F55;
struct IPropertyBag_1_t75E8A73DD169ABF3B2F426195FC856E2109A33DD;
struct IPropertyBag_1_t77E5C6F81853BED026D0F9AC9D9C48462D27148A;
struct IPropertyBag_1_tD0AC48FB723053E10D50C4F4ACA187049C60A52A;
struct IPropertyBag_1_tA86B0AA7564B969B39432363A3CC153860369CF8;
struct IPropertyBag_1_t77CA305099161316B0F106947331ACD4308ED989;
struct IPropertyBag_1_tCD7CC57930205D5F84A39010A1F108F3C6A36E6A;
struct IPropertyBag_1_tF96AD753C8C0604F73BEC05D07FB8DB0E652D9D7;
struct IPropertyBag_1_tCC672A5FC4DF9FCAEDB0E95C78D8B03C0BE79D1F;
struct IPropertyBag_1_t7C36A151B5FD7C37FE0595C5137FB1312D4C54AB;
struct IPropertyBag_1_tA07B327296713C59D106B43B60E6FE134114D3C7;
struct IPropertyBag_1_tFB0D9D329A0DD352CA6F2E401245E71D132AF6B1;
struct IPropertyBag_1_t4617BB91FE13E8E7BF4E398D851924D4C3797363;
struct IPropertyBag_1_tEF276B210F9DE83EB23F108A9E4140B944A90684;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t6EF58ECBFCFA6FA99AC1281CE3A14BB083B08524;
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
struct TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB;
struct TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B;
struct TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927;
struct TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE;
struct TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058;
struct TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA;
struct TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97;
struct TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F;
struct TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A;
struct TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C;
struct TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F;
struct TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068;
struct TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F;
struct TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32;
struct TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11;
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695;
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B;
struct TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8;
struct TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0;
struct TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084;
struct TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54;
struct TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1;
struct TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19;
struct TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684;
struct TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D;
struct TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
struct DOTweenComponent_tEA6C5A1520B40681AE6FA1703529F60EBC3691DC;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
struct Exception_t;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodBase_t;
struct MethodInfo_t;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140;
struct Type_t;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A;
IL2CPP_EXTERN_C String_t* _stringLiteral261D661948B770F8B400B8265288227AE56B4F98;
IL2CPP_EXTERN_C String_t* _stringLiteral3494960139156C577EACAE136B19BE516523C267;
IL2CPP_EXTERN_C String_t* _stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4;
IL2CPP_EXTERN_C String_t* _stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCE1874A8D7E75C725B6E18E8F5F2D5B78FCE9;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2187048809B10555138F2F9BB58E93E20F1B49;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF  : public RuntimeObject
{
};
struct U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32  : public RuntimeObject
{
};
struct U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F  : public RuntimeObject
{
};
struct U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433  : public RuntimeObject
{
};
struct U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025  : public RuntimeObject
{
};
struct U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762  : public RuntimeObject
{
};
struct U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992  : public RuntimeObject
{
};
struct U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021  : public RuntimeObject
{
};
struct U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE  : public RuntimeObject
{
};
struct U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2  : public RuntimeObject
{
};
struct U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC  : public RuntimeObject
{
};
struct U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E  : public RuntimeObject
{
};
struct U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F  : public RuntimeObject
{
};
struct U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7  : public RuntimeObject
{
};
struct U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181  : public RuntimeObject
{
};
struct U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637  : public RuntimeObject
{
};
struct U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA  : public RuntimeObject
{
};
struct U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567  : public RuntimeObject
{
};
struct U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD  : public RuntimeObject
{
};
struct U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E  : public RuntimeObject
{
};
struct U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C  : public RuntimeObject
{
};
struct U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E  : public RuntimeObject
{
};
struct U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184  : public RuntimeObject
{
};
struct U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3  : public RuntimeObject
{
};
struct U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0  : public RuntimeObject
{
};
struct ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B  : public RuntimeObject
{
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* ___m_ExplicitConstructor;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927  : public RuntimeObject
{
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* ___m_ExplicitConstructor;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD1D466F09E7C13EBC5D186052464A64849D5E745  : public RuntimeObject
{
	Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57* ___m_ExplicitConstructor;
	Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t22427474AA8A92692B369C6DAE953F4091BDA636  : public RuntimeObject
{
	Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160* ___m_ExplicitConstructor;
	Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDE37B8BA965DC6EB5E86CEA76AE5030D16DD1A23  : public RuntimeObject
{
	Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2* ___m_ExplicitConstructor;
	Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB58B048E1D1EAB7AF4D35634637E1273AFD0AC4C  : public RuntimeObject
{
	Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C* ___m_ExplicitConstructor;
	Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t653814B7B545D0AB3126B1EECABF7CEEE2012104  : public RuntimeObject
{
	Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377* ___m_ExplicitConstructor;
	Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t7F386E4452494C6A853A99985CA15ADC8395CD4E  : public RuntimeObject
{
	Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72* ___m_ExplicitConstructor;
	Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4108DA4A9676E4D26F7CF3673FA36297050C0C7A  : public RuntimeObject
{
	Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400* ___m_ExplicitConstructor;
	Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0FFC02AC4715C3F3BE68ABC4C81287D6DEA82F4A  : public RuntimeObject
{
	Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3* ___m_ExplicitConstructor;
	Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0E0CB7D858DB4D18B7C2EC88BDFE37B456E7C861  : public RuntimeObject
{
	Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD* ___m_ExplicitConstructor;
	Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t70A036B1B15B90FBC9F02AF8F6E48E032D5D6540  : public RuntimeObject
{
	Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF* ___m_ExplicitConstructor;
	Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tAAE70FE3B0EF5E0FA22EF6FC8FE75F57F18E06BE  : public RuntimeObject
{
	Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C* ___m_ExplicitConstructor;
	Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t599F43EE520A42D957067198D3A0718370443163  : public RuntimeObject
{
	Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171* ___m_ExplicitConstructor;
	Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t94E13CBEFAC3E196D333F68F69C9ABBE4F156800  : public RuntimeObject
{
	Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685* ___m_ExplicitConstructor;
	Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t588B0FD4F6C65C0F6BB42D167F9B60C2D293B204  : public RuntimeObject
{
	Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1* ___m_ExplicitConstructor;
	Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDB18592D861B6EFEAAF1AEEB85C0B25202F67949  : public RuntimeObject
{
	Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E* ___m_ExplicitConstructor;
	Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDCF155BFEA2707044BB463553DC107540C2A3D5A  : public RuntimeObject
{
	Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65* ___m_ExplicitConstructor;
	Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD167C93E2862C4349CA1F20A32FAA91160F337DA  : public RuntimeObject
{
	Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828* ___m_ExplicitConstructor;
	Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t081EF6BF602C3F2475067C39C365BF669AB40C3B  : public RuntimeObject
{
	Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1* ___m_ExplicitConstructor;
	Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB5A35333AE4AA1157ADBDB0B4A724C76354C2D8D  : public RuntimeObject
{
	Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321* ___m_ExplicitConstructor;
	Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB1CA34A9151868105648EC810DD8EC97702EFDFE  : public RuntimeObject
{
	Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9* ___m_ExplicitConstructor;
	Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t59DD2A4C7ECC1C218E27BFA55E8FEBB72F772E48  : public RuntimeObject
{
	Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44* ___m_ExplicitConstructor;
	Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE  : public RuntimeObject
{
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___m_ExplicitConstructor;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058  : public RuntimeObject
{
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___m_ExplicitConstructor;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA  : public RuntimeObject
{
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___m_ExplicitConstructor;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97  : public RuntimeObject
{
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___m_ExplicitConstructor;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F  : public RuntimeObject
{
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___m_ExplicitConstructor;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t88D4C3F614E0F52A2E6BC74236675C04059884DF  : public RuntimeObject
{
	Func_1_t9F006B810716B4758B3E530CF59363AF647B7A0C* ___m_ExplicitConstructor;
	Func_1_t9F006B810716B4758B3E530CF59363AF647B7A0C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A  : public RuntimeObject
{
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___m_ExplicitConstructor;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t2DB26B75C6F405352963DC1F3ED8A4DF5CB6DBF4  : public RuntimeObject
{
	Func_1_t9F553B6FE8B4B1BC8E41DF963346CF2E540BF408* ___m_ExplicitConstructor;
	Func_1_t9F553B6FE8B4B1BC8E41DF963346CF2E540BF408* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C  : public RuntimeObject
{
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___m_ExplicitConstructor;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F  : public RuntimeObject
{
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___m_ExplicitConstructor;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD5D8A741CA3EB03C27C4F0A24E8B3CEDB9D97165  : public RuntimeObject
{
	Func_1_t4D51EED6AE06E76A82226D5A5384FA37AD2E02CA* ___m_ExplicitConstructor;
	Func_1_t4D51EED6AE06E76A82226D5A5384FA37AD2E02CA* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068  : public RuntimeObject
{
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___m_ExplicitConstructor;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F  : public RuntimeObject
{
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___m_ExplicitConstructor;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t90CE1E9261187483FB81EACCDEE93B9E6C048323  : public RuntimeObject
{
	Func_1_t09A60B2234FC456C533DC471A407079122170E31* ___m_ExplicitConstructor;
	Func_1_t09A60B2234FC456C533DC471A407079122170E31* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32  : public RuntimeObject
{
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* ___m_ExplicitConstructor;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11  : public RuntimeObject
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_ExplicitConstructor;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695  : public RuntimeObject
{
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ExplicitConstructor;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B  : public RuntimeObject
{
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ExplicitConstructor;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8  : public RuntimeObject
{
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* ___m_ExplicitConstructor;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0  : public RuntimeObject
{
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* ___m_ExplicitConstructor;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084  : public RuntimeObject
{
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___m_ExplicitConstructor;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54  : public RuntimeObject
{
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* ___m_ExplicitConstructor;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1  : public RuntimeObject
{
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* ___m_ExplicitConstructor;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t26BDD277B47C93BAFEFE46BA901F0F7C05C6901F  : public RuntimeObject
{
	Func_1_tDAF364C4F678BFDAA180FE8083B68CA870FE8A3D* ___m_ExplicitConstructor;
	Func_1_tDAF364C4F678BFDAA180FE8083B68CA870FE8A3D* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19  : public RuntimeObject
{
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___m_ExplicitConstructor;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684  : public RuntimeObject
{
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* ___m_ExplicitConstructor;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t8680D84F25FF764C8FA0BF735522C5049A5C0689  : public RuntimeObject
{
	Func_1_tA90B32DB876C15DF432BC9AB01DCF9307A7D04CD* ___m_ExplicitConstructor;
	Func_1_tA90B32DB876C15DF432BC9AB01DCF9307A7D04CD* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tF660776C7266B4FBD816E2D3E89EFC8B33BF9DA3  : public RuntimeObject
{
	Func_1_tD15DFB62ABCDB80E76F95385AB050FD2C7A6EA57* ___m_ExplicitConstructor;
	Func_1_tD15DFB62ABCDB80E76F95385AB050FD2C7A6EA57* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D  : public RuntimeObject
{
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* ___m_ExplicitConstructor;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44  : public RuntimeObject
{
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* ___m_ExplicitConstructor;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13  : public RuntimeObject
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
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
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
struct MethodBase_t  : public MemberInfo_t
{
};
struct SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9 
{
	int32_t ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField;
	int32_t ___U3CtotCallbackErrorsU3Ek__BackingField;
	int32_t ___U3CtotStartupErrorsU3Ek__BackingField;
	int32_t ___U3CtotUnsetErrorsU3Ek__BackingField;
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
struct AutoPlay_t384F947DD2D760EFBA1BE8CDD9D7C36F84CA9BAA 
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
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
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
struct Ease_t1A7F82C47C5B94B9CF9DF46FC58F80488BC6A7EB 
{
	int32_t ___value__;
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
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct LogBehaviour_t2FD320D27583DB4381604A338ACB97E18D9AEB2D 
{
	int32_t ___value__;
};
struct LoopType_t3128AD2C907BAF825D244B38F274987C1AA08FE5 
{
	int32_t ___value__;
};
struct NestedTweenFailureBehaviour_tCE5490C534CDFB141BBF7E191869C7AF9545A0DE 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RewindCallbackMode_t402F5CAC86F25ECE57B222149279FEA57F7E0038 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SafeModeLogBehaviour_tD95FFDF3834C7C85E9BA3B67DEB7D37A92CC1076 
{
	int32_t ___value__;
};
struct SpecialStartupMode_t872762964D80B3C1F6CE4024236A20D3D889AC44 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct TweenType_t50BBF64E13F70041085C51B9E0CB40FA61212F3E 
{
	int32_t ___value__;
};
struct UpdateMode_tBFCA927EBBD86ED19B7F28FB8D2F9CE2B2155E79 
{
	int32_t ___value__;
};
struct UpdateNotice_tC955E26EB162E28A8449394EFB225F20478D2BE7 
{
	int32_t ___value__;
};
struct UpdateType_tA521F450D94A1E8A88C6967093E093777BBA4C57 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct SafeModeReportType_tA09ECB3EEAC8B926F9D34CE6FC23F28FB2045C8E 
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
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	int32_t ___tweenType;
	float ___sequencedPosition;
	float ___sequencedEndPosition;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart;
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
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14  : public MulticastDelegate_t
{
};
struct DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16  : public MulticastDelegate_t
{
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5  : public MulticastDelegate_t
{
};
struct Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54  : public MulticastDelegate_t
{
};
struct Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3  : public MulticastDelegate_t
{
};
struct Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560  : public MulticastDelegate_t
{
};
struct Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C  : public MulticastDelegate_t
{
};
struct Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4  : public MulticastDelegate_t
{
};
struct Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6  : public MulticastDelegate_t
{
};
struct Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB  : public MulticastDelegate_t
{
};
struct Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659  : public MulticastDelegate_t
{
};
struct Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6  : public MulticastDelegate_t
{
};
struct Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A  : public MulticastDelegate_t
{
};
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};
struct Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2  : public MulticastDelegate_t
{
};
struct Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B  : public MulticastDelegate_t
{
};
struct Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C  : public MulticastDelegate_t
{
};
struct Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC  : public MulticastDelegate_t
{
};
struct Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C  : public MulticastDelegate_t
{
};
struct Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD  : public MulticastDelegate_t
{
};
struct Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC  : public MulticastDelegate_t
{
};
struct Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7  : public MulticastDelegate_t
{
};
struct Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159  : public MulticastDelegate_t
{
};
struct Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B  : public MulticastDelegate_t
{
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
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	float ___timeScale;
	bool ___isBackwards;
	bool ___isInverted;
	RuntimeObject* ___id;
	String_t* ___stringId;
	int32_t ___intId;
	RuntimeObject* ___target;
	int32_t ___updateType;
	bool ___isIndependentUpdate;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete;
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill;
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange;
	bool ___isFrom;
	bool ___isBlendable;
	bool ___isRecyclable;
	bool ___isSpeedBased;
	bool ___autoKill;
	float ___duration;
	int32_t ___loops;
	int32_t ___loopType;
	float ___delay;
	bool ___U3CisRelativeU3Ek__BackingField;
	int32_t ___easeType;
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase;
	float ___easeOvershootOrAmplitude;
	float ___easePeriod;
	String_t* ___debugTargetId;
	Type_t* ___typeofT1;
	Type_t* ___typeofT2;
	Type_t* ___typeofTPlugOptions;
	bool ___U3CactiveU3Ek__BackingField;
	bool ___isSequenced;
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent;
	int32_t ___activeId;
	int32_t ___specialStartupMode;
	bool ___creationLocked;
	bool ___startupDone;
	bool ___U3CplayedOnceU3Ek__BackingField;
	float ___U3CpositionU3Ek__BackingField;
	float ___fullDuration;
	int32_t ___completedLoops;
	bool ___isPlaying;
	bool ___isComplete;
	float ___elapsedDelay;
	bool ___delayComplete;
	int32_t ___miscInt;
};
struct Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F  : public MulticastDelegate_t
{
};
struct Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5  : public MulticastDelegate_t
{
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
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	bool ___hasManuallySetStartValue;
	bool ___isFromAllowed;
};
struct Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2  : public MulticastDelegate_t
{
};
struct TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140 {};
struct U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields
{
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields
{
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields
{
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields
{
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields
{
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields
{
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields
{
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields
{
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields
{
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields
{
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields
{
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields
{
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields
{
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields
{
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields
{
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields
{
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields
{
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields
{
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields
{
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields
{
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields
{
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields
{
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields
{
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields
{
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* ___U3C2U3E__CreateClassInstance;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields
{
	String_t* ___Version;
	bool ___useSafeMode;
	int32_t ___safeModeLogBehaviour;
	int32_t ___nestedTweenFailureBehaviour;
	bool ___showUnityEditorReport;
	float ___timeScale;
	float ___unscaledTimeScale;
	bool ___useSmoothDeltaTime;
	float ___maxSmoothUnscaledTime;
	int32_t ___rewindCallbackMode;
	int32_t ____logBehaviour;
	Func_3_t6E57AF981293DC26E9631AA2A14D231440CC20A3* ___onWillLog;
	bool ___drawGizmos;
	bool ___debugMode;
	bool ____fooDebugStoreTargetId;
	int32_t ___defaultUpdateType;
	bool ___defaultTimeScaleIndependent;
	int32_t ___defaultAutoPlay;
	bool ___defaultAutoKill;
	int32_t ___defaultLoopType;
	bool ___defaultRecyclable;
	int32_t ___defaultEaseType;
	float ___defaultEaseOvershootOrAmplitude;
	float ___defaultEasePeriod;
	DOTweenComponent_tEA6C5A1520B40681AE6FA1703529F60EBC3691DC* ___instance;
	bool ____foo_isQuitting;
	int32_t ___maxActiveTweenersReached;
	int32_t ___maxActiveSequencesReached;
	SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9 ___safeModeReport;
	List_1_t6EF58ECBFCFA6FA99AC1281CE3A14BB083B08524* ___GizmosDelegates;
	bool ___initialized;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	String_t* ___ConstructorName;
	String_t* ___TypeConstructorName;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m406345BEDC20027DB9B5925275E2B09058A843BD_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mD84B2DCBEE362ADF4424C41477BB0155544520CE_gshared (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE4AFDA8004CE12122DA24B9F5042268A6A41D9EB_gshared (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Activator_CreateInstance_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD2DCC0324C1A3EB24D72256B77610472EDD88A9D_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Func_1_Invoke_mA97D9B579CE05A4EE723E7543F3A25155C89D248_gshared_inline (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m7441F3BBFE0393824EF2EF9DBFDCB8DE774EB7E1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0C3860D940BBAFF9D3028BB8AEEB2013EBD148DE_gshared (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m843169BE731755008C98FC9B88432A1145C422FC_gshared (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 Activator_CreateInstance_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m2D23469DE285D342F804169CDA744553E587DB04_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 Func_1_Invoke_m127B6E92F0496658FE9BAE1F389692ECCC785353_gshared_inline (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC_gshared (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7_gshared (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_gshared_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253_gshared (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_gshared_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB_gshared (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_gshared_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379_gshared (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_gshared_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5_gshared (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_gshared_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A_gshared (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_gshared_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94_gshared (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_gshared_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456_gshared (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_gshared_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A_gshared (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_gshared_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m6233E67E2CB335430BEB0D382031506329D0908F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m4FE9C7D3694AC974427D443083D299F228DF83E5_gshared (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mEFEBE8557A4685AA0136E0F9372C881F2961EA08_gshared (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 Activator_CreateInstance_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m1B86176D77D41F0CC20DD066B2E09716B88362D3_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 Func_1_Invoke_m80E62F07322489999C827407299FA0FCF4413228_gshared_inline (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAA92AE507938CCDF9B095D391B09F2E57F664F4B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m666C28CB41C8E3DF3EF64E57C7D810BEF359B3C0_gshared (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Activator_CreateInstance_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8531C73991A8C30F1F8BEEEF6A3DFDF837D18D02_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E_gshared (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_gshared_inline (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A_gshared (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_gshared_inline (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAB3523EDA1FD61B32DF48531B43662D727BD35E7_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mBC1B9041EF38B189A2CB52E9EEE0C5D2799C5F64_gshared (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE042A1BE679CC2AAF7894C7AB76FD6236643895E_gshared (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR uint8_t Activator_CreateInstance_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3D23955ED67B1414D5E68C703612B273B43EE42_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Func_1_Invoke_m7B5D0EE3E57BB9CB0A5875A889734FAB925D94F0_gshared_inline (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEB60098A9A2C3D5D4B631B470730355AB767E628_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m8E2F11EB412FBD485AFB991FAB0622F5729A2722_gshared (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m64666B7C79DD37423166867D6AC3A2487EB91E13_gshared (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppChar Activator_CreateInstance_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m556C7544183F03DFEAC54118819F6B9A262D51D0_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Func_1_Invoke_mA083CCE78A8E818AA497A761713F80498D219ACB_gshared_inline (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAA19987E46CAD9338DF74120A832415C36326B5D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mBE2C54EA2DB4DD90EC5D436C186892B50BE8F258_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m85A38CF8289F6ACF32B4058B1C07DD7CC055AA27_gshared (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Activator_CreateInstance_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m458B1EE9503B5C407D2E43E2847F41BFAE2CAC26_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_1_Invoke_mDA08F91DC646CC4232398F289FF54F1168A4E09A_gshared_inline (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m7FEC07CF4902BBF48B9C4171215BDBA3BA2DB1E4_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m4E1865797B183FAB552FF807EE432E7DC79882DF_gshared (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m503C0C83AEE2D5B700A87AF1D659FB7410CEB841_gshared (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 Activator_CreateInstance_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m1CCFC561EE426FF2DF844EFA5B84090556705490_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 Func_1_Invoke_mB633C6EF99C189F0F06E4D4C5832574C37A576FB_gshared_inline (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m070F21AD58B6EFF501BF24ECB6C28E1B1C5F06D2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mE7B060F5C4BAF57565DB61AB8D725C93A5D08C05_gshared (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mB6B37D17521300EA733E1C0601C501464F303836_gshared (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Activator_CreateInstance_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m49C7DB1ECDFDC056131DA91BE5C644C2BB2FD90D_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Func_1_Invoke_m4EBD73458B1F79AFA8A5344D5A74A75BFA1E0BEF_gshared_inline (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m48889F8B69A4C7096F223134BB75EC6318E043F0_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mFF9B30CFFB3D98754589923A0EC42DB74A5D9ED3_gshared (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31_gshared (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR double Activator_CreateInstance_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF596B5104025B6A6FF5877766D6762D7B8DF40D5_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_1_Invoke_mEDA5C900255BD87C426F1915DD5F89979FFB7DAE_gshared_inline (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5EC1A7651A240D8EAF39841B35FDBC5F69738D69_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m3A92C9876AF6C919D3D7687C4F0FE12297332667_gshared (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m9A4D79D727E080355E3A999E8AE3D991E6E93B8E_gshared (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 Activator_CreateInstance_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m23BB120FEB591350AAFB0563F0252B36A0BDCEF1_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 Func_1_Invoke_m00307DE4A5C9F53ACFB96CFC55D6B05BE8CB7682_gshared_inline (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m203E0C37B8B8E647733B9109AC71C16A9FD5DD31_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m9A31D03ADE69DD8E9DBB9A9C4CC6935F6A982CF7_gshared (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mF7A236E1EFFDF0CE09B83BD02CA01A96769601F5_gshared (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD Activator_CreateInstance_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mEAA2B0266EE2C220A851182D417452CB1A163222_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD Func_1_Invoke_mAD94F63787CE58C6D078D5699B224EA3A5B5A6B7_gshared_inline (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m8F2429F3094C61D9A6FE684D658A96D61AB89862_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m3EE8AC64CB0ECC1C470A9CCF0E05DBEE371F1264_gshared (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mD67D42E3F593B6F366864EFB08ACF38914A6A6F9_gshared (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF Activator_CreateInstance_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mD81672A3C252D5932577AA842B7C5A2E442B9834_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF Func_1_Invoke_m484FA282527A60E46D4C504246DAB32B99757929_gshared_inline (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener__ctor_m04B7FAE8742229AF46C846C73F08E0F12A943F26 (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E (RuntimeObject* ___0_message, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_Reset_m7E3A4C092BDB502A8B12E5DBB461602400A31C8D (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6 (RuntimeObject* ___0_message, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___1_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20 (SafeModeReport_t36C3527D96D574F81DB1748D1E856C7A539A25B9* __this, int32_t ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m406345BEDC20027DB9B5925275E2B09058A843BD (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m406345BEDC20027DB9B5925275E2B09058A843BD_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mD84B2DCBEE362ADF4424C41477BB0155544520CE (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mD84B2DCBEE362ADF4424C41477BB0155544520CE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_mE4AFDA8004CE12122DA24B9F5042268A6A41D9EB (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mE4AFDA8004CE12122DA24B9F5042268A6A41D9EB_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline (const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_types, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___0_left, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Activator_CreateInstance_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD2DCC0324C1A3EB24D72256B77610472EDD88A9D (const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (const RuntimeMethod*))Activator_CreateInstance_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD2DCC0324C1A3EB24D72256B77610472EDD88A9D_gshared)(method);
}
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Func_1_Invoke_mA97D9B579CE05A4EE723E7543F3A25155C89D248_inline (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5*, const RuntimeMethod*))Func_1_Invoke_mA97D9B579CE05A4EE723E7543F3A25155C89D248_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m7441F3BBFE0393824EF2EF9DBFDCB8DE774EB7E1 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m7441F3BBFE0393824EF2EF9DBFDCB8DE774EB7E1_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m0C3860D940BBAFF9D3028BB8AEEB2013EBD148DE (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m0C3860D940BBAFF9D3028BB8AEEB2013EBD148DE_gshared)(__this, method);
}
inline void Func_1__ctor_m843169BE731755008C98FC9B88432A1145C422FC (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m843169BE731755008C98FC9B88432A1145C422FC_gshared)(__this, ___0_object, ___1_method, method);
}
inline PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 Activator_CreateInstance_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m2D23469DE285D342F804169CDA744553E587DB04 (const RuntimeMethod* method)
{
	return ((  PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 (*) (const RuntimeMethod*))Activator_CreateInstance_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m2D23469DE285D342F804169CDA744553E587DB04_gshared)(method);
}
inline PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 Func_1_Invoke_m127B6E92F0496658FE9BAE1F389692ECCC785353_inline (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* __this, const RuntimeMethod* method)
{
	return ((  PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 (*) (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54*, const RuntimeMethod*))Func_1_Invoke_m127B6E92F0496658FE9BAE1F389692ECCC785353_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586 (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared)(__this, method);
}
inline void Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668 (const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668_gshared)(method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*, const RuntimeMethod*))Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D_gshared)(__this, method);
}
inline void Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7 (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778 (const RuntimeMethod* method)
{
	return ((  StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778_gshared)(method);
}
inline StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*) (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*, const RuntimeMethod*))Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705 (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705_gshared)(__this, method);
}
inline void Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253 (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233 (const RuntimeMethod* method)
{
	return ((  StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233_gshared)(method);
}
inline StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*) (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*, const RuntimeMethod*))Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8 (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8_gshared)(__this, method);
}
inline void Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602 (const RuntimeMethod* method)
{
	return ((  StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602_gshared)(method);
}
inline StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*) (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*, const RuntimeMethod*))Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C_gshared)(__this, method);
}
inline void Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379 (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379_gshared)(__this, ___0_object, ___1_method, method);
}
inline StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C (const RuntimeMethod* method)
{
	return ((  StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C_gshared)(method);
}
inline StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method)
{
	return ((  StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*) (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*, const RuntimeMethod*))Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7 (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7_gshared)(__this, method);
}
inline void Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5 (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5_gshared)(__this, ___0_object, ___1_method, method);
}
inline Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A (const RuntimeMethod* method)
{
	return ((  Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*) (const RuntimeMethod*))Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A_gshared)(method);
}
inline Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method)
{
	return ((  Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*) (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*, const RuntimeMethod*))Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E_gshared)(__this, method);
}
inline void Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A_gshared)(__this, ___0_object, ___1_method, method);
}
inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5 (const RuntimeMethod* method)
{
	return ((  Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5_gshared)(method);
}
inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method)
{
	return ((  Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*) (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*, const RuntimeMethod*))Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208 (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208_gshared)(__this, method);
}
inline void Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94 (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94_gshared)(__this, ___0_object, ___1_method, method);
}
inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513 (const RuntimeMethod* method)
{
	return ((  BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513_gshared)(method);
}
inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method)
{
	return ((  BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*) (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*, const RuntimeMethod*))Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29_gshared)(__this, method);
}
inline void Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456 (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456_gshared)(__this, ___0_object, ___1_method, method);
}
inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267 (const RuntimeMethod* method)
{
	return ((  BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267_gshared)(method);
}
inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method)
{
	return ((  BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*) (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*, const RuntimeMethod*))Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E_gshared)(__this, method);
}
inline void Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A_gshared)(__this, ___0_object, ___1_method, method);
}
inline BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5 (const RuntimeMethod* method)
{
	return ((  BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5_gshared)(method);
}
inline BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method)
{
	return ((  BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*) (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*, const RuntimeMethod*))Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m6233E67E2CB335430BEB0D382031506329D0908F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m6233E67E2CB335430BEB0D382031506329D0908F_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m4FE9C7D3694AC974427D443083D299F228DF83E5 (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m4FE9C7D3694AC974427D443083D299F228DF83E5_gshared)(__this, method);
}
inline void Func_1__ctor_mEFEBE8557A4685AA0136E0F9372C881F2961EA08 (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mEFEBE8557A4685AA0136E0F9372C881F2961EA08_gshared)(__this, ___0_object, ___1_method, method);
}
inline BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 Activator_CreateInstance_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m1B86176D77D41F0CC20DD066B2E09716B88362D3 (const RuntimeMethod* method)
{
	return ((  BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m1B86176D77D41F0CC20DD066B2E09716B88362D3_gshared)(method);
}
inline BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 Func_1_Invoke_m80E62F07322489999C827407299FA0FCF4413228_inline (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* __this, const RuntimeMethod* method)
{
	return ((  BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*) (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A*, const RuntimeMethod*))Func_1_Invoke_m80E62F07322489999C827407299FA0FCF4413228_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAA92AE507938CCDF9B095D391B09F2E57F664F4B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAA92AE507938CCDF9B095D391B09F2E57F664F4B_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m666C28CB41C8E3DF3EF64E57C7D810BEF359B3C0 (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m666C28CB41C8E3DF3EF64E57C7D810BEF359B3C0_gshared)(__this, method);
}
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
inline bool Activator_CreateInstance_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8531C73991A8C30F1F8BEEEF6A3DFDF837D18D02 (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))Activator_CreateInstance_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8531C73991A8C30F1F8BEEEF6A3DFDF837D18D02_gshared)(method);
}
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99 (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99_gshared)(__this, method);
}
inline void Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E_gshared)(__this, ___0_object, ___1_method, method);
}
inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35 (const RuntimeMethod* method)
{
	return ((  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35_gshared)(method);
}
inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_inline (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, const RuntimeMethod* method)
{
	return ((  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*) (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*, const RuntimeMethod*))Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C_gshared)(__this, method);
}
inline void Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A_gshared)(__this, ___0_object, ___1_method, method);
}
inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8 (const RuntimeMethod* method)
{
	return ((  BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 (*) (const RuntimeMethod*))Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8_gshared)(method);
}
inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_inline (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, const RuntimeMethod* method)
{
	return ((  BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 (*) (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*, const RuntimeMethod*))Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAB3523EDA1FD61B32DF48531B43662D727BD35E7 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAB3523EDA1FD61B32DF48531B43662D727BD35E7_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mBC1B9041EF38B189A2CB52E9EEE0C5D2799C5F64 (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mBC1B9041EF38B189A2CB52E9EEE0C5D2799C5F64_gshared)(__this, method);
}
inline void Func_1__ctor_mE042A1BE679CC2AAF7894C7AB76FD6236643895E (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mE042A1BE679CC2AAF7894C7AB76FD6236643895E_gshared)(__this, ___0_object, ___1_method, method);
}
inline uint8_t Activator_CreateInstance_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3D23955ED67B1414D5E68C703612B273B43EE42 (const RuntimeMethod* method)
{
	return ((  uint8_t (*) (const RuntimeMethod*))Activator_CreateInstance_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3D23955ED67B1414D5E68C703612B273B43EE42_gshared)(method);
}
inline uint8_t Func_1_Invoke_m7B5D0EE3E57BB9CB0A5875A889734FAB925D94F0_inline (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C*, const RuntimeMethod*))Func_1_Invoke_m7B5D0EE3E57BB9CB0A5875A889734FAB925D94F0_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEB60098A9A2C3D5D4B631B470730355AB767E628 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEB60098A9A2C3D5D4B631B470730355AB767E628_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m8E2F11EB412FBD485AFB991FAB0622F5729A2722 (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m8E2F11EB412FBD485AFB991FAB0622F5729A2722_gshared)(__this, method);
}
inline void Func_1__ctor_m64666B7C79DD37423166867D6AC3A2487EB91E13 (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m64666B7C79DD37423166867D6AC3A2487EB91E13_gshared)(__this, ___0_object, ___1_method, method);
}
inline Il2CppChar Activator_CreateInstance_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m556C7544183F03DFEAC54118819F6B9A262D51D0 (const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (const RuntimeMethod*))Activator_CreateInstance_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m556C7544183F03DFEAC54118819F6B9A262D51D0_gshared)(method);
}
inline Il2CppChar Func_1_Invoke_mA083CCE78A8E818AA497A761713F80498D219ACB_inline (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC*, const RuntimeMethod*))Func_1_Invoke_mA083CCE78A8E818AA497A761713F80498D219ACB_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAA19987E46CAD9338DF74120A832415C36326B5D (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAA19987E46CAD9338DF74120A832415C36326B5D_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mBE2C54EA2DB4DD90EC5D436C186892B50BE8F258 (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mBE2C54EA2DB4DD90EC5D436C186892B50BE8F258_gshared)(__this, method);
}
inline void Func_1__ctor_m85A38CF8289F6ACF32B4058B1C07DD7CC055AA27 (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m85A38CF8289F6ACF32B4058B1C07DD7CC055AA27_gshared)(__this, ___0_object, ___1_method, method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Activator_CreateInstance_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m458B1EE9503B5C407D2E43E2847F41BFAE2CAC26 (const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (const RuntimeMethod*))Activator_CreateInstance_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m458B1EE9503B5C407D2E43E2847F41BFAE2CAC26_gshared)(method);
}
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_1_Invoke_mDA08F91DC646CC4232398F289FF54F1168A4E09A_inline (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C*, const RuntimeMethod*))Func_1_Invoke_mDA08F91DC646CC4232398F289FF54F1168A4E09A_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m7FEC07CF4902BBF48B9C4171215BDBA3BA2DB1E4 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m7FEC07CF4902BBF48B9C4171215BDBA3BA2DB1E4_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m4E1865797B183FAB552FF807EE432E7DC79882DF (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m4E1865797B183FAB552FF807EE432E7DC79882DF_gshared)(__this, method);
}
inline void Func_1__ctor_m503C0C83AEE2D5B700A87AF1D659FB7410CEB841 (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m503C0C83AEE2D5B700A87AF1D659FB7410CEB841_gshared)(__this, ___0_object, ___1_method, method);
}
inline Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 Activator_CreateInstance_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m1CCFC561EE426FF2DF844EFA5B84090556705490 (const RuntimeMethod* method)
{
	return ((  Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 (*) (const RuntimeMethod*))Activator_CreateInstance_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m1CCFC561EE426FF2DF844EFA5B84090556705490_gshared)(method);
}
inline Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 Func_1_Invoke_mB633C6EF99C189F0F06E4D4C5832574C37A576FB_inline (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* __this, const RuntimeMethod* method)
{
	return ((  Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 (*) (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD*, const RuntimeMethod*))Func_1_Invoke_mB633C6EF99C189F0F06E4D4C5832574C37A576FB_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m070F21AD58B6EFF501BF24ECB6C28E1B1C5F06D2 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m070F21AD58B6EFF501BF24ECB6C28E1B1C5F06D2_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mE7B060F5C4BAF57565DB61AB8D725C93A5D08C05 (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mE7B060F5C4BAF57565DB61AB8D725C93A5D08C05_gshared)(__this, method);
}
inline void Func_1__ctor_mB6B37D17521300EA733E1C0601C501464F303836 (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mB6B37D17521300EA733E1C0601C501464F303836_gshared)(__this, ___0_object, ___1_method, method);
}
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Activator_CreateInstance_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m49C7DB1ECDFDC056131DA91BE5C644C2BB2FD90D (const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (const RuntimeMethod*))Activator_CreateInstance_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m49C7DB1ECDFDC056131DA91BE5C644C2BB2FD90D_gshared)(method);
}
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Func_1_Invoke_m4EBD73458B1F79AFA8A5344D5A74A75BFA1E0BEF_inline (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC*, const RuntimeMethod*))Func_1_Invoke_m4EBD73458B1F79AFA8A5344D5A74A75BFA1E0BEF_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m48889F8B69A4C7096F223134BB75EC6318E043F0 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m48889F8B69A4C7096F223134BB75EC6318E043F0_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_mFF9B30CFFB3D98754589923A0EC42DB74A5D9ED3 (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_mFF9B30CFFB3D98754589923A0EC42DB74A5D9ED3_gshared)(__this, method);
}
inline void Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31 (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31_gshared)(__this, ___0_object, ___1_method, method);
}
inline double Activator_CreateInstance_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF596B5104025B6A6FF5877766D6762D7B8DF40D5 (const RuntimeMethod* method)
{
	return ((  double (*) (const RuntimeMethod*))Activator_CreateInstance_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF596B5104025B6A6FF5877766D6762D7B8DF40D5_gshared)(method);
}
inline double Func_1_Invoke_mEDA5C900255BD87C426F1915DD5F89979FFB7DAE_inline (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*, const RuntimeMethod*))Func_1_Invoke_mEDA5C900255BD87C426F1915DD5F89979FFB7DAE_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5EC1A7651A240D8EAF39841B35FDBC5F69738D69 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5EC1A7651A240D8EAF39841B35FDBC5F69738D69_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m3A92C9876AF6C919D3D7687C4F0FE12297332667 (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m3A92C9876AF6C919D3D7687C4F0FE12297332667_gshared)(__this, method);
}
inline void Func_1__ctor_m9A4D79D727E080355E3A999E8AE3D991E6E93B8E (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m9A4D79D727E080355E3A999E8AE3D991E6E93B8E_gshared)(__this, ___0_object, ___1_method, method);
}
inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 Activator_CreateInstance_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m23BB120FEB591350AAFB0563F0252B36A0BDCEF1 (const RuntimeMethod* method)
{
	return ((  EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 (*) (const RuntimeMethod*))Activator_CreateInstance_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m23BB120FEB591350AAFB0563F0252B36A0BDCEF1_gshared)(method);
}
inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 Func_1_Invoke_m00307DE4A5C9F53ACFB96CFC55D6B05BE8CB7682_inline (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* __this, const RuntimeMethod* method)
{
	return ((  EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 (*) (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159*, const RuntimeMethod*))Func_1_Invoke_m00307DE4A5C9F53ACFB96CFC55D6B05BE8CB7682_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m203E0C37B8B8E647733B9109AC71C16A9FD5DD31 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m203E0C37B8B8E647733B9109AC71C16A9FD5DD31_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m9A31D03ADE69DD8E9DBB9A9C4CC6935F6A982CF7 (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m9A31D03ADE69DD8E9DBB9A9C4CC6935F6A982CF7_gshared)(__this, method);
}
inline void Func_1__ctor_mF7A236E1EFFDF0CE09B83BD02CA01A96769601F5 (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mF7A236E1EFFDF0CE09B83BD02CA01A96769601F5_gshared)(__this, ___0_object, ___1_method, method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD Activator_CreateInstance_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mEAA2B0266EE2C220A851182D417452CB1A163222 (const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (const RuntimeMethod*))Activator_CreateInstance_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mEAA2B0266EE2C220A851182D417452CB1A163222_gshared)(method);
}
inline Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD Func_1_Invoke_mAD94F63787CE58C6D078D5699B224EA3A5B5A6B7_inline (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* __this, const RuntimeMethod* method)
{
	return ((  Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*) (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B*, const RuntimeMethod*))Func_1_Invoke_mAD94F63787CE58C6D078D5699B224EA3A5B5A6B7_gshared_inline)(__this, method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m8F2429F3094C61D9A6FE684D658A96D61AB89862 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m8F2429F3094C61D9A6FE684D658A96D61AB89862_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m3EE8AC64CB0ECC1C470A9CCF0E05DBEE371F1264 (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m3EE8AC64CB0ECC1C470A9CCF0E05DBEE371F1264_gshared)(__this, method);
}
inline void Func_1__ctor_mD67D42E3F593B6F366864EFB08ACF38914A6A6F9 (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mD67D42E3F593B6F366864EFB08ACF38914A6A6F9_gshared)(__this, ___0_object, ___1_method, method);
}
inline FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF Activator_CreateInstance_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mD81672A3C252D5932577AA842B7C5A2E442B9834 (const RuntimeMethod* method)
{
	return ((  FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF (*) (const RuntimeMethod*))Activator_CreateInstance_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mD81672A3C252D5932577AA842B7C5A2E442B9834_gshared)(method);
}
inline FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF Func_1_Invoke_m484FA282527A60E46D4C504246DAB32B99757929_inline (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* __this, const RuntimeMethod* method)
{
	return ((  FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF (*) (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2*, const RuntimeMethod*))Func_1_Invoke_m484FA282527A60E46D4C504246DAB32B99757929_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 117939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerCore_3__ctor_m06435C62302570B385FF1F3203A1908564FE4A5D_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_write_instance_field_data<Type_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_write_instance_field_data<Type_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_3);
		Tweener__ctor_m04B7FAE8742229AF46C846C73F08E0F12A943F26((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 1)) };
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT1), (void*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2), (void*)L_7);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofTPlugOptions = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofTPlugOptions), (void*)L_9);
		((ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89*)__this)->___tweenType = (int32_t)0;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this);
		VirtualActionInvoker0::Invoke(4, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this);
		return;
	}
}
// Method Definition Index: 117940
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenerCore_3_ChangeStartValue_m137F0F79A0B93EEA4A7B9354E09F1F39084F31FE_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, RuntimeObject* ___0_newStartValue, float ___1_newDuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2187048809B10555138F2F9BB58E93E20F1B49);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	const Il2CppFullySharedGenericAny L_26 = L_22;
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	bool V_1 = false;
	Type_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Type_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	{
		bool L_0 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___isSequenced;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}

IL_0015:
	{
		RuntimeObject* L_1 = ___0_newStartValue;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = il2cpp_codegen_object_get_type(L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Type_t*, bool*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_3, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_4)
		{
			goto IL_0077;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEC2187048809B10555138F2F9BB58E93E20F1B49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Type_t* L_8 = V_0;
		Type_t* L_9 = L_8;
		if (L_9)
		{
			G_B5_0 = L_9;
			G_B5_1 = 1;
			G_B5_2 = L_7;
			G_B5_3 = L_7;
			goto IL_003f;
		}
		G_B4_0 = L_9;
		G_B4_1 = 1;
		G_B4_2 = L_7;
		G_B4_3 = L_7;
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0044;
	}

IL_003f:
	{
		NullCheck((RuntimeObject*)G_B5_0);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B5_0);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0044:
	{
		NullCheck(G_B6_2);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = G_B6_3;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Type_t* L_13 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2;
		Type_t* L_14 = L_13;
		if (L_14)
		{
			G_B8_0 = L_14;
			G_B8_1 = 3;
			G_B8_2 = L_12;
			G_B8_3 = L_12;
			goto IL_005c;
		}
		G_B7_0 = L_14;
		G_B7_1 = 3;
		G_B7_2 = L_12;
		G_B7_3 = L_12;
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B8_0);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B8_0);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0061:
	{
		NullCheck(G_B9_2);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = G_B9_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)L_17, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}

IL_0077:
	{
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		RuntimeObject* L_19 = ___0_newStartValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_19, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var))), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = L_20;
		il2cpp_codegen_box_unbox((&L_21), L_22, SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_23 = ___1_newDuration;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_24;
		L_24 = InvokerFuncInvoker3< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, float >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_22: *(void**)L_22), L_23);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_24;
	}

IL_0097:
	{
		RuntimeObject* L_25 = ___0_newStartValue;
		void* L_27 = UnBox_Any(L_25, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_26);
		float L_28 = ___1_newDuration;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_29;
		L_29 = InvokerFuncInvoker3< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, float >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_27)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_27))), L_28);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_29;
	}
}
// Method Definition Index: 117941
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenerCore_3_ChangeEndValue_mABC6E01FDA0D2BDEF016A2828F54E6A84FA2BC97_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, RuntimeObject* ___0_newEndValue, bool ___1_snapStartValue, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_newEndValue;
		bool L_1 = ___1_snapStartValue;
		NullCheck((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this);
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_2;
		L_2 = VirtualFuncInvoker3< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, float, bool >::Invoke(10, (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this, L_0, (-1.0f), L_1);
		return L_2;
	}
}
// Method Definition Index: 117942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenerCore_3_ChangeEndValue_mDC6A38F8EFB1620C4BF09EE5AE29F778F8A45D8D_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, RuntimeObject* ___0_newEndValue, float ___1_newDuration, bool ___2_snapStartValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCE1874A8D7E75C725B6E18E8F5F2D5B78FCE9);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	const Il2CppFullySharedGenericAny L_27 = L_22;
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	bool V_1 = false;
	Type_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Type_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	{
		bool L_0 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___isSequenced;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}

IL_0015:
	{
		RuntimeObject* L_1 = ___0_newEndValue;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = il2cpp_codegen_object_get_type(L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		bool L_4;
		L_4 = ((  bool (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Type_t*, bool*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_3, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_4)
		{
			goto IL_0077;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD6DCE1874A8D7E75C725B6E18E8F5F2D5B78FCE9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Type_t* L_8 = V_0;
		Type_t* L_9 = L_8;
		if (L_9)
		{
			G_B5_0 = L_9;
			G_B5_1 = 1;
			G_B5_2 = L_7;
			G_B5_3 = L_7;
			goto IL_003f;
		}
		G_B4_0 = L_9;
		G_B4_1 = 1;
		G_B4_2 = L_7;
		G_B4_3 = L_7;
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0044;
	}

IL_003f:
	{
		NullCheck((RuntimeObject*)G_B5_0);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B5_0);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0044:
	{
		NullCheck(G_B6_2);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = G_B6_3;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Type_t* L_13 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2;
		Type_t* L_14 = L_13;
		if (L_14)
		{
			G_B8_0 = L_14;
			G_B8_1 = 3;
			G_B8_2 = L_12;
			G_B8_3 = L_12;
			goto IL_005c;
		}
		G_B7_0 = L_14;
		G_B7_1 = 3;
		G_B7_2 = L_12;
		G_B7_3 = L_12;
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0061;
	}

IL_005c:
	{
		NullCheck((RuntimeObject*)G_B8_0);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B8_0);
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0061:
	{
		NullCheck(G_B9_2);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = G_B9_3;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)L_17, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}

IL_0077:
	{
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_0098;
		}
	}
	{
		RuntimeObject* L_19 = ___0_newEndValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_19, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var))), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = L_20;
		il2cpp_codegen_box_unbox((&L_21), L_22, SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_23 = ___1_newDuration;
		bool L_24 = ___2_snapStartValue;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_25;
		L_25 = InvokerFuncInvoker4< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, float, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_22: *(void**)L_22), L_23, L_24);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_25;
	}

IL_0098:
	{
		RuntimeObject* L_26 = ___0_newEndValue;
		void* L_28 = UnBox_Any(L_26, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_27);
		float L_29 = ___1_newDuration;
		bool L_30 = ___2_snapStartValue;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_31;
		L_31 = InvokerFuncInvoker4< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, float, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_28)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_28))), L_29, L_30);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_31;
	}
}
// Method Definition Index: 117943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenerCore_3_ChangeValues_mCD8FEAD65147FBA12DA8A7FC53F7C79900FBC29C_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, RuntimeObject* ___0_newStartValue, RuntimeObject* ___1_newEndValue, float ___2_newDuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3494960139156C577EACAE136B19BE516523C267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	const Il2CppFullySharedGenericAny L_47 = L_39;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	const Il2CppFullySharedGenericAny L_50 = L_43;
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	Type_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Type_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Type_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Type_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Type_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Type_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	Type_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Type_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	{
		bool L_0 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___isSequenced;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}

IL_0015:
	{
		RuntimeObject* L_1 = ___0_newStartValue;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = il2cpp_codegen_object_get_type(L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___1_newEndValue;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		V_1 = L_4;
		Type_t* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Type_t*, bool*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_5, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_6)
		{
			goto IL_007e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3494960139156C577EACAE136B19BE516523C267);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		Type_t* L_10 = V_0;
		Type_t* L_11 = L_10;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = 1;
			G_B5_2 = L_9;
			G_B5_3 = L_9;
			goto IL_0046;
		}
		G_B4_0 = L_11;
		G_B4_1 = 1;
		G_B4_2 = L_9;
		G_B4_3 = L_9;
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_004b;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)G_B5_0);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B5_0);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_004b:
	{
		NullCheck(G_B6_2);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B6_3;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		Type_t* L_15 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2;
		Type_t* L_16 = L_15;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = 3;
			G_B8_2 = L_14;
			G_B8_3 = L_14;
			goto IL_0063;
		}
		G_B7_0 = L_16;
		G_B7_1 = 3;
		G_B7_2 = L_14;
		G_B7_3 = L_14;
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0068;
	}

IL_0063:
	{
		NullCheck((RuntimeObject*)G_B8_0);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B8_0);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0068:
	{
		NullCheck(G_B9_2);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = G_B9_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_18, NULL);
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)L_19, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}

IL_007e:
	{
		Type_t* L_20 = V_1;
		bool L_21;
		L_21 = ((  bool (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Type_t*, bool*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_20, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		if (L_21)
		{
			goto IL_00d9;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3494960139156C577EACAE136B19BE516523C267);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		Type_t* L_25 = V_1;
		Type_t* L_26 = L_25;
		if (L_26)
		{
			G_B13_0 = L_26;
			G_B13_1 = 1;
			G_B13_2 = L_24;
			G_B13_3 = L_24;
			goto IL_00a1;
		}
		G_B12_0 = L_26;
		G_B12_1 = 1;
		G_B12_2 = L_24;
		G_B12_3 = L_24;
	}
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B12_1;
		G_B14_2 = G_B12_2;
		G_B14_3 = G_B12_3;
		goto IL_00a6;
	}

IL_00a1:
	{
		NullCheck((RuntimeObject*)G_B13_0);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B13_0);
		G_B14_0 = L_27;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}

IL_00a6:
	{
		NullCheck(G_B14_2);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = G_B14_3;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral261D661948B770F8B400B8265288227AE56B4F98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		Type_t* L_30 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2;
		Type_t* L_31 = L_30;
		if (L_31)
		{
			G_B16_0 = L_31;
			G_B16_1 = 3;
			G_B16_2 = L_29;
			G_B16_3 = L_29;
			goto IL_00be;
		}
		G_B15_0 = L_31;
		G_B15_1 = 3;
		G_B15_2 = L_29;
		G_B15_3 = L_29;
	}
	{
		G_B17_0 = ((String_t*)(NULL));
		G_B17_1 = G_B15_1;
		G_B17_2 = G_B15_2;
		G_B17_3 = G_B15_3;
		goto IL_00c3;
	}

IL_00be:
	{
		NullCheck((RuntimeObject*)G_B16_0);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B16_0);
		G_B17_0 = L_32;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
	}

IL_00c3:
	{
		NullCheck(G_B17_2);
		(G_B17_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B17_1), (String_t*)G_B17_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = G_B17_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_34;
		L_34 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_33, NULL);
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)L_34, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}

IL_00d9:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = ___0_newStartValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_36, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var))), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = L_37;
		il2cpp_codegen_box_unbox((&L_38), L_39, SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		RuntimeObject* L_40 = ___1_newEndValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(((*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)UnBox(L_40, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_il2cpp_TypeInfo_var))), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = L_41;
		il2cpp_codegen_box_unbox((&L_42), L_43, SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_il2cpp_TypeInfo_var, il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		float L_44 = ___2_newDuration;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_45;
		L_45 = InvokerFuncInvoker4< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_39: *(void**)L_39), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_43: *(void**)L_43), L_44);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_45;
	}

IL_010e:
	{
		RuntimeObject* L_46 = ___0_newStartValue;
		void* L_48 = UnBox_Any(L_46, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_47);
		RuntimeObject* L_49 = ___1_newEndValue;
		void* L_51 = UnBox_Any(L_49, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_50);
		float L_52 = ___2_newDuration;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_53;
		L_53 = InvokerFuncInvoker4< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_51)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_51))), L_52);
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)L_53;
	}
}
// Method Definition Index: 117944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* TweenerCore_3_ChangeStartValue_m21C09BDF71DC754B6A064D2BC36301611AAEDADC_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, Il2CppFullySharedGenericAny ___0_newStartValue, float ___1_newDuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	//<source_info:<no-source>:1>
	{
		bool L_0 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___isSequenced;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return __this;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_newStartValue : &___0_newStartValue), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		float L_2 = ___1_newDuration;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_3;
		L_3 = InvokerFuncInvoker3< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, float >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), L_2);
		return L_3;
	}
}
// Method Definition Index: 117945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* TweenerCore_3_ChangeEndValue_m7106F1CCB859EE389B6D5B5AE4335217488090B2_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, Il2CppFullySharedGenericAny ___0_newEndValue, bool ___1_snapStartValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_newEndValue : &___0_newEndValue), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		bool L_1 = ___1_snapStartValue;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_2;
		L_2 = InvokerFuncInvoker3< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, float, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_0: *(void**)L_0), (-1.0f), L_1);
		return L_2;
	}
}
// Method Definition Index: 117946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* TweenerCore_3_ChangeEndValue_mAE4845E7CB342F7A91F1B6C2F8C2BF10044087C6_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, Il2CppFullySharedGenericAny ___0_newEndValue, float ___1_newDuration, bool ___2_snapStartValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	//<source_info:<no-source>:1>
	{
		bool L_0 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___isSequenced;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return __this;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_newEndValue : &___0_newEndValue), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		float L_2 = ___1_newDuration;
		bool L_3 = ___2_snapStartValue;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_4;
		L_4 = InvokerFuncInvoker4< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, float, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), L_2, L_3);
		return L_4;
	}
}
// Method Definition Index: 117947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* TweenerCore_3_ChangeValues_m2BA333C819354CA8A6DD1C92080FFFAE68233402_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, Il2CppFullySharedGenericAny ___0_newStartValue, Il2CppFullySharedGenericAny ___1_newEndValue, float ___2_newDuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	//<source_info:<no-source>:1>
	{
		bool L_0 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___isSequenced;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debugger_LogError_mBAD7F720F13F12B84A27F564F83F00B66EEE6B9E((RuntimeObject*)_stringLiteral0A9AC25ECF357D5A29DCC4CC0B3ACF26D24CCB0A, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		return __this;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_newStartValue : &___0_newStartValue), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_newEndValue : &___1_newEndValue), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		float L_3 = ___2_newDuration;
		TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* L_4;
		L_4 = InvokerFuncInvoker4< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_2: *(void**)L_2), L_3);
		return L_4;
	}
}
// Method Definition Index: 117948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenerCore_3_SetFrom_m309385CB529479F75E55176C808BA5139D976F42_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, bool ___0_relative, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_0 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		bool L_1 = ___0_relative;
		NullCheck(L_0);
		VirtualActionInvoker2< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, bool >::Invoke(5, L_0, __this, L_1);
		((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this)->___hasManuallySetStartValue = (bool)1;
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}
}
// Method Definition Index: 117949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenerCore_3_SetFrom_mC19CCC7675C2BC00D41248D38C100843036CCC9E_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, Il2CppFullySharedGenericAny ___0_fromValue, bool ___1_setImmediately, bool ___2_relative, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	//<source_info:<no-source>:1>
	{
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_0 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_fromValue : &___0_fromValue), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		bool L_2 = ___1_setImmediately;
		bool L_3 = ___2_relative;
		NullCheck(L_0);
		VirtualActionInvoker4Invoker< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, Il2CppFullySharedGenericAny, bool, bool >::Invoke(6, L_0, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), L_2, L_3);
		((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this)->___hasManuallySetStartValue = (bool)1;
		return (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this;
	}
}
// Method Definition Index: 117950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenerCore_3_Reset_m2F983B29CC851A15B1521397C904E9D60B4D0B2A_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, const RuntimeMethod* method) 
{
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)));
	//<source_info:<no-source>:1>
	{
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this);
		Tween_Reset_m7E3A4C092BDB502A8B12E5DBB461602400A31C8D((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_0 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_1 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_1);
		VirtualActionInvoker1< TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* >::Invoke(4, L_1, __this);
	}

IL_001a:
	{
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), &L_3, L_2);
		typedef void ( *func_L_5)(void*,const RuntimeMethod*);
		((func_L_5)L_4)(L_3.thisPtr,L_3.method);
		il2cpp_codegen_write_instance_field_data<DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14*)NULL);
		il2cpp_codegen_write_instance_field_data<DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16*)NULL);
		((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this)->___hasManuallySetStartValue = (bool)0;
		((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)__this)->___isFromAllowed = (bool)1;
		return;
	}
}
// Method Definition Index: 117951
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_Validate_mCA1B37E9F3AB390A3A04E156DFEACA9916D31565_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tB1F68C2D1908AB30427BB0754E97C17BBB0447DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tB1F68C2D1908AB30427BB0754E97C17BBB0447DA);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_0 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_0, (Il2CppFullySharedGenericAny*)L_1);
		goto IL_0013;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (il2cpp_defaults.object_class, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{
		RuntimeObject* L_2 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0015;
	}

IL_0013:
	{
		return (bool)1;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 117952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_ValidateChangeValueType_m2B14D0B98967DCD78493CF775CA24DCA3F5615F8_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, Type_t* ___0_newType, bool* ___1_isColor32ToColor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Type_t* L_0 = ___0_newType;
		Type_t* L_1 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_2;
		L_2 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		bool* L_3 = ___1_isColor32ToColor;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_3, (int8_t)0);
		return (bool)1;
	}

IL_0013:
	{
		Type_t* L_4 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___typeofT2;
		Type_t* L_5 = *(Type_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		Type_t* L_7 = ___0_newType;
		Type_t* L_8 = *(Type_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		bool* L_10 = ___1_isColor32ToColor;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_10, (int8_t)1);
		return (bool)1;
	}

IL_0039:
	{
		bool* L_11 = ___1_isColor32ToColor;
		il2cpp_codegen_stind<int8_t>((int8_t*)L_11, (int8_t)0);
		return (bool)0;
	}
}
// Method Definition Index: 117953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenerCore_3_UpdateDelay_mBD594E62CCBFA1A287EFE933DB581CEF5C5501D9_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, float ___0_elapsed, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_elapsed;
		float L_1;
		L_1 = ((  float (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, float, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_1;
	}
}
// Method Definition Index: 117954
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_Startup_mA69A34CE19E077415AA34D1D2F0E95898F6B0BF8_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_0;
	}
}
// Method Definition Index: 117955
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenerCore_3_ApplyTween_mBDC35CC0B6C35AC321FC46AD8DD95C89855758C7_gshared (TweenerCore_3_t7C537340EF86F7781A9904D4D919578F2FBA40AB* __this, float ___0_prevPosition, int32_t ___1_prevCompletedLoops, int32_t ___2_newCompletedSteps, bool ___3_useInversePosition, int32_t ___4_updateMode, int32_t ___5_updateNotice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TPlugOptions_tB19EF07E5CA83CF7A0B08277A724AA6098ACA83F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	const Il2CppFullySharedGenericAny L_34 = L_13;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
	const Il2CppFullySharedGenericAny L_35 = L_14;
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TPlugOptions_tB19EF07E5CA83CF7A0B08277A724AA6098ACA83F);
	const Il2CppFullySharedGenericStruct L_29 = L_8;
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	float G_B5_0 = 0.0f;
	{
		bool L_0 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___isInverted;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = ___3_useInversePosition;
		___3_useInversePosition = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000f:
	{
		bool L_2 = ___3_useInversePosition;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this);
		float L_3;
		L_3 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		G_B5_0 = L_3;
		goto IL_0028;
	}

IL_001b:
	{
		float L_4 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___duration;
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this);
		float L_5;
		L_5 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		G_B5_0 = ((float)il2cpp_codegen_subtract(L_4, L_5));
	}

IL_0028:
	{
		V_0 = G_B5_0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		bool L_6 = ((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))->___useSafeMode;
		if (!L_6)
		{
			goto IL_00a7;
		}
	}
	try
	{
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_7 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TPlugOptions_tB19EF07E5CA83CF7A0B08277A724AA6098ACA83F);
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this);
		bool L_9;
		L_9 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_10 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16* L_11 = *(DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		float L_12 = V_0;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		float L_15 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___duration;
		bool L_16 = ___3_useInversePosition;
		int32_t L_17 = ___2_newCompletedSteps;
		int32_t L_18 = ___5_updateNotice;
		NullCheck(L_7);
		VirtualActionInvoker12Invoker< Il2CppFullySharedGenericStruct, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14*, DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16*, float, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float, bool, int32_t, int32_t >::Invoke(11, L_7, L_8, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, L_9, L_10, L_11, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), L_15, L_16, L_17, L_18);
		goto IL_00e3;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006e;
		}
		throw e;
	}

CATCH_006e:
	{
		{
			Exception_t* L_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_1 = L_19;
			bool L_20;
			L_20 = Debugger_ShouldLogSafeModeCapturedError_m5EE800D2A5FD98C95C119D9AF68035095A123C47(NULL);
			if (!L_20)
			{
				goto IL_0098;
			}
		}
		{
			Exception_t* L_21 = V_1;
			NullCheck(L_21);
			MethodBase_t* L_22;
			L_22 = Exception_get_TargetSite_m0CE79BBF864CCEA96B72ED52EC66753CFBE5ED6A(L_21, NULL);
			Exception_t* L_23 = V_1;
			NullCheck(L_23);
			String_t* L_24;
			L_24 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_23);
			Exception_t* L_25 = V_1;
			NullCheck(L_25);
			String_t* L_26;
			L_26 = VirtualFuncInvoker0< String_t* >::Invoke(9, L_25);
			String_t* L_27;
			L_27 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9365D4C1C592580176E99B94E4C370640A2640F)), (RuntimeObject*)L_22, (RuntimeObject*)L_24, (RuntimeObject*)L_26, NULL);
			Debugger_LogSafeModeCapturedError_m0EE4B4F14B9243B4A9BD757853CAB77B5A888ED6((RuntimeObject*)L_27, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		}

IL_0098:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var)));
			SafeModeReport_Add_mC993434DFE20DDF1E44389DACD34085F31E6ED20((&((DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var))))->___safeModeReport), (int32_t)1, NULL);
			V_2 = (bool)1;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00e5;
		}
	}

IL_00a7:
	{
		ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1* L_28 = *(ABSTweenPlugin_3_tDC724E2B66EA33E0E50BFC9D5D6DA6B3C5FA16A1**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TPlugOptions_tB19EF07E5CA83CF7A0B08277A724AA6098ACA83F);
		NullCheck((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this);
		bool L_30;
		L_30 = Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, NULL);
		DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14* L_31 = *(DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16* L_32 = *(DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		float L_33 = V_0;
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0)), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)), SizeOf_T2_t5AEA8765F0C6AEEBD1F7D858573B72440FFDEE00);
		float L_36 = ((Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this)->___duration;
		bool L_37 = ___3_useInversePosition;
		int32_t L_38 = ___2_newCompletedSteps;
		int32_t L_39 = ___5_updateNotice;
		NullCheck(L_28);
		VirtualActionInvoker12Invoker< Il2CppFullySharedGenericStruct, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, DOGetter_1_t8DA6E4433ACD8058D6EAE625137110D1FB3DFC14*, DOSetter_1_t856F6D96CAAFD28A21A398D2B3838D27D7E9BD16*, float, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float, bool, int32_t, int32_t >::Invoke(11, L_28, L_29, (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)__this, L_30, L_31, L_32, L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_35: *(void**)L_35), L_36, L_37, L_38, L_39);
	}

IL_00e3:
	{
		return (bool)0;
	}

IL_00e5:
	{
		bool L_40 = V_2;
		return L_40;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mA81D8C26129393E7390C0B9E23DE45C808E3AF6B_gshared (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m71FE5355D8F363D5B2A0FE1D1AF1057014DFC9A0_gshared (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m406345BEDC20027DB9B5925275E2B09058A843BD(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mD84B2DCBEE362ADF4424C41477BB0155544520CE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mD84B2DCBEE362ADF4424C41477BB0155544520CE_gshared (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* G_B3_0 = NULL;
	TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* G_B3_1 = NULL;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* G_B2_0 = NULL;
	TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* G_B2_1 = NULL;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* G_B9_0 = NULL;
	TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* G_B9_1 = NULL;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* G_B8_0 = NULL;
	TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* G_B8_1 = NULL;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* G_B13_0 = NULL;
	TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* G_B13_1 = NULL;
	Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* G_B12_0 = NULL;
	TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_4 = ((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_6 = (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mE4AFDA8004CE12122DA24B9F5042268A6A41D9EB(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_7 = L_6;
		((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_14 = ((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_16 = (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mE4AFDA8004CE12122DA24B9F5042268A6A41D9EB(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_17 = L_16;
		((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_22 = ((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_24 = (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mE4AFDA8004CE12122DA24B9F5042268A6A41D9EB(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_25 = L_24;
		((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t475B59DFBD7129EEE4D869642EE1B510F5212FCF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeConstructor_1_CreateValueTypeInstance_mE28CD552E2219190ABFC6DD03F00B98DC9C402B6_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeConstructor_1_CreateScriptableObjectInstance_mAFD869212A86CF994E488AF13C379E7D7D4AB475_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeConstructor_1_CreateClassInstance_m29F1D6397018E525EDD2D5AE95AD2F12BB139F20_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0;
		L_0 = Activator_CreateInstance_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD2DCC0324C1A3EB24D72256B77610472EDD88A9D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mFFB31117268C769678E28D3ECE3A41F128203FCE_gshared (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m0881E2A331F578215EA7BE8DE54CCBE50755D976_gshared (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_2;
		L_2 = Func_1_Invoke_mA97D9B579CE05A4EE723E7543F3A25155C89D248_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_14;
		L_14 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_17;
		L_17 = Func_1_Invoke_mA97D9B579CE05A4EE723E7543F3A25155C89D248_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mFB280EBE5C2F84EE2E6802269BA61A7FA1D1DC05_gshared (TypeConstructor_1_t724A92623275A723D1676A4BC8084CC67767421B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_0;
		L_0 = InterfaceFuncInvoker0< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m821719E378EC8E671E0286E0100EF66FC97E80B2_gshared (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m1E9F60B4654D73E6D467577B5B831CF6AD6AE6CE_gshared (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m7441F3BBFE0393824EF2EF9DBFDCB8DE774EB7E1(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m0C3860D940BBAFF9D3028BB8AEEB2013EBD148DE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0C3860D940BBAFF9D3028BB8AEEB2013EBD148DE_gshared (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* G_B3_0 = NULL;
	TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* G_B3_1 = NULL;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* G_B2_0 = NULL;
	TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* G_B2_1 = NULL;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* G_B9_0 = NULL;
	TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* G_B9_1 = NULL;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* G_B8_0 = NULL;
	TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* G_B8_1 = NULL;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* G_B13_0 = NULL;
	TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* G_B13_1 = NULL;
	Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* G_B12_0 = NULL;
	TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_4 = ((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_6 = (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m843169BE731755008C98FC9B88432A1145C422FC(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_7 = L_6;
		((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_14 = ((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_16 = (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m843169BE731755008C98FC9B88432A1145C422FC(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_17 = L_16;
		((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_22 = ((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_24 = (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m843169BE731755008C98FC9B88432A1145C422FC(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_25 = L_24;
		((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t85727ADAB1B8D9FDBCD882F7EC727DA3C0C39E32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 TypeConstructor_1_CreateValueTypeInstance_mBF86BA124D9BAA002CA6B33495B363E118F2162C_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757));
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 TypeConstructor_1_CreateScriptableObjectInstance_mCD94A15F7B4DA38B20646B0E14EDE05E9E1703F0_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 TypeConstructor_1_CreateClassInstance_m73EF43D6D9C4AEB911B93CE2AE9A997A652B86B4_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_0;
		L_0 = Activator_CreateInstance_TisPropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757_m2D23469DE285D342F804169CDA744553E587DB04(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mB148969F627A8D20B2D5C4683125821BE35E7FA3_gshared (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m8D41B2B787F37FBA1CCF6C2BF84E4E398A47F787_gshared (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_2;
		L_2 = Func_1_Invoke_m127B6E92F0496658FE9BAE1F389692ECCC785353_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_14;
		L_14 = InterfaceFuncInvoker0< PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_17;
		L_17 = Func_1_Invoke_m127B6E92F0496658FE9BAE1F389692ECCC785353_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m9D63B408E9989C9B10BE21689AB5731D13DDC796_gshared (TypeConstructor_1_t9024023DEA629B53006BD40830282AF13F756927* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_0;
		L_0 = InterfaceFuncInvoker0< PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m92AC36BEDCF9AABCB0A8AFD891AC8DD5CEEF48CE_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mCC2DDBA49E1A5E34050E36FBBF78034FB04D1415_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B3_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B3_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B2_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B2_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B9_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B9_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B8_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B8_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B13_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B13_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B12_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_4 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_6 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_7 = L_6;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_14 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_16 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_17 = L_16;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_22 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_24 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_25 = L_24;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateValueTypeInstance_mE82A51832FF8AC458EBFF1DAF32C00E26A1B997F_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26));
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateScriptableObjectInstance_m7808269708154B7FC4A4A23A67857D16C016AA2B_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateClassInstance_m8420F36ADDA84956FB32B12F2D0E0AAC091DF87A_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0;
		L_0 = Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m01CA0C176CC6F362F8E48AC734494160EECF4841_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mDFC4AF8F2F59A00B79672C881DCC617898FC054A_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_2;
		L_2 = Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_14;
		L_14 = InterfaceFuncInvoker0< StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_17;
		L_17 = Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m94D3A94CB2318D30FDA3DDF783B2DC2ACF3A2858_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0;
		L_0 = InterfaceFuncInvoker0< StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mB7E7EA000BF94C25D20309B10359E26A68D14C76_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m9232AD992B16F402E5AE8AAC8083758F889F6D2C_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B3_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B3_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B2_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B2_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B9_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B9_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B8_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B8_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B13_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B13_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B12_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_4 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_6 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_7 = L_6;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_14 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_16 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_17 = L_16;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_22 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_24 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_25 = L_24;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateValueTypeInstance_m19B1CE1BBC1A99035092372B76357F65AD50F3EB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateScriptableObjectInstance_mF527B42378E99D95B32A5C720C55CC4B99C1C254_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateClassInstance_m12CE46EC997EDE13530D214B1EA33CC2D607ACBB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m2A56ADE678FC1FA0F97CDEC7F4A7660EDCF2D3E4_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mB03C1C2B54AC9CCEAFD667680E05FD93813B043D_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_2;
		L_2 = Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_17;
		L_17 = Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mCA9AE2736B793171808602C4C83E73056F48CE55_gshared (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mD9CE9B9EA8B011599325405C3CF06897AA6355D4_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m21847F0A7EA3023224244FA42EC54883D6CC4F4B_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B3_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B3_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B2_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B2_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B9_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B9_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B8_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B8_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B13_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B13_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B12_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_4 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_6 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_7 = L_6;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_14 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_16 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_17 = L_16;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_22 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_24 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_25 = L_24;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateValueTypeInstance_mC4D442A1249625E7CD325E3D118DF59F8D41912D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateScriptableObjectInstance_m0C83D4D9AF62FE5A4E5E119F5EEA3B38F2220F77_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateClassInstance_mEA489A50989614F774CF74328E70373D0443A9F1_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mF2D43061EC4CECD47802C7FE1C631689DB706D6D_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mD99B1761C5CBE991095DB35641A4DAFE6310B26D_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_2;
		L_2 = Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_17;
		L_17 = Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mFD856ADDCE5758DD220042F53F47E017861E2351_gshared (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m6CE4441C4CF5135F1B49DD9ED58CA652AD36367B_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDA317D6B6D3FC6DE24B272CF7FB5919581D99F06_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B3_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B3_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B2_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B2_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B9_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B9_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B8_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B8_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B13_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B13_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B12_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_4 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_6 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_7 = L_6;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_14 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_16 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_17 = L_16;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_22 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_24 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_25 = L_24;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateValueTypeInstance_m96835016581CF939379948AA67F6BFD411CBC76D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateScriptableObjectInstance_m62CDE7EDB3D646F6F0606138E6184EE13A8C5DF7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateClassInstance_m21E479FCB4EE01FFC540B8EBDD45B52CF4C8E43F_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m3B5A5A324DD884C686B8529987903E0A7C331578_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m291CDBAEBBCD10CE68F1EB86CE9ED860C36E4E9A_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_2;
		L_2 = Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_17;
		L_17 = Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m96352EFE1502C36E2D1B2C8193189EDF43D5E24C_gshared (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m9CCF3612F9DEFD27DA181E21233AE2A7EDF9BE2C_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m2CFABD1CDC2D6707B10C869155F074E17D2C46F6_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B3_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B3_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B2_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B2_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B9_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B9_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B8_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B8_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B13_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B13_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B12_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_4 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_6 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_7 = L_6;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_14 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_16 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_17 = L_16;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_22 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_24 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_25 = L_24;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateValueTypeInstance_mFA0E76FB4F9E05BE9478E01764C224F52B64A6F9_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateScriptableObjectInstance_m49FE4D8AFB7F31506A2480105254775E21DEE9CB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateClassInstance_mE2A34DE767837644E0AD09754855B78FF4EEF5D4_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m13AD75A9B9E14C307ACD3664A724A39650B49AFA_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mDC041B94D09AB16884E4B00D33812FD356155D59_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_2;
		L_2 = Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_17;
		L_17 = Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m9F842BBAC1D4ED25459ABE93317AB7521F6E5FF9_gshared (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mD80B3B05AA9E42D486A61FC92C7C96E9A79B399E_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m6B12459720359B1E2565090434E9C652B4A70CE3_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B3_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B3_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B2_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B2_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B9_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B9_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B8_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B8_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B13_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B13_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B12_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_4 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_6 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_7 = L_6;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_14 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_16 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_17 = L_16;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_22 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_24 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_25 = L_24;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateValueTypeInstance_m59A61EA5D475D36B5DAF8659EF0F19580BC2F6FB_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateScriptableObjectInstance_mFBEF8ACDCEC715E8608F6484D17F815B04058748_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateClassInstance_m9191BF22A904C28738D72774BF0E5FCC770F4B95_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0;
		L_0 = Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mB81CD7448C77A77B9B35C821B24ED5C50E3AE501_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mC6A9A3931B170573BE4852111FC22F35786182A4_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_2;
		L_2 = Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_14;
		L_14 = InterfaceFuncInvoker0< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_17;
		L_17 = Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mED0F0F7E24A48EC63C65C0D6B308B23EE62811FE_gshared (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0;
		L_0 = InterfaceFuncInvoker0< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m32BD5F33A74B3AC2D6160D69871FA4988E6344C0_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m3DFB5D9D0C5486439488EC6E30821C47EDDECA62_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B3_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B3_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B2_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B2_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B9_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B9_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B8_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B8_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B13_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B13_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B12_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_4 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_6 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_7 = L_6;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_14 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_16 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_17 = L_16;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_22 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_24 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_25 = L_24;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateValueTypeInstance_mE29C4601065AC82AB360DFC9D744A28B708A3248_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateScriptableObjectInstance_m80B58BDDD4577BBE8ADA9D46C7587D7B523639BF_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateClassInstance_m36C47B5A0F4570ABC84F5ABDDC016DE1FF9AC18A_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0;
		L_0 = Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m90D1E3E5820A9967AE514D376AE7CFBD20B77067_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m36A4A6AC2B5587810A7654E6E5F2D9DEB425740A_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_2;
		L_2 = Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_14;
		L_14 = InterfaceFuncInvoker0< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_17;
		L_17 = Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mB9E8498773F2128661519B1F3A5325C4F2C88731_gshared (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0;
		L_0 = InterfaceFuncInvoker0< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mF2E8274659CA3C0041207B0780D012D0709A6217_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m0B140479278307C1B8AD5E67A6C7DAC0ABA8F998_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B3_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B3_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B2_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B2_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B9_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B9_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B8_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B8_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B13_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B13_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B12_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_4 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_6 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_7 = L_6;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_14 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_16 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_17 = L_16;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_22 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_24 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_25 = L_24;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateValueTypeInstance_mA5544D30EA2F948EF12F6964F2CEAD744391EEC9_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateScriptableObjectInstance_m76688B481B1FB203ABEB5C34B49871AF8928BEFF_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateClassInstance_mA10D596BEB316451B89B92402BD44CFB877D5CD3_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0;
		L_0 = Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m708D325BBE69C63B55AA7C756FFE77025B7CAAE0_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m8AF722A332B44AE38E4101C1680D9256D6A5D50B_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_2;
		L_2 = Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_17;
		L_17 = Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mC73E6C24ED3939B74CC11C8957A49897DFD03992_gshared (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mD87E1EBECED90FCA4D8C3F367ABB519222F1A6F6_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mC6B7B302C518C9F408DD9A14B416B900A4A14B49_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B3_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B3_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B2_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B2_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B9_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B9_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B8_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B8_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B13_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B13_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B12_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_4 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_6 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_7 = L_6;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_14 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_16 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_17 = L_16;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_22 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_24 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_25 = L_24;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateValueTypeInstance_m557622F3E0E50739B935E3A78A833E4B208D89B7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateScriptableObjectInstance_mA645D3EC5FB5D761014E7C65A075436FFBF0D6C0_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateClassInstance_m458F2BAF99E22C22C0C4A5B7A3351ED393A0C63E_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0;
		L_0 = Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mBAD4A752BDCD87C401CFE744A65B3FAF806C19BE_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m7542D35EBD9882BD549A2F97FA26B89F8CA9DE11_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_2;
		L_2 = Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_17;
		L_17 = Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m92D34953F6FE5C0902BEDA87560F206951E6C441_gshared (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mA07459CA43B86912ED0CA5BBDD4E37D1FFFCCFFB_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m46548CB3BA3F31069F109A752ADE6F8D302E51F7_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B3_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B3_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B2_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B2_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B9_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B9_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B8_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B8_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B13_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B13_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B12_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_4 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_6 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_7 = L_6;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_14 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_16 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_17 = L_16;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_22 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_24 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_25 = L_24;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateValueTypeInstance_mDA2C9B4A3E83D2556ADD98EC0EA7EE8D5AAE1AE7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateScriptableObjectInstance_m7E5AC78F732005C17D67E7209680D1AF00E4AF57_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateClassInstance_mFDCF8787FDD831843EE2120FB59072B1B6640DA3_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0;
		L_0 = Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mF5F5DAC5ED87056B75AA0BDA32A15A7BD421AF29_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m874EF05F5759D3C9498C79715B2192CB4B684733_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_2;
		L_2 = Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_17;
		L_17 = Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m38BBF2A889895804BDBB40BF9EF895630DB5127A_gshared (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m42FD201FF14F9505AF69C26CE4FC64FF38D6E7DC_gshared (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDF6F59F7C12AC614976E4902CF3F9ADB4D1299C6_gshared (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m6233E67E2CB335430BEB0D382031506329D0908F(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m4FE9C7D3694AC974427D443083D299F228DF83E5(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m4FE9C7D3694AC974427D443083D299F228DF83E5_gshared (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* G_B3_0 = NULL;
	TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* G_B3_1 = NULL;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* G_B2_0 = NULL;
	TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* G_B2_1 = NULL;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* G_B9_0 = NULL;
	TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* G_B9_1 = NULL;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* G_B8_0 = NULL;
	TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* G_B8_1 = NULL;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* G_B13_0 = NULL;
	TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* G_B13_1 = NULL;
	Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* G_B12_0 = NULL;
	TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_4 = ((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_6 = (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mEFEBE8557A4685AA0136E0F9372C881F2961EA08(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_7 = L_6;
		((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_14 = ((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_16 = (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mEFEBE8557A4685AA0136E0F9372C881F2961EA08(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_17 = L_16;
		((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_22 = ((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_24 = (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mEFEBE8557A4685AA0136E0F9372C881F2961EA08(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_25 = L_24;
		((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t80B9309EDEC433C416403256CA79E9D00E5A6A0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeConstructor_1_CreateValueTypeInstance_m72151BEDE42821C3862588A6BAD79E4707C0CDBD_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeConstructor_1_CreateScriptableObjectInstance_mA0875102DA4A8DBC9E4B8BDB7A8D92D58F2D5D45_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeConstructor_1_CreateClassInstance_m4657AFA5F125D32B20F70F9F3E3A28474A47C6C1_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_0;
		L_0 = Activator_CreateInstance_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_m1B86176D77D41F0CC20DD066B2E09716B88362D3(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m483127FE4ACD9A1255BE8EDE282BF71EFD2E0037_gshared (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mC7E3D11A060B608C6276D27E21ADEF7923454116_gshared (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_2;
		L_2 = Func_1_Invoke_m80E62F07322489999C827407299FA0FCF4413228_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_14;
		L_14 = InterfaceFuncInvoker0< BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_17;
		L_17 = Func_1_Invoke_m80E62F07322489999C827407299FA0FCF4413228_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mC9FCBC527E1EB8386B1E235C7938B99C3FA1A42D_gshared (TypeConstructor_1_tFE6FE6A8B3217DE563DD53BAF455F76C431CBE32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_0;
		L_0 = InterfaceFuncInvoker0< BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m30629F89FE452211497FFD07C967C6E85C5C75DE_gshared (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m700FF2A94ABCD6CC92E0904C5F2F3330C2B3AA3A_gshared (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAA92AE507938CCDF9B095D391B09F2E57F664F4B(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m666C28CB41C8E3DF3EF64E57C7D810BEF359B3C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m666C28CB41C8E3DF3EF64E57C7D810BEF359B3C0_gshared (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B3_0 = NULL;
	TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* G_B3_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B2_0 = NULL;
	TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* G_B2_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B9_0 = NULL;
	TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* G_B9_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B8_0 = NULL;
	TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* G_B8_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B13_0 = NULL;
	TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* G_B13_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B12_0 = NULL;
	TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = ((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_6 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = L_6;
		((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_14 = ((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_16 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_17 = L_16;
		((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_22 = ((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_24 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_25 = L_24;
		((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC97C67B2659A914C692C563B070AAA3CBAD578C7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_CreateValueTypeInstance_mF5269E793F130C6791BF150EEFB33180AFC2798B_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_CreateScriptableObjectInstance_m8B468B1A5D79A26AC5952A3EA4C925B8194A9C95_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_CreateClassInstance_m326839E0EFE881061A72168AC69360CDE0B4E44D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = Activator_CreateInstance_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8531C73991A8C30F1F8BEEEF6A3DFDF837D18D02(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mC34EDDE052D7B7B4613E57D70AF4F21378D4677C_gshared (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mC75907FDB2557E39393059F248288E7586AE4C13_gshared (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		bool L_2;
		L_2 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		bool L_17;
		L_17 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m143E82C9456AF7EAFA287918D6F4FB775744B07B_gshared (TypeConstructor_1_t988ABC2D7A2F6BCE096B7BA77DDC197F103B9B11* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		bool L_0;
		L_0 = InterfaceFuncInvoker0< bool >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m88F3CC7577D94F8B78457A61E5A11D684F1EEF51_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mE320B134EF716E35A5CA75A177D0ABB88DA281C0(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2092EB1058CE691B86BD2DA94035F4A18D28CE99_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B3_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B3_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B2_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B2_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B9_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B9_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B8_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B8_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B13_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B13_1 = NULL;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* G_B12_0 = NULL;
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_4 = ((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_6 = (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_7 = L_6;
		((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_14 = ((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_16 = (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_17 = L_16;
		((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_22 = ((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_24 = (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m40600DEE70082D8157F0AAB3AC1E531E4A48DA6E(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_25 = L_24;
		((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDAC805319825F8349602AD57EDACE499355FC181_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_CreateValueTypeInstance_mF62F1F46DAD81CCB1E29A9FF11C798AB9D527A78_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_CreateScriptableObjectInstance_mBB27C2AC13DC233D5634721BC040D3EA10DD9E24_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_CreateClassInstance_mBEC1E385E4202E5C1C800E8632394E57E14A0AC9_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0;
		L_0 = Activator_CreateInstance_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA5589FEB1272F05337DDA4D3300BE9B8D9700A35(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m03ECFBFAC57B048916EEC97FB1537F4BD5F8ED20_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m2342DB818951E060F07894FEF59650D2E14ED3D8_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2;
		L_2 = Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_14;
		L_14 = InterfaceFuncInvoker0< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17;
		L_17 = Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m8756076F45D8136F254CA7C16842D789DDEC3494_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0;
		L_0 = InterfaceFuncInvoker0< Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m74631CD88728BB7B5011E7F7F879F6191EC001DD_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8085A1891CE7A1165DDEC25CAE6AAFE21B594DAF(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m22E8E1250F27BF4E34A150C25414F7026014918C_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B3_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B3_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B2_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B2_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B9_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B9_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B8_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B8_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B13_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B13_1 = NULL;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* G_B12_0 = NULL;
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_4 = ((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_6 = (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_7 = L_6;
		((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_14 = ((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_16 = (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_17 = L_16;
		((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_22 = ((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_24 = (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mBED93A7595F38D64DCA95CA0388AD8A054FDBF7A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_25 = L_24;
		((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t22C4A52306A9B63C8E26F72B6932849196CFA637_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_CreateValueTypeInstance_m685E8312D09CEF6C9569D1789012CD8AE615792C_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485));
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_CreateScriptableObjectInstance_mBA311D96C5963D1DF9C03F276AFC74168424E604_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_CreateClassInstance_m76778AA2C88EAF4CE152180FAA17B40929A2BD15_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_0;
		L_0 = Activator_CreateInstance_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m352B21AA96F81D3AAFEC94237A3D01038A0C61D8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mAA8C1695D086D68AD750B6D5EB487A6E4F94AE00_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m11B1C6F47D9C9AA87745D2587A3326D747D82BEA_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_2;
		L_2 = Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_14;
		L_14 = InterfaceFuncInvoker0< BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_17;
		L_17 = Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m65AD2DB5375F3F3A0DC7A7C4896664C902F9FBD3_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_0;
		L_0 = InterfaceFuncInvoker0< BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mC7D1FF151659C3642C8382F518192FCB475AE318_gshared (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m9C2DBC3C7DA251DD4920A8425F4B155C470FDA28_gshared (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAB3523EDA1FD61B32DF48531B43662D727BD35E7(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mBC1B9041EF38B189A2CB52E9EEE0C5D2799C5F64(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mBC1B9041EF38B189A2CB52E9EEE0C5D2799C5F64_gshared (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* G_B3_0 = NULL;
	TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* G_B3_1 = NULL;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* G_B2_0 = NULL;
	TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* G_B2_1 = NULL;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* G_B9_0 = NULL;
	TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* G_B9_1 = NULL;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* G_B8_0 = NULL;
	TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* G_B8_1 = NULL;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* G_B13_0 = NULL;
	TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* G_B13_1 = NULL;
	Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* G_B12_0 = NULL;
	TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_4 = ((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_6 = (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mE042A1BE679CC2AAF7894C7AB76FD6236643895E(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_7 = L_6;
		((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_14 = ((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_16 = (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mE042A1BE679CC2AAF7894C7AB76FD6236643895E(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_17 = L_16;
		((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_22 = ((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_24 = (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mE042A1BE679CC2AAF7894C7AB76FD6236643895E(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_25 = L_24;
		((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB8B3D34F2465F8E257A9E87FE0BAC2E2202845BA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeConstructor_1_CreateValueTypeInstance_m9D092869CFAEC4F4C260AB6AC01E2BF7B061D4E7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	uint8_t V_0 = 0x0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		uint8_t L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeConstructor_1_CreateScriptableObjectInstance_m89D0C3FDDE1FDB00D06D0AF0ABDF542A4DEC66A0_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(uint8_t*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeConstructor_1_CreateClassInstance_m317466A2642537DCE4CB0134CE11EFB0240BBD99_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0;
		L_0 = Activator_CreateInstance_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3D23955ED67B1414D5E68C703612B273B43EE42(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m78D8F73EFEE9E9D95E880B64E15F920AA97FB79D_gshared (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mBA29EBA8D8CA92C4A92BC5CA6DFA667BBE7A8056_gshared (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = Func_1_Invoke_m7B5D0EE3E57BB9CB0A5875A889734FAB925D94F0_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		uint8_t L_14;
		L_14 = InterfaceFuncInvoker0< uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		uint8_t L_17;
		L_17 = Func_1_Invoke_m7B5D0EE3E57BB9CB0A5875A889734FAB925D94F0_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mD61BF6DA046F26D9A8F78D4D992823F1A6181A97_gshared (TypeConstructor_1_tBA798D06A316B513E520D3607B6D4838565BD7A8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		uint8_t L_0;
		L_0 = InterfaceFuncInvoker0< uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		uint8_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m34431DEA4D4CEE6F183CB31D8E35B70347AC5E9C_gshared (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mA02AB53B91C1013EC766015E42C96B2A9CD53C2F_gshared (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEB60098A9A2C3D5D4B631B470730355AB767E628(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m8E2F11EB412FBD485AFB991FAB0622F5729A2722(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m8E2F11EB412FBD485AFB991FAB0622F5729A2722_gshared (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* G_B3_0 = NULL;
	TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* G_B3_1 = NULL;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* G_B2_0 = NULL;
	TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* G_B2_1 = NULL;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* G_B9_0 = NULL;
	TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* G_B9_1 = NULL;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* G_B8_0 = NULL;
	TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* G_B8_1 = NULL;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* G_B13_0 = NULL;
	TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* G_B13_1 = NULL;
	Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* G_B12_0 = NULL;
	TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_4 = ((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_6 = (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m64666B7C79DD37423166867D6AC3A2487EB91E13(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_7 = L_6;
		((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_14 = ((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_16 = (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m64666B7C79DD37423166867D6AC3A2487EB91E13(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_17 = L_16;
		((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_22 = ((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_24 = (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m64666B7C79DD37423166867D6AC3A2487EB91E13(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_25 = L_24;
		((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t66346BCEB9A184D2716838FBA6250DB297381567_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeConstructor_1_CreateValueTypeInstance_mBAECE33ECE7D4D5E79141C97DE2CA79AE1521ED6_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppChar V_0 = 0x0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		Il2CppChar L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeConstructor_1_CreateScriptableObjectInstance_m05E9C660775EB310279EA481CB03006EA1C3F01A_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeConstructor_1_CreateClassInstance_mB734D9892DA45A686426E6DB2127EE7028D88B33_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppChar L_0;
		L_0 = Activator_CreateInstance_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m556C7544183F03DFEAC54118819F6B9A262D51D0(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m0729FF42D014568951A092419938E1257AC33688_gshared (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mC31D4BBA6AE2F45D8CAD6B934D86670DAB1B7AE6_gshared (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Il2CppChar L_2;
		L_2 = Func_1_Invoke_mA083CCE78A8E818AA497A761713F80498D219ACB_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Il2CppChar L_14;
		L_14 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Il2CppChar L_17;
		L_17 = Func_1_Invoke_mA083CCE78A8E818AA497A761713F80498D219ACB_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m4AB0C51A9267D637749E58701DD13333A325CEA3_gshared (TypeConstructor_1_tE2D1935067091B5CCD7B379448DF923B83B4D9D0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Il2CppChar L_0;
		L_0 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Il2CppChar L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m4D0493D25F30920A735776E62CABA80D2901186C_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAA19987E46CAD9338DF74120A832415C36326B5D(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mBE2C54EA2DB4DD90EC5D436C186892B50BE8F258(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mBE2C54EA2DB4DD90EC5D436C186892B50BE8F258_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* G_B3_0 = NULL;
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* G_B3_1 = NULL;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* G_B2_0 = NULL;
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* G_B2_1 = NULL;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* G_B9_0 = NULL;
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* G_B9_1 = NULL;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* G_B8_0 = NULL;
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* G_B8_1 = NULL;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* G_B13_0 = NULL;
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* G_B13_1 = NULL;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* G_B12_0 = NULL;
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_4 = ((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_6 = (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m85A38CF8289F6ACF32B4058B1C07DD7CC055AA27(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_7 = L_6;
		((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_14 = ((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_16 = (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m85A38CF8289F6ACF32B4058B1C07DD7CC055AA27(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_17 = L_16;
		((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_22 = ((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_24 = (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m85A38CF8289F6ACF32B4058B1C07DD7CC055AA27(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_25 = L_24;
		((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t19DBDC0BD66A215556345FF77B9051DF6209C9FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeConstructor_1_CreateValueTypeInstance_m91B67FD08DF31CDC36010982CB189A76B90BD5B7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeConstructor_1_CreateScriptableObjectInstance_m1D43C748D6CBBD6AC38A8F23467D097DFDD2E80D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeConstructor_1_CreateClassInstance_m40B97F47BF0E85A8B4FA32B29C044C44B42794A3_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Activator_CreateInstance_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m458B1EE9503B5C407D2E43E2847F41BFAE2CAC26(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mEC405748D3E2D9F6F98C91CF4743A0D334CBA022_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mF62F849422C7AD83DA13B07C44FD6416F3422A67_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Func_1_Invoke_mDA08F91DC646CC4232398F289FF54F1168A4E09A_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = InterfaceFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Func_1_Invoke_mDA08F91DC646CC4232398F289FF54F1168A4E09A_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mB294B147B84B020C07F5CFB7163E19DB81617B39_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = InterfaceFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m2C409A061DE6DB7C2305F5CD5970267EECC1B3A4_gshared (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m34B31DB3943641787762548444601E366B98D733_gshared (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m7FEC07CF4902BBF48B9C4171215BDBA3BA2DB1E4(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m4E1865797B183FAB552FF807EE432E7DC79882DF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m4E1865797B183FAB552FF807EE432E7DC79882DF_gshared (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* G_B3_0 = NULL;
	TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* G_B3_1 = NULL;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* G_B2_0 = NULL;
	TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* G_B2_1 = NULL;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* G_B9_0 = NULL;
	TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* G_B9_1 = NULL;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* G_B8_0 = NULL;
	TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* G_B8_1 = NULL;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* G_B13_0 = NULL;
	TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* G_B13_1 = NULL;
	Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* G_B12_0 = NULL;
	TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_4 = ((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_6 = (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m503C0C83AEE2D5B700A87AF1D659FB7410CEB841(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_7 = L_6;
		((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_14 = ((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_16 = (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m503C0C83AEE2D5B700A87AF1D659FB7410CEB841(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_17 = L_16;
		((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_22 = ((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_24 = (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m503C0C83AEE2D5B700A87AF1D659FB7410CEB841(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_25 = L_24;
		((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t13F052A7950F8BE8F945BCA743810C93759E783E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeConstructor_1_CreateValueTypeInstance_mA120B00900AA61619D60A1ECED770EDAD4BDB5E2_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82));
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeConstructor_1_CreateScriptableObjectInstance_m4DDD5EE402C7DDB21FFFF6E9A1EABD82A7174A2F_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeConstructor_1_CreateClassInstance_mEE3015A82112A03B0A949CCA224D0407D5F48B6D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_0;
		L_0 = Activator_CreateInstance_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m1CCFC561EE426FF2DF844EFA5B84090556705490(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mB5EA10D0743381D60CEF0CB17D9F6763C3EA071D_gshared (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m893B675005D179F1D8B806CAAE67DC7A0AD11827_gshared (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_2;
		L_2 = Func_1_Invoke_mB633C6EF99C189F0F06E4D4C5832574C37A576FB_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_14;
		L_14 = InterfaceFuncInvoker0< Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_17;
		L_17 = Func_1_Invoke_mB633C6EF99C189F0F06E4D4C5832574C37A576FB_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m3F850355FE240419007FD9414CDA70CB80693955_gshared (TypeConstructor_1_t3FC6325906BB92C1C076FB8E6725555F9A85CB54* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_0;
		L_0 = InterfaceFuncInvoker0< Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mBF24EF0E3F97609F82D942BF010EFB0968C22294_gshared (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m0016384A3B8B26B3D1A8416BB023AFE491434D0B_gshared (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m070F21AD58B6EFF501BF24ECB6C28E1B1C5F06D2(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mE7B060F5C4BAF57565DB61AB8D725C93A5D08C05(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mE7B060F5C4BAF57565DB61AB8D725C93A5D08C05_gshared (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* G_B3_0 = NULL;
	TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* G_B3_1 = NULL;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* G_B2_0 = NULL;
	TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* G_B2_1 = NULL;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* G_B9_0 = NULL;
	TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* G_B9_1 = NULL;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* G_B8_0 = NULL;
	TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* G_B8_1 = NULL;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* G_B13_0 = NULL;
	TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* G_B13_1 = NULL;
	Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* G_B12_0 = NULL;
	TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_4 = ((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_6 = (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mB6B37D17521300EA733E1C0601C501464F303836(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_7 = L_6;
		((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_14 = ((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_16 = (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mB6B37D17521300EA733E1C0601C501464F303836(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_17 = L_16;
		((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_22 = ((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_24 = (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mB6B37D17521300EA733E1C0601C501464F303836(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_25 = L_24;
		((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t20AA33D7C709DAEF4D1E5945A2878FD1F0DF1F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeConstructor_1_CreateValueTypeInstance_mF2F34B15C7DED2C8481FD9B1A354FE4E2B3BD83E_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeConstructor_1_CreateScriptableObjectInstance_m65D7268128FF7FB89F2BCB17B6BECEA5E1837E5D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeConstructor_1_CreateClassInstance_mF41B6B99BCDEA4B4EC855B6B1E98F1E398B0454B_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = Activator_CreateInstance_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m49C7DB1ECDFDC056131DA91BE5C644C2BB2FD90D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m9F27F4F884D23B750F8F95AB514C09C78B395CD9_gshared (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m4BD1F9AB2D05FE5818440AD7CEFD419B306BD083_gshared (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = Func_1_Invoke_m4EBD73458B1F79AFA8A5344D5A74A75BFA1E0BEF_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		L_14 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
		L_17 = Func_1_Invoke_m4EBD73458B1F79AFA8A5344D5A74A75BFA1E0BEF_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mC3C3D77000A2CA642F0135A0AC87005E995F855A_gshared (TypeConstructor_1_tDEC394A9E492DAEC1FE3567F6778D559F55D18E1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mB15FEDAE94EB008356702983FC3A116BD2854F0B_gshared (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m09E18FF04D446032EF26D49C1628EA4FB803138C_gshared (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m48889F8B69A4C7096F223134BB75EC6318E043F0(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_mFF9B30CFFB3D98754589923A0EC42DB74A5D9ED3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mFF9B30CFFB3D98754589923A0EC42DB74A5D9ED3_gshared (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* G_B3_0 = NULL;
	TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* G_B3_1 = NULL;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* G_B2_0 = NULL;
	TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* G_B2_1 = NULL;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* G_B9_0 = NULL;
	TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* G_B9_1 = NULL;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* G_B8_0 = NULL;
	TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* G_B8_1 = NULL;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* G_B13_0 = NULL;
	TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* G_B13_1 = NULL;
	Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* G_B12_0 = NULL;
	TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_4 = ((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_6 = (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_7 = L_6;
		((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_14 = ((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_16 = (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_17 = L_16;
		((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_22 = ((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_24 = (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mFD3B853B23577DD7757C6726EB1FB0EC97D25B31(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_25 = L_24;
		((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t096E74020BB0FE5EF8F3C216F59D9720B3130D9E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeConstructor_1_CreateValueTypeInstance_m7CC8EF66ECD0410539FA47C9C9DBA16806ADE4A7_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	double V_0 = 0.0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
		double L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeConstructor_1_CreateScriptableObjectInstance_mB1069B4F8D6467B66C9EC88CFCAE3DF1B5C9D906_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeConstructor_1_CreateClassInstance_m43CBB17B200F38E9C594135BBB473BF5F4B4C518_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		double L_0;
		L_0 = Activator_CreateInstance_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF596B5104025B6A6FF5877766D6762D7B8DF40D5(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m8DD9C66C1A6F4F99F9F5F13EB0285CFB661CDECE_gshared (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m31BB7883B9B668C53807FCA287ABE4DE3FEEE9E3_gshared (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		double L_2;
		L_2 = Func_1_Invoke_mEDA5C900255BD87C426F1915DD5F89979FFB7DAE_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		double L_14;
		L_14 = InterfaceFuncInvoker0< double >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		double L_17;
		L_17 = Func_1_Invoke_mEDA5C900255BD87C426F1915DD5F89979FFB7DAE_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m9BB71A9EFA1E98BC74F5CB05582C3E5316D4DBB2_gshared (TypeConstructor_1_t80C290E476562D564D4149717CFA8A2E0CD56E19* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		double L_0;
		L_0 = InterfaceFuncInvoker0< double >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		double L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_m60E8C37A7A6E492DC88D11EF779289C3F5DB8C69_gshared (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mFF78D462BCAD1AC3930A6F1E39E3D1E6E7EFA3C6_gshared (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5EC1A7651A240D8EAF39841B35FDBC5F69738D69(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m3A92C9876AF6C919D3D7687C4F0FE12297332667(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m3A92C9876AF6C919D3D7687C4F0FE12297332667_gshared (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* G_B3_0 = NULL;
	TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* G_B3_1 = NULL;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* G_B2_0 = NULL;
	TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* G_B2_1 = NULL;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* G_B9_0 = NULL;
	TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* G_B9_1 = NULL;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* G_B8_0 = NULL;
	TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* G_B8_1 = NULL;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* G_B13_0 = NULL;
	TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* G_B13_1 = NULL;
	Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* G_B12_0 = NULL;
	TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_4 = ((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_6 = (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m9A4D79D727E080355E3A999E8AE3D991E6E93B8E(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_7 = L_6;
		((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_14 = ((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_16 = (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m9A4D79D727E080355E3A999E8AE3D991E6E93B8E(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_17 = L_16;
		((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_22 = ((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_24 = (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_m9A4D79D727E080355E3A999E8AE3D991E6E93B8E(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_25 = L_24;
		((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tBBA517704DDAD603C77CBAF03416B8E86EB47184_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeConstructor_1_CreateValueTypeInstance_mB5589F04F1A54EB0934DDBCCF5612694683E1503_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4));
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeConstructor_1_CreateScriptableObjectInstance_m4995EBC4FC2490DFB818041ADB9C924C43D45470_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeConstructor_1_CreateClassInstance_mDA75EA52D98051061C071947130BD92DD9F7B18B_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_0;
		L_0 = Activator_CreateInstance_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m23BB120FEB591350AAFB0563F0252B36A0BDCEF1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_m5CD0DFAAEF9061DC5CBB9BE2E6537FF220A4430E_gshared (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m13F7596973786AB073FD9601ED430DA4B15EF49E_gshared (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_2;
		L_2 = Func_1_Invoke_m00307DE4A5C9F53ACFB96CFC55D6B05BE8CB7682_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_14;
		L_14 = InterfaceFuncInvoker0< EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_17;
		L_17 = Func_1_Invoke_m00307DE4A5C9F53ACFB96CFC55D6B05BE8CB7682_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m41BE81BF481BB5D89558E7B2A097A2D762E13204_gshared (TypeConstructor_1_t39E08EAC05B55E175DEAF5FA7E7FC3299540C684* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_0;
		L_0 = InterfaceFuncInvoker0< EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
// Method Definition Index: 127981
// Method Definition Index: 127982
// Method Definition Index: 127983
// Method Definition Index: 127984
// Method Definition Index: 127985
// Method Definition Index: 127986
// Method Definition Index: 127987
// Method Definition Index: 127988
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mE93093C29222A047827E7DF8D705D9AF309BC3CE_gshared (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mE27EE5BCDC596622C4544B6C37D5BD83545B6B63_gshared (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m203E0C37B8B8E647733B9109AC71C16A9FD5DD31(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m9A31D03ADE69DD8E9DBB9A9C4CC6935F6A982CF7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m9A31D03ADE69DD8E9DBB9A9C4CC6935F6A982CF7_gshared (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* G_B3_0 = NULL;
	TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* G_B3_1 = NULL;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* G_B2_0 = NULL;
	TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* G_B2_1 = NULL;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* G_B9_0 = NULL;
	TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* G_B9_1 = NULL;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* G_B8_0 = NULL;
	TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* G_B8_1 = NULL;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* G_B13_0 = NULL;
	TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* G_B13_1 = NULL;
	Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* G_B12_0 = NULL;
	TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_4 = ((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_6 = (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mF7A236E1EFFDF0CE09B83BD02CA01A96769601F5(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_7 = L_6;
		((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_14 = ((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_16 = (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mF7A236E1EFFDF0CE09B83BD02CA01A96769601F5(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_17 = L_16;
		((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_22 = ((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_24 = (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mF7A236E1EFFDF0CE09B83BD02CA01A96769601F5(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_25 = L_24;
		((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tCA3A8FD0F0F41233FCD1BC2C8FDBACF882E3A6E3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeConstructor_1_CreateValueTypeInstance_m5B890414A8478F7A07A1CE97344F864F6D608F4B_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD));
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeConstructor_1_CreateScriptableObjectInstance_m4D93251E162F58099C637699C0D94C8EB73C4D3C_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeConstructor_1_CreateClassInstance_m04271CE4B4EEFF8DC78C9E2BDE2A0BF6EEC036A0_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_0;
		L_0 = Activator_CreateInstance_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_mEAA2B0266EE2C220A851182D417452CB1A163222(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mD181A1052AC38DF23DA4C5AD774F2BDCE04C0ECF_gshared (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m1E558AD6DD2861BD53AE60A03EA1FA686C0E6B4C_gshared (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_2;
		L_2 = Func_1_Invoke_mAD94F63787CE58C6D078D5699B224EA3A5B5A6B7_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_14;
		L_14 = InterfaceFuncInvoker0< Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_17;
		L_17 = Func_1_Invoke_mAD94F63787CE58C6D078D5699B224EA3A5B5A6B7_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mADC96B7C58D4CEE02F5C23E0A6B5DDD4DA7F3DE5_gshared (TypeConstructor_1_t8832F0E9963A22713211272F554FC832854A1C0D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_0;
		L_0 = InterfaceFuncInvoker0< Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
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
// Method Definition Index: 127980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated_mA269FE4E04EFC6DD5288D751AB6EBFE46215DE92_gshared (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___m_OverrideConstructor;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)1;
	}

IL_0032:
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_6 = __this->___m_ImplicitConstructor;
		return (bool)((!(((RuntimeObject*)(Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 127981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m91677DFC7A4E598F7490ADF0EB6641FE1A63EF9B_gshared (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m8F2429F3094C61D9A6FE684D658A96D61AB89862(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		TypeConstructor_1_SetImplicitConstructor_m3EE8AC64CB0ECC1C470A9CCF0E05DBEE371F1264(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 127982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m3EE8AC64CB0ECC1C470A9CCF0E05DBEE371F1264_gshared (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* G_B3_0 = NULL;
	TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* G_B3_1 = NULL;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* G_B2_0 = NULL;
	TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* G_B2_1 = NULL;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* G_B9_0 = NULL;
	TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* G_B9_1 = NULL;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* G_B8_0 = NULL;
	TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* G_B8_1 = NULL;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* G_B13_0 = NULL;
	TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* G_B13_1 = NULL;
	Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* G_B12_0 = NULL;
	TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_4 = ((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_6 = (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mD67D42E3F593B6F366864EFB08ACF38914A6A6F9(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_7 = L_6;
		((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_14 = ((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_16 = (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mD67D42E3F593B6F366864EFB08ACF38914A6A6F9(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_17 = L_16;
		((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_22 = ((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance;
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_24 = (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
		Func_1__ctor_mD67D42E3F593B6F366864EFB08ACF38914A6A6F9(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_25 = L_24;
		((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t0801C0150EDAE4F6D852109C0E8A88B9DDAD47F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 127983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeConstructor_1_CreateValueTypeInstance_m9E592F3A472CC95BD8693F341720894E544F6A7D_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF));
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 127984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeConstructor_1_CreateScriptableObjectInstance_mF06EAAD4F769BF92E1540186F079907E8C913135_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)UnBox((RuntimeObject*)L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7))));
	}
}
// Method Definition Index: 127985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeConstructor_1_CreateClassInstance_m5F105A65A53F70E12D83DEEBF2CA896F10E79121_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_0;
		L_0 = Activator_CreateInstance_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mD81672A3C252D5932577AA842B7C5A2E442B9834(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return L_0;
	}
}
// Method Definition Index: 127986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetExplicitConstructor_mDC0294720912ED2BB452AF8D8D42F1B27D018B0E_gshared (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* ___0_constructor, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_0 = ___0_constructor;
		__this->___m_ExplicitConstructor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExplicitConstructor), (void*)L_0);
		return;
	}
}
// Method Definition Index: 127987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m030DA07E251A2F3B587273B14772BEE8372DBACD_gshared (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_2;
		L_2 = Func_1_Invoke_m484FA282527A60E46D4C504246DAB32B99757929_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_14;
		L_14 = InterfaceFuncInvoker0< FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_17;
		L_17 = Func_1_Invoke_m484FA282527A60E46D4C504246DAB32B99757929_inline(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck((MemberInfo_t*)L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 127988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m282D770B8D75C9B90DC95A8C3CEF2156F5F122FF_gshared (TypeConstructor_1_tAB03EC30492C34686FAF5F33485EBC9336B96E44* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_0;
		L_0 = InterfaceFuncInvoker0< FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)__this);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 69199
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r;
		float L_2 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_1,NULL));
		(&V_0)->___r = ((float)(L_2/(255.0f)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ___0_c;
		uint8_t L_4 = L_3.___g;
		float L_5 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_4,NULL));
		(&V_0)->___g = ((float)(L_5/(255.0f)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___b;
		float L_8 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_7,NULL));
		(&V_0)->___b = ((float)(L_8/(255.0f)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___0_c;
		uint8_t L_10 = L_9.___a;
		float L_11 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_10,NULL));
		(&V_0)->___a = ((float)(L_11/(255.0f)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 117489
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___U3CpositionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 117480
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mC31C34D21C3953F9AA7F25C0429BEBE45D2DBAE2_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CisRelativeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 3456
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 Func_1_Invoke_mA97D9B579CE05A4EE723E7543F3A25155C89D248_gshared_inline (Func_1_t52191D07AEB6B962EFE5C53B6F5E41A7FE8529D5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 Func_1_Invoke_m127B6E92F0496658FE9BAE1F389692ECCC785353_gshared_inline (Func_1_t6F5EB4E4A2AA72B8262DAF085A962ACC92D46A54* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef PropertyWrapper_1_t7296471AA2401BF810B822ADDBAE80B77C590757 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_gshared_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_gshared_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_gshared_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_gshared_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_gshared_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_gshared_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_gshared_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_gshared_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_gshared_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 Func_1_Invoke_m80E62F07322489999C827407299FA0FCF4413228_gshared_inline (Func_1_t3EA2B9876691B3BEC86F7FA140000494B3CA9E5A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Func_1_Invoke_m0550CD624A6760EE6C25CDCB1F5E159B527857F5_gshared_inline (Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Func_1_Invoke_m16CD92EAF9608CEFEDBB2F540D76F5BAEFBC1FB9_gshared_inline (Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Func_1_Invoke_m7B5D0EE3E57BB9CB0A5875A889734FAB925D94F0_gshared_inline (Func_1_t0C3FDD735FCDC6B3F63DD37025A9B0CD52DA078C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef uint8_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Func_1_Invoke_mA083CCE78A8E818AA497A761713F80498D219ACB_gshared_inline (Func_1_tE206E9F9B41CFFF0572F2C4B0387B4E70C161ACC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppChar (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_1_Invoke_mDA08F91DC646CC4232398F289FF54F1168A4E09A_gshared_inline (Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 Func_1_Invoke_mB633C6EF99C189F0F06E4D4C5832574C37A576FB_gshared_inline (Func_1_tBA9E7FECA824DB38F994EC0CDDF93C90649ED7FD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Func_1_Invoke_m4EBD73458B1F79AFA8A5344D5A74A75BFA1E0BEF_gshared_inline (Func_1_tA0559390586C1A0908590D64C84C98EE5D24D0BC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_1_Invoke_mEDA5C900255BD87C426F1915DD5F89979FFB7DAE_gshared_inline (Func_1_t7748833627297E42C5F5E294D4EF6457E839B5D7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef double (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 Func_1_Invoke_m00307DE4A5C9F53ACFB96CFC55D6B05BE8CB7682_gshared_inline (Func_1_tB4D38D9C370025EE6CC7C9540376FB51F4972159* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD Func_1_Invoke_mAD94F63787CE58C6D078D5699B224EA3A5B5A6B7_gshared_inline (Func_1_t373405FFFA6F75B99708397205905DAE4ED91C1B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 1000
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF Func_1_Invoke_m484FA282527A60E46D4C504246DAB32B99757929_gshared_inline (Func_1_tECD7EACA7FEC372FA4D1D15AEF8E9B0BEE1AEBC2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
