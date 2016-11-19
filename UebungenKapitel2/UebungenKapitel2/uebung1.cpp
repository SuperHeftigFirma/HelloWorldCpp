#include "stdafx.h"
#include <iostream>


bool isPrimeNumber(int x)
{
	if (x == 2)
	{
		return true;
	}

	if (x == 3)
	{
		return true;
	}

	if (x == 5)
	{
		return true;
	}

	if (x == 7)
	{
		return true;
	}

	return false;
}

void uebung1()
{
	int x;
	std::cout << "Gebe eine einstellige natuerliche Zahl ein: ";
	std::cin >> x;

	if (isPrimeNumber(x))
	{
		std::cout << "Du hast eine einstellige Primzahl eingegeben. :-D" << std::endl;
	}
	else
	{
		std::cout << "Du hast keine einstellige Primzahl eingegeben. :'(" << std::endl;

	}
}