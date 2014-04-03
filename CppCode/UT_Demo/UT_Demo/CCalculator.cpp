#include "stdafx.h"
#include "CCalculator.h"

int CCalculator::Add(int x, int y)
{
    return x + y;
}

int AddWithRandom( int x, int y )
{
    return ( x + y + rand() );
}
