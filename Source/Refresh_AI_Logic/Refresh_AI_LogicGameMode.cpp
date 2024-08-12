// Copyright Epic Games, Inc. All Rights Reserved.

#include "Refresh_AI_LogicGameMode.h"
#include "Refresh_AI_LogicCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARefresh_AI_LogicGameMode::ARefresh_AI_LogicGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
