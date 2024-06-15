// Fill out your copyright notice in the Description page of Project Settings.


#include "CockpitPart.h"


ACockpitPart::ACockpitPart()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ACockpitPart::BeginPlay()
{
    Super::BeginPlay();
}

void ACockpitPart::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}