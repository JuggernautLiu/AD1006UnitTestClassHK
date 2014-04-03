#include "StdAfx.h"
#include "TestableCalculator.h"

CTestableCalculator::CTestableCalculator(void)
{
}

CTestableCalculator::~CTestableCalculator(void)
{
}

void CTestableCalculator::SetRandomValue(int value)
{
    this->randomvalue = value;
}

int CTestableCalculator::GetRandom()
{
    return this->randomvalue;
}