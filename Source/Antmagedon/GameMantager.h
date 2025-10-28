// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Personaje.h"
#include <vector>
/**
 * 
 */
class ANTMAGEDON_API GameMantager
{
private:
	//recursos
	int clay, grass, space;
	std::vector<APersonaje*>* obrerosList;
	std::vector<APersonaje*>* guerrerosList;

	float timePassed{ 0 };

	int grantjasConstruidas; //Condicion de victoria
public:
	GameMantager();
	~GameMantager();
};
