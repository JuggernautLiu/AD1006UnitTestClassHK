#include "StdAfx.h"
#include "TestCal.h"
#include "Cal.h"
#include "gtest/gtest.h"


TestCal::TestCal(void)
{
}

TestCal::~TestCal(void)
{
}

TEST(TEST_CAL, TEST_CAL_ADD)
{
    Cal c;
    int ans = c.Add(2,5);
    EXPECT_EQ(7,ans);    
}
