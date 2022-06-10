// Copyright Epic Games, Inc. All Rights Reserved.

#include "SocketServerDemoGameMode.h"
#include "../Character/SocketServerDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASocketServerDemoGameMode::ASocketServerDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
