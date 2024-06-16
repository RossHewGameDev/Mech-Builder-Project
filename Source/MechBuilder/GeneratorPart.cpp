// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorPart.h"

AGeneratorPart::AGeneratorPart()
{

}

// get power generated
int32 AGeneratorPart::GetPowerGenerated()
{
    return PowerGenerated;
}

// get power available
int32 AGeneratorPart::GetPowerAvailable()
{
    return PowerAvailable;
}

// calculate power available
int32 AGeneratorPart::CalcPowerAvailable(int32 TotalPower, int32 PowerUsed)
{
    PowerAvailable = TotalPower - PowerUsed;
    return PowerAvailable;
}