#include "StdAfx.h"
#include "TEST_FCCalculator.h"
#include "RandomFactory.h"
#include "FCCalculator.h"

TEST_FCCalculator::TEST_FCCalculator(void)
{
}

TEST_FCCalculator::~TEST_FCCalculator(void)
{
}

TEST(TEST_FC, TEST_FC_AddWithRandom)
{
    int ans;
    FCCalculator f;
    CRandomFixedValue* random = new CRandomFixedValue();
    random->SetFixedValue(8);
    f.SetRandomType(random);
    ans = f.AddWithRandom(2,5);    
    EXPECT_EQ(15,ans);    
    //delete random; QQ: Why we should not delete object here?
}

TEST(TEST_FC, TEST_FC_Add)
{
    int ans;
    FCCalculator f;
    f.InitRandom();
    ans = f.Add(2,5);    
    EXPECT_EQ(7,ans);
}