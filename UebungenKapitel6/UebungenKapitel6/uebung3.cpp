#include <iostream>
#include <utility>


void uebung3()
{
	const int arrayLength(9);
	int array[arrayLength] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	std::cout << "Das Array array[] = { ";

	for (int index = 0; index < arrayLength; index++)
		std::cout << array[index] << " ";

	std::cout << "} soll sortiert werden.\n";
	std::cout << "\n";

	int userChoice{ 0 };

	while (userChoice < 1 || userChoice > 3)
	{
		std::cout << "Entscheide du! (1) Auf- oder (2) absteigend? ";
		std::cin >> userChoice;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
	}

	if (userChoice == 1)
	{
		for (int endIndex = arrayLength; endIndex >= 0; endIndex--)
		{
			for (int actualIndex = 0; actualIndex < endIndex - 1; actualIndex++)
			{
				if (array[actualIndex] > array[actualIndex + 1])
					std::swap(array[actualIndex], array[actualIndex + 1]);
			}
		}
	}
	else if (userChoice == 2)
	{
		for (int startIndex = 0; startIndex <=arrayLength; startIndex++)
		{
			for (int actualIndex = arrayLength - 1; actualIndex > startIndex + 1; actualIndex++)
			{
				if (array[actualIndex] < array[actualIndex - 1])
					std::swap(array[actualIndex], array[actualIndex - 1]);
			}
		}
	}
	

	std::cout << "Das sortierte Array lautet: array[] = { ";

	for (int index = 0; index < arrayLength; index++)
		std::cout << array[index] << " ";

	std::cout << "}\n";
	std::cout << "\n";
}