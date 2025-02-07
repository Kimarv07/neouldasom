// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperZDCharacter.h"
#include "SkillEffectSystem.generated.h"

UCLASS()
class METAVERSE_TEST_API ASkillEffectSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Constructor
	ASkillEffectSystem();

	//Set AttackEffect Actor
	TSubclassOf<AActor> AttackEffect;
	//Set HealEffect Actor
	TSubclassOf<AActor> HealEffect;
	//Set DepenseEffect Actor
	TSubclassOf<AActor> DefenseEffect;
	//Set MonsterAttackEffect Actor
	TSubclassOf<APaperZDCharacter> MonsterAttackEffect;

	void SpawnPlayerAttackEffect();
	void SpawnPlayerHealEffect();
	void SpawnPlayerDefenseEffect();
	void SpawnMonsterAttackEffect();
};
