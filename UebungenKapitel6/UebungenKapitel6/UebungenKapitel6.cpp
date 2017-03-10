#include <iostream>
#include "functions.h"


int main()
{

	int userInput{ 0 };

	do
	{
		std::cout << "Herzlich Willkommen zu den Uebungen des sechsten Kapitels!\n";
		std::cout << "Waehlen sie doch einen Menuepunkt aus.\n";
		std::cout << "(1) Arrrrays\n";
		std::cout << "(2) Selection Sort\n";
		std::cout << "(3) Bubble Sort\n";
		std::cout << "(0) Programm beenden\n";

		std::cin >> userInput;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');

			std::cout << "Ungueltige Eingabe, versuche es erneut!\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');

			if (userInput == 0)
				break;
			else
			{
				switch (userInput)
				{
				case 1:
					uebung1();
					break;
				case 2:
					uebung2();
					break;
				case 3:
					uebung3();
					break;
				}
			}
		}
	} while (userInput =! 0);

	return 0;
}

