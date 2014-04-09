#pragma once
#include "CLog.h"

class NCCalculator
{
public:
    NCCalculator(void);
    ~NCCalculator(void);
    int Add( int x, int y );    
    int AddWithRandom( int x, int y );
    int Divide(int x, int y);

protected:
    virtual int GetRandom(void);
    CLog m_log;
    //virtual void SetRandomValue(int value);
private:
    //int randomvalue;
};
