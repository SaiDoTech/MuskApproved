#pragma once
#include "IGameObject.h"
#include "IMovable.h"

class FallControl
{
public:
	FallControl(IMovable, IGameObject, IGameObject);

	void InitGame();
	void Pause();
	void UnPause();

	void MovePlayerLeft(bool gameStatus);
	void MovePlayerRight(bool gameStatus);
	void MovePlayerUp(bool gameStatus);
	void MovePlayerDown(bool gameStatus);

private:
	// Object, that can be controlled by user
	IMovable rocketCtr;
	// Objects on the scene
	IGameObject rocketObj;
	IGameObject platformObj;
	// Start Data
	static const int cellWidth = 70;
	static const int cellHeight = 60;
	const int platformSize = 20;
	// Game Elements
	int cells[cellHeight][cellWidth];
	int posX = 0;
	int posY = 0;
	int platformX = 0;
	int platformY = 0;
};

