// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EMovementValues.h"
#include "SG_StoreMovementValues.generated.h"

/**
 * 
 */
UCLASS()
class MOVEMENTMECHANICS_API USG_StoreMovementValues : public USaveGame
{
	GENERATED_BODY()

public:
	USG_StoreMovementValues();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Saved Data")
	TMap<EMovementMechanics, float> StoredMovementValues;
	
};
