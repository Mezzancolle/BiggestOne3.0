// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_GhostInfo.generated.h"

USTRUCT(BlueprintType)
struct BIGGESTONE3_API FS_GhostInfo : public FTableRowBase
{
	GENERATED_BODY();
public:
	FS_GhostInfo();
	~FS_GhostInfo();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText Name;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText CauseOfDeath;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText Wound;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText Wish;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText Description;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText DescriptionUnlocked;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* BigImage;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTexture2D* SmallImage;
};

