#include "Tomatoplant.h"

Tomatoplant::Tomatoplant(int c, int h)
{
    count = c;
    height = h;
}

Tomatoplant::Tomatoplant(int h)
{
    height = h;
}

int Tomatoplant::getCount()
{
    return count;
}

void Tomatoplant::setCount(int new_count)
{
    count = new_count;
}

void Tomatoplant::setHeight(int h)
{
    height = h;
}

int Tomatoplant::getHeight()
{
    return height;
}