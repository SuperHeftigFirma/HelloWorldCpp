#include <iostream>
#include <utility>


void uebung2()
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

	for (int startIndex = 0; startIndex < arrayLength; startIndex++)
	{
		int minMaxIndex = startIndex;

		for (int actualIndex = startIndex; actualIndex < arrayLength; actualIndex++)
		{
			if (userChoice == 1 && array[minMaxIndex] > array[actualIndex])
				minMaxIndex = actualIndex;
			else if (userChoice == 2 && array[minMaxIndex] < array[actualIndex])
				minMaxIndex = actualIndex;
		}

		std::swap(array[startIndex], array[minMaxIndex]);
	}

	std::cout << "Das sortierte Array lautet: array[] = { ";

	for (int index = 0; index < arrayLength; index++)
		std::cout << array[index] << " ";

	std::cout << "}\n";
	std::cout << "\n";
}