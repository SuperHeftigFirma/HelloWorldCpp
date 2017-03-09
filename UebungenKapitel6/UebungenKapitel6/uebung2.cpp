#include <iostream>
#include <utility>


void uebung2()
{
	const int arrayLength(9);
	const int array[arrayLength] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

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


}