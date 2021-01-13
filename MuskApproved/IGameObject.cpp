#include "IGameObject.h"

IGameObject::IGameObject()
{
    activeSpr = nullptr;
    X = 0;
    Y = 0;
}

void IGameObject::SetX(int x)
{
    X = x;
}

void IGameObject::SetY(int y)
{
    Y = y;
}

int IGameObject::GetX()
{
    return X;
}

int IGameObject::GetY()
{
    return Y;
}

bool IGameObject::IncState()
{
    return false;
}

bool IGameObject::DecState()
{
    return false;
}

void IGameObject::SetListSpr(std::list<HBITMAP> list)
{
    if (list.empty())
    {
        activeSpr = nullptr;
    }
    else
    {
        listSpr.assign(list.begin(), list.end());
        activeSpr = listSpr.front();
    }
}
