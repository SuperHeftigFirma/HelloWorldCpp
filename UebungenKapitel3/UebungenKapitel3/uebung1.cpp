#include "stdafx.h"
#include <iostream>

int getInput()
{
	int input;

	std::cout << "Gebe eine natuerliche Zahle ein: ";
	std::cin >> input;

	return input;
}

bool isEven(int x)
{
	if (x % 2 == 0)
		return true;

	return false;
}

void uebung1()
{
	int input;

	input = getInput();

	if (isEven(input))
		std::cout << "Die eingegebene Zahl ist gerade!\n";
	else
		std::cout << "Die eingegebene Zahl ist ungerade!\n";
}