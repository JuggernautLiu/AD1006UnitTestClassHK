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

int NCCalculator::Divide(int x, int y)
{
    if(0==y){
        m_log->Write("ZeroDivisor");
        throw 1;
    }
    else{
        return (x / y);
    }
}

void NCCalculator::SetLog(CLog* log)
{
    m_log = log;
}