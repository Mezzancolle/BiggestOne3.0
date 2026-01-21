// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleNarrativeSystem_init() {}
	SIMPLENARRATIVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SimpleNarrativeSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SimpleNarrativeSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_SimpleNarrativeSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SimpleNarrativeSystem_RegisteredDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SimpleNarrativeSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x71C1D995,
				0x366C7239,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SimpleNarrativeSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SimpleNarrativeSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SimpleNarrativeSystem(Z_Construct_UPackage__Script_SimpleNarrativeSystem, TEXT("/Script/SimpleNarrativeSystem"), Z_Registration_Info_UPackage__Script_SimpleNarrativeSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x71C1D995, 0x366C7239));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
