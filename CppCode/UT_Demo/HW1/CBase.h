#pragma once

class CBase
{
public:
    CBase(void);
    ~CBase(void);
    virtual void Foo(void);
};

class CDerived1 : public CBase
{
public:
    void Foo( void );    
};

class CDerived2 : public CBase
{
public:
    void Foo( void );    
};
