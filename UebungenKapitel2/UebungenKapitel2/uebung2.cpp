#include "stdafx.h"
#include <iostream>


double getDouble()
{
	double x;
	std::cout << "Gib eine Fliesskommazahl ein: ";
	std::cin >> x;

	return x;
}

char getOperator()
{
	char op;
	std::cout << "Welche Rechenoperation (+, -, *, /) soll ausgefuehrt werden? ";
	std::cin >> op;

	return op;
}

double printResult(double x, double y, char op)
{
	if (op == '+')
		return x + y;
	if (op == '-')
		return x - y;
	if (op == '*')
		return x * y;
	if (op == '/')
		return x / y;
}

void uebung2()
{
	double x = getDouble();
	double y = getDouble();

	char op = getOperator();

	std::cout << "Das Ergebnis ist: " << x << " " << op << " " << y << " = " << printResult(x, y, op) << "\n";
}