// Copyright Epic Games, Inc. All Rights Reserved.

#include "KasprzakLegacyGameMode.h"
#include "KasprzakLegacyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKasprzakLegacyGameMode::AKasprzakLegacyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
