// Prob45_Triangular_pentagonal_and_hexagonal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//1533776805

#include "pch.h"
#include <iostream>

int main()
{
	unsigned long int tri = 1, pen = 1, hex = 1;
	for (tri = 286; tri <= 100000; tri++)
	{
		for (pen = 1; pen * (3 * pen - 1) / 2 < tri * (tri + 1) / 2; pen++);
		for (hex = 1; hex * (2 * hex - 1) < tri * (tri + 1) / 2; hex++);
		if (pen * (3 * pen - 1) / 2 == tri * (tri + 1) / 2 && hex * (2 * hex - 1) == tri * (tri + 1) / 2)
		{
			printf("\n%d", tri * (tri + 1) / 2);
			break;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
