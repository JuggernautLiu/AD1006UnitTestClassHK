#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "clog.h"

using namespace std;

class TestableCLog :
    public CLog
{
public:
    TestableCLog(void);
    ~TestableCLog(void);
    //void Write(string msg);
    //string GetMsg();
    //MOCK_METHOD1(Write, void(string str1));
    //MOCK_METHOD0(GetMsg, string());
};
