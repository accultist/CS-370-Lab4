// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAIController.h"
#include "DwarfEnemyAIController.generated.h"

enum class EDwarfState : short
{
	EStart, EChasing, EAttacking, EDead, EUnknown
};

/**
 * 
 */
UCLASS()
class TOPDOWNSHMUP_API ADwarfEnemyAIController : public AEnemyAIController
{
	GENERATED_BODY()

	
	void OnPossess(APawn* InPawn);

	void MoveToActorFunc(APawn* InPawn);


public:
	APawn* InPawn;

	bool bMoveComplete;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//private:
	//UFUNCTION()
	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

};
