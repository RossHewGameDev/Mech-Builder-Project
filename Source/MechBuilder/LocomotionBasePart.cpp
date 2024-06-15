// Fill out your copyright notice in the Description page of Project Settings.


#include "LocomotionBasePart.h"


ALocomotionBasePart::ALocomotionBasePart()
{
    PrimaryActorTick.bCanEverTick = true;
}


void ALocomotionBasePart::BeginPlay()
{
    Super::BeginPlay();
}


void ALocomotionBasePart::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}