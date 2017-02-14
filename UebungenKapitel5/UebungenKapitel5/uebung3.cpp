#include "stdafx.h"
#include <iostream>

void uebung3()
{
	std::cout << "Hier wird nun die ASCII-Tabelle der Buchstabeln a bis z ausgegeben:\n";

	char count{ 65 };

	while (count < 91)
	{
		std::cout << static_cast<int>(count) << " : " << count << "    " << static_cast<int>(count + 32) << " : " << static_cast<char>(count + 32) << "\n";
		++count;
	}
}