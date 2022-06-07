// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tower.h"
#include "SniperTower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ASniperTower : public ATower
{
	GENERATED_BODY()


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
		int RayIntensity = 5;

	bool bRayHitSomething(const FVector& StartRayLocation, FHitResult& RayTrace) const;
};
