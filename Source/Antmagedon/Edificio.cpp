// Fill out your copyright notice in the Description page of Project Settings.


#include "Edificio.h"

// Sets default values
AEdificio::AEdificio(int cc, int gc, int mhp) : clayCost(cc), grassCost(gc),
maxHp(mhp), curHP(maxHp)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AEdificio::AEdificio() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void AEdificio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEdificio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEdificio::OnClickBuilding()
{
	//Que aparesca el widget del edificio para hacer su cosa
}


