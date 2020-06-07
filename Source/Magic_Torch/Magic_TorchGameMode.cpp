// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Magic_TorchGameMode.h"
#include "Magic_TorchHUD.h"
#include "Magic_TorchCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagic_TorchGameMode::AMagic_TorchGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMagic_TorchHUD::StaticClass();
}
