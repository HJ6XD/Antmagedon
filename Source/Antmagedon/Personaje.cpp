// Fill out your copyright notice in the Description page of Project Settings.


#include "Personaje.h"

// Sets default values
APersonaje::APersonaje(size_t _col)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	color = _col;
	tipo = guerrero;
	maxHP = GUERRERO_HP;
	curHP = maxHP;
	movementSpeed = GUERRERO_SPEED;
}

APersonaje::APersonaje()
{
	PrimaryActorTick.bCanEverTick = true;
	color = rojo;
	tipo = obrero;
	maxHP = OBRERO_HP;
	curHP = maxHP;
	movementSpeed = OBRERO_SPEED;
}

// Called when the game starts or when spawned
void APersonaje::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APersonaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APersonaje::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APersonaje::GetPath(std::vector<FVector2D>* _path)
{
	myPath = new std::vector<FVector2D>();
	myPath = _path;
	curTile = 0;
}
void APersonaje::Caminar()
{
	//logica para que camine hacia myPath->at(curTile);
}
void APersonaje::ChangeDirection()
{
	curTile += 1;
	if (curTile == (myPath->size() - 1)) {
		//logica de que se pare
		return;
	}
	target = myPath->at(curTile);
}

void APersonaje::RecibirDanio(int _dmg)
{
	curHP -= _dmg;
	if (curHP <= 0) {
		//Cosas de que se muera
	}
}

void APersonaje::Reparar()
{
	if (tipo == obrero) {
		//Logica de reparar
	}
}

void APersonaje::Construir()
{
	if (tipo == obrero) {
		//Logica de construir
	}
}

void APersonaje::Recolectar()
{
	if (tipo == obrero) {
		//Logica de recolectar
	}
}

void APersonaje::Atacar()
{
	if (tipo == guerrero) {
		//Logica de atacar
	}
}

