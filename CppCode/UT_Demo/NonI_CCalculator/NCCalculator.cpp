#include "StdAfx.h"
#include <stdlib.h>
#include "NCCalculator.h"


NCCalculator::NCCalculator(void)
{
}

NCCalculator::~NCCalculator(void)
{
}

int NCCalculator::Add(int x, int y)
{
    return x + y;
}

int NCCalculator::AddWithRandom( int x, int y )
{
    return ( x + y + GetRandom() );
}

int NCCalculator::GetRandom()
{    
    return rand();
}
