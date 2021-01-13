#pragma once
#include "IMovable.h"
#include "IGameObject.h"
#include <windows.h>

class Rocket :
    public IMovable, public IGameObject 
{
public:
	void MoveLeft() override;
	void MoveRight() override;
	void MoveUp() override;
	void MoveDown() override;

	Rocket();
	bool IsAble();
};

