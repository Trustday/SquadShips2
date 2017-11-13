// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SquadShipGameMode.h"
#include "SquadShipPawn.h"

ASquadShipGameMode::ASquadShipGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ASquadShipPawn::StaticClass();
}
