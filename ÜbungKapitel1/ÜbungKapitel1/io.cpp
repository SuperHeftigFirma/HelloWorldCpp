#include "stdafx.h"
#include <iostream>

int readNumber()
{
	int x;

	std::cout << "Bitte geben eine Zahl ein." << std::endl;
	std::cin >> x;

	return x;
}

void writeAnswer(int x)
{
	std::cout << "Die Summe der eingegebenen Zahlen ist: " << x << std::endl;

}