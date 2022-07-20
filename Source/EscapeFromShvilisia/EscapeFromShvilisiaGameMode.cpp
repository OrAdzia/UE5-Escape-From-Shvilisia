// Copyright Epic Games, Inc. All Rights Reserved.

#include "EscapeFromShvilisiaGameMode.h"
#include "EscapeFromShvilisiaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscapeFromShvilisiaGameMode::AEscapeFromShvilisiaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
