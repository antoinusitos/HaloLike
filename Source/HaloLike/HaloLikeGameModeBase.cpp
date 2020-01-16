// Fill out your copyright notice in the Description page of Project Settings.

#include "HaloLikeGameModeBase.h"
#include <UObject/ConstructorHelpers.h>
#include "PlayerCharacter.h"

AHaloLikeGameModeBase::AHaloLikeGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APlayerCharacter> myBasePawnBPClass(TEXT("/Game/Blueprint/BP_PlayerCharacter"));
	if (myBasePawnBPClass.Class != NULL)
	{
		DefaultPawnClass = myBasePawnBPClass.Class;
	}
}