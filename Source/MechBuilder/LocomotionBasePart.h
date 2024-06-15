// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MFramePart.h"
#include "LocomotionBasePart.generated.h"

/**
 * 	This class is the base class for all locomotion parts. It will contain the basic functionality for all locomotion parts.
 *  Temporarily, this will be used as the only locomotion part, but in the future, this will be the base class for bipedal, quadrupedal, and other types of locomotion.
 */
UCLASS()
class MECHBUILDER_API ALocomotionBasePart : public AMFramePart
{
	GENERATED_BODY()
	
public:

	ALocomotionBasePart();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

protected:

public:

private:
};
