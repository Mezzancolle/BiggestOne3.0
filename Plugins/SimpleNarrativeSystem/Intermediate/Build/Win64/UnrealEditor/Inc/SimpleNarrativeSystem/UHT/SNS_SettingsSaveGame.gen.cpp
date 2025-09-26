// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_SettingsSaveGame.h"
#include "SimpleNarrativeSystem/Public/Structs/SNS_S_SettingsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_SettingsSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_SettingsSaveGame();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_SettingsSaveGame_NoRegister();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_S_SettingsData();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin Class USNS_SettingsSaveGame
void USNS_SettingsSaveGame::StaticRegisterNativesUSNS_SettingsSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNS_SettingsSaveGame);
UClass* Z_Construct_UClass_USNS_SettingsSaveGame_NoRegister()
{
	return USNS_SettingsSaveGame::StaticClass();
}
struct Z_Construct_UClass_USNS_SettingsSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SNS_SettingsSaveGame.h" },
		{ "ModuleRelativePath", "Public/SNS_SettingsSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsData_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/SNS_SettingsSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNS_SettingsSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USNS_SettingsSaveGame_Statics::NewProp_SettingsData = { "SettingsData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNS_SettingsSaveGame, SettingsData), Z_Construct_UScriptStruct_FSNS_S_SettingsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsData_MetaData), NewProp_SettingsData_MetaData) }; // 2405993802
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNS_SettingsSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNS_SettingsSaveGame_Statics::NewProp_SettingsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USNS_SettingsSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USNS_SettingsSaveGame_Statics::ClassParams = {
	&USNS_SettingsSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USNS_SettingsSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsSaveGame_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SettingsSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USNS_SettingsSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USNS_SettingsSaveGame()
{
	if (!Z_Registration_Info_UClass_USNS_SettingsSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNS_SettingsSaveGame.OuterSingleton, Z_Construct_UClass_USNS_SettingsSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USNS_SettingsSaveGame.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<USNS_SettingsSaveGame>()
{
	return USNS_SettingsSaveGame::StaticClass();
}
USNS_SettingsSaveGame::USNS_SettingsSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USNS_SettingsSaveGame);
USNS_SettingsSaveGame::~USNS_SettingsSaveGame() {}
// End Class USNS_SettingsSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USNS_SettingsSaveGame, USNS_SettingsSaveGame::StaticClass, TEXT("USNS_SettingsSaveGame"), &Z_Registration_Info_UClass_USNS_SettingsSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNS_SettingsSaveGame), 1511788272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsSaveGame_h_2941094893(TEXT("/Script/SimpleNarrativeSystem"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
