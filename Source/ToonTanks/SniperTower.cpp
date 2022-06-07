// Fill out your copyright notice in the Description page of Project Settings.



#include "SniperTower.h"
#include "DrawDebugHelpers.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/EngineTypes.h"

void ASniperTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (InFireRange())
	{
		FVector StartRayLocation = FVector(TurretMesh->GetComponentLocation().X,
			TurretMesh->GetComponentLocation().Y, ProjectileSpawnPoint->GetComponentLocation().Z);
		FHitResult RayTrace;
		bool HasTouched = bRayHitSomething(StartRayLocation, RayTrace);
		if (HasTouched)
		{
			FVector End = RayTrace.ImpactPoint;
			DrawDebugLine(GetWorld(), StartRayLocation, End, FColor::Red, false, -1.0, (uint8)0U, RayIntensity);
		}
	}
}

void ASniperTower::BeginPlay()
{
	Super::BeginPlay();
}

bool ASniperTower::bRayHitSomething(const FVector& StartRayLocation, FHitResult& RayTrace) const
{
	FCollisionShape Sphere = FCollisionShape::MakeSphere(RayIntensity);
	return GetWorld()->SweepSingleByChannel(RayTrace, StartRayLocation,
		Tank->GetActorLocation(), FQuat::Identity, ECC_GameTraceChannel1, Sphere);
}