// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "vector"
#include "Personaje.generated.h"


UCLASS()
class ANTMAGEDON_API APersonaje : public ACharacter
{
	GENERATED_BODY()

private:

	const int OBRERO_HP = 100;
	const float OBRERO_SPEED = 2.5f;
	const int GUERRERO_HP = 250;
	const float GUERRERO_SPEED = 2.0f;

	//Estadisticas
	int maxHP, curHP;
	float movementSpeed;

	//Cosas para que camine
	std::vector<FVector2D>* myPath;
	size_t curTile;
	FVector2D target;
	size_t color;
	size_t tipo;

public:
	// Sets default values for this character's properties
	APersonaje(size_t);
	APersonaje();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void GetPath(std::vector<FVector2D>*);
	void ChangeDirection();

	//Funciones de hormigas en general
	void Caminar();
	void RecibirDanio(int _dmg);

	//Funciones de Obreras
	void Reparar();
	void Construir();
	void Recolectar();
	
	//Funciones de guerreras
	void Atacar();
};

enum CharacterColor {
	rojo, negro
};
enum CharacterType {
	obrero, guerrero
};