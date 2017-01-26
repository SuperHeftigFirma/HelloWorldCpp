// UebungenKapitel5.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "functions.h"


int main()
{
	int eingabe{ 1 };

	while (eingabe != 0)
	{
		std::cout << "\nHerzlich Willkommen zu den Uebungen aus dem Kapitel 5.\n";
		std::cout << "Bitte waehle:\n";
		std::cout << "(1) Taschenrechner V 2.0\n";
		std::cout << "(2) Tiere und ihre Beine\n";
		std::cout << "(0) Programm verlassen\n";
		std::cin >> eingabe;

		switch (eingabe)
		{
		case 1:
			uebung1();
			break;
		case 2:
			uebung2();
			break;
		}
	}


    return 0;
}

