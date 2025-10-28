// Fill out your copyright notice in the Description page of Project Settings.


#include "CentroDeAntrenamiento.h"

// Sets default values
ACentroDeAntrenamiento::ACentroDeAntrenamiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACentroDeAntrenamiento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACentroDeAntrenamiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACentroDeAntrenamiento::CrearGuerrero()
{
	//LLama gamemanager para preguntar si hay suficientes recursos
	//Si si, se restan lso recursos y se crea un guerrero
}

