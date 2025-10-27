// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Personaje.generated.h"
#include "vector"
UCLASS()
class ANTMAGEDON_API APersonaje : public ACharacter
{
	GENERATED_BODY()

private:
	std::vector<int> path;
public:
	// Sets default values for this character's properties
	APersonaje();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void GetPath(std::vector<int>);

	void Walk();

};

enum CharacterState {
	walking,
	waiting,
	atacking,
	harvesting,
	repairing,
	building,
	fleeing
};