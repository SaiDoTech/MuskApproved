#pragma once
#include "MovingObject.h"
#include <windows.h>

class Rocket :
    public MovingObject
{
public:
	// IPlayable
	void MoveLeft() override;
	void MoveRight() override;
	void MoveUp() override;
	void MoveDown() override;

	// IGameObject
	void SetX(int x) override;
	void SetY(int y) override;
	int GetX() override;
	int GetY() override;

	Rocket();
	bool IsAble();
};

