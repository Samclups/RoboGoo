// Copyright Epic Games, Inc. All Rights Reserved.

#include "Robogoo_CplusplusGameMode.h"
#include "Robogoo_CplusplusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARobogoo_CplusplusGameMode::ARobogoo_CplusplusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
