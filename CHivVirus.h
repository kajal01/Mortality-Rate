#pragma once
#include "CInfection.h"
class CHivVirus :
    public CInfection
{

private:
    float m_iDeaths;
    //float m_iPopulation;


public:
    CHivVirus();
    ~CHivVirus();
    void set();
    float GetMortalityRate();

};

