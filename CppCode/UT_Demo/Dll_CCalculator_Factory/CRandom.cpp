#include "stdafx.h"
#include "IRandom.h"

CRandom::CRandom()
{
}
CRandom::~CRandom()
{
}

int CRandom::Acquire()
{
    return rand();
}