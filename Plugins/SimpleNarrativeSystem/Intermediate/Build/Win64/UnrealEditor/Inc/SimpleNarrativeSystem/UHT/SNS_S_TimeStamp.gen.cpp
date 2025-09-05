// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/Structs/SNS_S_TimeStamp.h"
#include "SimpleNarrativeSystem/Public/SNS_DataTableRowHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_S_TimeStamp() {}

// Begin Cross Module References
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_DataTableRowHandle();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_TimeStamp();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin ScriptStruct FSNS_S_TimeStamp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp;
class UScriptStruct* FSNS_S_TimeStamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSNS_S_TimeStamp, (UObject*)Z_Construct_UPackage__Script_SimpleNarrativeSystem(), TEXT("SNS_S_TimeStamp"));
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UScriptStruct* StaticStruct<FSNS_S_TimeStamp>()
{
	return FSNS_S_TimeStamp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_TimeStamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_TimeStamp.h" },
		{ "RowType", "/Script/SimpleNarrativeSystem.SNS_S_Speaker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerTopPadding_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_TimeStamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// default value for a single line dialogue TODO: every time you add a new entry in a data table increase this number by the previous\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SNS_S_TimeStamp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "default value for a single line dialogue TODO: every time you add a new entry in a data table increase this number by the previous" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleText_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_TimeStamp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeakerTopPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamp;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SubtitleText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSNS_S_TimeStamp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_TimeStamp, Speaker), Z_Construct_UScriptStruct_FSNS_DataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) }; // 2601367340
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_SpeakerTopPadding = { "SpeakerTopPadding", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_TimeStamp, SpeakerTopPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerTopPadding_MetaData), NewProp_SpeakerTopPadding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_TimeStamp, TimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamp_MetaData), NewProp_TimeStamp_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_SubtitleText = { "SubtitleText", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_TimeStamp, SubtitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleText_MetaData), NewProp_SubtitleText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_SpeakerTopPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewProp_SubtitleText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
	nullptr,
	&NewStructOps,
	"SNS_S_TimeStamp",
	Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::PropPointers),
	sizeof(FSNS_S_TimeStamp),
	alignof(FSNS_S_TimeStamp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_TimeStamp()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp.InnerSingleton, Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp.InnerSingleton;
}
// End ScriptStruct FSNS_S_TimeStamp

// Begin Registration
struct Z_CompiledInDeferFile_FID_WindowsProjects_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_TimeStamp_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSNS_S_TimeStamp::StaticStruct, Z_Construct_UScriptStruct_FSNS_S_TimeStamp_Statics::NewStructOps, TEXT("SNS_S_TimeStamp"), &Z_Registration_Info_UScriptStruct_SNS_S_TimeStamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSNS_S_TimeStamp), 1242887064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WindowsProjects_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_TimeStamp_h_895999541(TEXT("/Script/SimpleNarrativeSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WindowsProjects_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_TimeStamp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WindowsProjects_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_TimeStamp_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
