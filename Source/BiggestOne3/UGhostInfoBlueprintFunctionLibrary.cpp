// Fill out your copyright notice in the Description page of Project Settings.


#include "UGhostInfoBlueprintFunctionLibrary.h"

void UGhostInfoBlueprintFunctionLibrary::SetNameToGhostInfo(const FS_GhostInfoCpp& InGhostInfo, const FText& InName)
{
	//InGhostInfo.Name = InName;
}

bool UGhostInfoBlueprintFunctionLibrary::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	return false;
}
