// Fill out your copyright notice in the Description page of Project Settings.

#include "tank_player_controller.h"

Atank * Atank_player_controller::get_controlled_tank() const
{
	return Cast<Atank>(GetPawn());
	
}

void Atank_player_controller::BeginPlay()
{
	Super::BeginPlay();
	auto controlled_tank = get_controlled_tank();
	if (!controlled_tank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("No Tank possesed"))
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("Possesing Tank: %s"), *controlled_tank->GetName())
	}
	
}
