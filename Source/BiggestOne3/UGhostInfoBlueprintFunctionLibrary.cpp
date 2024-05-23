// Fill out your copyright notice in the Description page of Project Settings.


#include "UGhostInfoBlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UGhostInfoBlueprintFunctionLibrary::SetNameToGhostInfo(const FS_GhostInfoCpp& InGhostInfo, const FText& InName)
{
	//InGhostInfo.Name = InName;
}

bool UGhostInfoBlueprintFunctionLibrary::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	if (FParse::Command(&Cmd, TEXT("DeleteSave")))
	{
		//UGameInstance::Get

		if (UGameplayStatics::DoesSaveGameExist(TEXT("GameData"),0))
		{
			UKismetSystemLibrary::PrintString(InWorld, TEXT("Deleted GameData at index 0"));
			UGameplayStatics::DeleteGameInSlot(TEXT("GameData"), 0);
		}

		return true;
	}
	return false;
}
