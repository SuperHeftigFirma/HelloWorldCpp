#include <iostream>
#include <string>

void sortArray(std::string *names, int Arraylength)
{
	for (int endIndex = Arraylength; endIndex >= 0; endIndex--)
	{
		bool swapped{ false };

		for (int actualIndex = 0; actualIndex < endIndex - 1; actualIndex++)
		{
			if (names[actualIndex] > names[actualIndex + 1])
			{
				std::swap(names[actualIndex], names[actualIndex + 1]);
				swapped = true;
			}
		}

		if (!swapped)
			break;
	}
}

void uebung4()
{
	int arrayLength{ 0 };

	while (arrayLength < 1)
	{
		std::cout << "Wie viele Namen willst du eingeben? ";
		std::cin >> arrayLength;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
	}

	std::string *names = new std::string[arrayLength];

	for (int i = 0; i <= arrayLength - 1; i++)
	{
		std::cout << "Gebe den " << i+1 << ". Namen ein: ";
		std::cin >> names[i];
	}

	std::cout << "Nun werden die Namen sortiert:\n";

	sortArray(names, arrayLength);

	for (int i = 0; i <= arrayLength - 1; i++)
		std::cout << "Name #" << i + 1 << ": " << names[i] << "\n";

	delete[] names;
	names = nullptr;

}