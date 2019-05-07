// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PZ_4GameMode.h"
#include "PZ_4HUD.h"
#include "PZ_4Character.h"
#include "UObject/ConstructorHelpers.h"

APZ_4GameMode::APZ_4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APZ_4HUD::StaticClass();
}
