// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularFrame.h"

// Sets default values
AModularFrame::AModularFrame()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent;

}

// Called when the game starts or when spawned
void AModularFrame::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AModularFrame::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AModularFrame::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

