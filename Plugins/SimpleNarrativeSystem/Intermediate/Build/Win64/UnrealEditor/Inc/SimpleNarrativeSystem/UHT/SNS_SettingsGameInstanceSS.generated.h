// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SNS_SettingsGameInstanceSS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSNS_S_SettingsData;
#ifdef SIMPLENARRATIVESYSTEM_SNS_SettingsGameInstanceSS_generated_h
#error "SNS_SettingsGameInstanceSS.generated.h already included, missing '#pragma once' in SNS_SettingsGameInstanceSS.h"
#endif
#define SIMPLENARRATIVESYSTEM_SNS_SettingsGameInstanceSS_generated_h

#define FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDeleteSavedSettings); \
	DECLARE_FUNCTION(execLoadSettings); \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execSaveSettings);


#define FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSNS_SettingsGameInstanceSS(); \
	friend struct Z_Construct_UClass_USNS_SettingsGameInstanceSS_Statics; \
public: \
	DECLARE_CLASS(USNS_SettingsGameInstanceSS, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleNarrativeSystem"), NO_API) \
	DECLARE_SERIALIZER(USNS_SettingsGameInstanceSS)


#define FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USNS_SettingsGameInstanceSS(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USNS_SettingsGameInstanceSS(USNS_SettingsGameInstanceSS&&); \
	USNS_SettingsGameInstanceSS(const USNS_SettingsGameInstanceSS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USNS_SettingsGameInstanceSS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USNS_SettingsGameInstanceSS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USNS_SettingsGameInstanceSS) \
	NO_API virtual ~USNS_SettingsGameInstanceSS();


#define FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_18_PROLOG
#define FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<class USNS_SettingsGameInstanceSS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_SettingsGameInstanceSS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
