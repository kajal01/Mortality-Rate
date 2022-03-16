// MortalityApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <conio.h>
#include <iostream>
#include "CCovidVirus.h"
#include "CHivVirus.h"
#include "CSwineFlu.h"
#include <iomanip>

int main()
{
	int choice;
	

	cout << "Select a number to get Mortality rate for given infections:" << endl;
	cout << "1. Covid Virus \n2. Hiv Virus \n3. Swine Flu " << endl;
	cin >> choice;
	cout << endl;
	

	switch (choice)
	{
	case 1:
		{
		CCovidVirus covid;
		cout << "Mortality Rate for Covid virus is " << covid.GetMortalityRate() << " (per 100 people)" << endl;
		cout << endl;
		break;
		}
	case 2:
		{
		CHivVirus hiv;
		cout << "Mortality Rate for Hiv virus is " << hiv.GetMortalityRate() << " (per 100 people)" << endl;
		cout << endl;
		break;
		}
	case 3:
		{
		CSwineFlu h1n1;
		cout << "Mortality Rate for Swine Flu is " << h1n1.GetMortalityRate() << " (per 100 people)" << endl;
		cout << endl;
		break;
		}

	default:
		cout << "Invalid choice";
		cout << endl;
		break;
	}

	

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
