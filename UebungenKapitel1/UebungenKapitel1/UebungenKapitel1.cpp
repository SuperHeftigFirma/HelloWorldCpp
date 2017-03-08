// UebungenKapitel1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <iostream>
#include "io.h"


int main()
{
	int x;
	int y;

	x = readNumber();
	y = readNumber();

	writeAnswer(x + y);

    return 0;
}

