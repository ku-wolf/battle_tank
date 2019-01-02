// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "tank_ai_controller.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API Atank_ai_controller : public AAIController
{
	GENERATED_BODY()

	Atank * get_controlled_tank() const;
	Atank * get_player_tank() const;
	void BeginPlay() override;
	
	
};
