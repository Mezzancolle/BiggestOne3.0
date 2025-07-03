// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleNarrativeSystem/Public/SNS_DataTableRowHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNS_DataTableRowHandle() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
SIMPLENARRATIVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSNS_DataTableRowHandle();
UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem();
// End Cross Module References

// Begin ScriptStruct FSNS_DataTableRowHandle
static_assert(std::is_polymorphic<FSNS_DataTableRowHandle>() == std::is_polymorphic<FDataTableRowHandle>(), "USTRUCT FSNS_DataTableRowHandle cannot be polymorphic unless super FDataTableRowHandle is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle;
class UScriptStruct* FSNS_DataTableRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSNS_DataTableRowHandle, (UObject*)Z_Construct_UPackage__Script_SimpleNarrativeSystem(), TEXT("SNS_DataTableRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle.OuterSingleton;
}
template<> SIMPLENARRATIVESYSTEM_API UScriptStruct* StaticStruct<FSNS_DataTableRowHandle>()
{
	return FSNS_DataTableRowHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSNS_DataTableRowHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SNS_DataTableRowHandle.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSNS_DataTableRowHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSNS_DataTableRowHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleNarrativeSystem,
	Z_Construct_UScriptStruct_FDataTableRowHandle,
	&NewStructOps,
	"SNS_DataTableRowHandle",
	nullptr,
	0,
	sizeof(FSNS_DataTableRowHandle),
	alignof(FSNS_DataTableRowHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSNS_DataTableRowHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSNS_DataTableRowHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSNS_DataTableRowHandle()
{
	if (!Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FSNS_DataTableRowHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle.InnerSingleton;
}
// End ScriptStruct FSNS_DataTableRowHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_DataTableRowHandle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSNS_DataTableRowHandle::StaticStruct, Z_Construct_UScriptStruct_FSNS_DataTableRowHandle_Statics::NewStructOps, TEXT("SNS_DataTableRowHandle"), &Z_Registration_Info_UScriptStruct_SNS_DataTableRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSNS_DataTableRowHandle), 3140285520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_DataTableRowHandle_h_3100014494(TEXT("/Script/SimpleNarrativeSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_DataTableRowHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_DataTableRowHandle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
