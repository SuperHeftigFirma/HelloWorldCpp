#include "stdafx.h"
#include <iostream>

void uebung4()
{
	std::cout << "\n";

	int outer{ 1 };

	while (outer <= 5)
	{
		int inner{ 6 - outer };

		while (inner >= 1)
		{
			std::cout << inner-- << " ";
		}

		std::cout << "\n";
		++outer;
	}
}