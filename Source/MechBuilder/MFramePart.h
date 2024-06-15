// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Hardpoint.h"
#include "GameFramework/Actor.h"
#include "MFramePart.generated.h"

UCLASS()
class MECHBUILDER_API AMFramePart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMFramePart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "MFramePartFunctions")
	TArray<class UHardpoint*> GetHardpoints();

	UFUNCTION(BlueprintCallable, Category = "MFramePartFunctions")
	AMFramePart* GetAttachedPartByPartID(FString PartID);

	// Manually set Hardpoints in the editor
	UPROPERTY(EditAnywhere, Category = "MFramePart")
	TArray<class UHardpoint*> Hardpoints;

private:

	UPROPERTY(EditDefaultsOnly, Category = "MFramePart")
	USceneComponent* PartRoot;

	UPROPERTY(EditDefaultsOnly, Category = "MFramePart")
	UStaticMeshComponent* MeshComponent;

	TArray<AMFramePart*> AttachedParts;

};
