// UebungenKapitel3.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
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
		std::cout << "(1) Gerade oder Ungerade Zahlen\n";
		std::cout << "(2) Dezimal-zu-Binaer-Konverter\n";
		std::cout << "(0) Programm beenden.\n";
		std::cin >> x;
		
		if (x == 1)
			uebung1();
		if (x == 2)
			uebung2();
	}

    return 0;
}

