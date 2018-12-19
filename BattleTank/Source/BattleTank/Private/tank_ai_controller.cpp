// Fill out your copyright notice in the Description page of Project Settings.

#include "tank_ai_controller.h"

Atank * Atank_ai_controller::get_controlled_tank() const
{
	return Cast<Atank>(GetPawn());

}

void Atank_ai_controller::BeginPlay()
{
	Super::BeginPlay();
	auto controlled_tank = get_controlled_tank();
	if (!controlled_tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Tank possesed by AI"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Possesing Tank: %s"), *controlled_tank->GetName())
	}

}


