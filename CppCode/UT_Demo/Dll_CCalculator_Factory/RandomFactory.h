#pragma once
#include "IRandom.h"

using namespace std;
//extern IRandom* CreateRandomType(int type);
class RandomFactory
{
public:
    enum randomTypeEnum
    {
        Rand = 0,
        FixedValue = 1,
    };
    RandomFactory(void);
    ~RandomFactory(void);    
    IRandom* CreateRandomType(int type);
    //auto_ptr<IRandom> CreateRandomType(int type);
private:
    IRandom* ramdomInstance;
};
