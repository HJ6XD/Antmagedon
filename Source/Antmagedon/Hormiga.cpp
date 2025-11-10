// Fill out your copyright notice in the Description page of Project Settings.


#include "Hormiga.h"


AHormiga::AHormiga()
{
	PrimaryActorTick.bCanEverTick = true;
	maxHP = 100;
	curHP = maxHP;
	myPath = TArray<FVector>();
	pathIndex = 0;
	targetPos = GetActorLocation();
}

// Called when the game starts or when spawned
void AHormiga::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AHormiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHormiga::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AHormiga::GetPath(TArray<FVector> _path)
{
	//myPath = new TArray<FVector>();
	myPath = _path;
	pathIndex = 0;
}
void AHormiga::Caminar()
{
	FVector dist = targetPos - GetActorLocation();
	float len = sqrt((dist.X * dist.X) + (dist.Y * dist.Y));
	if (len <= 100)
	{
		ChangeDirection();
	}
}
void AHormiga::OnDead()
{
}
void AHormiga::ChangeDirection()
{
	pathIndex += 1;
	if (pathIndex == (myPath.GetAllocatedSize() - 1)) {
		myPath = TArray<FVector>();
		pathIndex = 0;
		OnReachTarget();
		return;
	}
	targetPos = myPath[pathIndex];
}

void AHormiga::OnReachTarget()
{
}

void AHormiga::StartWalking()
{
}

void AHormiga::RecibirDanio(int _dmg)
{
	curHP -= _dmg;
	if (curHP <= 0) {
		OnDead();
	}
}