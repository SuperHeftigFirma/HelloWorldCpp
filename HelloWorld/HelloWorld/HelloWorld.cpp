// HelloWorld.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

int add(int x, int y)
{
	return x + y;
}


int main()
{
	std::cout << "Hello, World!" << std::endl;

	int x;
	int y;

	std::cout << "Gebe eine erste Zahl ein." << std::endl;
	std::cin >> x;

	std::cout << "Gebe eine zweite Zahl ein." << std::endl;
	std::cin >> y;

	std::cout << "Die Summe aus " << x << " und " << y << " ist " << add(x, y) << "." << std::endl;

	return 0;
}


