// Fill out your copyright notice in the Description page of Project Settings.

#include "MFramePart.h"
#include "Hardpoint.h"

// Sets default values for this component's properties
UHardpoint::UHardpoint()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHardpoint::BeginPlay()
{
	Super::BeginPlay();

	ConnectedHardpoint = nullptr;
	// ...
	
}


// Called every frame
void UHardpoint::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UHardpoint::IsEmpty()
{
	return Empty;
}

UHardpoint* UHardpoint::GetConnectedHardpoint()
{
	return ConnectedHardpoint;
}

void UHardpoint::SetConnectedHardpoint(UHardpoint* NewConnectedHardpoint)
{
	ConnectedHardpoint = NewConnectedHardpoint;
}

void UHardpoint::ClearConnectedHardpoint()
{
	ConnectedHardpoint = nullptr;
}

AMFramePart* UHardpoint::GetAttachedPart()
{
	// AMFramePart* AttachedPart = Cast<AMFramePart>(ConnectedHardpoint->GetOwner());

	AMFramePart* AttachedPart = nullptr;

	return AttachedPart;
}