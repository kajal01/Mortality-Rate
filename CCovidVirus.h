#pragma once
#include "CInfection.h"

class CCovidVirus : public CInfection
{
    
    private: 
        float m_iDeaths;
        
    public:
         CCovidVirus();
         ~CCovidVirus();
         void set();
        float GetMortalityRate();

    
};

