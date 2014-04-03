#pragma once
#include "stdafx.h"
#include <stdlib.h>

class IRandom
{
public:
    virtual int Acquire( void ) = 0;
    virtual ~IRandom() = 0;
};

class CRandom : public IRandom
{
public:
    CRandom();
    ~CRandom();
    int Acquire( void );
};

class CRandomFixedValue : public IRandom
{
public:
    DLL_API CRandomFixedValue();
    DLL_API ~CRandomFixedValue();
    DLL_API int Acquire( void );    
    DLL_API void SetFixedValue(int value);
private:
    int fixedvalue;
};