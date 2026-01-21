// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_Manager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_Manager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_ASNS_Manager();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_ASNS_Manager_NoRegister();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_Widget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin Class ASNS_Manager
void ASNS_Manager::StaticRegisterNativesASNS_Manager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASNS_Manager);
UClass* Z_Construct_UClass_ASNS_Manager_NoRegister()
{
	return ASNS_Manager::StaticClass();
}
struct Z_Construct_UClass_ASNS_Manager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SNS_Manager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SNS_Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesWidget_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SNS_Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SNS_Manager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidWidget_MetaData[] = {
		{ "Category", "SimpleNarrativeSystem" },
		{ "ModuleRelativePath", "Public/SNS_Manager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubtitlesWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static void NewProp_bHasValidWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASNS_Manager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASNS_Manager_Statics::NewProp_SubtitlesWidget = { "SubtitlesWidget", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASNS_Manager, SubtitlesWidget), Z_Construct_UClass_USNS_Widget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesWidget_MetaData), NewProp_SubtitlesWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASNS_Manager_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASNS_Manager, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
void Z_Construct_UClass_ASNS_Manager_Statics::NewProp_bHasValidWidget_SetBit(void* Obj)
{
	((ASNS_Manager*)Obj)->bHasValidWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASNS_Manager_Statics::NewProp_bHasValidWidget = { "bHasValidWidget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASNS_Manager), &Z_Construct_UClass_ASNS_Manager_Statics::NewProp_bHasValidWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasValidWidget_MetaData), NewProp_bHasValidWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASNS_Manager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASNS_Manager_Statics::NewProp_SubtitlesWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASNS_Manager_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASNS_Manager_Statics::NewProp_bHasValidWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASNS_Manager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASNS_Manager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASNS_Manager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASNS_Manager_Statics::ClassParams = {
	&ASNS_Manager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASNS_Manager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASNS_Manager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASNS_Manager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASNS_Manager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASNS_Manager()
{
	if (!Z_Registration_Info_UClass_ASNS_Manager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASNS_Manager.OuterSingleton, Z_Construct_UClass_ASNS_Manager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASNS_Manager.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<ASNS_Manager>()
{
	return ASNS_Manager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASNS_Manager);
ASNS_Manager::~ASNS_Manager() {}
// End Class ASNS_Manager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_Manager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASNS_Manager, ASNS_Manager::StaticClass, TEXT("ASNS_Manager"), &Z_Registration_Info_UClass_ASNS_Manager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASNS_Manager), 2408954556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_Manager_h_1484006346(TEXT("/Script/SimpleNarrativeSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_Manager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_Manager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
