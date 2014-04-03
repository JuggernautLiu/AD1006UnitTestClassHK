#include "StdAfx.h"
#include <memory>
#include "IRandom.h"
#include "RandomFactory.h"

using namespace std;

RandomFactory::RandomFactory(void)
{    
}

RandomFactory::~RandomFactory(void)
{
    /*if(this->ramdomInstance != NULL){
        this->ramdomInstance = NULL;
    }*/
}

IRandom* RandomFactory::CreateRandomType(int type)
{
    switch(type)
    {
        case (int)RandomFactory::randomTypeEnum::Rand:
        {
            //this->ramdomInstance = new CRandom();
            return new CRandom();
        }
        break;
        case (int)RandomFactory::randomTypeEnum::FixedValue:
        {
            //this->ramdomInstance = new CRandomFixedValue();
            return new CRandomFixedValue();
        }
        break;
        default:
        {
            //this->ramdomInstance = new CRandom();
            return new CRandom();
        }
        break;
    }
    //return this->ramdomInstance;
}
