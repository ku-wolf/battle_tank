// Fill out your copyright notice in the Description page of Project Settings.

#include "Runtime/Engine/Classes/Engine/World.h"
#include "tank_player_controller.h"
#include "tank_ai_controller.h"

Atank * Atank_ai_controller::get_controlled_tank() const
{
	return Cast<Atank>(GetPawn());

}

Atank * Atank_ai_controller::get_player_tank() const
{
	auto tank_player_controller = GetWorld()->GetFirstPlayerController();
	if (!tank_player_controller)
	{ 
		return nullptr;
	}
	else
	{
		return Cast<Atank_player_controller>(tank_player_controller)->get_controlled_tank();
	}
}

void Atank_ai_controller::BeginPlay()
{
	Super::BeginPlay();
	auto controlled_tank = get_controlled_tank();
	auto player_tank = get_player_tank();
	if (!controlled_tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Tank possesed by AI"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Possesing Tank: %s"), *controlled_tank->GetName())
	}

	if (!player_tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Player Tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI found player tank: %s"), *player_tank->GetName())
	}

}


