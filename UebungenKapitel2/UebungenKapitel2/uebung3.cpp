#include "stdafx.h"
#include <iostream>
#include "constants.h"

double getHeight()
{
	double h;
	std::cout << "Gebe die anfaengliche Hoehe in Metern eines sich in Ruhe befindlichen Koerpers an, der dann unter Vernachlaessigung der Luftreibung zu Boden faellt: ";
	std::cin >> h;

	return h;
}

void printHeight(double h, int i)
{
	std::cout << "Nach " << i << " Sekunden betraegt die Hoehe des Koepers " << h << " m.\n";
}

double calculateNewHeight(double initialHeight, int i)
{
	double distanceFallen;
	distanceFallen = constants::g * i * i;

	return initialHeight - distanceFallen;
}

void uebung3()
{
	const double initialHeight = getHeight();

	int i = 0;

	double h;
	
	while ( ( h = calculateNewHeight(initialHeight, i) ) > 0)
	{
		printHeight(h, i);

		i++;
	}
}