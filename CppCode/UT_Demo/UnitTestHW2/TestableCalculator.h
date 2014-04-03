#pragma once
#include "nccalculator.h"

class CTestableCalculator :
    public NCCalculator
{
public:
    CTestableCalculator(void);
    ~CTestableCalculator(void);
    void SetRandomValue(int value);

protected:
    virtual int GetRandom(void);
    
private:
    int randomvalue;
};
