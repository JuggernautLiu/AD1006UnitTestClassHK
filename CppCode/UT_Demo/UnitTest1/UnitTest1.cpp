// UnitTest1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest/gtest.h"


int _tmain(int argc, _TCHAR* argv[])
{
    testing::InitGoogleTest(&argc,argv);
    int exit = RUN_ALL_TESTS();
    return exit;
}

