#pragma once
#include <list>
#include <windows.h>

class GameObject
{
public:
	GameObject();

	virtual void SetX(int x);
	virtual void SetY(int y);
	virtual int GetX();
	virtual int GetY();

	virtual bool IncState();
	virtual bool DecState();
	virtual void SetListSpr(std::list<HBITMAP>);

protected:
	// Object's position
	int X = 0;
	int Y = 0;

	// All sprites, that can be displayed for the object
	std::list<HBITMAP> listSpr;
	// Sprite, the currently displayed
	HBITMAP activeSpr;
};

