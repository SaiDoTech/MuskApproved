#include "FallControl.h"


FallControl::FallControl(IMovable _rocketCtr, IGameObject _rocketObj, IGameObject _platformObj)
{
	rocketCtr = _rocketCtr;
	rocketObj = _rocketObj;
	platformObj = _platformObj;
}

void FallControl::InitGame()
{
	//w = cellWidth;
	//h = cellHeight;

	posX = cellWidth / 2;
	posY = 10;
}

void FallControl::Pause()
{
}

void FallControl::UnPause()
{
}
