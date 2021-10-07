// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "RegularPickup.generated.h"

/**
 * 
 */
UENUM()
enum class PickupRarity : uint8
{
	LEGENDARY,
	MASTER,
	RARE,
	COMMON
};

UCLASS()
class ADVGAMESPROGRAMMING_API ARegularPickup : public APickup
{
	GENERATED_BODY()

public:
	PickupRarity Rarity;
};
