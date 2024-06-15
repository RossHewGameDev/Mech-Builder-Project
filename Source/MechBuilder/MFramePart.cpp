// Fill out your copyright notice in the Description page of Project Settings.

#include "Hardpoint.h"
#include "MFramePart.h"

// Sets default values
AMFramePart::AMFramePart()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMFramePart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMFramePart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<UHardpoint*> AMFramePart::GetHardpoints()
{
	if (Hardpoints.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No hardpoints found on %s"), *GetName());
	}
	return Hardpoints;
}

// I'm not sure if need this function, but it's here for now (might be switched to get part by impact point or something like that)
AMFramePart* AMFramePart::GetAttachedPartByPartID(FString PartID)
{
	for (AMFramePart* Part : AttachedParts) // shorthand for for (int32 i = 0; i < AttachedParts.Num(); i++) 
	{
		if (Part->GetName() == PartID)
		{
			return Part;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("No part found with ID %s"), *PartID);
	return nullptr;
}
