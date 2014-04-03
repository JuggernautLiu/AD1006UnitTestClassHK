#pragma once
#include <stdlib.h>

class IRandom
{
public:
    virtual int Acquire( void ) = 0;
};

class CRandom : public IRandom
{
public:
    virtual int Acquire( void )
    {
        return rand();
    }
};