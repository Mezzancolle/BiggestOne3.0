// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SNS_NarrativeBlueprintFuncLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UObject;
#ifdef SIMPLENARRATIVESYSTEM_SNS_NarrativeBlueprintFuncLib_generated_h
#error "SNS_NarrativeBlueprintFuncLib.generated.h already included, missing '#pragma once' in SNS_NarrativeBlueprintFuncLib.h"
#endif
#define SIMPLENARRATIVESYSTEM_SNS_NarrativeBlueprintFuncLib_generated_h

#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_9_DELEGATE \
SIMPLENARRATIVESYSTEM_API void FRegisteredDelegate_DelegateWrapper(const FScriptDelegate& RegisteredDelegate);


#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResumeCurrentDialogue); \
	DECLARE_FUNCTION(execPauseCurrentDialogue); \
	DECLARE_FUNCTION(execRegisterEventOnDialogueIndex); \
	DECLARE_FUNCTION(execRegisterEventOnAllDialogueEnd); \
	DECLARE_FUNCTION(execRegisterEventOnStartDialogue); \
	DECLARE_FUNCTION(execRegisterEventOnEndDialogue); \
	DECLARE_FUNCTION(execSkipCurrentDialogueLine); \
	DECLARE_FUNCTION(execEnqueueDialogue);


#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSNS_NarrativeBlueprintFuncLib(); \
	friend struct Z_Construct_UClass_USNS_NarrativeBlueprintFuncLib_Statics; \
public: \
	DECLARE_CLASS(USNS_NarrativeBlueprintFuncLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleNarrativeSystem"), NO_API) \
	DECLARE_SERIALIZER(USNS_NarrativeBlueprintFuncLib)


#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USNS_NarrativeBlueprintFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USNS_NarrativeBlueprintFuncLib(USNS_NarrativeBlueprintFuncLib&&); \
	USNS_NarrativeBlueprintFuncLib(const USNS_NarrativeBlueprintFuncLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USNS_NarrativeBlueprintFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USNS_NarrativeBlueprintFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USNS_NarrativeBlueprintFuncLib) \
	NO_API virtual ~USNS_NarrativeBlueprintFuncLib();


#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_14_PROLOG
#define FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLENARRATIVESYSTEM_API UClass* StaticClass<class USNS_NarrativeBlueprintFuncLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Unreal_Engine_BiggestOne3_0_Plugins_SimpleNarrativeSystem_Source_SimpleNarrativeSystem_Public_SNS_NarrativeBlueprintFuncLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
