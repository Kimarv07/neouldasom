// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkillDataTable.generated.h"

/**
 * 
 */

UENUM()
enum SkillType : uint8 {
	Attack,
	Depense,
	Heal,
	Support,
	Practical
};

USTRUCT(BlueprintType)
struct FSkillInfo : public FTableRowBase{
	GENERATED_BODY()

public:
	FSkillInfo() : KeyValue("KV_0"), SkillName("SkillName"), Amount(0), MpCost(0), Detail("Detail"), SkillType(5) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString KeyValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString SkillName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int Amount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	int MpCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FString Detail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	TEnumAsByte<SkillType> SkillType;
};