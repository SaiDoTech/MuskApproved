#include "Rocket.h"

// Able to start game
bool Rocket::IsAble()
{
    if ((UnLocatedSpr != nullptr) &&
        (GameSpr != nullptr) &&
        (DefeatSpr != nullptr) &&
        (ActiveSpr != nullptr))
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
    Y -= 1;
}

void Rocket::MoveDown()
{
    Y += 1;
}
