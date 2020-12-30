#pragma once

class IGameObject
{
public:
	virtual void SetX(int x) = 0;
	virtual void SetY(int y) = 0;
	virtual int GetX() = 0;
	virtual int GetY() = 0;
};

