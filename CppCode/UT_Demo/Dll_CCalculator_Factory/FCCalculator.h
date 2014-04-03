#pragma once
class FCCalculator
{
public:
    DLL_API FCCalculator(void);
    DLL_API ~FCCalculator(void);
    DLL_API void InitRandom();
    DLL_API int Add( int x, int y );    
    DLL_API int AddWithRandom( int x, int y );
    DLL_API void SetRandomType(IRandom* random);
private:
    IRandom* randomType;
    RandomFactory rf;
};
