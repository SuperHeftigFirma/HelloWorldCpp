#include "stdafx.h"
#include <iostream>

int getInput2()
{
	int input;

	std::cout << "Gebe eine natuerliche Zahl zwischen 1 und 255 ein: ";
	std::cin >> input;

	return input;
}

void convertIntoBinary(int x)
{
	std::cout << "Die Zahl lautet im binaeren Zahlensystem (in umgekehrter Reihenfolge: ";

	do
	{
		std::cout << x % 2;

		x /= 2;
	} while (x > 0);

	std::cout << "\n";
}

void uebung2()
{
	int x;
	
	x = getInput2();

	convertIntoBinary(x);
}