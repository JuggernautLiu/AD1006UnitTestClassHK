#pragma once
#include <string>
using namespace std;

class CLog
{
public:
    CLog(void);
    virtual ~CLog(void);
    virtual void Write(string msg);
    virtual string GetMsg();
    string lastmsg;
protected:
    
};
