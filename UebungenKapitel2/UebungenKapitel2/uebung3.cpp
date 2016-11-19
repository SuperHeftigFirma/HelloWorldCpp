#include "stdafx.h"
#include <iostream>
#include "constants.h"

double getHight()
{
	double h;
	std::cout << "Gebe die anfaengliche Hoehe in Metern eines sich in Ruhe befindlichen Koerpers an, der dann unter Vernachlaessigung der Luftreibung zu Boden faellt: ";
	std::cin >> h;

	return h;
}

void printHight(double h, int i)
{
	std::cout << "Nach " << i << " Sekunden betraegt die Hoehe des Koepers " << h << " m.\n";
}

double calculateNewHight(double initialHeight, int i)
{
	double distanceFallen;
	distanceFallen = constants::g * i * i;

	return initialHeight - distanceFallen;
}

void uebung3()
{
	const double initialHeight = getHight();

	int i = 0;

	double h;
	
	while ( ( h = calculateNewHight(initialHeight, i) ) > 0)
	{
		printHight(h, i);

		i++;
	}
}