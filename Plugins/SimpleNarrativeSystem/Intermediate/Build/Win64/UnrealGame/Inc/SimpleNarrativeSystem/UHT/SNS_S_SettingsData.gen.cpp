// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/Structs/SNS_S_SettingsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_S_SettingsData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_SettingsData();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin ScriptStruct FSNS_S_SettingsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SNS_S_SettingsData;
class UScriptStruct* FSNS_S_SettingsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_SettingsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SNS_S_SettingsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSNS_S_SettingsData, (UObject*)Z_Construct_UPackage__Script_SimpleNarrativeSystem(), TEXT("SNS_S_SettingsData"));
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_SettingsData.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UScriptStruct* StaticStruct<FSNS_S_SettingsData>()
{
	return FSNS_S_SettingsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesEnabled_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "Comment", "/* Should show subtitles? */" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
		{ "ToolTip", "Should show subtitles?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpeakerNameEnabled_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "Comment", "/* Should show who is speaking? */" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
		{ "ToolTip", "Should show who is speaking?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSize_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "Comment", "/* Text size */" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
		{ "ToolTip", "Text size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesBackgroundColor_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "Comment", "/* Color of widget background with alpha */" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
		{ "ToolTip", "Color of widget background with alpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesTextColor_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "Comment", "/* Color of dialogue text */" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
		{ "ToolTip", "Color of dialogue text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSecondTextEnabled_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "Comment", "/* Should have a second/fade out text? */" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
		{ "ToolTip", "Should have a second/fade out text?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFadeOutEnabled_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "Comment", "/* Should fade out texts? */" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_SettingsData.h" },
		{ "ToolTip", "Should fade out texts?" },
	};
#endif // WITH_METADATA
	static void NewProp_bSubtitlesEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesEnabled;
	static void NewProp_bSpeakerNameEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpeakerNameEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubtitlesSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesBackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesTextColor;
	static void NewProp_bSecondTextEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecondTextEnabled;
	static void NewProp_bFadeOutEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeOutEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSNS_S_SettingsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSubtitlesEnabled_SetBit(void* Obj)
{
	((FSNS_S_SettingsData*)Obj)->bSubtitlesEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSubtitlesEnabled = { "bSubtitlesEnabled", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSNS_S_SettingsData), &Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSubtitlesEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtitlesEnabled_MetaData), NewProp_bSubtitlesEnabled_MetaData) };
void Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSpeakerNameEnabled_SetBit(void* Obj)
{
	((FSNS_S_SettingsData*)Obj)->bSpeakerNameEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSpeakerNameEnabled = { "bSpeakerNameEnabled", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSNS_S_SettingsData), &Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSpeakerNameEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpeakerNameEnabled_MetaData), NewProp_bSpeakerNameEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_SubtitlesSize = { "SubtitlesSize", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_SettingsData, SubtitlesSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesSize_MetaData), NewProp_SubtitlesSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_SubtitlesBackgroundColor = { "SubtitlesBackgroundColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_SettingsData, SubtitlesBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesBackgroundColor_MetaData), NewProp_SubtitlesBackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_SubtitlesTextColor = { "SubtitlesTextColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_SettingsData, SubtitlesTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesTextColor_MetaData), NewProp_SubtitlesTextColor_MetaData) };
void Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSecondTextEnabled_SetBit(void* Obj)
{
	((FSNS_S_SettingsData*)Obj)->bSecondTextEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSecondTextEnabled = { "bSecondTextEnabled", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSNS_S_SettingsData), &Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSecondTextEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSecondTextEnabled_MetaData), NewProp_bSecondTextEnabled_MetaData) };
void Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bFadeOutEnabled_SetBit(void* Obj)
{
	((FSNS_S_SettingsData*)Obj)->bFadeOutEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bFadeOutEnabled = { "bFadeOutEnabled", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSNS_S_SettingsData), &Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bFadeOutEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFadeOutEnabled_MetaData), NewProp_bFadeOutEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSubtitlesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSpeakerNameEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_SubtitlesSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_SubtitlesBackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_SubtitlesTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bSecondTextEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewProp_bFadeOutEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
	nullptr,
	&NewStructOps,
	"SNS_S_SettingsData",
	Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::PropPointers),
	sizeof(FSNS_S_SettingsData),
	alignof(FSNS_S_SettingsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_SettingsData()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_SettingsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SNS_S_SettingsData.InnerSingleton, Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_SettingsData.InnerSingleton;
}
// End ScriptStruct FSNS_S_SettingsData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Build_Plugin_SimpleNarrativeSystem_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_SettingsData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSNS_S_SettingsData::StaticStruct, Z_Construct_UScriptStruct_FSNS_S_SettingsData_Statics::NewStructOps, TEXT("SNS_S_SettingsData"), &Z_Registration_Info_UScriptStruct_SNS_S_SettingsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSNS_S_SettingsData), 2405993802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Build_Plugin_SimpleNarrativeSystem_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_SettingsData_h_178202263(TEXT("/Script/SimpleNarrativeSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_Build_Plugin_SimpleNarrativeSystem_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_SettingsData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Build_Plugin_SimpleNarrativeSystem_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_SettingsData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
