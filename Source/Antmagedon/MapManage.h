// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class ANTMAGEDON_API MapManager
{
protected:
	int widthAndHeight;
	void CreateGrid();
public:
	MapManager();
	~MapManager();
};
