// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Engine/TargetPoint.h>
#include "DwarfCharacter.h"
#include "SpawnManager.generated.h"

UCLASS()
class TOPDOWNSHMUP_API ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

	// function to handle where to spawn dwarf
	void SpawnDwarf();
	//void SpawnCharacter();


	// configurable properties
	// array of target points for the dwarf to spawn at
	UPROPERTY(EditAnywhere, Category = Spawn)
		TArray<ATargetPoint*> arrSpawnPoints;

	UPROPERTY(EditAnywhere, Category = Spawn)
		TSubclassOf<ADwarfCharacter> Character;

	UPROPERTY(EditAnywhere, Category = Spawn)
		float minSpawnTime = 0.5f;

	UPROPERTY(EditAnywhere, Category = Spawn)
		float maxSpawnTime = 3.5f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	ACharacter* TheDwarf;
	ADwarfCharacter* ADwarf = Cast<ADwarfCharacter>(TheDwarf);

	FTimerHandle SpawnTimerHandle;
	FTimerHandle RandSpawnTimerHandle;

};
