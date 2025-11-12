// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Edificio.h"
#include "Laborantorio.generated.h"

UCLASS()
class ANTMAGEDON_API ALaborantorio : public AEdificio
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaborantorio();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//void UpgradeDamage();
};
