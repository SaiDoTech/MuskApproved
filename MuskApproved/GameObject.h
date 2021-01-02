#pragma once
#include <list>
#include <windows.h>

class GameObject
{
public:
	virtual void SetX(int x);
	virtual void SetY(int y);
	virtual int GetX();
	virtual int GetY();

protected:
	// Object's position
	int X = 0;
	int Y = 0;

	// All sprites, that can be displayed for the object
	std::list<HBITMAP> listSpr;
	// Sprite, the currently displayed
	HBITMAP activeSpr;
};

