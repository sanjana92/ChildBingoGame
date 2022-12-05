#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>
struct Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94;
// System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>
struct Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF;
// System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>
struct Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3;
// System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>
struct Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85;
// System.Func`3<System.Object,System.Object,Fractions.Fraction>
struct Func_3_tFBE9996F74CDE8903BFC752C1F6491005D350695;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>
struct KeyCollection_t96D25FB1D0BEE0E58AFDFBC0881D2B2B7CF69BE6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>
struct KeyCollection_t36DE692AC41467AA582D0B61C085A944EDA2A4A8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>
struct ValueCollection_t39F065AADCD6FAF8F6E8E658D04E3B0984AFD80E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>
struct ValueCollection_tF1FF4F9D4DE028AC565F9AE421B1A49FF2155300;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>[]
struct EntryU5BU5D_t12E52B4A267C7F875FB69C48E979C443E8DA46FC;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>[]
struct EntryU5BU5D_tDF45D936BDE7C2DCC32E589E4AC9BC588D45FE84;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.Reflection.Assembly
struct Assembly_t;
// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// Fractions.Formatter.DefaultFractionFormatProvider
struct DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380;
// Fractions.Formatter.DefaultFractionFormatter
struct DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// Fractions.TypeConverters.FractionTypeConverter
struct FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.ICustomFormatter
struct ICustomFormatter_t631C7AD711F74B4AD8E31D00F168D1FAF7AA84FA;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t514D0B45A781ED18AB6A0DC6673A95B8359443F4;
// Fractions.InvalidNumberException
struct InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// Fractions.Properties.Resources
struct Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Fractions.TypeConverters.FractionTypeConverter/<>c
struct U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICustomFormatter_t631C7AD711F74B4AD8E31D00F168D1FAF7AA84FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral595C79E16C3766FC2EB249DA404686CC926560CA;
IL2CPP_EXTERN_C String_t* _stringLiteral760CEE3996851BE46CA5A92D36BE05F835F5741A;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral97CF5837DD0BAD2624819CF91603CFDB28B7BB60;
IL2CPP_EXTERN_C String_t* _stringLiteralA46E3CCB9CD15DE976A72E1B7C665F6950D7E22A;
IL2CPP_EXTERN_C String_t* _stringLiteralA935905D7BC49DC64F35FD801BDF0686BF8216EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F0A19F51EBFB97570706F8A26E3C44CEA7FF9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC9198503608ECC8631E2E939ECDD771713FC9A93;
IL2CPP_EXTERN_C String_t* _stringLiteralD037E96B4FB087E097585C914E1A949FF2F83B26;
IL2CPP_EXTERN_C String_t* _stringLiteralD7C180CEBE785EDA4D68F813A8D1F4145DAF38DD;
IL2CPP_EXTERN_C String_t* _stringLiteralF57AD0B51C8EE629C87FC26E3D9F8A49BE5E8EA5;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultFractionFormatter_Format_mD8D296033FA43749F0DC458552A2BE7382B8C292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0BBE78A2942B92B71B0FD470301B88FD035263AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAACDAD3AA1181A00295EB57F85446FA536F120B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAA36C2598D1EF3230776EDD1BDC4B77C62D0AAB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBAC7D6DDBEC7FF1103E833CD43B2A2BEBDD7D85D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FractionExt_Sqrt_m953474D9E580301562158C05868C52EA0AA54B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fraction_CompareTo_m1C13F85D10041116F0437DFE64193F1CF0E1C1F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fraction_Divide_mB9B86563225F7D7DC2C1F221A7DA3ACD30F2A34E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fraction_FromDoubleRounded_m4DC3B266253E8F26D9547034A6206471E0B870F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fraction_FromDouble_m4EBC0E2C7B5A0312206C4BD929B33B2302769F3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fraction_FromString_m4075DD05AB9C1B86B747D922B6E1D4E66EF6EA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fraction_Remainder_m3B4C39688FEB3993210BF3365844EA8EBC7DE5BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MathExt_LeastCommonMultiple_mEE866AB8A78C73462AC3FD83AA7940E466E48D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_0_mDA1DC035FED2DB9BBBCED6B4517D04693F396C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_10_m63A068088B1AF6A7AB2C0917F6AE394D1ED7A027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_11_mCC6AF7A3BFC40EA4315E5B1DBC0F17659ADA4788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_12_mD514FED5B5CB0A59660DAB4D73329707DD25BBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_13_m1644D03FF49642DA2D9F3AA91D3B7E362FBE1F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_1_m3265FAFEA3AE101996ACF1E34ACA0A30D384E8F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_2_mD558B81FE9BC24B49BD7242C7346C55578984686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_3_m4C45DCAD52C5BA34A6E14988A224FD5EBB2D4377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_4_mB8B8FFC1B92AC680EBE1251F365B174A091BEAE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_5_mBFD4C26399EA82424C46511D9C3430D5141FDC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_6_m938E38B397B544144BD31A463524172D4D73F9B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_7_m12C7BE459CE17EA7532AB49ACDE255312B321DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_8_m151868F5F27D99A568CD48419C47354A79156FD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_9_mCEEACBACC86C17557724020D57B6413D81CB2A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F;;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com;;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke;
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke;;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t895216889594424CCF489AFA8197E62A6F922FD2 
{
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>
struct Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t12E52B4A267C7F875FB69C48E979C443E8DA46FC* ____entries_1;
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
	KeyCollection_t96D25FB1D0BEE0E58AFDFBC0881D2B2B7CF69BE6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t39F065AADCD6FAF8F6E8E658D04E3B0984AFD80E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>
struct Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF45D936BDE7C2DCC32E589E4AC9BC588D45FE84* ____entries_1;
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
	KeyCollection_t36DE692AC41467AA582D0B61C085A944EDA2A4A8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF1FF4F9D4DE028AC565F9AE421B1A49FF2155300* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0FD57ECF60D6ADD2A7050D7198C4DF420FEE1D88* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};
struct Il2CppArrayBounds;

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

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Fractions.Formatter.DefaultFractionFormatProvider
struct DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380  : public RuntimeObject
{
};

struct DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_StaticFields
{
	// System.IFormatProvider Fractions.Formatter.DefaultFractionFormatProvider::Instance
	RuntimeObject* ___Instance_0;
};

// Fractions.Formatter.DefaultFractionFormatter
struct DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279  : public RuntimeObject
{
};

struct DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_StaticFields
{
	// System.ICustomFormatter Fractions.Formatter.DefaultFractionFormatter::Instance
	RuntimeObject* ___Instance_0;
};

// Fractions.FractionExt
struct FractionExt_tB2A866249E7016C32C356B01F13554F060DE1941  : public RuntimeObject
{
};

// Fractions.Extensions.MathExt
struct MathExt_t8DEBF7D0F7BDFEA4E950158BF305F2FEB6DE0A46  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// Fractions.Properties.Resources
struct Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88  : public RuntimeObject
{
};

struct Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields
{
	// System.Resources.ResourceManager Fractions.Properties.Resources::resourceMan
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___resourceMan_0;
	// System.Globalization.CultureInfo Fractions.Properties.Resources::resourceCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___resourceCulture_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
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

// Fractions.TypeConverters.FractionTypeConverter/<>c
struct U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545  : public RuntimeObject
{
};

struct U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields
{
	// Fractions.TypeConverters.FractionTypeConverter/<>c Fractions.TypeConverters.FractionTypeConverter/<>c::<>9
	U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* ___U3CU3E9_0;
};

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_0;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits_1;
};

struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt_2;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt_3;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt_4;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt_5;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success_6;
};
// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign_0;
	Il2CppSafeArray/*NONE*/* ____bits_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Fractions.TypeConverters.FractionTypeConverter
struct FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

struct FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.Type> Fractions.TypeConverters.FractionTypeConverter::SUPPORTED_TYPES
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___SUPPORTED_TYPES_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>> Fractions.TypeConverters.FractionTypeConverter::CONVERT_TO_DICTIONARY
	Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* ___CONVERT_TO_DICTIONARY_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>> Fractions.TypeConverters.FractionTypeConverter::CONVERT_FROM_DICTIONARY
	Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* ___CONVERT_FROM_DICTIONARY_4;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// Fractions.Fraction
struct Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C 
{
	// System.Numerics.BigInteger Fractions.Fraction::_denominator
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ____denominator_6;
	// System.Numerics.BigInteger Fractions.Fraction::_numerator
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ____numerator_7;
	// Fractions.FractionState Fractions.Fraction::_state
	int32_t ____state_8;
};

struct Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields
{
	// System.Numerics.BigInteger Fractions.Fraction::MIN_DECIMAL
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___MIN_DECIMAL_0;
	// System.Numerics.BigInteger Fractions.Fraction::MAX_DECIMAL
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___MAX_DECIMAL_1;
	// Fractions.Fraction Fractions.Fraction::_zero
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ____zero_2;
	// Fractions.Fraction Fractions.Fraction::_one
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ____one_3;
	// Fractions.Fraction Fractions.Fraction::_minus_one
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ____minus_one_4;
	// Fractions.Fraction Fractions.Fraction::_two
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ____two_5;
};
// Native definition for P/Invoke marshalling of Fractions.Fraction
struct Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_pinvoke
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke ____denominator_6;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke ____numerator_7;
	int32_t ____state_8;
};
// Native definition for COM marshalling of Fractions.Fraction
struct Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_com
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com ____denominator_6;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com ____numerator_7;
	int32_t ____state_8;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>
struct Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>
struct Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,Fractions.Fraction>
struct Func_3_tFBE9996F74CDE8903BFC752C1F6491005D350695  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// Fractions.InvalidNumberException
struct InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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

IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_back(const BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F& unmarshaled);
IL2CPP_EXTERN_C void BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_cleanup(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com& marshaled);

// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Object,Fractions.Fraction>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Func_3_Invoke_mC93AD375F777C229F0AAB7CC65B5531054919EE5_gshared_inline (Func_3_tFBE9996F74CDE8903BFC752C1F6491005D350695* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Object,Fractions.Fraction>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mB4641AEB322D2116130B9359A1E6FAC8E3601EC6_gshared (Func_3_tFBE9996F74CDE8903BFC752C1F6491005D350695* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// Fractions.Fraction Fractions.Fraction::get_Zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline (const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::op_LessThan(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_LessThan_m5696E6670093A3C6C56786D3E38C34420727362E (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::get_One()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline (const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Pow(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___exponent1, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, const RuntimeMethod* method) ;
// System.Double Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Fraction_op_Explicit_m2EEFF2B2E5887A94FE850E111598946E00B27FC0 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___d0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Explicit_m5D8D36CA0ACF2DA8EA8FA6A31118F3950742A00D (double ___value0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::get_Two()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_Two_m324443011B6ACCEF979E590326706D1331EA5825_inline (const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::op_Division(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Division_m56E69658CC541A64A495F81D96DF2EEE7124B963 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::op_Addition(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Addition_mC6D900D5AF9180B5E8967E80F19DA94513344C20 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::op_Subtraction(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Subtraction_mAA7A97820A1E92CB997961B0FEFD21A71504D490 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Abs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Abs_mE9C6C315DCA028BB535079042567D5F1C5B4BFE2 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::op_GreaterThan(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_GreaterThan_m6502DD910BE7FE64EB516D27A62EEA6217BF870C (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.String Fractions.Properties.Resources::get_CompareToArgumentException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_CompareToArgumentException_mCB85CEBBE3C3B8B674664FC69EC2ED5ADE8638BF (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Int32 Fractions.Fraction::CompareTo(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method) ;
// System.Int32 Fractions.Fraction::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_CompareTo_m1C13F85D10041116F0437DFE64193F1CF0E1C1F8 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.BigInteger::CompareTo(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___other0, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::get_IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::get_IsPositive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_get_IsPositive_mF501955223B353CD3768A78166D595D150187C1B (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::GreatestCommonDivisor(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_GreatestCommonDivisor_m6E320222B92ADEFF3B81FCB9A94436AA9A95013C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Divide(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Multiply(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger,Fractions.FractionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, int32_t ___state2, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, bool ___normalize2, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::GetReducedFraction(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_GetReducedFraction_m5979AFE9B4F043045350BA9C22394EE7B9F7A646 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::get_IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::get_Zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline (const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m17F0E6AC13CF0D37E3893104B1DCAA62216C116D (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, int32_t ___numerator0, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m64A84FEEA2233596E61104FB4238760671B13D92 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, int64_t ___numerator0, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mE9288D5C617F6BF5B8E44F8B73D9198F30B90D84 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_mA6377D6019F9702962B0ABA77E233844B20F63D3 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, uint32_t ___numerator0, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m4685E4C69B49F9470E056A761DCEB8DB9FA7D01C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m4696329C67E6ECCDF67FADD0C919699E384EB715 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, uint64_t ___numerator0, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::FromDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromDouble_m4EBC0E2C7B5A0312206C4BD929B33B2302769F3D (double ___value0, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m9E6B0E8EBF2FDE18685C0947A4AC0773B92846C0 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, double ___value0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::FromDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromDecimal_m2F5B8E82AADC40BACD25CE7FEDC477E68E988A4D (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void Fractions.Fraction::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_mE2832E4D046AE61C6F5ABF603464257CBE1D1353 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::FromString(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromString_m4075DD05AB9C1B86B747D922B6E1D4E66EF6EA25 (String_t* ___fractionString0, int32_t ___numberStyles1, RuntimeObject* ___formatProvider2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_TryParse_m36DB08BEC7D09DC12C00FB8E3C5ECACA2FE5A359 (String_t* ___fractionString0, int32_t ___numberStyles1, RuntimeObject* ___formatProvider2, bool ___normalize3, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction4, const RuntimeMethod* method) ;
// System.String Fractions.Properties.Resources::get_CannotConvertToFraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_CannotConvertToFraction_m4A0248009CB2F22404C2E18A1B491A3FDDDB8C9C (const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::CannotParse(Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_CannotParse_m0C1864181447C847DEDDE6E497B7099AB0D6EB31 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::TryParseSingleNumber(System.String,System.Globalization.NumberStyles,System.IFormatProvider,Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_TryParseSingleNumber_mA0CA5E9E106F98683AADB6ACA27E8B61B64870DF (String_t* ___number0, int32_t ___numberStyles1, RuntimeObject* ___formatProvider2, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction3, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Numerics.BigInteger&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TryParse_mB4087FC67D5610AF013CAFAEB1226C80F6E9F73D (String_t* ___value0, int32_t ___style1, RuntimeObject* ___provider2, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* ___result3, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___formatProvider0, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Decimal::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___d0, const RuntimeMethod* method) ;
// System.Void Fractions.InvalidNumberException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNumberException__ctor_m5F11503C0D12E5A582BD04B4A69EEAB018710AA3 (InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653* __this, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m82583327AA7F7D65A79CDCEF93F19C2398974548 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_LeftShift(System.Numerics.BigInteger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, int32_t ___shift1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::op_Multiply(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Multiply_mC81C4F01CEC9D7C610AFF48042D092EAFA4A2464 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Invert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Invert_m773A469D5CA521DCF1CDEBA8CD720093DD548CA1 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Sign(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_m6E20753D72DE4B46CB1268023661DBE154294408 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m48BEDD707B2B28BDB94A838395590DFFE775015A (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, double ___value0, const RuntimeMethod* method) ;
// System.Boolean Fractions.Extensions.MathExt::RemainingDigitsAfterTheDecimalPoint(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathExt_RemainingDigitsAfterTheDecimalPoint_m8D139127C401C636473CED04DB15B577C6690942 (double ___remainingDigits0, const RuntimeMethod* method) ;
// System.Double System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BigInteger_op_Explicit_mC8FE8ED9D93EB044FEE2792B100C9CB9005F1EB3 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Negate(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Negate_mDBFE92B9E6ABB3032C09C0F9809099606BE44FED (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_Equality_m4778C6A5F0E0FA5CBEFBBCB9E5A34BBE3D2D0BB5 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Decimal_GetBits_mA8711044E1019B52442F3F280CFD4BB50A43DE68 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Fractions.Fraction::get_Numerator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Fractions.Fraction::get_Denominator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Division(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Int32 Fractions.Fraction::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_ToInt32_m7D14FE7110866B1599F58BA33305A79C5C3BFAD1 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Int64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_op_Explicit_mFADFEBD0E21A83E1522FF45D3B41F46F546F2264 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Int64 Fractions.Fraction::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Fraction_ToInt64_m20FFC71CD0F27E19A556CCA896EDF0C56E63E2EA (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BigInteger_op_Explicit_mB338BD78CA1D4642E264645861B15EFA025F1ED8 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.UInt32 Fractions.Fraction::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Fraction_ToUInt32_m01DAAEC1498A8403722F1E5423161F488859299B (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.UInt64 System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BigInteger_op_Explicit_mC90AC1989E67C94D9146E1E19794016BA20AD101 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.UInt64 Fractions.Fraction::ToUInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Fraction_ToUInt64_m396A1ACDEFC568CC2571E229B54DB811E611C653 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger Fractions.Fraction::ToBigInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_ToBigInteger_m0F5E7329CB6BBE9664E782B4523F5724E7FAA3D6 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_GreaterThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_LessThanOrEqual(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThanOrEqual_m0217024560C6B2E56EBE0A62A028BCF9D5610A4E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Decimal System.Numerics.BigInteger::op_Explicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Modulus(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Multiply(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Explicit_mC97457D67812EF62FBEC4E9C07E5DCFACAA1FE66 (double ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal Fractions.Fraction::ToDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Fraction_ToDecimal_mFFC8D93C16E0127C7DBF041E5BC467497AEADD0F (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Double Fractions.Fraction::ToDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Fraction_ToDouble_m7D91DD601D068271B958DB8D29492AC8BFE8B572 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.BigInteger::get_Sign()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::get_IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_get_IsNegative_mA60643DE697CAB909BF73AF899A56C69DAF11AC9 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// Fractions.FractionState Fractions.Fraction::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Fraction_get_State_mC510C8597E642F88E4E36DD32EAD41485FF0FF86_inline (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Reduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Reduce_m2C2609018FAF64CA25FB7A5519565F75A5ABF2BE (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::Equals(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::IsEquivalentTo(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_IsEquivalentTo_mCFF92A1395527017D70E491D139B5BF53CDA2F48 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::Equals(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___other0, const RuntimeMethod* method) ;
// System.Boolean Fractions.Fraction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_Equals_mC53CA903E911D03EE4398B761886C1C94EDB4980 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.BigInteger::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// System.Int32 Fractions.Fraction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_GetHashCode_m73B8F4DEC7137D6EBC28AB224FC6BC910E41C678 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Remainder(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Remainder_m51D1E0809CC95621F8DF132B91A4A7D9B22BBF41 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___dividend0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___divisor1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Remainder(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Remainder_m3B4C39688FEB3993210BF3365844EA8EBC7DE5BF (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___divisor0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Add(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Add_mBECE465BB8D2593B4E280D504071CF9CC2835AD5 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Add(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Add_m776BE479A849E8A0771801652E99FF7F0F973943 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___summand0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Subtract(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Subtract_mFF164B545925661EC6830A16896153949AEDACC6 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___subtrahend0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Multiply(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Multiply_m483042A2D32E479EE53EE2BB577C15CA2257A995 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___factor0, const RuntimeMethod* method) ;
// System.String Fractions.Properties.Resources::get_DivideByZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_DivideByZero_m92340B7122498885FDD22D37EDCF50161CD85660 (const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m17FBAE3DCEF960AD07F6917093B78142055E5552 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Divide(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Divide_mB9B86563225F7D7DC2C1F221A7DA3ACD30F2A34E (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___divisor0, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Abs(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Abs_mB9E1875E84B9EB23C4550DAD898DDA2B7AE72556 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::Abs(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::get_IsOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_get_IsOne_m225E686FFA5677EE462BE3F28C5C77145ED4E8FC (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::Pow(Fractions.Fraction,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Pow_m512D6851306097D1BE1D664637747C97F0C211EA (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___base0, int32_t ___exponent1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromString_m87AE53E879B82BDD8B03B3FE06A9C430E9E49D50 (String_t* ___fractionString0, const RuntimeMethod* method) ;
// System.String Fractions.Fraction::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fraction_ToString_mA983B4CC2B1F7A1F8766DB51D3E885EF2E7062D0 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.String Fractions.Fraction::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fraction_ToString_mC4A6A4CEC69DE029231C3EE6A8AD6DE0D85186B7 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) ;
// System.String Fractions.Fraction::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fraction_ToString_m3B9F8B1DCA1FC418F6CC1B3A77754CB493D9740E (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, int32_t ___lo0, int32_t ___mid1, int32_t ___hi2, bool ___isNegative3, uint8_t ___scale4, const RuntimeMethod* method) ;
// System.Void System.Numerics.BigInteger::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m9544C18A3217F10163645D4A62264DE37CA49821 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::get_MinusOne()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_MinusOne_m3FF0F44F8C3D6DFB66C00B61017E42E555585465_inline (const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0 (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Contains(T)
inline bool HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mAACDAD3AA1181A00295EB57F85446FA536F120B8 (Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* __this, Type_t* ___key0, Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF*, Type_t*, Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ConvertTo_m5D4785A320B7ED351B677E28B77171F70E389B96 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, Type_t* ___destinationType3, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>::Invoke(T1,T2)
inline RuntimeObject* Func_3_Invoke_mAE1C6D9A2069686E1E35598462FDF851BEF753C4_inline (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* __this, RuntimeObject* ___arg10, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___arg21, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*, RuntimeObject*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0BBE78A2942B92B71B0FD470301B88FD035263AD (Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* __this, Type_t* ___key0, Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94*, Type_t*, Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>::Invoke(T1,T2)
inline Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Func_3_Invoke_mBDD1F7CB4417D3B7ABA3367AB372DC2CB23F407D_inline (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* __this, RuntimeObject* ___arg10, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___arg21, const RuntimeMethod* method)
{
	return ((  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C (*) (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*, RuntimeObject*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*, const RuntimeMethod*))Func_3_Invoke_mC93AD375F777C229F0AAB7CC65B5531054919EE5_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(T)
inline bool HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1 (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* __this, Type_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*, Type_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>::.ctor()
inline void Dictionary_2__ctor_mBAC7D6DDBEC7FF1103E833CD43B2A2BEBDD7D85D (Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,System.Object>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1 (Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* __this, Type_t* ___key0, Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF*, Type_t*, Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>::.ctor()
inline void Dictionary_2__ctor_mAA36C2598D1EF3230776EDD1BDC4B77C62D0AAB4 (Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3 (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_mB4641AEB322D2116130B9359A1E6FAC8E3601EC6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Func`3<System.Object,System.Globalization.CultureInfo,Fractions.Fraction>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C (Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* __this, Type_t* ___key0, Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94*, Type_t*, Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Fractions.TypeConverters.FractionTypeConverter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m36A51D84C9AE708AB325282E7A28467725F2CE42 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::FromString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromString_mA231E6F077066C1301E26A133A5E58D6D19F5412 (String_t* ___fractionString0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.String,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_m69EC71B02DB2B37C2F033C22FCF6972E09B38FB1 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, String_t* ___baseName0, Assembly_t* ___assembly1, const RuntimeMethod* method) ;
// System.Resources.ResourceManager Fractions.Properties.Resources::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* Resources_get_ResourceManager_m593A418860D9B4D80771B5BF4E476CAAD611A081 (const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Fractions.Formatter.DefaultFractionFormatProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFractionFormatProvider__ctor_m4292EBB57EBEA325F047962A48909159B50C3E99 (DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380* __this, const RuntimeMethod* method) ;
// System.String Fractions.Properties.Resources::get_TypeXnotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_TypeXnotSupported_m4D44251DA61F23739D8F8D4A0C25F2B4386ABE5E (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatGeneral(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Numerics.BigInteger::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatInteger(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatInteger_m6487912E40E7AE275875C75C6EEC7493E044EFFA (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) ;
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatRemainder(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatRemainder_m548D9E612DA3B29382257CCC11A11DC8EE1B81F5 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) ;
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatMixed(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatMixed_m97ECDAFFCD29C740E28BB080948C4C75E9C5E4A5 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_LessThan(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_LessThan_m7AFF4FB0B1B0AF3ADFB586AD468D3B85848AD56C (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Inequality(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Inequality_mF231CB46B3043DDB6A2F96D77816F1719AE9EA9D (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___left0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___right1, const RuntimeMethod* method) ;
// Fractions.Fraction Fractions.Fraction::op_Implicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Implicit_m92410AED15B125F0312EA6E4E606AB1841F14F6E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Fractions.Formatter.DefaultFractionFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFractionFormatter__ctor_mD7FC29BC0D1032A83CB0E0AEC89B28FEF780BD97 (DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279* __this, const RuntimeMethod* method) ;
// System.Int64 Fractions.Extensions.MathExt::BinaryGreatestCommonDivisorAlgorithm(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MathExt_BinaryGreatestCommonDivisorAlgorithm_m47BCBDDA657D849CF95A8D3FD55997A04D35901D (int64_t ___a0, int64_t ___b1, const RuntimeMethod* method) ;
// System.Boolean Fractions.Extensions.MathExt::IsEven(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathExt_IsEven_m94CC594E9BC00BE2389CC779DA49F67965E4E1A4 (int64_t ___number0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int64 Fractions.Extensions.MathExt::GreatestCommonDivisor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MathExt_GreatestCommonDivisor_m5778F097CF2D2CB551A9A822203856BB2C617CBF (int64_t ___a0, int64_t ___b1, const RuntimeMethod* method) ;
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
// Fractions.Fraction Fractions.FractionExt::Sqrt(Fractions.Fraction,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C FractionExt_Sqrt_m953474D9E580301562158C05868C52EA0AA54B31 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___x0, int32_t ___accuracy1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline(NULL);
		bool L_2;
		L_2 = Fraction_op_LessThan_m5696E6670093A3C6C56786D3E38C34420727362E(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD037E96B4FB087E097585C914E1A949FF2F83B26)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FractionExt_Sqrt_m953474D9E580301562158C05868C52EA0AA54B31_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___accuracy1;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___accuracy1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		int32_t L_8 = ___accuracy1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7C180CEBE785EDA4D68F813A8D1F4145DAF38DD)), L_10, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral760CEE3996851BE46CA5A92D36BE05F835F5741A)), L_7, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FractionExt_Sqrt_m953474D9E580301562158C05868C52EA0AA54B31_RuntimeMethod_var)));
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_13;
		L_13 = Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline(NULL);
		V_0 = L_13;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		memset((&L_15), 0, sizeof(L_15));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_15), ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_16 = ___accuracy1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17;
		L_17 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_15, L_16, NULL);
		Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685((&V_1), L_14, L_17, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_18 = ___x0;
		double L_19;
		L_19 = Fraction_op_Explicit_m2EEFF2B2E5887A94FE850E111598946E00B27FC0(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_2 = L_20;
		double L_21 = V_2;
		bool L_22;
		L_22 = Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline(L_21, NULL);
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		double L_23 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_24;
		L_24 = Fraction_op_Explicit_m5D8D36CA0ACF2DA8EA8FA6A31118F3950742A00D(L_23, NULL);
		G_B7_0 = L_24;
		goto IL_0084;
	}

IL_0079:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_25 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_26;
		L_26 = Fraction_get_Two_m324443011B6ACCEF979E590326706D1331EA5825_inline(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_27;
		L_27 = Fraction_op_Division_m56E69658CC541A64A495F81D96DF2EEE7124B963(L_25, L_26, NULL);
		G_B7_0 = L_27;
	}

IL_0084:
	{
		V_3 = G_B7_0;
		goto IL_00a1;
	}

IL_0087:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_28 = V_3;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_29 = ___x0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_30 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_31;
		L_31 = Fraction_op_Division_m56E69658CC541A64A495F81D96DF2EEE7124B963(L_29, L_30, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_32;
		L_32 = Fraction_op_Addition_mC6D900D5AF9180B5E8967E80F19DA94513344C20(L_28, L_31, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_33;
		L_33 = Fraction_get_Two_m324443011B6ACCEF979E590326706D1331EA5825_inline(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_34;
		L_34 = Fraction_op_Division_m56E69658CC541A64A495F81D96DF2EEE7124B963(L_32, L_33, NULL);
		V_0 = L_34;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_35 = V_0;
		V_3 = L_35;
	}

IL_00a1:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_36 = V_3;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_38;
		L_38 = Fraction_op_Subtraction_mAA7A97820A1E92CB997961B0FEFD21A71504D490(L_36, L_37, NULL);
		V_4 = L_38;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_39;
		L_39 = Fraction_Abs_mE9C6C315DCA028BB535079042567D5F1C5B4BFE2((&V_4), NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_40 = V_1;
		bool L_41;
		L_41 = Fraction_op_GreaterThan_m6502DD910BE7FE64EB516D27A62EEA6217BF870C(L_39, L_40, NULL);
		if (L_41)
		{
			goto IL_0087;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_42 = V_0;
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




// Conversion methods for marshalling of: Fractions.Fraction
IL2CPP_EXTERN_C void Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshal_pinvoke(const Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C& unmarshaled, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_pinvoke& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(unmarshaled.____denominator_6, marshaled.____denominator_6);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke(unmarshaled.____numerator_7, marshaled.____numerator_7);
	marshaled.____state_8 = unmarshaled.____state_8;
}
IL2CPP_EXTERN_C void Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshal_pinvoke_back(const Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_pinvoke& marshaled, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C& unmarshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F unmarshaled_denominator_temp_0;
	memset((&unmarshaled_denominator_temp_0), 0, sizeof(unmarshaled_denominator_temp_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(marshaled.____denominator_6, unmarshaled_denominator_temp_0);
	unmarshaled.____denominator_6 = unmarshaled_denominator_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____denominator_6))->____bits_1), (void*)NULL);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F unmarshaled_numerator_temp_1;
	memset((&unmarshaled_numerator_temp_1), 0, sizeof(unmarshaled_numerator_temp_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_back(marshaled.____numerator_7, unmarshaled_numerator_temp_1);
	unmarshaled.____numerator_7 = unmarshaled_numerator_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____numerator_7))->____bits_1), (void*)NULL);
	int32_t unmarshaled_state_temp_2 = 0;
	unmarshaled_state_temp_2 = marshaled.____state_8;
	unmarshaled.____state_8 = unmarshaled_state_temp_2;
}
// Conversion method for clean up from marshalling of: Fractions.Fraction
IL2CPP_EXTERN_C void Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshal_pinvoke_cleanup(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_pinvoke& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(marshaled.____denominator_6);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_pinvoke_cleanup(marshaled.____numerator_7);
}




// Conversion methods for marshalling of: Fractions.Fraction
IL2CPP_EXTERN_C void Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshal_com(const Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C& unmarshaled, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_com& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com(unmarshaled.____denominator_6, marshaled.____denominator_6);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com(unmarshaled.____numerator_7, marshaled.____numerator_7);
	marshaled.____state_8 = unmarshaled.____state_8;
}
IL2CPP_EXTERN_C void Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshal_com_back(const Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_com& marshaled, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C& unmarshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F unmarshaled_denominator_temp_0;
	memset((&unmarshaled_denominator_temp_0), 0, sizeof(unmarshaled_denominator_temp_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_back(marshaled.____denominator_6, unmarshaled_denominator_temp_0);
	unmarshaled.____denominator_6 = unmarshaled_denominator_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____denominator_6))->____bits_1), (void*)NULL);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F unmarshaled_numerator_temp_1;
	memset((&unmarshaled_numerator_temp_1), 0, sizeof(unmarshaled_numerator_temp_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_back(marshaled.____numerator_7, unmarshaled_numerator_temp_1);
	unmarshaled.____numerator_7 = unmarshaled_numerator_temp_1;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____numerator_7))->____bits_1), (void*)NULL);
	int32_t unmarshaled_state_temp_2 = 0;
	unmarshaled_state_temp_2 = marshaled.____state_8;
	unmarshaled.____state_8 = unmarshaled_state_temp_2;
}
// Conversion method for clean up from marshalling of: Fractions.Fraction
IL2CPP_EXTERN_C void Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshal_com_cleanup(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_marshaled_com& marshaled)
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_cleanup(marshaled.____denominator_6);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshal_com_cleanup(marshaled.____numerator_7);
}
// System.Int32 Fractions.Fraction::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_CompareTo_m1C13F85D10041116F0437DFE64193F1CF0E1C1F8 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___other0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_6;
		L_6 = Resources_get_CompareToArgumentException_mCB85CEBBE3C3B8B674664FC69EC2ED5ADE8638BF(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_7 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var)), &L_8);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		RuntimeObject* L_11 = ___other0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_6, L_10, L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_CompareTo_m1C13F85D10041116F0437DFE64193F1CF0E1C1F8_RuntimeMethod_var)));
	}

IL_0047:
	{
		RuntimeObject* L_15 = ___other0;
		int32_t L_16;
		L_16 = Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6(__this, ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_15, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var)))), NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t Fraction_CompareTo_m1C13F85D10041116F0437DFE64193F1CF0E1C1F8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Fraction_CompareTo_m1C13F85D10041116F0437DFE64193F1CF0E1C1F8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 Fractions.Fraction::CompareTo(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_3;
	memset((&V_3), 0, sizeof(V_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_4;
	memset((&V_4), 0, sizeof(V_4));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____denominator_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1 = ___other0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = L_1.____denominator_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = __this->____numerator_7;
		V_5 = L_4;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_5 = ___other0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = L_5.____numerator_7;
		int32_t L_7;
		L_7 = BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296((&V_5), L_6, NULL);
		return L_7;
	}

IL_0029:
	{
		bool L_8;
		L_8 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		bool L_9;
		L_9 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5((&___other0), NULL);
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0059;
		}
	}
	{
		bool L_10;
		L_10 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		bool L_11;
		L_11 = Fraction_get_IsPositive_mF501955223B353CD3768A78166D595D150187C1B((&___other0), NULL);
		if (L_11)
		{
			goto IL_004b;
		}
	}
	{
		return 1;
	}

IL_004b:
	{
		return (-1);
	}

IL_004d:
	{
		bool L_12;
		L_12 = Fraction_get_IsPositive_mF501955223B353CD3768A78166D595D150187C1B(__this, NULL);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		return (-1);
	}

IL_0057:
	{
		return 1;
	}

IL_0059:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = __this->____denominator_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_14 = ___other0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = L_14.____denominator_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16;
		L_16 = BigInteger_GreatestCommonDivisor_m6E320222B92ADEFF3B81FCB9A94436AA9A95013C(L_13, L_15, NULL);
		V_0 = L_16;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19;
		L_19 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_17, L_18, NULL);
		V_1 = L_19;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_20 = ___other0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21 = L_20.____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_22 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23;
		L_23 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_21, L_22, NULL);
		V_2 = L_23;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_24 = __this->____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_25 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_26;
		L_26 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_24, L_25, NULL);
		V_3 = L_26;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_27 = ___other0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_28 = L_27.____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_29 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_30;
		L_30 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_28, L_29, NULL);
		V_4 = L_30;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_31 = V_4;
		int32_t L_32;
		L_32 = BigInteger_CompareTo_m1B9ADF53CC7255B4DE59A270AA1EA854E25E7296((&V_3), L_31, NULL);
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger,Fractions.FractionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, int32_t ___state2, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___numerator0;
		__this->____numerator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____numerator_7))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___denominator1;
		__this->____denominator_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____denominator_6))->____bits_1), (void*)NULL);
		int32_t L_2 = ___state2;
		__this->____state_8 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, int32_t ___state2, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595(_thisAdjusted, ___numerator0, ___denominator1, ___state2, method);
}
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___denominator1;
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685(_thisAdjusted, ___numerator0, ___denominator1, method);
}
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger,System.Numerics.BigInteger,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, bool ___normalize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B4_0 = NULL;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B3_0 = NULL;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B5_0 = NULL;
	int32_t G_B6_0 = 0;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B6_1 = NULL;
	{
		bool L_0 = ___normalize2;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___denominator1;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_3;
		L_3 = Fraction_GetReducedFraction_m5979AFE9B4F043045350BA9C22394EE7B9F7A646(L_1, L_2, NULL);
		*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this)->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this)->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		return;
	}

IL_0011:
	{
		bool L_4;
		L_4 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&___numerator0), NULL);
		G_B3_0 = __this;
		if (!L_4)
		{
			G_B4_0 = __this;
			goto IL_0024;
		}
	}
	{
		bool L_5;
		L_5 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&___denominator1), NULL);
		G_B4_0 = G_B3_0;
		if (L_5)
		{
			G_B5_0 = G_B3_0;
			goto IL_0027;
		}
	}

IL_0024:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0028:
	{
		G_B6_1->____state_8 = G_B6_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = ___numerator0;
		__this->____numerator_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____numerator_7))->____bits_1), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = ___denominator1;
		__this->____denominator_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____denominator_6))->____bits_1), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, bool ___normalize2, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D(_thisAdjusted, ___numerator0, ___denominator1, ___normalize2, method);
}
// System.Void Fractions.Fraction::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m17F0E6AC13CF0D37E3893104B1DCAA62216C116D (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, int32_t ___numerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B2_0 = NULL;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B1_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B3_1 = NULL;
	{
		int32_t L_0 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_1), L_0, /*hidden argument*/NULL);
		__this->____numerator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____numerator_7))->____bits_1), (void*)NULL);
		int32_t L_2 = ___numerator0;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		G_B3_1->____denominator_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B3_1->____denominator_6))->____bits_1), (void*)NULL);
		__this->____state_8 = 1;
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_m17F0E6AC13CF0D37E3893104B1DCAA62216C116D_AdjustorThunk (RuntimeObject* __this, int32_t ___numerator0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_m17F0E6AC13CF0D37E3893104B1DCAA62216C116D(_thisAdjusted, ___numerator0, method);
}
// System.Void Fractions.Fraction::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m64A84FEEA2233596E61104FB4238760671B13D92 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, int64_t ___numerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B2_0 = NULL;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B1_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B3_1 = NULL;
	{
		int64_t L_0 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mA87DC2182BB2F6AA0209BD98E81C30BCE5B8BBAA((&L_1), L_0, /*hidden argument*/NULL);
		__this->____numerator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____numerator_7))->____bits_1), (void*)NULL);
		int64_t L_2 = ___numerator0;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		G_B3_1->____denominator_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B3_1->____denominator_6))->____bits_1), (void*)NULL);
		__this->____state_8 = 1;
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_m64A84FEEA2233596E61104FB4238760671B13D92_AdjustorThunk (RuntimeObject* __this, int64_t ___numerator0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_m64A84FEEA2233596E61104FB4238760671B13D92(_thisAdjusted, ___numerator0, method);
}
// System.Void Fractions.Fraction::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_mA6377D6019F9702962B0ABA77E233844B20F63D3 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, uint32_t ___numerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B2_0 = NULL;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B1_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B3_1 = NULL;
	{
		uint32_t L_0 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_mE9288D5C617F6BF5B8E44F8B73D9198F30B90D84((&L_1), L_0, /*hidden argument*/NULL);
		__this->____numerator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____numerator_7))->____bits_1), (void*)NULL);
		uint32_t L_2 = ___numerator0;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		G_B3_1->____denominator_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B3_1->____denominator_6))->____bits_1), (void*)NULL);
		__this->____state_8 = 1;
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_mA6377D6019F9702962B0ABA77E233844B20F63D3_AdjustorThunk (RuntimeObject* __this, uint32_t ___numerator0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_mA6377D6019F9702962B0ABA77E233844B20F63D3(_thisAdjusted, ___numerator0, method);
}
// System.Void Fractions.Fraction::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m4696329C67E6ECCDF67FADD0C919699E384EB715 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, uint64_t ___numerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B2_0 = NULL;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B1_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B3_1 = NULL;
	{
		uint64_t L_0 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_m4685E4C69B49F9470E056A761DCEB8DB9FA7D01C((&L_1), L_0, /*hidden argument*/NULL);
		__this->____numerator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____numerator_7))->____bits_1), (void*)NULL);
		uint64_t L_2 = ___numerator0;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		G_B3_1->____denominator_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B3_1->____denominator_6))->____bits_1), (void*)NULL);
		__this->____state_8 = 1;
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_m4696329C67E6ECCDF67FADD0C919699E384EB715_AdjustorThunk (RuntimeObject* __this, uint64_t ___numerator0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_m4696329C67E6ECCDF67FADD0C919699E384EB715(_thisAdjusted, ___numerator0, method);
}
// System.Void Fractions.Fraction::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B2_0 = NULL;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B1_0 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* G_B3_1 = NULL;
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___numerator0;
		__this->____numerator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____numerator_7))->____bits_1), (void*)NULL);
		bool L_1;
		L_1 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&___numerator0), NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->____denominator_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B3_1->____denominator_6))->____bits_1), (void*)NULL);
		__this->____state_8 = 1;
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A_AdjustorThunk (RuntimeObject* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A(_thisAdjusted, ___numerator0, method);
}
// System.Void Fractions.Fraction::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_m9E6B0E8EBF2FDE18685C0947A4AC0773B92846C0 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_FromDouble_m4EBC0E2C7B5A0312206C4BD929B33B2302769F3D(L_0, NULL);
		*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this)->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this)->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_m9E6B0E8EBF2FDE18685C0947A4AC0773B92846C0_AdjustorThunk (RuntimeObject* __this, double ___value0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_m9E6B0E8EBF2FDE18685C0947A4AC0773B92846C0(_thisAdjusted, ___value0, method);
}
// System.Void Fractions.Fraction::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__ctor_mE2832E4D046AE61C6F5ABF603464257CBE1D1353 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_FromDecimal_m2F5B8E82AADC40BACD25CE7FEDC477E68E988A4D(L_0, NULL);
		*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this = L_1;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this)->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this)->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_EXTERN_C  void Fraction__ctor_mE2832E4D046AE61C6F5ABF603464257CBE1D1353_AdjustorThunk (RuntimeObject* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction__ctor_mE2832E4D046AE61C6F5ABF603464257CBE1D1353(_thisAdjusted, ___value0, method);
}
// Fractions.Fraction Fractions.Fraction::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromString_m87AE53E879B82BDD8B03B3FE06A9C430E9E49D50 (String_t* ___fractionString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fractionString0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_FromString_m4075DD05AB9C1B86B747D922B6E1D4E66EF6EA25(L_0, ((int32_t)111), (RuntimeObject*)NULL, NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::FromString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromString_mA231E6F077066C1301E26A133A5E58D6D19F5412 (String_t* ___fractionString0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fractionString0;
		RuntimeObject* L_1 = ___formatProvider1;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_2;
		L_2 = Fraction_FromString_m4075DD05AB9C1B86B747D922B6E1D4E66EF6EA25(L_0, ((int32_t)111), L_1, NULL);
		return L_2;
	}
}
// Fractions.Fraction Fractions.Fraction::FromString(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromString_m4075DD05AB9C1B86B747D922B6E1D4E66EF6EA25 (String_t* ___fractionString0, int32_t ___numberStyles1, RuntimeObject* ___formatProvider2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___fractionString0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA46E3CCB9CD15DE976A72E1B7C665F6950D7E22A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_FromString_m4075DD05AB9C1B86B747D922B6E1D4E66EF6EA25_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___fractionString0;
		int32_t L_3 = ___numberStyles1;
		RuntimeObject* L_4 = ___formatProvider2;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Fraction_TryParse_m36DB08BEC7D09DC12C00FB8E3C5ECACA2FE5A359(L_2, L_3, L_4, (bool)1, (&V_0), NULL);
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_6;
		L_6 = Resources_get_CannotConvertToFraction_m4A0248009CB2F22404C2E18A1B491A3FDDDB8C9C(NULL);
		String_t* L_7 = ___fractionString0;
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_6, L_7, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_9 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_FromString_m4075DD05AB9C1B86B747D922B6E1D4E66EF6EA25_RuntimeMethod_var)));
	}

IL_002c:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Fractions.Fraction::TryParse(System.String,Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_TryParse_mBEC9DDE5817CAECF8D20B945F32AB02F30499B3F (String_t* ___fractionString0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fractionString0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_1 = ___fraction1;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Fraction_TryParse_m36DB08BEC7D09DC12C00FB8E3C5ECACA2FE5A359(L_0, ((int32_t)111), (RuntimeObject*)NULL, (bool)1, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Fractions.Fraction::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_TryParse_m56EDC2DE1D2028F974999FCCB7EA231A43AEC259 (String_t* ___fractionString0, int32_t ___numberStyles1, RuntimeObject* ___formatProvider2, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fractionString0;
		int32_t L_1 = ___numberStyles1;
		RuntimeObject* L_2 = ___formatProvider2;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_3 = ___fraction3;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Fraction_TryParse_m36DB08BEC7D09DC12C00FB8E3C5ECACA2FE5A359(L_0, L_1, L_2, (bool)1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Fractions.Fraction::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_TryParse_m36DB08BEC7D09DC12C00FB8E3C5ECACA2FE5A359 (String_t* ___fractionString0, int32_t ___numberStyles1, RuntimeObject* ___formatProvider2, bool ___normalize3, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_4;
	memset((&V_4), 0, sizeof(V_4));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		String_t* L_0 = ___fractionString0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_1 = ___fraction4;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Fraction_CannotParse_m0C1864181447C847DEDDE6E497B7099AB0D6EB31(L_1, NULL);
		return L_2;
	}

IL_000b:
	{
		String_t* L_3 = ___fractionString0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_5, NULL);
		V_0 = L_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ___numberStyles1;
		RuntimeObject* L_12 = ___formatProvider2;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_13 = ___fraction4;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Fraction_TryParseSingleNumber_mA0CA5E9E106F98683AADB6ACA27E8B61B64870DF(L_10, L_11, L_12, L_13, NULL);
		return L_14;
	}

IL_0030:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) < ((int32_t)2)))
		{
			goto IL_0076;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 1;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
		int32_t L_22 = ___numberStyles1;
		V_3 = ((int32_t)((int32_t)L_22&((int32_t)-33)));
		String_t* L_23 = V_1;
		int32_t L_24 = V_3;
		RuntimeObject* L_25 = ___formatProvider2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = BigInteger_TryParse_mB4087FC67D5610AF013CAFAEB1226C80F6E9F73D(L_23, L_24, L_25, (&V_4), NULL);
		if (!L_26)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_27 = V_2;
		int32_t L_28 = V_3;
		RuntimeObject* L_29 = ___formatProvider2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = BigInteger_TryParse_mB4087FC67D5610AF013CAFAEB1226C80F6E9F73D(L_27, L_28, L_29, (&V_5), NULL);
		if (L_30)
		{
			goto IL_0063;
		}
	}

IL_005b:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_31 = ___fraction4;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Fraction_CannotParse_m0C1864181447C847DEDDE6E497B7099AB0D6EB31(L_31, NULL);
		return L_32;
	}

IL_0063:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_33 = ___fraction4;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_34 = V_4;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_35 = V_5;
		bool L_36 = ___normalize3;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_37;
		memset((&L_37), 0, sizeof(L_37));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_37), L_34, L_35, L_36, /*hidden argument*/NULL);
		*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_33 = L_37;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_33)->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_33)->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0076:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_38 = ___fraction4;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Fraction_CannotParse_m0C1864181447C847DEDDE6E497B7099AB0D6EB31(L_38, NULL);
		return L_39;
	}
}
// System.Boolean Fractions.Fraction::TryParseSingleNumber(System.String,System.Globalization.NumberStyles,System.IFormatProvider,Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_TryParseSingleNumber_mA0CA5E9E106F98683AADB6ACA27E8B61B64870DF (String_t* ___number0, int32_t ___numberStyles1, RuntimeObject* ___formatProvider2, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* V_0 = NULL;
	int32_t V_1 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		RuntimeObject* L_0 = ___formatProvider2;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1;
		L_1 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___number0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_6 = ___number0;
		int32_t L_7 = ___numberStyles1;
		RuntimeObject* L_8 = ___formatProvider2;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Decimal_TryParse_mA3CAA172CC95A384FDB25A3FCEA91F9F1ABF23B6(L_6, L_7, L_8, (&V_3), NULL);
		if (L_9)
		{
			goto IL_0028;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_10 = ___fraction3;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Fraction_CannotParse_m0C1864181447C847DEDDE6E497B7099AB0D6EB31(L_10, NULL);
		return L_11;
	}

IL_0028:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_12 = ___fraction3;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_14;
		L_14 = Fraction_FromDecimal_m2F5B8E82AADC40BACD25CE7FEDC477E68E988A4D(L_13, NULL);
		*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_12)->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_12)->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0036:
	{
		int32_t L_15 = ___numberStyles1;
		V_1 = ((int32_t)((int32_t)L_15&((int32_t)-33)));
		String_t* L_16 = ___number0;
		int32_t L_17 = V_1;
		RuntimeObject* L_18 = ___formatProvider2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = BigInteger_TryParse_mB4087FC67D5610AF013CAFAEB1226C80F6E9F73D(L_16, L_17, L_18, (&V_2), NULL);
		if (L_19)
		{
			goto IL_004e;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_20 = ___fraction3;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Fraction_CannotParse_m0C1864181447C847DEDDE6E497B7099AB0D6EB31(L_20, NULL);
		return L_21;
	}

IL_004e:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_22 = ___fraction3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23 = V_2;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_24;
		memset((&L_24), 0, sizeof(L_24));
		Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A((&L_24), L_23, /*hidden argument*/NULL);
		*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_22 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_22)->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)L_22)->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		return (bool)1;
	}
}
// System.Boolean Fractions.Fraction::CannotParse(Fractions.Fraction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_CannotParse_m0C1864181447C847DEDDE6E497B7099AB0D6EB31 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* ___fraction0, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* L_0 = ___fraction0;
		il2cpp_codegen_initobj(L_0, sizeof(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C));
		return (bool)0;
	}
}
// Fractions.Fraction Fractions.Fraction::FromDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromDouble_m4EBC0E2C7B5A0312206C4BD929B33B2302769F3D (double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	bool V_2 = false;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_5;
	memset((&V_5), 0, sizeof(V_5));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_6;
	memset((&V_6), 0, sizeof(V_6));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	{
		double L_0 = ___value0;
		bool L_1;
		L_1 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___value0;
		bool L_3;
		L_3 = Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653* L_4 = (InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidNumberException__ctor_m5F11503C0D12E5A582BD04B4A69EEAB018710AA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_FromDouble_m4EBC0E2C7B5A0312206C4BD929B33B2302769F3D_RuntimeMethod_var)));
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		V_0 = L_5;
		double L_6 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_6, NULL);
		V_1 = L_7;
		uint64_t L_8 = V_1;
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_9;
		L_9 = Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline(NULL);
		return L_9;
	}

IL_002c:
	{
		uint64_t L_10 = V_1;
		V_2 = (bool)((((int64_t)((int64_t)((int64_t)L_10&((int64_t)(std::numeric_limits<int64_t>::min)())))) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::min)())))? 1 : 0);
		uint64_t L_11 = V_1;
		V_3 = ((int64_t)((int64_t)L_11&((int64_t)4503599627370495LL)));
		uint64_t L_12 = V_1;
		V_4 = ((int32_t)((int64_t)il2cpp_codegen_subtract(((int64_t)((uint64_t)((int64_t)((int64_t)L_12&((int64_t)9218868437227405312LL)))>>((int32_t)52))), ((int64_t)((int32_t)1023)))));
		uint64_t L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_op_Implicit_m82583327AA7F7D65A79CDCEF93F19C2398974548(((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)4503599627370496LL))), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		L_15 = BigInteger_op_Implicit_m82583327AA7F7D65A79CDCEF93F19C2398974548(((int64_t)4503599627370496LL), NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_16;
		memset((&L_16), 0, sizeof(L_16));
		Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685((&L_16), L_14, L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_4;
		G_B6_0 = L_16;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			G_B7_0 = L_16;
			goto IL_009e;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18 = V_0;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20;
		L_20 = BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3(L_18, L_19, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_21;
		memset((&L_21), 0, sizeof(L_21));
		Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A((&L_21), L_20, /*hidden argument*/NULL);
		G_B8_0 = L_21;
		G_B8_1 = G_B6_0;
		goto IL_00b1;
	}

IL_009e:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_22 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23 = V_0;
		int32_t L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = il2cpp_codegen_abs(L_24);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_26;
		L_26 = BigInteger_op_LeftShift_m9C9DD1A22775C31A01650FEB59A91D4A58B719B3(L_23, L_25, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_27;
		memset((&L_27), 0, sizeof(L_27));
		Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685((&L_27), L_22, L_26, /*hidden argument*/NULL);
		G_B8_0 = L_27;
		G_B8_1 = G_B7_0;
	}

IL_00b1:
	{
		V_5 = G_B8_0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_28 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_29;
		L_29 = Fraction_op_Multiply_mC81C4F01CEC9D7C610AFF48042D092EAFA4A2464(G_B8_1, L_28, NULL);
		V_6 = L_29;
		bool L_30 = V_2;
		if (L_30)
		{
			goto IL_00c2;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_31 = V_6;
		return L_31;
	}

IL_00c2:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_32;
		L_32 = Fraction_Invert_m773A469D5CA521DCF1CDEBA8CD720093DD548CA1((&V_6), NULL);
		return L_32;
	}
}
// Fractions.Fraction Fractions.Fraction::FromDoubleRounded(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromDoubleRounded_m4DC3B266253E8F26D9547034A6206471E0B870F3 (double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	{
		double L_0 = ___value0;
		bool L_1;
		L_1 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___value0;
		bool L_3;
		L_3 = Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653* L_4 = (InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidNumberException__ctor_m5F11503C0D12E5A582BD04B4A69EEAB018710AA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_FromDoubleRounded_m4DC3B266253E8F26D9547034A6206471E0B870F3_RuntimeMethod_var)));
	}

IL_0016:
	{
		double L_5 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = fabs(((double)il2cpp_codegen_subtract(L_5, (0.0))));
		if ((!(((double)L_6) < ((double)(4.9406564584124654E-324)))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_7;
		L_7 = Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline(NULL);
		return L_7;
	}

IL_0037:
	{
		double L_8 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Math_Sign_m6E20753D72DE4B46CB1268023661DBE154294408(L_8, NULL);
		V_0 = L_9;
		double L_10 = ___value0;
		double L_11;
		L_11 = fabs(L_10);
		V_1 = L_11;
		double L_12 = V_1;
		BigInteger__ctor_m48BEDD707B2B28BDB94A838395590DFFE775015A((&V_2), L_12, NULL);
		V_3 = (1.0);
		double L_13 = V_1;
		V_4 = L_13;
		V_5 = (0.0);
		V_6 = 0;
		goto IL_00b2;
	}

IL_006a:
	{
		double L_14 = V_4;
		double L_15 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = floor(L_15);
		V_4 = ((double)((1.0)/((double)il2cpp_codegen_subtract(L_14, L_16))));
		double L_17 = V_3;
		double L_18 = V_4;
		double L_19;
		L_19 = floor(L_18);
		double L_20 = V_3;
		double L_21 = V_5;
		V_3 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_19, L_20)), L_21));
		double L_22 = V_1;
		double L_23 = V_3;
		BigInteger__ctor_m48BEDD707B2B28BDB94A838395590DFFE775015A((&V_2), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_22, L_23)), (0.5))), NULL);
		V_5 = L_17;
		int32_t L_24 = V_6;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		V_6 = L_25;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)594))))
		{
			goto IL_00d6;
		}
	}

IL_00b2:
	{
		double L_26 = V_4;
		bool L_27;
		L_27 = MathExt_RemainingDigitsAfterTheDecimalPoint_m8D139127C401C636473CED04DB15B577C6690942(L_26, NULL);
		if (!L_27)
		{
			goto IL_00d6;
		}
	}
	{
		double L_28 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_29 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		double L_30;
		L_30 = BigInteger_op_Explicit_mC8FE8ED9D93EB044FEE2792B100C9CB9005F1EB3(L_29, NULL);
		double L_31 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = fabs(((double)il2cpp_codegen_subtract(L_28, ((double)(((double)L_30)/L_31)))));
		if ((((double)L_32) > ((double)(4.9406564584124654E-324))))
		{
			goto IL_006a;
		}
	}

IL_00d6:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_34 = V_2;
		G_B12_0 = L_34;
		goto IL_00e3;
	}

IL_00dd:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_35 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_36;
		L_36 = BigInteger_Negate_mDBFE92B9E6ABB3032C09C0F9809099606BE44FED(L_35, NULL);
		G_B12_0 = L_36;
	}

IL_00e3:
	{
		double L_37 = V_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_38;
		memset((&L_38), 0, sizeof(L_38));
		BigInteger__ctor_m48BEDD707B2B28BDB94A838395590DFFE775015A((&L_38), L_37, /*hidden argument*/NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_39;
		memset((&L_39), 0, sizeof(L_39));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_39), G_B12_0, L_38, (bool)1, /*hidden argument*/NULL);
		return L_39;
	}
}
// Fractions.Fraction Fractions.Fraction::FromDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_FromDecimal_m2F5B8E82AADC40BACD25CE7FEDC477E68E988A4D (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_5;
	memset((&V_5), 0, sizeof(V_5));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___Zero_3;
		bool L_2;
		L_2 = Decimal_op_Equality_m4778C6A5F0E0FA5CBEFBBCB9E5A34BBE3D2D0BB5(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_3 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2;
		return L_3;
	}

IL_0013:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One_4;
		bool L_6;
		L_6 = Decimal_op_Equality_m4778C6A5F0E0FA5CBEFBBCB9E5A34BBE3D2D0BB5(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_7 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____one_3;
		return L_7;
	}

IL_0026:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___MinusOne_5;
		bool L_10;
		L_10 = Decimal_op_Equality_m4778C6A5F0E0FA5CBEFBBCB9E5A34BBE3D2D0BB5(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_11 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____minus_one_4;
		return L_11;
	}

IL_0039:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13;
		L_13 = Decimal_GetBits_mA8711044E1019B52442F3F280CFD4BB50A43DE68(L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15 = 0;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_16, NULL);
		V_0 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_14;
		NullCheck(L_18);
		int32_t L_19 = 1;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_20, NULL);
		V_1 = L_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_18;
		NullCheck(L_22);
		int32_t L_23 = 2;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_24, NULL);
		V_2 = L_25;
		NullCheck(L_22);
		int32_t L_26 = 3;
		int32_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_27, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = 2;
		uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = L_31;
		NullCheck(L_29);
		int32_t L_32 = 3;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_33&((int32_t)128)))) == ((int32_t)0))? 1 : 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = 0;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = 1;
		uint8_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_42);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = 2;
		uint8_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_46);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_43;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = 3;
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = L_47;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = 0;
		uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = L_51;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = 1;
		uint8_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)L_58);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = L_55;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = 2;
		uint8_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)L_62);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = L_59;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65 = 3;
		uint8_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)L_66);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = L_63;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = 0;
		uint8_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)L_70);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = L_67;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_2;
		NullCheck(L_72);
		int32_t L_73 = 1;
		uint8_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)L_74);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = L_71;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_2;
		NullCheck(L_76);
		int32_t L_77 = 2;
		uint8_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)L_78);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = L_75;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_2;
		NullCheck(L_80);
		int32_t L_81 = 3;
		uint8_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)L_82);
		BigInteger__ctor_m25FA3F3C832BC621CD91ABFAC3535A2F4EE7B371((&V_5), L_79, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_83;
		L_83 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		uint8_t L_84 = V_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_85;
		L_85 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_83, L_84, NULL);
		V_6 = L_85;
		bool L_86 = V_4;
		if (L_86)
		{
			goto IL_00ee;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_87 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_88;
		L_88 = BigInteger_Negate_mDBFE92B9E6ABB3032C09C0F9809099606BE44FED(L_87, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_89 = V_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_90;
		memset((&L_90), 0, sizeof(L_90));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_90), L_88, L_89, (bool)1, /*hidden argument*/NULL);
		return L_90;
	}

IL_00ee:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_91 = V_5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_92 = V_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_93;
		memset((&L_93), 0, sizeof(L_93));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_93), L_91, L_92, (bool)1, /*hidden argument*/NULL);
		return L_93;
	}
}
// System.Int32 Fractions.Fraction::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_ToInt32_m7D14FE7110866B1599F58BA33305A79C5C3BFAD1 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_1, L_2, NULL);
		int32_t L_4;
		L_4 = BigInteger_op_Explicit_m381F80B7F65BFEC7F2597DCDB24622F7F32E6848(L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Fraction_ToInt32_m7D14FE7110866B1599F58BA33305A79C5C3BFAD1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Fraction_ToInt32_m7D14FE7110866B1599F58BA33305A79C5C3BFAD1(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Fractions.Fraction::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Fraction_ToInt64_m20FFC71CD0F27E19A556CCA896EDF0C56E63E2EA (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int64_t)0);
	}

IL_000b:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_1, L_2, NULL);
		int64_t L_4;
		L_4 = BigInteger_op_Explicit_mFADFEBD0E21A83E1522FF45D3B41F46F546F2264(L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int64_t Fraction_ToInt64_m20FFC71CD0F27E19A556CCA896EDF0C56E63E2EA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = Fraction_ToInt64_m20FFC71CD0F27E19A556CCA896EDF0C56E63E2EA(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 Fractions.Fraction::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Fraction_ToUInt32_m01DAAEC1498A8403722F1E5423161F488859299B (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_1, L_2, NULL);
		uint32_t L_4;
		L_4 = BigInteger_op_Explicit_mB338BD78CA1D4642E264645861B15EFA025F1ED8(L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  uint32_t Fraction_ToUInt32_m01DAAEC1498A8403722F1E5423161F488859299B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Fraction_ToUInt32_m01DAAEC1498A8403722F1E5423161F488859299B(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt64 Fractions.Fraction::ToUInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Fraction_ToUInt64_m396A1ACDEFC568CC2571E229B54DB811E611C653 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int64_t)0);
	}

IL_000b:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_1, L_2, NULL);
		uint64_t L_4;
		L_4 = BigInteger_op_Explicit_mC90AC1989E67C94D9146E1E19794016BA20AD101(L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  uint64_t Fraction_ToUInt64_m396A1ACDEFC568CC2571E229B54DB811E611C653_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Fraction_ToUInt64_m396A1ACDEFC568CC2571E229B54DB811E611C653(_thisAdjusted, method);
	return _returnValue;
}
// System.Numerics.BigInteger Fractions.Fraction::ToBigInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_ToBigInteger_m0F5E7329CB6BBE9664E782B4523F5724E7FAA3D6 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		return L_1;
	}

IL_000e:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_ToBigInteger_m0F5E7329CB6BBE9664E782B4523F5724E7FAA3D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F _returnValue;
	_returnValue = Fraction_ToBigInteger_m0F5E7329CB6BBE9664E782B4523F5724E7FAA3D6(_thisAdjusted, method);
	return _returnValue;
}
// System.Decimal Fractions.Fraction::ToDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Fraction_ToDecimal_mFFC8D93C16E0127C7DBF041E5BC467497AEADD0F (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___Zero_3;
		return L_1;
	}

IL_000e:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____numerator_7;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MIN_DECIMAL_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = __this->____numerator_7;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MAX_DECIMAL_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BigInteger_op_LessThanOrEqual_m0217024560C6B2E56EBE0A62A028BCF9D5610A4E(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = __this->____denominator_6;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MIN_DECIMAL_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = BigInteger_op_GreaterThanOrEqual_m2112ACC2CFF7AAFD07A4F46787A545E0670A187B(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = __this->____denominator_6;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MAX_DECIMAL_1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigInteger_op_LessThanOrEqual_m0217024560C6B2E56EBE0A62A028BCF9D5610A4E(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14 = __this->____numerator_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15;
		L_15 = BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835(L_14, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16 = __this->____denominator_6;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17;
		L_17 = BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_18;
		L_18 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_15, L_17, NULL);
		return L_18;
	}

IL_0072:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19 = __this->____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20 = __this->____denominator_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21;
		L_21 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_19, L_20, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22;
		L_22 = BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835(L_21, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23 = __this->____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_24 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_25;
		L_25 = BigInteger_op_Modulus_m3224170883C73BCEC10BC5ACB8ED7C979E43A8CE(L_23, L_24, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_26;
		L_26 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)10), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_27;
		L_27 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_26, ((int32_t)28), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_28;
		L_28 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_25, L_27, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_29 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_30;
		L_30 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_28, L_29, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31;
		L_31 = BigInteger_op_Explicit_m1F21788C5AD515DC2A1FCE89B189F87449CE7835(L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((10.0), (28.0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_33;
		L_33 = Decimal_op_Explicit_mC97457D67812EF62FBEC4E9C07E5DCFACAA1FE66(L_32, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_34;
		L_34 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_31, L_33, NULL);
		V_0 = L_34;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_35 = V_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_36;
		L_36 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_22, L_35, NULL);
		return L_36;
	}
}
IL2CPP_EXTERN_C  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Fraction_ToDecimal_mFFC8D93C16E0127C7DBF041E5BC467497AEADD0F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F _returnValue;
	_returnValue = Fraction_ToDecimal_mFFC8D93C16E0127C7DBF041E5BC467497AEADD0F(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Fractions.Fraction::ToDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Fraction_ToDouble_m7D91DD601D068271B958DB8D29492AC8BFE8B572 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		return (0.0);
	}

IL_0012:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = BigInteger_op_Explicit_mC8FE8ED9D93EB044FEE2792B100C9CB9005F1EB3(L_1, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline(__this, NULL);
		double L_4;
		L_4 = BigInteger_op_Explicit_mC8FE8ED9D93EB044FEE2792B100C9CB9005F1EB3(L_3, NULL);
		return ((double)(((double)L_2)/((double)L_4)));
	}
}
IL2CPP_EXTERN_C  double Fraction_ToDouble_m7D91DD601D068271B958DB8D29492AC8BFE8B572_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	double _returnValue;
	_returnValue = Fraction_ToDouble_m7D91DD601D068271B958DB8D29492AC8BFE8B572(_thisAdjusted, method);
	return _returnValue;
}
// System.Numerics.BigInteger Fractions.Fraction::get_Numerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____numerator_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F _returnValue;
	_returnValue = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Numerics.BigInteger Fractions.Fraction::get_Denominator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____denominator_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F _returnValue;
	_returnValue = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Fractions.Fraction::get_IsPositive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_get_IsPositive_mF501955223B353CD3768A78166D595D150187C1B (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____numerator_7;
		V_0 = L_0;
		int32_t L_1;
		L_1 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____denominator_6;
		V_0 = L_2;
		int32_t L_3;
		L_3 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}

IL_0022:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = __this->____numerator_7;
		V_0 = L_4;
		int32_t L_5;
		L_5 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = __this->____denominator_6;
		V_0 = L_6;
		int32_t L_7;
		L_7 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)(-1)))? 1 : 0);
	}

IL_0045:
	{
		return (bool)0;
	}

IL_0047:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Fraction_get_IsPositive_mF501955223B353CD3768A78166D595D150187C1B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Fraction_get_IsPositive_mF501955223B353CD3768A78166D595D150187C1B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Fractions.Fraction::get_IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_get_IsNegative_mA60643DE697CAB909BF73AF899A56C69DAF11AC9 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____numerator_7;
		V_0 = L_0;
		int32_t L_1;
		L_1 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____denominator_6;
		V_0 = L_2;
		int32_t L_3;
		L_3 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}

IL_0022:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = __this->____numerator_7;
		V_0 = L_4;
		int32_t L_5;
		L_5 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0045;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = __this->____denominator_6;
		V_0 = L_6;
		int32_t L_7;
		L_7 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&V_0), NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)(-1)))? 1 : 0);
	}

IL_0045:
	{
		return (bool)0;
	}

IL_0047:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Fraction_get_IsNegative_mA60643DE697CAB909BF73AF899A56C69DAF11AC9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Fraction_get_IsNegative_mA60643DE697CAB909BF73AF899A56C69DAF11AC9(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Fractions.Fraction::get_IsZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____numerator_7;
		V_0 = L_0;
		bool L_1;
		L_1 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&V_0), NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____denominator_6;
		V_0 = L_2;
		bool L_3;
		L_3 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&V_0), NULL);
		return L_3;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(_thisAdjusted, method);
	return _returnValue;
}
// Fractions.FractionState Fractions.Fraction::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_get_State_mC510C8597E642F88E4E36DD32EAD41485FF0FF86 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____state_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Fraction_get_State_mC510C8597E642F88E4E36DD32EAD41485FF0FF86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Fraction_get_State_mC510C8597E642F88E4E36DD32EAD41485FF0FF86_inline(_thisAdjusted, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2;
		return L_0;
	}
}
// Fractions.Fraction Fractions.Fraction::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_One_mFB4CED55267D091AE29A614B9F65E2973FACCB5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____one_3;
		return L_0;
	}
}
// Fractions.Fraction Fractions.Fraction::get_Two()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_Two_m324443011B6ACCEF979E590326706D1331EA5825 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____two_5;
		return L_0;
	}
}
// Fractions.Fraction Fractions.Fraction::get_MinusOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_MinusOne_mE3F33175DB2BCA1841E99590D1EC7F27F0F21D2D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____minus_one_4;
		return L_0;
	}
}
// System.Boolean Fractions.Fraction::IsEquivalentTo(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_IsEquivalentTo_mCFF92A1395527017D70E491D139B5BF53CDA2F48 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method) 
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0;
		L_0 = Fraction_Reduce_m2C2609018FAF64CA25FB7A5519565F75A5ABF2BE(__this, NULL);
		V_0 = L_0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Reduce_m2C2609018FAF64CA25FB7A5519565F75A5ABF2BE((&___other0), NULL);
		V_1 = L_1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_2 = V_1;
		bool L_3;
		L_3 = Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF((&V_0), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Fraction_IsEquivalentTo_mCFF92A1395527017D70E491D139B5BF53CDA2F48_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Fraction_IsEquivalentTo_mCFF92A1395527017D70E491D139B5BF53CDA2F48(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Fractions.Fraction::Equals(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___other0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = L_0.____denominator_6;
		V_0 = L_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____denominator_6;
		bool L_3;
		L_3 = BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314((&V_0), L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_4 = ___other0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5 = L_4.____numerator_7;
		V_0 = L_5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = __this->____numerator_7;
		bool L_7;
		L_7 = BigInteger_Equals_m36D3C46B170C61FBA8D78C5D4D52B6627DCB2314((&V_0), L_6, NULL);
		return L_7;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___other0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Fractions.Fraction::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_Equals_mC53CA903E911D03EE4398B761886C1C94EDB4980 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___other0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = ___other0;
		bool L_3;
		L_3 = Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF(__this, ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_2, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Fraction_Equals_mC53CA903E911D03EE4398B761886C1C94EDB4980_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	bool _returnValue;
	_returnValue = Fraction_Equals_mC53CA903E911D03EE4398B761886C1C94EDB4980(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 Fractions.Fraction::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_GetHashCode_m73B8F4DEC7137D6EBC28AB224FC6BC910E41C678 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____denominator_6;
		V_0 = L_0;
		int32_t L_1;
		L_1 = BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783((&V_0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____numerator_7;
		V_0 = L_2;
		int32_t L_3;
		L_3 = BigInteger_GetHashCode_m2CB01C462C09EB23616010EB24E0A87A4D35D783((&V_0), NULL);
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Fraction_GetHashCode_m73B8F4DEC7137D6EBC28AB224FC6BC910E41C678_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Fraction_GetHashCode_m73B8F4DEC7137D6EBC28AB224FC6BC910E41C678(_thisAdjusted, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Remainder(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Remainder_m3B4C39688FEB3993210BF3365844EA8EBC7DE5BF (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___divisor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_3;
	memset((&V_3), 0, sizeof(V_3));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5((&___divisor0), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_1 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		DivideByZeroException__ctor_m5E24CFDDA1E75D77F39D139152C20B62C3E4C3BA(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_Remainder_m3B4C39688FEB3993210BF3365844EA8EBC7DE5BF_RuntimeMethod_var)));
	}

IL_000f:
	{
		bool L_2;
		L_2 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_3 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2;
		return L_3;
	}

IL_001d:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___divisor0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_GreatestCommonDivisor_m6E320222B92ADEFF3B81FCB9A94436AA9A95013C(L_4, L_5, NULL);
		V_0 = L_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_7, L_8, NULL);
		V_1 = L_9;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___divisor0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_10, L_11, NULL);
		V_2 = L_12;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___divisor0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		L_15 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_13, L_14, NULL);
		V_3 = L_15;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16 = __this->____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18;
		L_18 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_16, L_17, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19;
		L_19 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___divisor0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21;
		L_21 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_19, L_20, NULL);
		V_4 = L_21;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_22 = V_4;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23;
		L_23 = BigInteger_Remainder_m51D1E0809CC95621F8DF132B91A4A7D9B22BBF41(L_18, L_22, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_24 = V_3;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_25;
		memset((&L_25), 0, sizeof(L_25));
		Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685((&L_25), L_23, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Remainder_m3B4C39688FEB3993210BF3365844EA8EBC7DE5BF_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___divisor0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Remainder_m3B4C39688FEB3993210BF3365844EA8EBC7DE5BF(_thisAdjusted, ___divisor0, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Add(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Add_m776BE479A849E8A0771801652E99FF7F0F973943 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___summand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_2;
	memset((&V_2), 0, sizeof(V_2));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___summand0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = __this->____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___summand0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_Add_mBECE465BB8D2593B4E280D504071CF9CC2835AD5(L_3, L_4, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = __this->____denominator_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_7;
		memset((&L_7), 0, sizeof(L_7));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_7), L_5, L_6, (bool)1, /*hidden argument*/NULL);
		return L_7;
	}

IL_0033:
	{
		bool L_8;
		L_8 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_9 = ___summand0;
		return L_9;
	}

IL_003d:
	{
		bool L_10;
		L_10 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5((&___summand0), NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_11 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		return L_11;
	}

IL_004d:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___summand0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_GreatestCommonDivisor_m6E320222B92ADEFF3B81FCB9A94436AA9A95013C(L_12, L_13, NULL);
		V_0 = L_14;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = __this->____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17;
		L_17 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_15, L_16, NULL);
		V_1 = L_17;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18;
		L_18 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___summand0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_19 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20;
		L_20 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_18, L_19, NULL);
		V_2 = L_20;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_22;
		L_22 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___summand0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_23;
		L_23 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_21, L_22, NULL);
		V_3 = L_23;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_24 = __this->____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_25 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_26;
		L_26 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_24, L_25, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_27;
		L_27 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___summand0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_28 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_29;
		L_29 = BigInteger_Multiply_mC9997FEF584FE5E647715B61FF9FB4CC0E01B115(L_27, L_28, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_30;
		L_30 = BigInteger_Add_mBECE465BB8D2593B4E280D504071CF9CC2835AD5(L_26, L_29, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_31 = V_3;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_32;
		memset((&L_32), 0, sizeof(L_32));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_32), L_30, L_31, (bool)1, /*hidden argument*/NULL);
		return L_32;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Add_m776BE479A849E8A0771801652E99FF7F0F973943_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___summand0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Add_m776BE479A849E8A0771801652E99FF7F0F973943(_thisAdjusted, ___summand0, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Subtract(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Subtract_mFF164B545925661EC6830A16896153949AEDACC6 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___subtrahend0, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0;
		L_0 = Fraction_Invert_m773A469D5CA521DCF1CDEBA8CD720093DD548CA1((&___subtrahend0), NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Add_m776BE479A849E8A0771801652E99FF7F0F973943(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Subtract_mFF164B545925661EC6830A16896153949AEDACC6_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___subtrahend0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Subtract_mFF164B545925661EC6830A16896153949AEDACC6(_thisAdjusted, ___subtrahend0, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Invert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Invert_m773A469D5CA521DCF1CDEBA8CD720093DD548CA1 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2;
		return L_1;
	}

IL_000e:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____numerator_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_Negate_mDBFE92B9E6ABB3032C09C0F9809099606BE44FED(L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = __this->____denominator_6;
		int32_t L_5 = __this->____state_8;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_6;
		memset((&L_6), 0, sizeof(L_6));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Invert_m773A469D5CA521DCF1CDEBA8CD720093DD548CA1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Invert_m773A469D5CA521DCF1CDEBA8CD720093DD548CA1(_thisAdjusted, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Multiply(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Multiply_m483042A2D32E479EE53EE2BB577C15CA2257A995 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___factor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____numerator_7;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1 = ___factor0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = L_1.____numerator_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_0, L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = __this->____denominator_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_5 = ___factor0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = L_5.____denominator_6;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_4, L_6, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_8;
		memset((&L_8), 0, sizeof(L_8));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_8), L_3, L_7, (bool)1, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Multiply_m483042A2D32E479EE53EE2BB577C15CA2257A995_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___factor0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Multiply_m483042A2D32E479EE53EE2BB577C15CA2257A995(_thisAdjusted, ___factor0, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Divide(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Divide_mB9B86563225F7D7DC2C1F221A7DA3ACD30F2A34E (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___divisor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5((&___divisor0), NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1;
		L_1 = Resources_get_DivideByZero_m92340B7122498885FDD22D37EDCF50161CD85660(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_2 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_1, L_4, NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_6 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		DivideByZeroException__ctor_m17FBAE3DCEF960AD07F6917093B78142055E5552(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Fraction_Divide_mB9B86563225F7D7DC2C1F221A7DA3ACD30F2A34E_RuntimeMethod_var)));
	}

IL_0024:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7 = __this->____numerator_7;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_8 = ___divisor0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9 = L_8.____denominator_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_7, L_9, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = __this->____denominator_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_12 = ___divisor0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = L_12.____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_11, L_13, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_15;
		memset((&L_15), 0, sizeof(L_15));
		Fraction__ctor_m391ED4DC6269D4CC7E97CFD1E4F0D0A8D79C104D((&L_15), L_10, L_14, (bool)1, /*hidden argument*/NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Divide_mB9B86563225F7D7DC2C1F221A7DA3ACD30F2A34E_AdjustorThunk (RuntimeObject* __this, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___divisor0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Divide_mB9B86563225F7D7DC2C1F221A7DA3ACD30F2A34E(_thisAdjusted, ___divisor0, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Reduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Reduce_m2C2609018FAF64CA25FB7A5519565F75A5ABF2BE (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____state_8;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = __this->____numerator_7;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = __this->____denominator_6;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_3;
		L_3 = Fraction_GetReducedFraction_m5979AFE9B4F043045350BA9C22394EE7B9F7A646(L_1, L_2, NULL);
		return L_3;
	}

IL_001b:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_4 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Reduce_m2C2609018FAF64CA25FB7A5519565F75A5ABF2BE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Reduce_m2C2609018FAF64CA25FB7A5519565F75A5ABF2BE(_thisAdjusted, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Abs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Abs_mE9C6C315DCA028BB535079042567D5F1C5B4BFE2 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Abs_mB9E1875E84B9EB23C4550DAD898DDA2B7AE72556(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Abs_mE9C6C315DCA028BB535079042567D5F1C5B4BFE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C _returnValue;
	_returnValue = Fraction_Abs_mE9C6C315DCA028BB535079042567D5F1C5B4BFE2(_thisAdjusted, method);
	return _returnValue;
}
// Fractions.Fraction Fractions.Fraction::Abs(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Abs_mB9E1875E84B9EB23C4550DAD898DDA2B7AE72556 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81(L_2, NULL);
		int32_t L_4;
		L_4 = Fraction_get_State_mC510C8597E642F88E4E36DD32EAD41485FF0FF86_inline((&___fraction0), NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_5;
		memset((&L_5), 0, sizeof(L_5));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Fractions.Fraction Fractions.Fraction::GetReducedFraction(System.Numerics.BigInteger,System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_GetReducedFraction_m5979AFE9B4F043045350BA9C22394EE7B9F7A646 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___numerator0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___denominator1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&___numerator0), NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&___denominator1), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_2;
		L_2 = Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline(NULL);
		return L_2;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = BigInteger_get_Sign_m0B029046A49D6CCE27899B31890BF63BD6C68E5E((&___denominator1), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0032;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___numerator0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_Negate_mDBFE92B9E6ABB3032C09C0F9809099606BE44FED(L_4, NULL);
		___numerator0 = L_5;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = ___denominator1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigInteger_Negate_mDBFE92B9E6ABB3032C09C0F9809099606BE44FED(L_6, NULL);
		___denominator1 = L_7;
	}

IL_0032:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9 = ___denominator1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_GreatestCommonDivisor_m6E320222B92ADEFF3B81FCB9A94436AA9A95013C(L_8, L_9, NULL);
		V_0 = L_10;
		bool L_11;
		L_11 = BigInteger_get_IsOne_m225E686FFA5677EE462BE3F28C5C77145ED4E8FC((&V_0), NULL);
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		bool L_12;
		L_12 = BigInteger_get_IsZero_m54B3F16D56CB9E59DBEC6929CF61A7FBE3592DC4((&V_0), NULL);
		if (L_12)
		{
			goto IL_0061;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		L_15 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_13, L_14, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_16 = ___denominator1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_17 = V_0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_18;
		L_18 = BigInteger_Divide_mED1F62FF25152625C8EC61EBE57660B566427BD3(L_16, L_17, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_19;
		memset((&L_19), 0, sizeof(L_19));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_19), L_15, L_18, 1, /*hidden argument*/NULL);
		return L_19;
	}

IL_0061:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_20 = ___numerator0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_21 = ___denominator1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_22;
		memset((&L_22), 0, sizeof(L_22));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_22), L_20, L_21, 1, /*hidden argument*/NULL);
		return L_22;
	}
}
// Fractions.Fraction Fractions.Fraction::Pow(Fractions.Fraction,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_Pow_m512D6851306097D1BE1D664637747C97F0C211EA (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___base0, int32_t ___exponent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___exponent1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1 = ___base0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = L_1.____numerator_7;
		int32_t L_3 = ___exponent1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_2, L_3, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_5 = ___base0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6 = L_5.____denominator_6;
		int32_t L_7 = ___exponent1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_Pow_m26F5247594D5A8D0F0810D11ED79D2BDE8162B56(L_6, L_7, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_9;
		memset((&L_9), 0, sizeof(L_9));
		Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685((&L_9), L_4, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0022:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_10 = ___base0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11 = L_10.____denominator_6;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_12 = ___base0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13 = L_12.____numerator_7;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_14;
		memset((&L_14), 0, sizeof(L_14));
		Fraction__ctor_m8817BD5399571CB5737ECBC2E1B15B39C8922685((&L_14), L_11, L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___exponent1;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_16;
		L_16 = Fraction_Pow_m512D6851306097D1BE1D664637747C97F0C211EA(L_14, ((-L_15)), NULL);
		return L_16;
	}
}
// System.Boolean Fractions.Fraction::op_Equality(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_Equality_m2258288D29650AD8CDB74CE7581E920ACF5ADE49 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___left0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___right1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___right1;
		bool L_1;
		L_1 = Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF((&___left0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Fractions.Fraction::op_Inequality(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_Inequality_m9B732565F63F97C0C61A060F3DE94655DABBA582 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___left0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___right1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___right1;
		bool L_1;
		L_1 = Fraction_Equals_mD977A53152F6503A233F14BA80AFA313DFE89BDF((&___left0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// Fractions.Fraction Fractions.Fraction::op_Addition(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Addition_mC6D900D5AF9180B5E8967E80F19DA94513344C20 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Add_m776BE479A849E8A0771801652E99FF7F0F973943((&___a0), L_0, NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Subtraction(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Subtraction_mAA7A97820A1E92CB997961B0FEFD21A71504D490 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Subtract_mFF164B545925661EC6830A16896153949AEDACC6((&___a0), L_0, NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Multiply(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Multiply_mC81C4F01CEC9D7C610AFF48042D092EAFA4A2464 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Multiply_m483042A2D32E479EE53EE2BB577C15CA2257A995((&___a0), L_0, NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Division(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Division_m56E69658CC541A64A495F81D96DF2EEE7124B963 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Divide_mB9B86563225F7D7DC2C1F221A7DA3ACD30F2A34E((&___a0), L_0, NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Modulus(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Modulus_m6EEAA07B8D1DE1F7BE61DA77AE7FF4B4D5AACCAD (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_Remainder_m3B4C39688FEB3993210BF3365844EA8EBC7DE5BF((&___a0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Fractions.Fraction::op_LessThan(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_LessThan_m5696E6670093A3C6C56786D3E38C34420727362E (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		int32_t L_1;
		L_1 = Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6((&___a0), L_0, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Fractions.Fraction::op_GreaterThan(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_GreaterThan_m6502DD910BE7FE64EB516D27A62EEA6217BF870C (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		int32_t L_1;
		L_1 = Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6((&___a0), L_0, NULL);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Fractions.Fraction::op_LessThanOrEqual(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_LessThanOrEqual_m57E34CF8889A298907B3A5942F01D84774616624 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		int32_t L_1;
		L_1 = Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6((&___a0), L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Fractions.Fraction::op_GreaterThanOrEqual(Fractions.Fraction,Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Fraction_op_GreaterThanOrEqual_m7DE8CBC3572577DD1E514430685DA26AD96CD0BF (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___a0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___b1, const RuntimeMethod* method) 
{
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ___b1;
		int32_t L_1;
		L_1 = Fraction_CompareTo_m5BB55732F683CBB6538C5DDB51CA574DFA5872F6((&___a0), L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Fractions.Fraction Fractions.Fraction::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Implicit_mFF25E0538034DAF9816CBA88DBB829116DD8F270 (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_m17F0E6AC13CF0D37E3893104B1DCAA62216C116D((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Implicit_m8AA49DCF81D48A647C04A96208946F159EB96AEF (int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_m64A84FEEA2233596E61104FB4238760671B13D92((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Implicit_m95F5972F4F3440F70D0DB7E524C09BA2E4E90F16 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_mA6377D6019F9702962B0ABA77E233844B20F63D3((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Implicit_m0988056C2F35694DB316D89A0E71D50DD1739F1D (uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_m4696329C67E6ECCDF67FADD0C919699E384EB715((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Implicit(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Implicit_m92410AED15B125F0312EA6E4E606AB1841F14F6E (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___value0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Explicit_m5D8D36CA0ACF2DA8EA8FA6A31118F3950742A00D (double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_m9E6B0E8EBF2FDE18685C0947A4AC0773B92846C0((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Explicit_m532CC1BC31BC55BC899ADE6CCC1A667ADB501D71 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_mE2832E4D046AE61C6F5ABF603464257CBE1D1353((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.Fraction::op_Explicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_op_Explicit_mF9C505EA891122A3E1EADFCE3B9F4195F30327B1 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_FromString_m87AE53E879B82BDD8B03B3FE06A9C430E9E49D50(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Fraction_op_Explicit_mCE1D93751B52E6BF50416A90AB09C61D15F0A940 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Fraction_ToInt32_m7D14FE7110866B1599F58BA33305A79C5C3BFAD1((&___fraction0), NULL);
		return L_0;
	}
}
// System.Int64 Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Fraction_op_Explicit_m272E4482B5D956F5BF2452EF2C4DBD2B0F53DEDD (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	{
		int64_t L_0;
		L_0 = Fraction_ToInt64_m20FFC71CD0F27E19A556CCA896EDF0C56E63E2EA((&___fraction0), NULL);
		return L_0;
	}
}
// System.UInt32 Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Fraction_op_Explicit_m6DD744C6E9AC7B2FC40BC26D218247226B9482BD (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = Fraction_ToUInt32_m01DAAEC1498A8403722F1E5423161F488859299B((&___fraction0), NULL);
		return L_0;
	}
}
// System.UInt64 Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Fraction_op_Explicit_m6E23F75CF3946299484F048DF2DE49262D1C7F06 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0;
		L_0 = Fraction_ToUInt64_m396A1ACDEFC568CC2571E229B54DB811E611C653((&___fraction0), NULL);
		return L_0;
	}
}
// System.Decimal Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Fraction_op_Explicit_mBA1FE326D4E567019B771B697FB3F2EF73789BA0 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0;
		L_0 = Fraction_ToDecimal_mFFC8D93C16E0127C7DBF041E5BC467497AEADD0F((&___fraction0), NULL);
		return L_0;
	}
}
// System.Double Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Fraction_op_Explicit_m2EEFF2B2E5887A94FE850E111598946E00B27FC0 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Fraction_ToDouble_m7D91DD601D068271B958DB8D29492AC8BFE8B572((&___fraction0), NULL);
		return L_0;
	}
}
// System.Numerics.BigInteger Fractions.Fraction::op_Explicit(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_op_Explicit_m4F4D574E8F1D1F64A20D627F7E7A1FF879F8D5DD (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = Fraction_ToBigInteger_m0F5E7329CB6BBE9664E782B4523F5724E7FAA3D6((&___fraction0), NULL);
		return L_0;
	}
}
// System.String Fractions.Fraction::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fraction_ToString_mC4A6A4CEC69DE029231C3EE6A8AD6DE0D85186B7 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var))->___Instance_0;
		String_t* L_1;
		L_1 = Fraction_ToString_mA983B4CC2B1F7A1F8766DB51D3E885EF2E7062D0(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Fraction_ToString_mC4A6A4CEC69DE029231C3EE6A8AD6DE0D85186B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Fraction_ToString_mC4A6A4CEC69DE029231C3EE6A8AD6DE0D85186B7(_thisAdjusted, method);
	return _returnValue;
}
// System.String Fractions.Fraction::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fraction_ToString_m3B9F8B1DCA1FC418F6CC1B3A77754CB493D9740E (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var))->___Instance_0;
		String_t* L_2;
		L_2 = Fraction_ToString_mA983B4CC2B1F7A1F8766DB51D3E885EF2E7062D0(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Fraction_ToString_m3B9F8B1DCA1FC418F6CC1B3A77754CB493D9740E_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Fraction_ToString_m3B9F8B1DCA1FC418F6CC1B3A77754CB493D9740E(_thisAdjusted, ___format0, method);
	return _returnValue;
}
// System.String Fractions.Fraction::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Fraction_ToString_mA983B4CC2B1F7A1F8766DB51D3E885EF2E7062D0 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomFormatter_t631C7AD711F74B4AD8E31D00F168D1FAF7AA84FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___formatProvider1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = NULL;
		goto IL_001c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___formatProvider1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_2 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_3 = L_2;
		RuntimeObject* L_4 = Box(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var, &L_3);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		NullCheck(L_1);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Object System.IFormatProvider::GetFormat(System.Type) */, IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52_il2cpp_TypeInfo_var, L_1, L_5);
		G_B3_0 = L_6;
	}

IL_001c:
	{
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)G_B3_0, ICustomFormatter_t631C7AD711F74B4AD8E31D00F168D1FAF7AA84FA_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_0;
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var))->___Instance_0;
		String_t* L_9 = ___format0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_10 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_11 = L_10;
		RuntimeObject* L_12 = Box(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var, &L_11);
		RuntimeObject* L_13 = ___formatProvider1;
		NullCheck(L_8);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.String System.ICustomFormatter::Format(System.String,System.Object,System.IFormatProvider) */, ICustomFormatter_t631C7AD711F74B4AD8E31D00F168D1FAF7AA84FA_il2cpp_TypeInfo_var, L_8, L_9, L_12, L_13);
		return L_14;
	}

IL_003d:
	{
		RuntimeObject* L_15 = V_0;
		String_t* L_16 = ___format0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_17 = (*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)__this);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_18 = L_17;
		RuntimeObject* L_19 = Box(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var, &L_18);
		RuntimeObject* L_20 = ___formatProvider1;
		NullCheck(L_15);
		String_t* L_21;
		L_21 = InterfaceFuncInvoker3< String_t*, String_t*, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.String System.ICustomFormatter::Format(System.String,System.Object,System.IFormatProvider) */, ICustomFormatter_t631C7AD711F74B4AD8E31D00F168D1FAF7AA84FA_il2cpp_TypeInfo_var, L_15, L_16, L_19, L_20);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Fraction_ToString_mA983B4CC2B1F7A1F8766DB51D3E885EF2E7062D0_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Fraction_ToString_mA983B4CC2B1F7A1F8766DB51D3E885EF2E7062D0(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Void Fractions.Fraction::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fraction__cctor_m5CA5C2E23F3DA5B0A3F0C6D46ED3BF6BB5A6386E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7((&L_0), (-1), (-1), (-1), (bool)1, (uint8_t)0, /*hidden argument*/NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		memset((&L_1), 0, sizeof(L_1));
		BigInteger__ctor_m9544C18A3217F10163645D4A62264DE37CA49821((&L_1), L_0, /*hidden argument*/NULL);
		((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MIN_DECIMAL_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MIN_DECIMAL_0))->____bits_1), (void*)NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7((&L_2), (-1), (-1), (-1), (bool)0, (uint8_t)0, /*hidden argument*/NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		memset((&L_3), 0, sizeof(L_3));
		BigInteger__ctor_m9544C18A3217F10163645D4A62264DE37CA49821((&L_3), L_2, /*hidden argument*/NULL);
		((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MAX_DECIMAL_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->___MAX_DECIMAL_1))->____bits_1), (void*)NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_6;
		memset((&L_6), 0, sizeof(L_6));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_6), L_4, L_5, 1, /*hidden argument*/NULL);
		((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2))->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2))->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_9;
		memset((&L_9), 0, sizeof(L_9));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_9), L_7, L_8, 1, /*hidden argument*/NULL);
		((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____one_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____one_3))->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____one_3))->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_get_MinusOne_m3FF0F44F8C3D6DFB66C00B61017E42E555585465_inline(NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_12;
		memset((&L_12), 0, sizeof(L_12));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_12), L_10, L_11, 1, /*hidden argument*/NULL);
		((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____minus_one_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____minus_one_4))->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____minus_one_4))->____numerator_7))->____bits_1), (void*)NULL);
		#endif
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		memset((&L_13), 0, sizeof(L_13));
		BigInteger__ctor_mFEDEDA4A6AFC2BA534FEEF4EB3431B9C5AC3F9D9((&L_13), 2, /*hidden argument*/NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_14;
		L_14 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_15;
		memset((&L_15), 0, sizeof(L_15));
		Fraction__ctor_m4B9AF0D4970AA1604ACFC138E67BAD92DFBE0595((&L_15), L_13, L_14, 1, /*hidden argument*/NULL);
		((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____two_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____two_5))->____denominator_6))->____bits_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____two_5))->____numerator_7))->____bits_1), (void*)NULL);
		#endif
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
// System.Void Fractions.InvalidNumberException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNumberException__ctor_m5F11503C0D12E5A582BD04B4A69EEAB018710AA3 (InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653* __this, const RuntimeMethod* method) 
{
	{
		ArithmeticException__ctor_m1CD22804E6929CDFBE5CB651FCE80C0C668D3FB0(__this, NULL);
		return;
	}
}
// System.Void Fractions.InvalidNumberException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNumberException__ctor_mEAE7EE14DDB7B7337CF62015C650D61194C84968 (InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(__this, L_0, NULL);
		return;
	}
}
// System.Void Fractions.InvalidNumberException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidNumberException__ctor_mD3C1BAA223F2A609B08A37C3CB6A38CA66E155C3 (InvalidNumberException_t47444C95172803B2C40E13C7375E6A1F2D62C653* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(__this, L_0, L_1, NULL);
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
// System.Boolean Fractions.TypeConverters.FractionTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FractionTypeConverter_CanConvertTo_m283BE5C737A4CC433DB2D5369878244A712B7C49 (FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF* __this, RuntimeObject* ___context0, Type_t* ___destinationType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_0 = ((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___SUPPORTED_TYPES_2;
		Type_t* L_1 = ___destinationType1;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_0, L_1, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Fractions.TypeConverters.FractionTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FractionTypeConverter_CanConvertFrom_m68E961033C9A6A0644242CF4378FE6C4CB03A839 (FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF* __this, RuntimeObject* ___context0, Type_t* ___sourceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_0 = ((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___SUPPORTED_TYPES_2;
		Type_t* L_1 = ___sourceType1;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D(L_0, L_1, HashSet_1_Contains_mDA8DE9AE6B9EB1DD6FD9F741272BF6747AAF1B5D_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FractionTypeConverter_ConvertTo_m4E0A2A83683D6E00BC1F337E26C71D1168546EFE (FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, Type_t* ___destinationType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAACDAD3AA1181A00295EB57F85446FA536F120B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_1 = ((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___CONVERT_TO_DICTIONARY_3;
		Type_t* L_2 = ___destinationType3;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mAACDAD3AA1181A00295EB57F85446FA536F120B8(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mAACDAD3AA1181A00295EB57F85446FA536F120B8_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001f;
		}
	}

IL_0013:
	{
		RuntimeObject* L_4 = ___context0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___culture1;
		RuntimeObject* L_6 = ___value2;
		Type_t* L_7 = ___destinationType3;
		RuntimeObject* L_8;
		L_8 = TypeConverter_ConvertTo_m5D4785A320B7ED351B677E28B77171F70E389B96(__this, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}

IL_001f:
	{
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_9 = V_0;
		RuntimeObject* L_10 = ___value2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11 = ___culture1;
		NullCheck(L_9);
		RuntimeObject* L_12;
		L_12 = Func_3_Invoke_mAE1C6D9A2069686E1E35598462FDF851BEF753C4_inline(L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FractionTypeConverter_ConvertFrom_m79E602D65686B8DFE4CA1081360694A081C96603 (FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF* __this, RuntimeObject* ___context0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0BBE78A2942B92B71B0FD470301B88FD035263AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline(NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_2 = L_1;
		RuntimeObject* L_3 = Box(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_4 = ((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___CONVERT_FROM_DICTIONARY_4;
		RuntimeObject* L_5 = ___value2;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m0BBE78A2942B92B71B0FD470301B88FD035263AD(L_4, L_6, (&V_0), Dictionary_2_TryGetValue_m0BBE78A2942B92B71B0FD470301B88FD035263AD_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_8 = ___context0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = ___culture1;
		RuntimeObject* L_10 = ___value2;
		RuntimeObject* L_11;
		L_11 = TypeConverter_ConvertFrom_mDE2D27BF8934184429496B39ED63BD3702868774(__this, L_8, L_9, L_10, NULL);
		return L_11;
	}

IL_002c:
	{
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_12 = V_0;
		RuntimeObject* L_13 = ___value2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14 = ___culture1;
		NullCheck(L_12);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_15;
		L_15 = Func_3_Invoke_mBDD1F7CB4417D3B7ABA3367AB372DC2CB23F407D_inline(L_12, L_13, L_14, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_16 = L_15;
		RuntimeObject* L_17 = Box(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}
}
// System.Void Fractions.TypeConverters.FractionTypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FractionTypeConverter__ctor_mD19755422696544413A4159CC7AFDEA583514BE1 (FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
// System.Void Fractions.TypeConverters.FractionTypeConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FractionTypeConverter__cctor_mD7738D0D1F606B00811B91C31CA8BDCF782E2588 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAA36C2598D1EF3230776EDD1BDC4B77C62D0AAB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBAC7D6DDBEC7FF1103E833CD43B2A2BEBDD7D85D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_0_mDA1DC035FED2DB9BBBCED6B4517D04693F396C64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_10_m63A068088B1AF6A7AB2C0917F6AE394D1ED7A027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_11_mCC6AF7A3BFC40EA4315E5B1DBC0F17659ADA4788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_12_mD514FED5B5CB0A59660DAB4D73329707DD25BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_13_m1644D03FF49642DA2D9F3AA91D3B7E362FBE1F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_1_m3265FAFEA3AE101996ACF1E34ACA0A30D384E8F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_2_mD558B81FE9BC24B49BD7242C7346C55578984686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_3_m4C45DCAD52C5BA34A6E14988A224FD5EBB2D4377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_4_mB8B8FFC1B92AC680EBE1251F365B174A091BEAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_5_mBFD4C26399EA82424C46511D9C3430D5141FDC0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_6_m938E38B397B544144BD31A463524172D4D73F9B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_7_m12C7BE459CE17EA7532AB49ACDE255312B321DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_8_m151868F5F27D99A568CD48419C47354A79156FD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__8_9_mCEEACBACC86C17557724020D57B6413D81CB2A8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_0 = (HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7*)il2cpp_codegen_object_new(HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC(L_0, HashSet_1__ctor_m2CF57902B2200A0A6EC0336F9F47E8479CB8FEEC_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_1, L_3, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_5 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_5, L_7, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_9 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_9, L_11, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_13 = L_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		bool L_16;
		L_16 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_13, L_15, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_17 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_17);
		bool L_20;
		L_20 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_17, L_19, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_21 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_21, L_23, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* L_25 = L_21;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		bool L_28;
		L_28 = HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1(L_25, L_27, HashSet_1_Add_mE981A3DF3CF945751F5D80D6B2DC2E699FB9D7F1_RuntimeMethod_var);
		((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___SUPPORTED_TYPES_2 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___SUPPORTED_TYPES_2), (void*)L_25);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_29 = (Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF*)il2cpp_codegen_object_new(Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Dictionary_2__ctor_mBAC7D6DDBEC7FF1103E833CD43B2A2BEBDD7D85D(L_29, Dictionary_2__ctor_mBAC7D6DDBEC7FF1103E833CD43B2A2BEBDD7D85D_RuntimeMethod_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_30 = L_29;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_33 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_34 = (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*)il2cpp_codegen_object_new(Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB(L_34, L_33, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_0_mDA1DC035FED2DB9BBBCED6B4517D04693F396C64_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1(L_30, L_32, L_34, Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_35 = L_30;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_38 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_39 = (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*)il2cpp_codegen_object_new(Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB(L_39, L_38, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_1_m3265FAFEA3AE101996ACF1E34ACA0A30D384E8F2_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1(L_35, L_37, L_39, Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_40 = L_35;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_43 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_44 = (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*)il2cpp_codegen_object_new(Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB(L_44, L_43, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_2_mD558B81FE9BC24B49BD7242C7346C55578984686_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1(L_40, L_42, L_44, Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_45 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_48 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_49 = (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*)il2cpp_codegen_object_new(Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB(L_49, L_48, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_3_m4C45DCAD52C5BA34A6E14988A224FD5EBB2D4377_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1(L_45, L_47, L_49, Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_50 = L_45;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_53 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_54 = (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*)il2cpp_codegen_object_new(Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB(L_54, L_53, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_4_mB8B8FFC1B92AC680EBE1251F365B174A091BEAE4_RuntimeMethod_var), NULL);
		NullCheck(L_50);
		Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1(L_50, L_52, L_54, Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_55 = L_50;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var) };
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_58 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_59 = (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*)il2cpp_codegen_object_new(Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB(L_59, L_58, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_5_mBFD4C26399EA82424C46511D9C3430D5141FDC0A_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1(L_55, L_57, L_59, Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		Dictionary_2_t27068B7FCDB7AFCF6D2368EE452845A0E74EAFEF* L_60 = L_55;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0_var) };
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_63 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85* L_64 = (Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85*)il2cpp_codegen_object_new(Func_3_tE0AD6DF23361471B0517ADD36286454C9A05DB85_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		Func_3__ctor_mE582B16C4C5D8078EB563819186FF444BAAFD4EB(L_64, L_63, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_6_m938E38B397B544144BD31A463524172D4D73F9B7_RuntimeMethod_var), NULL);
		NullCheck(L_60);
		Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1(L_60, L_62, L_64, Dictionary_2_Add_m8CCC415FA276F7225A67C3E02F9E78B51F26C4C1_RuntimeMethod_var);
		((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___CONVERT_TO_DICTIONARY_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___CONVERT_TO_DICTIONARY_3), (void*)L_60);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_65 = (Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94*)il2cpp_codegen_object_new(Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		Dictionary_2__ctor_mAA36C2598D1EF3230776EDD1BDC4B77C62D0AAB4(L_65, Dictionary_2__ctor_mAA36C2598D1EF3230776EDD1BDC4B77C62D0AAB4_RuntimeMethod_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_66 = L_65;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_69 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_70 = (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*)il2cpp_codegen_object_new(Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3(L_70, L_69, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_7_m12C7BE459CE17EA7532AB49ACDE255312B321DF1_RuntimeMethod_var), NULL);
		NullCheck(L_66);
		Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C(L_66, L_68, L_70, Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_71 = L_66;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_74 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_75 = (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*)il2cpp_codegen_object_new(Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3(L_75, L_74, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_8_m151868F5F27D99A568CD48419C47354A79156FD3_RuntimeMethod_var), NULL);
		NullCheck(L_71);
		Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C(L_71, L_73, L_75, Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_76 = L_71;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_79 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_80 = (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*)il2cpp_codegen_object_new(Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3(L_80, L_79, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_9_mCEEACBACC86C17557724020D57B6413D81CB2A8B_RuntimeMethod_var), NULL);
		NullCheck(L_76);
		Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C(L_76, L_78, L_80, Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_81 = L_76;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_84 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_85 = (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*)il2cpp_codegen_object_new(Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3(L_85, L_84, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_10_m63A068088B1AF6A7AB2C0917F6AE394D1ED7A027_RuntimeMethod_var), NULL);
		NullCheck(L_81);
		Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C(L_81, L_83, L_85, Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_86 = L_81;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_89 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_90 = (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*)il2cpp_codegen_object_new(Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		NullCheck(L_90);
		Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3(L_90, L_89, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_11_mCC6AF7A3BFC40EA4315E5B1DBC0F17659ADA4788_RuntimeMethod_var), NULL);
		NullCheck(L_86);
		Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C(L_86, L_88, L_90, Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_91 = L_86;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_94 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_95 = (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*)il2cpp_codegen_object_new(Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3(L_95, L_94, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_12_mD514FED5B5CB0A59660DAB4D73329707DD25BBD0_RuntimeMethod_var), NULL);
		NullCheck(L_91);
		Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C(L_91, L_93, L_95, Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		Dictionary_2_tF72D074AF9A4F9070B243B982C7571C111052A94* L_96 = L_91;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_0_0_0_var) };
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_99 = ((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3* L_100 = (Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3*)il2cpp_codegen_object_new(Func_3_t13ADAE9E4BE9F706425704F11632624C23DA16E3_il2cpp_TypeInfo_var);
		NullCheck(L_100);
		Func_3__ctor_m67CF531F234EC0CD3BAB727A2B05A6A6B47732C3(L_100, L_99, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__8_13_m1644D03FF49642DA2D9F3AA91D3B7E362FBE1F49_RuntimeMethod_var), NULL);
		NullCheck(L_96);
		Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C(L_96, L_98, L_100, Dictionary_2_Add_mDA738E3C3FF89C301BEF893194C5156E87CE1E7C_RuntimeMethod_var);
		((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___CONVERT_FROM_DICTIONARY_4 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&((FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_StaticFields*)il2cpp_codegen_static_fields_for(FractionTypeConverter_t2420ADBB459BC9A4D6616C038822742FF1E91BFF_il2cpp_TypeInfo_var))->___CONVERT_FROM_DICTIONARY_4), (void*)L_96);
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
// System.Void Fractions.TypeConverters.FractionTypeConverter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEB4DC7765065F25D11D64E90178F8BE08A0402F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* L_0 = (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545*)il2cpp_codegen_object_new(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m36A51D84C9AE708AB325282E7A28467725F2CE42(L_0, NULL);
		((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Fractions.TypeConverters.FractionTypeConverter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m36A51D84C9AE708AB325282E7A28467725F2CE42 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_0(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__8_0_mDA1DC035FED2DB9BBBCED6B4517D04693F396C64 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		String_t* L_1;
		L_1 = Fraction_ToString_mC4A6A4CEC69DE029231C3EE6A8AD6DE0D85186B7((&V_0), NULL);
		return L_1;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_1(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__8_1_m3265FAFEA3AE101996ACF1E34ACA0A30D384E8F2 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		int32_t L_1;
		L_1 = Fraction_ToInt32_m7D14FE7110866B1599F58BA33305A79C5C3BFAD1((&V_0), NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_2(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__8_2_mD558B81FE9BC24B49BD7242C7346C55578984686 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		int64_t L_1;
		L_1 = Fraction_ToInt64_m20FFC71CD0F27E19A556CCA896EDF0C56E63E2EA((&V_0), NULL);
		int64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_3(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__8_3_m4C45DCAD52C5BA34A6E14988A224FD5EBB2D4377 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Fraction_ToDecimal_mFFC8D93C16E0127C7DBF041E5BC467497AEADD0F((&V_0), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = L_1;
		RuntimeObject* L_3 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_4(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__8_4_mB8B8FFC1B92AC680EBE1251F365B174A091BEAE4 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		double L_1;
		L_1 = Fraction_ToDouble_m7D91DD601D068271B958DB8D29492AC8BFE8B572((&V_0), NULL);
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_5(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__8_5_mBFD4C26399EA82424C46511D9C3430D5141FDC0A (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2 = Box(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Object Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_6(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__8_6_m938E38B397B544144BD31A463524172D4D73F9B7 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = Fraction_ToBigInteger_m0F5E7329CB6BBE9664E782B4523F5724E7FAA3D6((&V_0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = L_1;
		RuntimeObject* L_3 = Box(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// Fractions.Fraction Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_7(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C U3CU3Ec_U3C_cctorU3Eb__8_7_m12C7BE459CE17EA7532AB49ACDE255312B321DF1 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ___info1;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_2;
		L_2 = Fraction_FromString_mA231E6F077066C1301E26A133A5E58D6D19F5412(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, NULL);
		return L_2;
	}
}
// Fractions.Fraction Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_8(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C U3CU3Ec_U3C_cctorU3Eb__8_8_m151868F5F27D99A568CD48419C47354A79156FD3 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_m17F0E6AC13CF0D37E3893104B1DCAA62216C116D((&L_1), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_9(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C U3CU3Ec_U3C_cctorU3Eb__8_9_mCEEACBACC86C17557724020D57B6413D81CB2A8B (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_m64A84FEEA2233596E61104FB4238760671B13D92((&L_1), ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_0, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_10(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C U3CU3Ec_U3C_cctorU3Eb__8_10_m63A068088B1AF6A7AB2C0917F6AE394D1ED7A027 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_FromDecimal_m2F5B8E82AADC40BACD25CE7FEDC477E68E988A4D(((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_11(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C U3CU3Ec_U3C_cctorU3Eb__8_11_mCC6AF7A3BFC40EA4315E5B1DBC0F17659ADA4788 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		L_1 = Fraction_FromDouble_m4EBC0E2C7B5A0312206C4BD929B33B2302769F3D(((*(double*)((double*)(double*)UnBox(L_0, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// Fractions.Fraction Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_12(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C U3CU3Ec_U3C_cctorU3Eb__8_12_mD514FED5B5CB0A59660DAB4D73329707DD25BBD0 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		return ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_0, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
	}
}
// Fractions.Fraction Fractions.TypeConverters.FractionTypeConverter/<>c::<.cctor>b__8_13(System.Object,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C U3CU3Ec_U3C_cctorU3Eb__8_13_m1644D03FF49642DA2D9F3AA91D3B7E362FBE1F49 (U3CU3Ec_tA369DB9957B23FA9A00216E50690346DEA90A545* __this, RuntimeObject* ___o0, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___info1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Fraction__ctor_mE98BF34A7FCA37C3004669338DBCDDAF0914AD5A((&L_1), ((*(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F*)UnBox(L_0, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_1;
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
// System.Void Fractions.Properties.Resources::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resources__ctor_m4D41642B31B8FA7B24AF5B98C9161A1E2F4729C8 (Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Resources.ResourceManager Fractions.Properties.Resources::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* Resources_get_ResourceManager_m593A418860D9B4D80771B5BF4E476CAAD611A081 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97CF5837DD0BAD2624819CF91603CFDB28B7BB60);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceMan_0;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_3;
		L_3 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_2, NULL);
		NullCheck(L_3);
		Assembly_t* L_4;
		L_4 = VirtualFuncInvoker0< Assembly_t* >::Invoke(26 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ResourceManager__ctor_m69EC71B02DB2B37C2F033C22FCF6972E09B38FB1(L_5, _stringLiteral97CF5837DD0BAD2624819CF91603CFDB28B7BB60, L_4, NULL);
		((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceMan_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceMan_0), (void*)L_5);
	}

IL_002a:
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_6 = ((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceMan_0;
		return L_6;
	}
}
// System.Globalization.CultureInfo Fractions.Properties.Resources::get_Culture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* Resources_get_Culture_mEBA0CA2BBAA15A37FF37E0186E70D6C674C219E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceCulture_1;
		return L_0;
	}
}
// System.Void Fractions.Properties.Resources::set_Culture(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Resources_set_Culture_m3BAAD2C6246C7A435EDF60D0E8CE180CA18A16CF (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___value0;
		((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceCulture_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceCulture_1), (void*)L_0);
		return;
	}
}
// System.String Fractions.Properties.Resources::get_CannotConvertToFraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_CannotConvertToFraction_m4A0248009CB2F22404C2E18A1B491A3FDDDB8C9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F0A19F51EBFB97570706F8A26E3C44CEA7FF9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = Resources_get_ResourceManager_m593A418860D9B4D80771B5BF4E476CAAD611A081(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceCulture_1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteralB2F0A19F51EBFB97570706F8A26E3C44CEA7FF9D, L_1);
		return L_2;
	}
}
// System.String Fractions.Properties.Resources::get_CompareToArgumentException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_CompareToArgumentException_mCB85CEBBE3C3B8B674664FC69EC2ED5ADE8638BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA935905D7BC49DC64F35FD801BDF0686BF8216EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = Resources_get_ResourceManager_m593A418860D9B4D80771B5BF4E476CAAD611A081(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceCulture_1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteralA935905D7BC49DC64F35FD801BDF0686BF8216EB, L_1);
		return L_2;
	}
}
// System.String Fractions.Properties.Resources::get_DivideByZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_DivideByZero_m92340B7122498885FDD22D37EDCF50161CD85660 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595C79E16C3766FC2EB249DA404686CC926560CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = Resources_get_ResourceManager_m593A418860D9B4D80771B5BF4E476CAAD611A081(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceCulture_1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteral595C79E16C3766FC2EB249DA404686CC926560CA, L_1);
		return L_2;
	}
}
// System.String Fractions.Properties.Resources::get_TypeXnotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Resources_get_TypeXnotSupported_m4D44251DA61F23739D8F8D4A0C25F2B4386ABE5E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF57AD0B51C8EE629C87FC26E3D9F8A49BE5E8EA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0;
		L_0 = Resources_get_ResourceManager_m593A418860D9B4D80771B5BF4E476CAAD611A081(NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = ((Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_StaticFields*)il2cpp_codegen_static_fields_for(Resources_t738A0D4AEDFF597F97EFF91471D430D1EFFD2F88_il2cpp_TypeInfo_var))->___resourceCulture_1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo) */, L_0, _stringLiteralF57AD0B51C8EE629C87FC26E3D9F8A49BE5E8EA5, L_1);
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
// System.Object Fractions.Formatter.DefaultFractionFormatProvider::System.IFormatProvider.GetFormat(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultFractionFormatProvider_System_IFormatProvider_GetFormat_m24E1C006210034FCA4480CB2DDADD790B4CD479E (DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380* __this, Type_t* ___formatType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___formatType0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return NULL;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var))->___Instance_0;
		return L_4;
	}
}
// System.Void Fractions.Formatter.DefaultFractionFormatProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFractionFormatProvider__ctor_m4292EBB57EBEA325F047962A48909159B50C3E99 (DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fractions.Formatter.DefaultFractionFormatProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFractionFormatProvider__cctor_mF6D2F3929154E10A67850FC177257A7E250F878E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380* L_0 = (DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380*)il2cpp_codegen_object_new(DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultFractionFormatProvider__ctor_m4292EBB57EBEA325F047962A48909159B50C3E99(L_0, NULL);
		((DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatProvider_t77450617A2278140B94B1395CC583C3471615380_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.String Fractions.Formatter.DefaultFractionFormatter::Format(System.String,System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_Format_mD8D296033FA43749F0DC458552A2BE7382B8C292 (DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279* __this, String_t* ___format0, RuntimeObject* ___arg1, RuntimeObject* ___formatProvider2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		RuntimeObject* L_0 = ___arg1;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___arg1;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Resources_get_TypeXnotSupported_m4D44251DA61F23739D8F8D4A0C25F2B4386ABE5E(NULL);
		RuntimeObject* L_4 = ___arg1;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_5, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_7 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultFractionFormatter_Format_mD8D296033FA43749F0DC458552A2BE7382B8C292_RuntimeMethod_var)));
	}

IL_0027:
	{
		RuntimeObject* L_8 = ___arg1;
		V_0 = ((*(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C*)UnBox(L_8, Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))));
		String_t* L_9 = ___format0;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (L_10)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_11 = ___format0;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, NULL);
		if (!L_12)
		{
			goto IL_004a;
		}
	}

IL_0043:
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F(L_13, NULL);
		return L_14;
	}

IL_004a:
	{
		StringBuilder_t* L_15 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_15, ((int32_t)32), NULL);
		V_1 = L_15;
		String_t* L_16 = ___format0;
		V_2 = L_16;
		V_3 = 0;
		goto IL_011d;
	}

IL_005b:
	{
		String_t* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, L_18, NULL);
		V_4 = L_19;
		Il2CppChar L_20 = V_4;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)109)))))
		{
			goto IL_0084;
		}
	}
	{
		Il2CppChar L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)71))))
		{
			goto IL_0098;
		}
	}
	{
		Il2CppChar L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)100))))
		{
			goto IL_00c5;
		}
	}
	{
		Il2CppChar L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)109))))
		{
			goto IL_0101;
		}
	}
	{
		goto IL_0110;
	}

IL_0084:
	{
		Il2CppChar L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)110))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)114))))
		{
			goto IL_00f2;
		}
	}
	{
		Il2CppChar L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)122))))
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_0110;
	}

IL_0098:
	{
		StringBuilder_t* L_27 = V_1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F(L_28, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, L_29, NULL);
		goto IL_0119;
	}

IL_00a7:
	{
		StringBuilder_t* L_31 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_32;
		L_32 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&V_0), NULL);
		V_5 = L_32;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_33;
		L_33 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_34;
		L_34 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_5), L_33, NULL);
		NullCheck(L_31);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, L_34, NULL);
		goto IL_0119;
	}

IL_00c5:
	{
		StringBuilder_t* L_36 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_37;
		L_37 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&V_0), NULL);
		V_5 = L_37;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_38;
		L_38 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_39;
		L_39 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_5), L_38, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, L_39, NULL);
		goto IL_0119;
	}

IL_00e3:
	{
		StringBuilder_t* L_41 = V_1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_42 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_43;
		L_43 = DefaultFractionFormatter_FormatInteger_m6487912E40E7AE275875C75C6EEC7493E044EFFA(L_42, NULL);
		NullCheck(L_41);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, L_43, NULL);
		goto IL_0119;
	}

IL_00f2:
	{
		StringBuilder_t* L_45 = V_1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_46 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_47;
		L_47 = DefaultFractionFormatter_FormatRemainder_m548D9E612DA3B29382257CCC11A11DC8EE1B81F5(L_46, NULL);
		NullCheck(L_45);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_45, L_47, NULL);
		goto IL_0119;
	}

IL_0101:
	{
		StringBuilder_t* L_49 = V_1;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_50 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_51;
		L_51 = DefaultFractionFormatter_FormatMixed_m97ECDAFFCD29C740E28BB080948C4C75E9C5E4A5(L_50, NULL);
		NullCheck(L_49);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, L_51, NULL);
		goto IL_0119;
	}

IL_0110:
	{
		StringBuilder_t* L_53 = V_1;
		Il2CppChar L_54 = V_4;
		NullCheck(L_53);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_53, L_54, NULL);
	}

IL_0119:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_011d:
	{
		int32_t L_57 = V_3;
		String_t* L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_58, NULL);
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_005b;
		}
	}
	{
		StringBuilder_t* L_60 = V_1;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		return L_61;
	}
}
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatMixed(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatMixed_m97ECDAFFCD29C740E28BB080948C4C75E9C5E4A5 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81(L_2, NULL);
		bool L_4;
		L_4 = BigInteger_op_LessThan_m7AFF4FB0B1B0AF3ADFB586AD468D3B85848AD56C(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_5 = ___fraction0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F(L_5, NULL);
		return L_6;
	}

IL_0026:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		bool L_9;
		L_9 = BigInteger_op_Inequality_mF231CB46B3043DDB6A2F96D77816F1719AE9EA9D(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		G_B5_0 = L_10;
		goto IL_0053;
	}

IL_0040:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_11, L_12, NULL);
		G_B5_0 = L_13;
	}

IL_0053:
	{
		V_0 = G_B5_0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_14 = ___fraction0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_16;
		L_16 = Fraction_op_Implicit_m92410AED15B125F0312EA6E4E606AB1841F14F6E(L_15, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_17;
		L_17 = Fraction_op_Subtraction_mAA7A97820A1E92CB997961B0FEFD21A71504D490(L_14, L_16, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_18;
		L_18 = Fraction_Abs_mB9E1875E84B9EB23C4550DAD898DDA2B7AE72556(L_17, NULL);
		V_1 = L_18;
		bool L_19;
		L_19 = Fraction_get_IsZero_m670C2A6F853A6F48975E20B4F6A75CD1817E4AA5((&V_1), NULL);
		if (L_19)
		{
			goto IL_008c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_20;
		L_20 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_21;
		L_21 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_20, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_21, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_23, NULL);
		return L_24;
	}

IL_008c:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_26;
		L_26 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_25, NULL);
		return L_26;
	}
}
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatInteger(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatInteger_m6487912E40E7AE275875C75C6EEC7493E044EFFA (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		bool L_2;
		L_2 = BigInteger_op_Inequality_mF231CB46B3043DDB6A2F96D77816F1719AE9EA9D(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_5;
		L_5 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_4, NULL);
		return L_5;
	}

IL_0026:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_6, L_7, NULL);
		V_0 = L_8;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_10;
		L_10 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_9, NULL);
		return L_10;
	}
}
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatRemainder(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatRemainder_m548D9E612DA3B29382257CCC11A11DC8EE1B81F5 (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_Abs_mA142B2697C88CED7D671EEC470D0FE1A1AE9CB81(L_2, NULL);
		bool L_4;
		L_4 = BigInteger_op_LessThan_m7AFF4FB0B1B0AF3ADFB586AD468D3B85848AD56C(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_5 = ___fraction0;
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F(L_5, NULL);
		return L_6;
	}

IL_0026:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8;
		L_8 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		bool L_9;
		L_9 = BigInteger_op_Inequality_mF231CB46B3043DDB6A2F96D77816F1719AE9EA9D(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_10;
		L_10 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		G_B5_0 = L_10;
		goto IL_0053;
	}

IL_0040:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_11;
		L_11 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_13;
		L_13 = BigInteger_op_Division_mEABFC30E3B59FF3FF53F8CEB65F70D13CD2E64D5(L_11, L_12, NULL);
		G_B5_0 = L_13;
	}

IL_0053:
	{
		V_0 = G_B5_0;
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_14 = ___fraction0;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_16;
		L_16 = Fraction_op_Implicit_m92410AED15B125F0312EA6E4E606AB1841F14F6E(L_15, NULL);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_17;
		L_17 = Fraction_op_Subtraction_mAA7A97820A1E92CB997961B0FEFD21A71504D490(L_14, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F(L_17, NULL);
		return L_18;
	}
}
// System.String Fractions.Formatter.DefaultFractionFormatter::FormatGeneral(Fractions.Fraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultFractionFormatter_FormatGeneral_mE26522A6D27F072D587E4C6C3213F28DCCBFEA8F (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C ___fraction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		bool L_2;
		L_2 = BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline(NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_5;
		L_5 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_4, NULL);
		return L_5;
	}

IL_0026:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline(NULL);
		bool L_8;
		L_8 = BigInteger_op_Equality_m0F0D30001407A83C4BF6851CEC391F8E78439C1D(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_9;
		L_9 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		V_0 = L_9;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_10;
		L_10 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_11;
		L_11 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_10, NULL);
		return L_11;
	}

IL_004e:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12;
		L_12 = Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline((&___fraction0), NULL);
		V_0 = L_12;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13;
		L_13 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_14;
		L_14 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_13, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_15;
		L_15 = Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline((&___fraction0), NULL);
		V_0 = L_15;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16;
		L_16 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_17;
		L_17 = BigInteger_ToString_mD17ED938094AEF4030E39A2F95C7C7834C6F70BB((&V_0), L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_17, NULL);
		return L_18;
	}
}
// System.Void Fractions.Formatter.DefaultFractionFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFractionFormatter__ctor_mD7FC29BC0D1032A83CB0E0AEC89B28FEF780BD97 (DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Fractions.Formatter.DefaultFractionFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultFractionFormatter__cctor_mD69BDC16A44BDEBAC72EC4481C351AFE66161395 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279* L_0 = (DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279*)il2cpp_codegen_object_new(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultFractionFormatter__ctor_mD7FC29BC0D1032A83CB0E0AEC89B28FEF780BD97(L_0, NULL);
		((DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_StaticFields*)il2cpp_codegen_static_fields_for(DefaultFractionFormatter_t616DE02B32B175B18163AACDA40E76D777D8E279_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Boolean Fractions.Extensions.MathExt::IsEven(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathExt_IsEven_m94CC594E9BC00BE2389CC779DA49F67965E4E1A4 (int64_t ___number0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___number0;
		return (bool)((((int64_t)((int64_t)(L_0&((int64_t)1)))) == ((int64_t)((int64_t)0)))? 1 : 0);
	}
}
// System.Boolean Fractions.Extensions.MathExt::IsOdd(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathExt_IsOdd_m1B824B7074D3B040292F3E2FD4609D2DB7C85227 (int64_t ___number0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___number0;
		return (bool)((!(((uint64_t)((int64_t)(L_0&((int64_t)1)))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Int64 Fractions.Extensions.MathExt::GreatestCommonDivisor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MathExt_GreatestCommonDivisor_m5778F097CF2D2CB551A9A822203856BB2C617CBF (int64_t ___a0, int64_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		___a0 = L_1;
		int64_t L_2 = ___b1;
		int64_t L_3;
		L_3 = il2cpp_codegen_abs(L_2);
		___b1 = L_3;
		int64_t L_4 = ___a0;
		if (L_4)
		{
			goto IL_0015;
		}
	}
	{
		int64_t L_5 = ___b1;
		return L_5;
	}

IL_0015:
	{
		int64_t L_6 = ___b1;
		if (L_6)
		{
			goto IL_001a;
		}
	}
	{
		int64_t L_7 = ___a0;
		return L_7;
	}

IL_001a:
	{
		int64_t L_8 = ___a0;
		if ((((int64_t)L_8) == ((int64_t)((int64_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		int64_t L_9 = ___b1;
		if ((!(((uint64_t)L_9) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0027;
		}
	}

IL_0024:
	{
		return ((int64_t)1);
	}

IL_0027:
	{
		int64_t L_10 = ___a0;
		int64_t L_11 = ___b1;
		if ((((int64_t)L_10) == ((int64_t)L_11)))
		{
			goto IL_0033;
		}
	}
	{
		int64_t L_12 = ___a0;
		int64_t L_13 = ___b1;
		int64_t L_14;
		L_14 = MathExt_BinaryGreatestCommonDivisorAlgorithm_m47BCBDDA657D849CF95A8D3FD55997A04D35901D(L_12, L_13, NULL);
		return L_14;
	}

IL_0033:
	{
		int64_t L_15 = ___a0;
		return L_15;
	}
}
// System.Int64 Fractions.Extensions.MathExt::BinaryGreatestCommonDivisorAlgorithm(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MathExt_BinaryGreatestCommonDivisorAlgorithm_m47BCBDDA657D849CF95A8D3FD55997A04D35901D (int64_t ___a0, int64_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		int64_t L_0 = ___a0;
		___a0 = ((int64_t)(L_0>>1));
		int64_t L_1 = ___b1;
		___b1 = ((int64_t)(L_1>>1));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0012:
	{
		int64_t L_3 = ___a0;
		int64_t L_4 = ___b1;
		bool L_5;
		L_5 = MathExt_IsEven_m94CC594E9BC00BE2389CC779DA49F67965E4E1A4(((int64_t)(L_3|L_4)), NULL);
		if (L_5)
		{
			goto IL_0004;
		}
	}
	{
		goto IL_0023;
	}

IL_001e:
	{
		int64_t L_6 = ___a0;
		___a0 = ((int64_t)(L_6>>1));
	}

IL_0023:
	{
		int64_t L_7 = ___a0;
		bool L_8;
		L_8 = MathExt_IsEven_m94CC594E9BC00BE2389CC779DA49F67965E4E1A4(L_7, NULL);
		if (L_8)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_0032;
	}

IL_002d:
	{
		int64_t L_9 = ___b1;
		___b1 = ((int64_t)(L_9>>1));
	}

IL_0032:
	{
		int64_t L_10 = ___b1;
		bool L_11;
		L_11 = MathExt_IsEven_m94CC594E9BC00BE2389CC779DA49F67965E4E1A4(L_10, NULL);
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_12 = ___a0;
		int64_t L_13 = ___b1;
		if ((((int64_t)L_12) <= ((int64_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_14 = ___a0;
		int64_t L_15 = ___b1;
		V_1 = L_15;
		___b1 = L_14;
		int64_t L_16 = V_1;
		___a0 = L_16;
	}

IL_0046:
	{
		int64_t L_17 = ___b1;
		int64_t L_18 = ___a0;
		___b1 = ((int64_t)il2cpp_codegen_subtract(L_17, L_18));
		int64_t L_19 = ___b1;
		if (L_19)
		{
			goto IL_0032;
		}
	}
	{
		int64_t L_20 = ___a0;
		int32_t L_21 = V_0;
		return ((int64_t)(L_20<<((int32_t)(L_21&((int32_t)63)))));
	}
}
// System.Int64 Fractions.Extensions.MathExt::LeastCommonMultiple(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MathExt_LeastCommonMultiple_mEE866AB8A78C73462AC3FD83AA7940E466E48D81 (int64_t ___a0, int64_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int64_t L_0 = ___a0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int64_t L_1 = ___b1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9198503608ECC8631E2E939ECDD771713FC9A93)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MathExt_LeastCommonMultiple_mEE866AB8A78C73462AC3FD83AA7940E466E48D81_RuntimeMethod_var)));
	}

IL_0011:
	{
		int64_t L_3 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = il2cpp_codegen_abs(L_3);
		___a0 = L_4;
		int64_t L_5 = ___b1;
		int64_t L_6;
		L_6 = il2cpp_codegen_abs(L_5);
		___b1 = L_6;
		int64_t L_7 = ___a0;
		int64_t L_8 = ___b1;
		if ((!(((uint64_t)L_7) == ((uint64_t)L_8))))
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_9 = ___a0;
		return L_9;
	}

IL_0027:
	{
		int64_t L_10 = ___a0;
		int64_t L_11 = ___b1;
		int64_t L_12;
		L_12 = MathExt_GreatestCommonDivisor_m5778F097CF2D2CB551A9A822203856BB2C617CBF(L_10, L_11, NULL);
		V_0 = L_12;
		int64_t L_13 = ___a0;
		int64_t L_14 = V_0;
		int64_t L_15 = ___b1;
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(L_13/L_14)), L_15));
	}
}
// System.Boolean Fractions.Extensions.MathExt::RemainingDigitsAfterTheDecimalPoint(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathExt_RemainingDigitsAfterTheDecimalPoint_m8D139127C401C636473CED04DB15B577C6690942 (double ___remainingDigits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___remainingDigits0;
		double L_1 = ___remainingDigits0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = floor(L_1);
		double L_3;
		L_3 = fabs(((double)il2cpp_codegen_subtract(L_0, L_2)));
		return (bool)((((double)L_3) > ((double)(4.9406564584124654E-324)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_Zero_mD000083112FFBEA07B3406EAB9C16883AC68FF9A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____zero_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_One_m3C8A5EDBC980DD0404B195AF394AE9A76F2FFAC7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnOneInt_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) == ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Fraction_get_Two_m324443011B6ACCEF979E590326706D1331EA5825_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var);
		Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C L_0 = ((Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_StaticFields*)il2cpp_codegen_static_fields_for(Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C_il2cpp_TypeInfo_var))->____two_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_Zero_m034F723A07EC664776C5541E2FE1300C02171201_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnZeroInt_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberDecimalSeparator_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Numerator_mD7015771875E32D8B78BE902D261F4FC98439218_inline (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____numerator_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Fraction_get_Denominator_m42D773243ED46B047FAA7BEB1D34207E4ADED094_inline (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->____denominator_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Fraction_get_State_mC510C8597E642F88E4E36DD32EAD41485FF0FF86_inline (Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____state_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_get_MinusOne_m3FF0F44F8C3D6DFB66C00B61017E42E555585465_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var))->___s_bnMinusOneInt_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C Func_3_Invoke_mC93AD375F777C229F0AAB7CC65B5531054919EE5_gshared_inline (Func_3_tFBE9996F74CDE8903BFC752C1F6491005D350695* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef Fraction_tBAF4D71A8BD11B67D58208BA02E3C51F1147233C (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
