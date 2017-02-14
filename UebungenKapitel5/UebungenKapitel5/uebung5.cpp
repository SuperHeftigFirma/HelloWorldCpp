#include "stdafx.h"
#include <iostream>

void uebung5()
{
	std::cout << "\n";

	int outer{ 1 };

	while (outer <= 5)
	{
		int spacer{ 1 };

		while (spacer <= 5 - outer)
		{
			std::cout << "  ";
			++spacer;
		}

		int numbers{ outer };

		while (numbers >= 1)
		{
			std::cout << numbers << " ";
			--numbers;
		}

		std::cout << "\n";

		++outer;
	}
}