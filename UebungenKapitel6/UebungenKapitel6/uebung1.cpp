#include <iostream>

void uebung1()
{
	const int arrayLength(9);
	int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

	std::cout << "Die Elemente des Arrays lauten:\n";

	for (int i = 0; i < arrayLength; i++)
	{
		std::cout << "array[" << i << "] = " << array[i] << "\n";
	}

	std::cout << "\n";
	std::cout << "Aber halt! Ich kann noch mehr.\n";

	while (true)
	{
		std::cout << "Gebe doch mal eine Zahl zwischen 1 und 9 ein: ";
		int userEingabe{ 0 };
		std::cin >> userEingabe;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}

		if (userEingabe > 0 && userEingabe < 10)
		{
			for (int i = 0; i < arrayLength; i++)
			{
				if (array[i] == userEingabe)
				{
					std::cout << "array[" << i << "] = " << array[i] << "\n\n";
					break;
				}
			}
			break;
		}
	}
	
}