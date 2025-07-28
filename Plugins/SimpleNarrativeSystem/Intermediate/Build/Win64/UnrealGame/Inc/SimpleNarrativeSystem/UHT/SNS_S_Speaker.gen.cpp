// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/Structs/SNS_S_Speaker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_S_Speaker() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_Speaker();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin ScriptStruct FSNS_S_Speaker
static_assert(std::is_polymorphic<FSNS_S_Speaker>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSNS_S_Speaker cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SNS_S_Speaker;
class UScriptStruct* FSNS_S_Speaker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_Speaker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SNS_S_Speaker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSNS_S_Speaker, (UObject*)Z_Construct_UPackage__Script_SimpleNarrativeSystem(), TEXT("SNS_S_Speaker"));
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_Speaker.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UScriptStruct* StaticStruct<FSNS_S_Speaker>()
{
	return FSNS_S_Speaker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Speaker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerDisplayedName_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Speaker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerColor_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Speaker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SpeakerDisplayedName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSNS_S_Speaker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::NewProp_SpeakerDisplayedName = { "SpeakerDisplayedName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_Speaker, SpeakerDisplayedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerDisplayedName_MetaData), NewProp_SpeakerDisplayedName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::NewProp_SpeakerColor = { "SpeakerColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_Speaker, SpeakerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerColor_MetaData), NewProp_SpeakerColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::NewProp_SpeakerDisplayedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::NewProp_SpeakerColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SNS_S_Speaker",
	Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::PropPointers),
	sizeof(FSNS_S_Speaker),
	alignof(FSNS_S_Speaker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_Speaker()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_Speaker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SNS_S_Speaker.InnerSingleton, Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_Speaker.InnerSingleton;
}
// End ScriptStruct FSNS_S_Speaker

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Speaker_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSNS_S_Speaker::StaticStruct, Z_Construct_UScriptStruct_FSNS_S_Speaker_Statics::NewStructOps, TEXT("SNS_S_Speaker"), &Z_Registration_Info_UScriptStruct_SNS_S_Speaker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSNS_S_Speaker), 3596523445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Speaker_h_1983203508(TEXT("/Script/SimpleNarrativeSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Speaker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Speaker_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
