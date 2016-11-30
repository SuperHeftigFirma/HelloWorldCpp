#include "stdafx.h"
#include <iostream>

void uebung1()
{
	int smaller;
	int bigger;

	std::cout << "Gebe eine natuerliche Zahl ein: ";
	std::cin >> smaller;

	std::cout << "Gebe eine groessere natuerliche Zahl ein: ";
	std::cin >> bigger;

	if (smaller > bigger)
	{
		int temp;

		temp = smaller;

		smaller = bigger;
		bigger = temp;

		std::cout << "Glaub mal ja nicht, dass mir nicht aufgefallen ist, was du da tust!\n";
	} //temp dies here

	std::cout << "Die groessere Zahl lautet: " << bigger << "\n";
	std::cout << "Die kleinere Zahl lautet: " << smaller << "\n";

} //smaller and bigger die here