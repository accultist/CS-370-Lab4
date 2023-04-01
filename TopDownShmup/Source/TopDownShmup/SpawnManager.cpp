// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"

// Sets default values
ASpawnManager::ASpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ASpawnManager::SpawnDwarf, minSpawnTime, true);
	
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ASpawnManager::SpawnDwarf() {
	if (Character)
	{
		// pointer to game world
		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			int32 i = FMath::RandRange(0, arrSpawnPoints.Num() - 1);

			// vector for spawn points set in game editor
			FVector vecLocations = arrSpawnPoints[i]->GetActorLocation();

			// 0 coordinates for rotation
			FRotator Rotation(0.0f, 0.0f, 0.0f);

			ADwarf = World->SpawnActor<ADwarfCharacter>(Character, vecLocations, Rotation, SpawnParams);
			if (ADwarf) {

				ADwarf->SpawnDefaultController();
			}
		}
	}
	GetWorldTimerManager().ClearTimer(RandSpawnTimerHandle);

	// sets timer to spawn dwarf at random time
	float time = FMath::RandRange(minSpawnTime, maxSpawnTime);
	GetWorldTimerManager().SetTimer(RandSpawnTimerHandle, this, &ASpawnManager::SpawnDwarf, time, true);

	GetWorldTimerManager().ClearTimer(SpawnTimerHandle);
}
