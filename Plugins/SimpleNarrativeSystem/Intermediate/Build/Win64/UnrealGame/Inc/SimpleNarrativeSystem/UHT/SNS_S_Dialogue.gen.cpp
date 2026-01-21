// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/Structs/SNS_S_Dialogue.h"
#include "SimpleNarrativeSystem/Public/Structs/SNS_S_TimeStamp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_S_Dialogue() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_Dialogue();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_TimeStamp();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin ScriptStruct FSNS_S_Dialogue
static_assert(std::is_polymorphic<FSNS_S_Dialogue>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSNS_S_Dialogue cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SNS_S_Dialogue;
class UScriptStruct* FSNS_S_Dialogue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_Dialogue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SNS_S_Dialogue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSNS_S_Dialogue, (UObject*)Z_Construct_UPackage__Script_SimpleNarrativeSystem(), TEXT("SNS_S_Dialogue"));
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_Dialogue.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UScriptStruct* StaticStruct<FSNS_S_Dialogue>()
{
	return FSNS_S_Dialogue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Dialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioClip_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Dialogue.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakersDataTable_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Dialogue.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/SimpleNarrativeSystem.SNS_S_Speaker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeSkipped_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "DisplayName", "CanBeSkipped?" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Dialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be skipped with a key?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTimePerDialogue_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "DisplayName", "IsTimePerDialogue?" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Dialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the time inside timestamps for the single line of full dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSkipAutomaticallyLines_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "DisplayName", "ShouldBeSkippedAutomatically?" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Dialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should skip automatically lines when line ends or wait for the skip key?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamps_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/Structs/SNS_S_Dialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AudioClip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakersDataTable;
	static void NewProp_bCanBeSkipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeSkipped;
	static void NewProp_bIsTimePerDialogue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTimePerDialogue;
	static void NewProp_bShouldSkipAutomaticallyLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSkipAutomaticallyLines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeStamps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSNS_S_Dialogue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_AudioClip = { "AudioClip", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_Dialogue, AudioClip), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioClip_MetaData), NewProp_AudioClip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_SpeakersDataTable = { "SpeakersDataTable", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_Dialogue, SpeakersDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakersDataTable_MetaData), NewProp_SpeakersDataTable_MetaData) };
void Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bCanBeSkipped_SetBit(void* Obj)
{
	((FSNS_S_Dialogue*)Obj)->bCanBeSkipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bCanBeSkipped = { "bCanBeSkipped", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSNS_S_Dialogue), &Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bCanBeSkipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeSkipped_MetaData), NewProp_bCanBeSkipped_MetaData) };
void Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bIsTimePerDialogue_SetBit(void* Obj)
{
	((FSNS_S_Dialogue*)Obj)->bIsTimePerDialogue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bIsTimePerDialogue = { "bIsTimePerDialogue", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSNS_S_Dialogue), &Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bIsTimePerDialogue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTimePerDialogue_MetaData), NewProp_bIsTimePerDialogue_MetaData) };
void Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bShouldSkipAutomaticallyLines_SetBit(void* Obj)
{
	((FSNS_S_Dialogue*)Obj)->bShouldSkipAutomaticallyLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bShouldSkipAutomaticallyLines = { "bShouldSkipAutomaticallyLines", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSNS_S_Dialogue), &Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bShouldSkipAutomaticallyLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldSkipAutomaticallyLines_MetaData), NewProp_bShouldSkipAutomaticallyLines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_TimeStamps_Inner = { "TimeStamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSNS_S_TimeStamp, METADATA_PARAMS(0, nullptr) }; // 1242887064
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_TimeStamps = { "TimeStamps", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSNS_S_Dialogue, TimeStamps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStamps_MetaData), NewProp_TimeStamps_MetaData) }; // 1242887064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_AudioClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_SpeakersDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bCanBeSkipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bIsTimePerDialogue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_bShouldSkipAutomaticallyLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_TimeStamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewProp_TimeStamps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SNS_S_Dialogue",
	Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::PropPointers),
	sizeof(FSNS_S_Dialogue),
	alignof(FSNS_S_Dialogue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_Dialogue()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_S_Dialogue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SNS_S_Dialogue.InnerSingleton, Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SNS_S_Dialogue.InnerSingleton;
}
// End ScriptStruct FSNS_S_Dialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Dialogue_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSNS_S_Dialogue::StaticStruct, Z_Construct_UScriptStruct_FSNS_S_Dialogue_Statics::NewStructOps, TEXT("SNS_S_Dialogue"), &Z_Registration_Info_UScriptStruct_SNS_S_Dialogue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSNS_S_Dialogue), 1813542348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Dialogue_h_3475922210(TEXT("/Script/SimpleNarrativeSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Dialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_Structs_SNS_S_Dialogue_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
