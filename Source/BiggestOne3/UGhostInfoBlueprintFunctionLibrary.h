// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_GhostInfo.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGhostInfoBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class BIGGESTONE3_API UGhostInfoBlueprintFunctionLibrary : public UBlueprintFunctionLibrary, public FSelfRegisteringExec
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	static void SetNameToGhostInfo(const FS_GhostInfoCpp& InGhostInfo, const FText& InName);

	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;
};
