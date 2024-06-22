// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "GarageEditorPlayer.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS()
class MECHBUILDER_API AGarageEditorPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGarageEditorPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"));
	UInputMappingContext* GarageMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"));
	UInputAction* MoveAction;

	void GarageMove(const FInputActionValue& Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:  

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera Setup", meta = (AllowPrivateAccess = "true"));
	class USceneComponent* CameraCentreRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera Setup", meta = (AllowPrivateAccess = "true"));
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera Setup", meta = (AllowPrivateAccess = "true"));
	class UCameraComponent* Camera;
};
