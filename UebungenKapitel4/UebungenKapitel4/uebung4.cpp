#include "stdafx.h"
#include <iostream>
#include <string>


enum class MonsterType
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};

void printMonster(Monster monster)
{
	std::cout << "Hinter der Tuer erwartet dich ein";

	if (monster.type == MonsterType::OGRE)
		std::cout << " Oger";
	if (monster.type == MonsterType::DRAGON)
		std::cout << " Drachen";
	if (monster.type == MonsterType::ORC)
		std::cout << " Ork";
	if (monster.type == MonsterType::GIANT_SPIDER)
		std::cout << "e grosse Spinne";
	if (monster.type == MonsterType::SLIME)
		std::cout << " Schleim";

	std::cout << " namens " << monster.name << ". Das Monster hat " << monster.health << " Leben.\n";
}

void uebung4()
{
	std::cout << "Oh maechtiger Kellerabenteuerer!\n";
	std::cout << "\n";
	std::cout << "Vor euch befinden sich gleich drei verschlossene Tueren, doch ihr musst dich für eine von ihnen entscheiden.\n";
	std::cout << "Hinter Allen sind maechtige Kreaturen eingekerkert.\n";
	std::cout << "Waehlet weise!\n";

	Monster monster1{ MonsterType::OGRE, "Torg", 145 };
	Monster monster2{ MonsterType::SLIME, "Blurp", 23 };
	Monster monster3{ MonsterType::DRAGON, "Eragon", 350 };

	int wahl{ 1 };
	while (wahl > 0)
	{
		std::cout << "\n";
		std::cout << "(1).Tuer\n";
		std::cout << "(2).Tuer\n";
		std::cout << "(3).Tuer\n";
		std::cout << "(0) zurueck zum Hauptmenue\n";
		std::cout << "Eure Wahl, Mylord: ";
		std::cin >> wahl;
		std::cout << "\n";

		if (wahl == 1)
			printMonster(monster1);
		if (wahl == 2)
			printMonster(monster2);
		if (wahl == 3)
			printMonster(monster3);
	}



}