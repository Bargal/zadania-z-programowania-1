// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* 	Program oblicza reszte dla dwoch liczb calkowitych a=37 i b = 11.
* 	Nalezy wykorzystac automatyczna detekcje typow dla zmiennych a i b.
*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>

int main()
{
	auto a = 37, b = 11;

	std::cout << "Program oblicza reszte dla dwoch liczb calkowitych 37 i 11. " << std::endl;

	std::cout << "\nReszta " << a << " dzielone przez " << b << " rowna sie " << a % b << std::endl;
	_getch();

	return 0;
}