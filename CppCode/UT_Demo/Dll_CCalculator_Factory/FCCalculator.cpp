#include "stdafx.h"
#include <memory>
#include <limits.h>
#include "IRandom.h"
#include "RandomFactory.h"
#include "FCCalculator.h"

using namespace std;
//IRandom* RandomFactory::CreateRandomType(int type);
FCCalculator::FCCalculator(void)
{    
}

FCCalculator::~FCCalculator(void)
{
    delete this->randomType;
}

void FCCalculator::InitRandom()
{
    // By default, type = Rand;
    //RandomFactory rf;
    int type = (int)RandomFactory::randomTypeEnum::Rand;    
    //this->randomType = new CRandom();
    this->randomType = rf.CreateRandomType(type);
    //SetRandomType(type);
}

int FCCalculator::Add(int x, int y)
{
    return x + y;
}

int FCCalculator::AddWithRandom( int x, int y )
{
    int retAns = INT_MIN;
    if(this->randomType)
    {
        int randNum = this->randomType->Acquire();
        retAns = ( x + y + randNum );
    }        
    return retAns;
}

void FCCalculator::SetRandomType(IRandom* random)
{
    this->randomType = random;
}
