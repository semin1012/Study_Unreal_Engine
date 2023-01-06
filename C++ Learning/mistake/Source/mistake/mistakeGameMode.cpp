// Copyright Epic Games, Inc. All Rights Reserved.

#include "mistakeGameMode.h"
#include "mistakeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmistakeGameMode::AmistakeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
