// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_CustomProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_CustomProjectSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_CustomProjectSettings();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_CustomProjectSettings_NoRegister();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_Widget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin Class USNS_CustomProjectSettings
void USNS_CustomProjectSettings::StaticRegisterNativesUSNS_CustomProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNS_CustomProjectSettings);
UClass* Z_Construct_UClass_USNS_CustomProjectSettings_NoRegister()
{
	return USNS_CustomProjectSettings::StaticClass();
}
struct Z_Construct_UClass_USNS_CustomProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SNS_CustomProjectSettings.h" },
		{ "ModuleRelativePath", "Public/SNS_CustomProjectSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetBlueprint_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Subtitles Widget" },
		{ "ModuleRelativePath", "Public/SNS_CustomProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguesSoundClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SNS_CustomProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetZOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SNS_CustomProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldWarningOnNullOrNoneDialogueRowName_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Should warn when row name is null or none?" },
		{ "ModuleRelativePath", "Public/SNS_CustomProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginInfo_MetaData[] = {
		{ "Category", "Info" },
		{ "DisplayName", "Made by" },
		{ "ModuleRelativePath", "Public/SNS_CustomProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidgetBlueprint;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DialoguesSoundClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WidgetZOrder;
	static void NewProp_bShouldWarningOnNullOrNoneDialogueRowName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldWarningOnNullOrNoneDialogueRowName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNS_CustomProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_DialogueWidgetBlueprint = { "DialogueWidgetBlueprint", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNS_CustomProjectSettings, DialogueWidgetBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_USNS_Widget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidgetBlueprint_MetaData), NewProp_DialogueWidgetBlueprint_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_DialoguesSoundClass = { "DialoguesSoundClass", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNS_CustomProjectSettings, DialoguesSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguesSoundClass_MetaData), NewProp_DialoguesSoundClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_WidgetZOrder = { "WidgetZOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNS_CustomProjectSettings, WidgetZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetZOrder_MetaData), NewProp_WidgetZOrder_MetaData) };
void Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_bShouldWarningOnNullOrNoneDialogueRowName_SetBit(void* Obj)
{
	((USNS_CustomProjectSettings*)Obj)->bShouldWarningOnNullOrNoneDialogueRowName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_bShouldWarningOnNullOrNoneDialogueRowName = { "bShouldWarningOnNullOrNoneDialogueRowName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USNS_CustomProjectSettings), &Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_bShouldWarningOnNullOrNoneDialogueRowName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldWarningOnNullOrNoneDialogueRowName_MetaData), NewProp_bShouldWarningOnNullOrNoneDialogueRowName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_PluginInfo = { "PluginInfo", nullptr, (EPropertyFlags)0x0010000000034001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNS_CustomProjectSettings, PluginInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginInfo_MetaData), NewProp_PluginInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNS_CustomProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_DialogueWidgetBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_DialoguesSoundClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_WidgetZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_bShouldWarningOnNullOrNoneDialogueRowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNS_CustomProjectSettings_Statics::NewProp_PluginInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_CustomProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USNS_CustomProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_CustomProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USNS_CustomProjectSettings_Statics::ClassParams = {
	&USNS_CustomProjectSettings::StaticClass,
	"SimpleNarrativeSystem",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USNS_CustomProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USNS_CustomProjectSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_CustomProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USNS_CustomProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USNS_CustomProjectSettings()
{
	if (!Z_Registration_Info_UClass_USNS_CustomProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNS_CustomProjectSettings.OuterSingleton, Z_Construct_UClass_USNS_CustomProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USNS_CustomProjectSettings.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<USNS_CustomProjectSettings>()
{
	return USNS_CustomProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USNS_CustomProjectSettings);
USNS_CustomProjectSettings::~USNS_CustomProjectSettings() {}
// End Class USNS_CustomProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_CustomProjectSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USNS_CustomProjectSettings, USNS_CustomProjectSettings::StaticClass, TEXT("USNS_CustomProjectSettings"), &Z_Registration_Info_UClass_USNS_CustomProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNS_CustomProjectSettings), 616583390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_CustomProjectSettings_h_2546767423(TEXT("/Script/SimpleNarrativeSystem"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_CustomProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_CustomProjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
