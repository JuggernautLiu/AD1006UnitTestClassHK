#include "stdafx.h"
#include "IRandom.h"

CRandomFixedValue::CRandomFixedValue()
{
}

CRandomFixedValue::~CRandomFixedValue()
{
}

void CRandomFixedValue::SetFixedValue(int value)
{
    this->fixedvalue = value;
}

int CRandomFixedValue::Acquire()
{
    return this->fixedvalue;
}