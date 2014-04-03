#pragma once

class NCCalculator
{
public:
    NCCalculator(void);
    ~NCCalculator(void);
    int Add( int x, int y );    
    int AddWithRandom( int x, int y );

protected:
    virtual int GetRandom(void);
    //virtual void SetRandomValue(int value);
private:
    //int randomvalue;
};
