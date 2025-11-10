// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RTSGameManager.generated.h"

/**
 * 
 */
UCLASS()
class ANTMAGEDON_API ARTSGameManager : public AGameModeBase
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite) TArray<AActor*> selected;
};
