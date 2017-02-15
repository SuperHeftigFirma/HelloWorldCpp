#include "stdafx.h"
#include <iostream>

int sumTo(int x)
{
	int sum{ 0 };

	for (int iii = 1; iii <= x; iii++)
		sum += iii;

	return sum;
}

void uebung7()
{
	int input;
	std::cout << "Gebe eine natuerliche Zahl ein: ";
	std::cin >> input;

	std::cout << "Die Summe ueber alle Zahlen von 0 bis " << input << " betraegt: " << sumTo(input) << ".\n";
}