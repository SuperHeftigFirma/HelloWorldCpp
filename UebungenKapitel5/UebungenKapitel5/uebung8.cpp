#include "stdafx.h"
#include <iostream>
#include <random>

int generateRandomNumber(int min, int max)
{
	std::random_device rd;
	std::mt19937 mersenne(rd());

	static const double factor{ (static_cast<double>(max) - static_cast<double>(min) + 1) / (static_cast<double>(mersenne.max()) + 1) };

	return static_cast<int>(mersenne() * factor);
}

void playGame()
{
	std::cout << "Wir spielen ein Spiel: Ich denke mir eine Zahl zwischen 0 und 100 aus und du hast sieben Versuche, um sie zu erraten.\n";
	int solution{ generateRandomNumber(0, 100) };

	for (int iii{ 1 }; iii <= 7; iii++)
	{
		int guess;
		do
		{
			std::cout << "Dein " << iii << ". Versuch: ";
			std::cin >> guess;

			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32767, '\n');
				std::cout << "Das war eine falsche Angabe, versuche es erneut.\n";
			}
			else
			{
				std::cin.ignore(32767, '\n');
				break;
			}
		} while (true);
		
		if (guess > solution)
		{
			std::cout << "Deine Zahl " << guess << " ist zu hoch.\n";
		}
		else if (guess < solution)
		{
			std::cout << "Deine Zahl " << guess << " ist zu niedrig.\n";
		}
		else
		{
			std::cout << "Deine Zahl " << guess << " ist RICHTIG!\n";
			std::cout << "HERZLICHEN GLUECKWUNSCH!\n";
			return;
		}
	}

	std::cout << "Leider hast du alle dene Versuche aufgebraucht.\n";
	std::cout << "Du LOOSER!\n";
}

bool playAgain()
{
	while (true)
	{
		std::cout << "Willst du nochmal spielen? [j/n]: ";
		char input;
		std::cin >> input;

		std::cin.ignore(32767, '\n');

		if (input == 'n')
		{
			return false;
		}
		else if (input == 'j')
		{
			return true;
		}
		else
		{
			std::cout << "Da lief was verkehrt. Versuch es nochmal.\n";
		}
	}
}


void uebung8()
{
	do
	{
		playGame();
	} while (playAgain());

	std::cout << "Vielen Dank, dass du gespielt hast und ich hoffe, du hattest viel, ja sehr viel Spaß sogar.\n";
}