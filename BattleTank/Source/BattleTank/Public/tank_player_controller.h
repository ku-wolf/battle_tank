// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "tank_player_controller.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API Atank_player_controller : public APlayerController
{
	GENERATED_BODY()

	Atank* get_controlled_tank() const;
	void BeginPlay() override;
	
	
};
