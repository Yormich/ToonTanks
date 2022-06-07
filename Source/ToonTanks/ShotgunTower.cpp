// Fill out your copyright notice in the Description page of Project Settings.


#include "ShotgunTower.h"
#include "Projectile.h"
#include "Kismet/GameplayStatics.h"

void AShotgunTower::BeginPlay()
{
	Super::BeginPlay();
}

void AShotgunTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AShotgunTower::Fire()
{
	FRotator StartRotation = TurretMesh->GetComponentRotation();
	FVector StartLocation = ProjectileSpawnPoint->GetComponentLocation();
	float ZDeltaLeftRotation = StartRotation.Yaw - (FireSector / NumberOfProjectiles);
	float ZDeltaRightRotation = StartRotation.Yaw + (FireSector / NumberOfProjectiles);
	float YDeltaLeftTranslation = StartLocation.Y + (FireSector / NumberOfProjectiles);
	float YDeltaRightTranslation = StartLocation.Y - (FireSector / NumberOfProjectiles);
	FTransform SpawnDetailes;
	for (int i = 0; i < NumberOfProjectiles; i++)
	{
		if (i == 0)
		{
			SpawnDetailes = FTransform(StartRotation, StartLocation);
		}
		else
		{
			FRotator ChangedRotation = StartRotation;
			FVector ChangedTranslation = StartLocation;
			if (i % 2 == 0)
			{
				ChangedRotation.Yaw = ZDeltaLeftRotation;
				ChangedTranslation.Y = YDeltaLeftTranslation;
				ZDeltaLeftRotation -= (FireSector / NumberOfProjectiles);
				YDeltaLeftTranslation += (FireSector / NumberOfProjectiles);
			}
			else
			{
				ChangedRotation.Yaw = ZDeltaRightRotation;
				ChangedTranslation.Y = YDeltaRightTranslation;
				ZDeltaRightRotation += (FireSector / NumberOfProjectiles);
				YDeltaRightTranslation -= (FireSector / NumberOfProjectiles);
			}
			SpawnDetailes = FTransform(ChangedRotation, ChangedTranslation);
		}
		AProjectile* Projectile = GetWorld()->SpawnActorDeferred<AProjectile>(ProjectileClass, SpawnDetailes);
		Projectile->InitializeSpeed(InitialProjectileSpeed, MaxProjectileSpeed);
		Projectile->SetOwner(this);
		UGameplayStatics::FinishSpawningActor(Projectile, SpawnDetailes);
	}
}