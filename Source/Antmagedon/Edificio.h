// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Edificio.generated.h"

UCLASS()
class ANTMAGEDON_API AEdificio : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Stats")
	int maxHp;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int curHP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int clayCost; 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int grassCost;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int clayCostToDoMT; 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
	int grassCostToDoMT;
	// Sets default values for this actor's properties
	AEdificio(int, int, int);
	AEdificio();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnClickBuilding();

	UFUNCTION(BlueprintCallable)

	virtual void DoMyThing(){}
};
