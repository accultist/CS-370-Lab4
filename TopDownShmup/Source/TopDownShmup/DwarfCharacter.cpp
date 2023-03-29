// Fill out your copyright notice in the Description page of Project Settings.


#include "DwarfCharacter.h"
#include "DwarfEnemyAIController.h"

// Sets default values
ADwarfCharacter::ADwarfCharacter()
{
	// specifying the AIController class that DwarfCharacter should use as default
	AIControllerClass = ADwarfEnemyAIController::StaticClass();

	//SpawnDefaultController();

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADwarfCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADwarfCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ADwarfCharacter::BeginPlay(){ Super::BeginPlay();}