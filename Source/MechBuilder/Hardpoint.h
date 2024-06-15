// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MFramePart.h" // - forward declare this instead of including it here, it's not needed. used temporarily for convenience
#include "Hardpoint.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MECHBUILDER_API UHardpoint : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHardpoint();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool IsEmpty();

	UHardpoint* GetConnectedHardpoint();
	void SetConnectedHardpoint(UHardpoint* NewConnectedHardpoint);
	void ClearConnectedHardpoint();

private:

	UPROPERTY(VisibleAnywhere, Category = "Hardpoint")
	bool Empty = true;

	UPROPERTY(VisibleAnywhere, Category = "Hardpoint")
	// the hardpoint this hardpoint is connected to (if any)
	UHardpoint* ConnectedHardpoint;
};
