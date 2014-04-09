#include "StdAfx.h"
#include "TEST_NonI_CCalculator.h"

using ::testing::Return;

TEST_NonI_CCalculator::TEST_NonI_CCalculator(void)
{
}

TEST_NonI_CCalculator::~TEST_NonI_CCalculator(void)
{
}

TEST(MOCK_NonI_CCalculator,MOCK_NonI_CCalculator_AddWithRandom)
{
    // Arrange
    TestableNCCalculator testCalculator;
    TestableCLog mockLog;

    //ON_CALL(testCalculator, GetRandom()).WillByDefault(Return(8));
    //EXPECT_CALL(testCalculator,GetRandom()).WillByDefault(Return(8));
    EXPECT_CALL(testCalculator, GetRandom()).WillOnce(Return(8));
        
    // Act
    int ans = testCalculator.AddWithRandom(2,5);
    
    // Assert
    EXPECT_EQ(15,ans);
}