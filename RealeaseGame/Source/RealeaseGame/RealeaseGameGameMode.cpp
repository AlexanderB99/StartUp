// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RealeaseGameGameMode.h"
#include "RealeaseGamePlayerController.h"
#include "RealeaseGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARealeaseGameGameMode::ARealeaseGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARealeaseGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}