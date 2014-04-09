#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "nccalculator.h"

class TestableNCCalculator :
    public NCCalculator
{
public:
    TestableNCCalculator(void);
    ~TestableNCCalculator(void);
    //MOCK_CONST_METHOD0(GetRandom, int());
    MOCK_METHOD0(GetRandom, int());
};
