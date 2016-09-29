// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SimplicityTwinStick.h"
#include "SimplicityTwinStickGameMode.h"
#include "SimplicityTwinStickPawn.h"

ASimplicityTwinStickGameMode::ASimplicityTwinStickGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASimplicityTwinStickPawn::StaticClass();
}

