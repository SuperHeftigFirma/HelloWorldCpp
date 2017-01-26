#include "stdafx.h"
#include <iostream>
#include <string>


void calculatePrint(char rechenzeichen, int zahl1, int zahl2)
{
	switch (rechenzeichen)
	{
	case '+':
		std::cout << zahl1 << " + " << zahl2 << " = " << zahl1 + zahl2 << "\n";
		break;
	case '-':
		std::cout << zahl1 << " - " << zahl2 << " = " << zahl1 - zahl2 << "\n";
		break;
	case '*':
		std::cout << zahl1 << " * " << zahl2 << " = " << zahl1 * zahl2 << "\n";
		break;
	case '/':
		std::cout << zahl1 << " / " << zahl2 << " = " << zahl1 / zahl2 << "\n";
		break;
	case '%':
		std::cout << zahl1 << " % " << zahl2 << " = " << zahl1 % zahl2 << "\n";
		break;
	}
}

void uebung1()
{
	char rechenzeichen;
	int zahl1;
	int zahl2;

	std::cout << "\nWillkommen beim Taschenrechner V2.0\n";
	std::cout << "Waehle zunaechst die Rechenoperation (+, -, *, /, %):";
	std::cin >> rechenzeichen;
	std::cout << "Gebe die erste Zahl ein: ";
	std::cin >> zahl1;
	std::cout << "Gebe die zweite Zahl ein: ";
	std::cin >> zahl2;

	calculatePrint(rechenzeichen, zahl1, zahl2);
}