#include "stdafx.h"
#include <iostream>
#include <string>

enum class Animal
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH
};

std::string getAnimalName(Animal animal)
{
	switch (animal)
	{
	case Animal::CAT:
		return "Katze";
	case Animal::CHICKEN:
		return "Huhn";
	case Animal::DOG:
		return "Hund";
	case Animal::GOAT:
		return "Ziege";
	case Animal::OSTRICH:
		return "Strauss";
	case Animal::PIG:
		return "Schwein";
	
	default:
		return "getAnimalName(): unhandled Enumerator!";
	}
}

void printNumberOfLegs(Animal animal) 
{
	std::cout << "Das Tier " << getAnimalName(animal) << " hat ";

	switch (animal)
	{
	case Animal::CAT:
		std::cout << "vier";
		break;
	case Animal::CHICKEN:
		std::cout << "zwei";
		break;
	case Animal::DOG:
		std::cout << "vier";
		break;
	case Animal::GOAT:
		std::cout << "vier";
		break;
	case Animal::OSTRICH:
		std::cout << "zwei";
		break;
	case Animal::PIG:
		std::cout << "vier";
		break;

	default:
		std::cout << "printNumberofLges(): unhandled Enumerator!";
	}

	std::cout << " Beine.\n";
}

Animal getAnimal()
{
	int eingabe{ 0 };

	while (eingabe < 1 || eingabe > 6)
	{
		std::cout << "Waehle eines der Tiere:\n";
		std::cout << "(1) Schwein\n";
		std::cout << "(2) Huhn\n";
		std::cout << "(3) Ziege\n";
		std::cout << "(4) Katze\n";
		std::cout << "(5) Hund\n";
		std::cout << "(6) Strauss\n";
		std::cout << "\n";
		std::cin >> eingabe;

		switch(eingabe)
		{
		case 1:
			return Animal::PIG;
		case 2:
			return Animal::CHICKEN;
		case 3:
			return Animal::GOAT;
		case 4:
			return Animal::CAT;
		case 5:
			return Animal::DOG;
		case 6:
			return Animal::OSTRICH;
		}

	}

}

void uebung2()
{
	Animal animal = getAnimal();

	printNumberOfLegs(animal);
}