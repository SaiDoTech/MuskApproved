#pragma once
#include "GameObject.h"

class MovingObject
	: public GameObject
{
public:
	virtual void MoveLeft();
	virtual void MoveRight();
	virtual void MoveUp();
	virtual void MoveDown();
};

