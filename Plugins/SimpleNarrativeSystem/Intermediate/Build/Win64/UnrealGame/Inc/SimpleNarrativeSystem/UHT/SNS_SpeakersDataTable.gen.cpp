// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_SpeakersDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_SpeakersDataTable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_SpeakersDataTable();
SIMPLENARRATIVESYSTEM_API UClass* Z_Construct_UClass_USNS_SpeakersDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin Class USNS_SpeakersDataTable
void USNS_SpeakersDataTable::StaticRegisterNativesUSNS_SpeakersDataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNS_SpeakersDataTable);
UClass* Z_Construct_UClass_USNS_SpeakersDataTable_NoRegister()
{
	return USNS_SpeakersDataTable::StaticClass();
}
struct Z_Construct_UClass_USNS_SpeakersDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SNS_SpeakersDataTable.h" },
		{ "ModuleRelativePath", "Public/SNS_SpeakersDataTable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNS_SpeakersDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USNS_SpeakersDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataTable,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SpeakersDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USNS_SpeakersDataTable_Statics::ClassParams = {
	&USNS_SpeakersDataTable::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNS_SpeakersDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_USNS_SpeakersDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USNS_SpeakersDataTable()
{
	if (!Z_Registration_Info_UClass_USNS_SpeakersDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNS_SpeakersDataTable.OuterSingleton, Z_Construct_UClass_USNS_SpeakersDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USNS_SpeakersDataTable.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<USNS_SpeakersDataTable>()
{
	return USNS_SpeakersDataTable::StaticClass();
}
USNS_SpeakersDataTable::USNS_SpeakersDataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USNS_SpeakersDataTable);
USNS_SpeakersDataTable::~USNS_SpeakersDataTable() {}
// End Class USNS_SpeakersDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SpeakersDataTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USNS_SpeakersDataTable, USNS_SpeakersDataTable::StaticClass, TEXT("USNS_SpeakersDataTable"), &Z_Registration_Info_UClass_USNS_SpeakersDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNS_SpeakersDataTable), 404725653U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SpeakersDataTable_h_2636901490(TEXT("/Script/SimpleNarrativeSystem"),
	Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SpeakersDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SpeakersDataTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
