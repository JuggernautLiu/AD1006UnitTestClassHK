#include "StdAfx.h"
#include "CLog.h"

using namespace std;
CLog::CLog(void)
{
}

CLog::~CLog(void)
{
}

void CLog::Write(string msg)
{
    lastmsg = msg;
}

string CLog::GetMsg()
{
    return lastmsg;
}