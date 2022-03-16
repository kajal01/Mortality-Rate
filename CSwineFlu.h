#pragma once
#include "CInfection.h"
class CSwineFlu :
    public CInfection
{

private:
    float m_iDeaths;
    

public:
    CSwineFlu();
    ~CSwineFlu();
    void set();
    float GetMortalityRate();

};

