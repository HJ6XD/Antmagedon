// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Edificio.h"
#include "CentroDeAntrenamiento.generated.h"

UCLASS()
class ANTMAGEDON_API ACentroDeAntrenamiento : public AEdificio
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACentroDeAntrenamiento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//void OnClicked() override;
	virtual void Tick(float DeltaTime) override;
	void CrearGuerrero();
};
