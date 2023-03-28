// Fill out your copyright notice in the Description page of Project Settings.


#include "DwarfCharacter.h"
#include "DwarfEnemyAIController.h"

// Sets default values
ADwarfCharacter::ADwarfCharacter()
{
	// specifying the AIController class that DwarfCharacter should use as default
	AIControllerClass = ADwarfEnemyAIController::StaticClass();

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}