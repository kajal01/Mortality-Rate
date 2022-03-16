#include "CHivVirus.h"

CHivVirus::CHivVirus()
{
	m_iDeaths = 0;
}

CHivVirus::~CHivVirus()
{
}

void CHivVirus::set()
{
	m_iDeaths = 140000;
}

float CHivVirus::GetMortalityRate()
{
	set();
	return (m_iDeaths / m_iPopulation) * 1000;
}
