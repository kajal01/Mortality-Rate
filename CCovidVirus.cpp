#include "CCovidVirus.h"

CCovidVirus::CCovidVirus()
{
	m_iDeaths = 0;	
}

CCovidVirus::~CCovidVirus()
{
}



void CCovidVirus::set()
{
	m_iDeaths = 516000;	
}


float CCovidVirus::GetMortalityRate()
{
	set();
	return (m_iDeaths / m_iPopulation) *100;
}
