#pragma once
class CInfection
{
	

	public:
		CInfection();
		~CInfection();
		
protected:
	float m_iPopulation; //
		virtual float GetMortalityRate() ;

};

