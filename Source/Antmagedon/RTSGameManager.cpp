// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSGameManager.h"

void ARTSGameManager::BlackAntKilled()
{
	--blackAntsLeft;
	if (blackAntsLeft <= 0) {
		WinGame();
	}
}
