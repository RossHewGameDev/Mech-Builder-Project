// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MFramePart.h"
#include "CockpitPart.generated.h"

/**
 * 
 */
UCLASS()
class MECHBUILDER_API ACockpitPart : public AMFramePart
{
	GENERATED_BODY()
	
public:

	ACockpitPart();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

protected:

public:

private:
	
};

