#include "StdAfx.h"
#include "CBase.h"

CBase::CBase(void)
{
}

CBase::~CBase(void)
{
}

void CBase::Foo()
{
    wprintf(L"CBase::Foo\n");
}

void CDerived1::Foo()
{
    wprintf(L"CDerived1::Foo\n");
}

void CDerived2::Foo()
{
    wprintf(L"CDerived2::Foo\n");
}