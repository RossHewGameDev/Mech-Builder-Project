// Fill out your copyright notice in the Description page of Project Settings.


#include "GarageMode/GarageEditorPlayer.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


AGarageEditorPlayer::AGarageEditorPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraCentreRoot = CreateDefaultSubobject<USceneComponent>(TEXT("GarageVideoCentreRoot"));
	RootComponent = CameraCentreRoot; 
	// Set the CameraCentreRoot location to the part you want to rotate around

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("GarageCamera"));
	Camera->SetupAttachment(SpringArm);

}

void AGarageEditorPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		PlayerController->bShowMouseCursor = true;
		PlayerController->bEnableClickEvents = true;
		PlayerController->bEnableMouseOverEvents = true;
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(GarageMappingContext, 0);
		}
	}

}

void AGarageEditorPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGarageEditorPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGarageEditorPlayer::GarageMove);	
	}
}

void AGarageEditorPlayer::GarageMove(const FInputActionValue& Value)
{
	const float DirectionValue = Value.Get<float>();
	AddMovementInput(GetActorForwardVector(), DirectionValue);
}
