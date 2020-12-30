#pragma once
#include "IPlayable.h"
#include "IGameObject.h"
#include <windows.h>

class Rocket :
    public IPlayable, IGameObject
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

	bool IsAble();

private:
	// Rocket's state sprites 
	HBITMAP UnLocatedSpr = nullptr;
	HBITMAP GameSpr = nullptr;
	HBITMAP DefeatSpr = nullptr;
	HBITMAP ActiveSpr = nullptr;

	// Rocket's position
	int X = 0;
	int Y = 0;
};

