#include "GameObject.h"

GameObject::GameObject()
{
    activeSpr = nullptr;
    X = 0;
    Y = 0;
}

void GameObject::SetX(int x)
{
    X = x;
}

void GameObject::SetY(int y)
{
    Y = y;
}

int GameObject::GetX()
{
    return X;
}

int GameObject::GetY()
{
    return Y;
}

bool GameObject::IncState()
{
    return false;
}

bool GameObject::DecState()
{
    return false;
}

void GameObject::SetListSpr(std::list<HBITMAP> list)
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
