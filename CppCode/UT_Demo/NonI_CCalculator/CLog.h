#pragma once
#include <string>
using namespace std;

class CLog
{
public:
    CLog(void);
    virtual ~CLog(void);
    void Write(string msg);
    string GetMsg();
private:
    string lastmsg;
};
