// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "StartUpGameMode.h"
#include "StartUpPlayerController.h"
#include "StartUpCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStartUpGameMode::AStartUpGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AStartUpPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}