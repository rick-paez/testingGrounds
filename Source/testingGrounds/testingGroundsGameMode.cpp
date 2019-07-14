// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "testingGroundsGameMode.h"
#include "testingGroundsHUD.h"
#include "testingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestingGroundsGameMode::AtestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AtestingGroundsHUD::StaticClass();
}
