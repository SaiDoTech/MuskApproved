#pragma once
#include <list>
#include <windows.h>

class IGameObject
{
public:
	virtual void SetX(int x) = 0;
	virtual void SetY(int y) = 0;
	virtual int GetX() = 0;
	virtual int GetY() = 0;

protected:
	// Rocket's position
	int X = 0;
	int Y = 0;

	// All sprites, that can be displayed for the object
	std::list<HBITMAP> objectSpr;
	// Sprite, the currently displayed
	HBITMAP activeSpr;
};

