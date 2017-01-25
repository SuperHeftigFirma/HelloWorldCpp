#include "stdafx.h"
#include <iostream>
#include <string>

std::string getName()
{
	std::string name;
	
	std::cin.ignore(32767, '\n');

	std::cout << "Gebe deinen kompletten Namen ein: ";
	std::getline(std::cin, name);

	return name;
}

int getAlter()
{
	int alter;

	std::cout << "Gebe dein Alter ein: ";
	std::cin >> alter;

	return alter;
}

void calculateYearsPerLetter(std::string name, int alter)
{
	std::cout << "Du heisst " << name << " und bist " << alter << " Jahre alt.\n";
	std::cout << "Das bedeutet, du hast pro Buchstaben in deinem Namen " << static_cast<float>(alter) / name.length() << " Jahre gelebt.\n";
}

void uebung2()
{
	std::string name;
	name = getName();

	int alter;
	alter = getAlter();

	calculateYearsPerLetter(name, alter);
}