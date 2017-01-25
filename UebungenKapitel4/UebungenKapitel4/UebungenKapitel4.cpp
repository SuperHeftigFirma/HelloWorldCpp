// UebungenKapitel4.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "functions.h"


int main()
{
	int x{ 1 };

	while (x > 0)
	{
		std::cout << "\n";
		std::cout << "Waehle einen Menuepunkt aus:\n";
		std::cout << "(1) Welche Zahl ist groesser?\n";
		std::cout << "(2) Alter und Namen\n";
		std::cout << "(3) Bruchmultiplikation\n";
		std::cout << "(4) MONSTER!\n";
		std::cout << "(0) Programm beenden.\n";
		std::cin >> x;
		std::cout << "\n";

		if (x == 1)
			uebung1();
		if (x == 2)
			uebung2();
		if (x == 3)
			uebung3();
		if (x == 4)
			uebung4();
	}

    return 0;
}

