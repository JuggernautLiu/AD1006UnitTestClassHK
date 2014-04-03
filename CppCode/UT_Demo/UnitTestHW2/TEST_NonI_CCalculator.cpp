#include "StdAfx.h"
#include "TEST_NonI_CCalculator.h"
#include "TestableCalculator.h"

TEST_NonI_CCalculator::TEST_NonI_CCalculator(void)
{
}

TEST_NonI_CCalculator::~TEST_NonI_CCalculator(void)
{
}

TEST(TEST_NONI, TEST_NONI_ADD)
{
    NCCalculator n;
    int ans = n.Add(2,5);
    EXPECT_EQ(7,ans);    
}

TEST(TEST_NONI, TEST_NONI_AddWithRandom)
{
    CTestableCalculator n;
    n.SetRandomValue(8);
    int ans = n.AddWithRandom(2,5);
    EXPECT_EQ(15,ans);    
}
