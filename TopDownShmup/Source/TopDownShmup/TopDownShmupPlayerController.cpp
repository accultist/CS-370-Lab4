// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TopDownShmupPlayerController.h"
#include "TopDownShmup.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

ATopDownShmupPlayerController::ATopDownShmupPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ATopDownShmupPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	//  call function to automatically update the direction of the pawn every tick
	UpdateMouse();

	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		/* commented out the below function to prevent mouse movement */
		//MoveToMouseCursor();
	}

}

void ATopDownShmupPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

    /*
	InputComponent->BindAction("SetDestination", IE_Pressed, this, &ATopDownShmupPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &ATopDownShmupPlayerController::OnSetDestinationReleased);
     */

	// support touch devices 
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ATopDownShmupPlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ATopDownShmupPlayerController::MoveToTouchLocation);
 
    
    // support firing function
    InputComponent->BindAction("Fire", IE_Pressed, this, &ATopDownShmupPlayerController::OnStartFire);
    InputComponent->BindAction("Fire", IE_Released, this, &ATopDownShmupPlayerController::OnStopFire);

	// support keyboard movement
	InputComponent->BindAxis("MoveForward", this, &ATopDownShmupPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATopDownShmupPlayerController::MoveRight);
}

void ATopDownShmupPlayerController::MoveToMouseCursor()
{
	// Trace to see what is under the mouse cursor
	FHitResult Hit;
	GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(Hit.ImpactPoint);
	}
}

void ATopDownShmupPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void ATopDownShmupPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const Pawn = GetPawn();
	if (Pawn)
	{
		float const Distance = FVector::Dist(DestLocation, Pawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
        if (Distance > 120.0f)
		{
            UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
		}
	}
}

/*
void ATopDownShmupPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void ATopDownShmupPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}
<<<<<<< HEAD
*/


void ATopDownShmupPlayerController::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		APawn* const Pawn = GetPawn();
		if (Pawn)
		{
			Pawn->AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
		}
	}
}

void ATopDownShmupPlayerController::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		APawn* const Pawn = GetPawn();
		if (Pawn)
		{
			Pawn->AddMovementInput(FVector(0.0f, 1.0f, 0.0f), Value);
		}
	}
}

/* function will update the pawn's rotation to where the mouse currently is on the screen */
void ATopDownShmupPlayerController::UpdateMouse()
{
	// get pawn pointer
	APawn* const Pawn = GetPawn();

	if (Pawn)
	{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);


		if (Hit.bBlockingHit)
		{
			// construct new vector from pawn's vector coordinates to hit's vector coordinates (mouse location on screen)
			FVector nuVector = Hit.ImpactPoint - Pawn->GetActorLocation();

			// set z-component of vector to 0.0f
			// we only care about the rotation on the zy-plane
			nuVector.Z = 0.0f;

			nuVector.Normalize();

			// convert vector to FRotator
			FRotator nuRotationVect = nuVector.Rotation();

			// update pawn rotation to reflect mouse location
			Pawn->SetActorRotation(nuRotationVect);

		}
	}
}

void ATopDownShmupPlayerController::OnStartFire() {
    APawn* const Pawn = GetPawn();
    ATopDownShmupCharacter *MyCharacter = Cast<ATopDownShmupCharacter>(Pawn);
    MyCharacter->OnStartFire();
}

void ATopDownShmupPlayerController::OnStopFire() {
    APawn* const Pawn = GetPawn();
    ATopDownShmupCharacter *MyCharacter = Cast<ATopDownShmupCharacter>(Pawn);
    MyCharacter->OnStopFire();
}
