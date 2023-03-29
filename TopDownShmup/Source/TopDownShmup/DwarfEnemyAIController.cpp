// Fill out your copyright notice in the Description page of Project Settings.


#include "DwarfEnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"



void ADwarfEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	bMoveComplete = false;

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("On Possess is functional"));

}

void ADwarfEnemyAIController::MoveToActorFunc(APawn* InPawn)
{
	Super::BeginPlay();

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("MoveToActor is functional"));

	

	// move to player's current location
	if (!bMoveComplete){
	Super::MoveToActor(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0),
		-1.0F);
	//Super::StopMovement();
	}

	//if (UGameplayStatics::GetPlayerCharacter(GetWorld(), 0) = -1.0f){
		
	//}
	// Get the character's movement component
	//UCharacterMovementComponent* MovementComp = GetCharacterMovement();
	
	//UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	// Set up a delegate for the OnMoveCompleted event
	//MovementComp->OnRequestFinished.AddDynamic(this, &ADwarfEnemyAIController::OnMoveCompleted);
	
	//Super::OnMoveCompleted
	
	
	//(FAIRequestID RequestID,
	//	EPathFollowingResult::Type Result)

	//OnMoveCompleted(EPathFollowingResult::Success);
	
		
	//Super::MoveToActor(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	//	UE_LOG(LogTemp, Warning, TEXT("My debug message"));

}

// Called every frame
void ADwarfEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// call function to move to player
	MoveToActorFunc(InPawn);

}

void ADwarfEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	bMoveComplete = true;
	Super::StopMovement();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("move completed"));
}

//void ADwarfEnemyAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
//{
//	bMoveComplete = true;
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("move completed"));
//}


//void ADwarfEnemyAIController::OnMoveCompleted(FAIRequestID.)

//void ADwarfEnemyAIController::Possess(APawn* InPawn)
//{
//	Super::Possess(InPawn);
	// your "OnPossess" code here
	// ...
//}





// constructor 
//ADwarfEnemyAIController::ADwarfEnemyAIController() {
	//CUrrPawn = Super::OnPossess(Actor);
	//Super::OnPossess(InPawn);
	
	//if (OnPossess) {

	//	OnPossess.

	//}
	//PrimaryActor = 
	// specifying the AIController class that DwarfCharacter should use as default
	//AIControllerClass = ADwarfEnemyAIController::StaticClass();

	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

//}

//virtual void OnPossess

//void ADwarfEnemyAIController::Init()
//{
	//Super::Init();
//}

//void ADwarfEnemyAIController(APawn* InPawn, AController* InController)
//{
	//InController.
//}

//void ADwarfEnemyAIController::OnPossess(APawn* InPawn, AController* InController)
//{
//	Super::OnPossess(InPawn);
	

	//Super::OnPos
	//Super::Init();
	
	//APawn* InPawn;

	//
	//ADwarfEnemyAIController.Movet
//}

//void ADwarfEnemyAIController::MoveToActor()
//{
	//InPawn.move

//}

