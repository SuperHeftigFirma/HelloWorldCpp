#include "stdafx.h"
#include <iostream>

struct Fraction
{
	int zaehler;
	int nenner;
};

Fraction getFraction()
{
	int nenner;
	int zaehler;

	std::cout << "Gebe den Zaehler ein: ";
	std::cin >> zaehler;

	std::cout << "Gebe den Nenner ein: ";
	std::cin >> nenner;

	Fraction bruch{ zaehler, nenner };

	return bruch;
}

void multiplyFraction(Fraction f1, Fraction f2)
{

	std::cout << f1.zaehler << "/" << f1.nenner << " * " << f2.zaehler << "/" << f2.nenner << " = " << static_cast<float>(f1.zaehler * f2.zaehler) / (f1.nenner * f2.nenner) << "\n";

	/* std::cout << " " << f1.zeahler << "     " << f2.zeahler << "\n";
	std::cout << "--- * --- = " << static_cast<float>(f1.zeahler * f2.zeahler) / (f1.nenner * f2.nenner) << "\n";
	std::cout << " " << f1.nenner << "     " << f2.nenner << "\n"; */

	//std::cout << "Das Ergebnis der Multiplikation ist: " << static_cast<float>(f1.zeahler * f2.zeahler) / (f1.nenner * f2.nenner) << "\n";
}

void uebung3()
{
	Fraction f1;
	Fraction f2;

	std::cout << "Gebe einen ersten Bruch ein.\n";

	f1 = getFraction();

	std::cout << "Gebe einen zweiten Bruch ein.\n";

	f2 = getFraction();

	multiplyFraction(f1, f2);
}