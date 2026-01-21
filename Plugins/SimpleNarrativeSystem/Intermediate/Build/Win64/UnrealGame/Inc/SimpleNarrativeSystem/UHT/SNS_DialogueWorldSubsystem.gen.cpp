// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_DialogueWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_DialogueWorldSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_DialogueWorldSubsystem();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_DialogueWorldSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin Class USNS_DialogueWorldSubsystem
void USNS_DialogueWorldSubsystem::StaticRegisterNativesUSNS_DialogueWorldSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNS_DialogueWorldSubsystem);
UClass* Z_Construct_UClass_USNS_DialogueWorldSubsystem_NoRegister()
{
	return USNS_DialogueWorldSubsystem::StaticClass();
}
struct Z_Construct_UClass_USNS_DialogueWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SNS_DialogueWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/SNS_DialogueWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNS_DialogueWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USNS_DialogueWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_DialogueWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USNS_DialogueWorldSubsystem_Statics::ClassParams = {
	&USNS_DialogueWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_DialogueWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USNS_DialogueWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USNS_DialogueWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_USNS_DialogueWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNS_DialogueWorldSubsystem.OuterSingleton, Z_Construct_UClass_USNS_DialogueWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USNS_DialogueWorldSubsystem.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<USNS_DialogueWorldSubsystem>()
{
	return USNS_DialogueWorldSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USNS_DialogueWorldSubsystem);
// End Class USNS_DialogueWorldSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_DialogueWorldSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USNS_DialogueWorldSubsystem, USNS_DialogueWorldSubsystem::StaticClass, TEXT("USNS_DialogueWorldSubsystem"), &Z_Registration_Info_UClass_USNS_DialogueWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNS_DialogueWorldSubsystem), 3732038470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_DialogueWorldSubsystem_h_286689751(TEXT("/Script/SimpleNarrativeSystem"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_DialogueWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativePlugin_Source_SimpleNarrativeSystem_Public_SNS_DialogueWorldSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
