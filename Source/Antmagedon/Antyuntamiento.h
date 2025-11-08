// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Edificio.h"
#include "Antyuntamiento.generated.h"

UCLASS()
class ANTMAGEDON_API AAntyuntamiento : public AEdificio
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAntyuntamiento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CrearObrero();

	void DoMyThing() override {}
};