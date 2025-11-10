// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Hormiga.generated.h"

UCLASS()
class ANTMAGEDON_API AHormiga : public ACharacter
{
	GENERATED_BODY()

protected:

	//Estadisticas
	UPROPERTY(BlueprintReadWrite)	int maxHP;
	UPROPERTY(BlueprintReadWrite)	int curHP;
	UPROPERTY(BlueprintReadWrite)	float movementSpeed;

	//Cosas para que camine
	UPROPERTY(BlueprintReadWrite)	TArray<FVector> myPath;
	UPROPERTY(BlueprintReadWrite)	int pathIndex;
	UPROPERTY(BlueprintReadWrite)	FVector targetPos;
public:
	// Sets default values for this character's properties
	AHormiga();

protected:
	// Called when the game starts or when spawned
	UFUNCTION(BlueprintCallable)
	virtual void BeginPlay() override;

	//UFUNCTION(BlueprintCallable)
	void GetPath(TArray<FVector>);

	UFUNCTION(BlueprintCallable)
	void ChangeDirection();

	UFUNCTION(BlueprintCallable)
	virtual void OnReachTarget();

	UFUNCTION(BlueprintCallable)
	virtual void StartWalking();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

	//Funciones de hormigas en general
	UFUNCTION(BlueprintCallable)
	void Caminar();
	UFUNCTION(BlueprintCallable)
	virtual void OnDead();
	UFUNCTION(BlueprintCallable)
	void RecibirDanio(int _dmg);
};
