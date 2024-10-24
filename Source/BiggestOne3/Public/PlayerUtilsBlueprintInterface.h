// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerUtilsBlueprintInterface.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAddedItemDelegate);

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlayerUtilsBlueprintInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BIGGESTONE3_API IPlayerUtilsBlueprintInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintImplementableEvent)
	void AddEventToOnAddedItem(/*const FOnAddedItemDelegate& OnAddedItemDelegate*/);
};
