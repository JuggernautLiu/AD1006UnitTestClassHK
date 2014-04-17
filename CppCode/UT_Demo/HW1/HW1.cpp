// HW1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CBase.h"


int _tmain(int argc, _TCHAR* argv[])
{
    CBase b;
    b.Foo();

    CDerived1 d1;
    d1.Foo();

    CDerived2 d2;
    d2.Foo();

    CBase *pb = NULL;
    pb = &b;
    pb->Foo();

    pb = &d1;
    pb->Foo();

    pb = &d2;
    pb->Foo();

	return 0;
}

