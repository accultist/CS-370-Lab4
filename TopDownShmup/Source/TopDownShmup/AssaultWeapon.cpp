// Fill out your copyright notice in the Description page of Project Settings.


#include "AssaultWeapon.h"


void AAssaultWeapon::OnStartFire() {
    Super::OnStartFire();
    // Call WeaponTrace FireRate per second, starting 0 seconds from now.
   // GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AAssaultWeapon::WeaponTrace, FireRate, true, 0.5f);
}


void AAssaultWeapon::OnStopFire() {
    Super::OnStopFire();
    
}

void AAssaultWeapon::WeaponTrace()
{
    static FName WeaponFireTag = FName(TEXT("WeaponTrace"));
    static FName MuzzleSocket = FName(TEXT("MuzzleFlashSocket"));
    
    // Once we've called this function enough times, clear the Timer.
    //if (--RepeatingCallsRemaining <= 0)
   // {
      //  GetWorldTimerManager().ClearTimer(MemberTimerHandle);
        // MemberTimerHandle can now be reused for any other Timer.
        
   // }
    
    // Start from the muzzle's position
    FVector StartPos = WeaponMesh->GetSocketLocation(MuzzleSocket);
    
    // Get forward vector of MyPawn
    FVector Forward = MyPawn->GetActorForwardVector();
    
    // Calculate end position
    FVector EndPos = StartPos + (Forward * WeaponRange);
    
    
    // Perform line trace to retrieve hit info
    FCollisionQueryParams TraceParams(WeaponFireTag, true, GetInstigator());
    
    // This fires the ray and checks against all objects w/ collision
    FHitResult Hit(ForceInit);
    GetWorld()->LineTraceSingleByObjectType(Hit, StartPos, EndPos,
    FCollisionObjectQueryParams::AllObjects, TraceParams);
    
    // Did this hit anything?
    if (Hit.bBlockingHit)
    {
    //    HitEffect->UGameplayStatics::SpawnEmitterAtLocation(this, HitEffect, EndPos);
        
    }
    
}
