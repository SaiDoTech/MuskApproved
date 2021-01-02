#include "Rocket.h"

#define UnLocatedSpr L"SkyBack.bmp"
#define GameSpr L"Rocket.bmp"
#define DefeatSpr L"SkyBack.bmp"

// Set sprites sequence 
HBITMAP HUnLocatedSpr = nullptr;
HBITMAP HGameSpr = nullptr;
HBITMAP HDefeatSpr = nullptr;
HBITMAP HActiveSpr = nullptr;

Rocket::Rocket()
{
    listSpr.push_back(HUnLocatedSpr = (HBITMAP)LoadImageW(NULL, UnLocatedSpr, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE));
    listSpr.push_back(HGameSpr = (HBITMAP)LoadImageW(NULL, GameSpr, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE));
    listSpr.push_back(HDefeatSpr = (HBITMAP)LoadImageW(NULL, DefeatSpr, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE));

    HActiveSpr = HGameSpr;
    //HActiveSpr = HUnLocatedSpr;
}

// Able to start game
bool Rocket::IsAble()
{
    if ((HUnLocatedSpr != nullptr) &&
        (HGameSpr != nullptr) &&
        (HDefeatSpr != nullptr) &&
        (HActiveSpr != nullptr))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Rocket::SetX(int x)
{   
    X = x;
}

int Rocket::GetX()
{
    return X;
}

void Rocket::SetY(int y) 
{
    Y = y;
}

int Rocket::GetY() 
{
    return Y;
}

void Rocket::MoveLeft()
{
    X -= 1;
}

void Rocket::MoveRight()
{
    X += 1;
}

void Rocket::MoveUp()
{
    Y += 1;
}

void Rocket::MoveDown()
{
    Y -= 1;
}
