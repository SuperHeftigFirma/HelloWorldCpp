// UebungenKapitel2.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "menu.h"



int main()
{
	int x;
	std::cout << "Waehle eine Uebung aus: \n";
	std::cout << "1. Primzahlen. \n";
	std::cout << "2. Taschenrechner. \n";
	std::cin >> x;

	if (x == 1)
		uebung1();
	if (x == 2)
		uebung2();

	return 0;
}

