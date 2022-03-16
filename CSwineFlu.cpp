#include "CSwineFlu.h"

CSwineFlu::CSwineFlu()
{
	m_iDeaths = 0;
}

CSwineFlu::~CSwineFlu()
{
}

void CSwineFlu::set()
{
	m_iDeaths = 8543;
}

float CSwineFlu::GetMortalityRate()
{
	set();
	return (m_iDeaths / m_iPopulation) * 100;
}
