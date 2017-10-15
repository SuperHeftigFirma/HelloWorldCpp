#include <iostream>
#include <string>

void uebung5()
{
	const std::string names[] = { "Alex", "Betty", "Dave", "Emily", "Fred", "Greg", "Holly" };

	std::cout << "Deine Aufgabe ist es einen Namen aus einer geheimen Liste zu erraten!\n";
	std::string userName;
	std::cin >> userName;

	bool found{ false };

	for (const auto &name : names)
	{
		if (name == userName)
		{
			found = true;
			break;
		}
	}

	if (found)
		std::cout << "Der Name " << userName << " war in der Liste! Hurray!!\n";
	else
		std::cout << "Der Name " << userName << " war NICHT in der Liste! So sad!\n";
}