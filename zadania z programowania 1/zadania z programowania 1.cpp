// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* 	Program, ktory dla dlugosci 3 bokow trojkata a, b i c wprowadzonych z klawiatury
* 	sprawdza, czy tworza one trojkat prostokatny (zakladamy, ze a > 0, b > 0, c > 0).
*/

#include "stdafx.h"
#include <iostream>
#include <conio.h>

int main()
{
	int a, b, c;

	std::cout << "Program, ktory dla dlugosci 3 bokow trojkata a, b i c \nsprawdza, czy tworza one trojkat prostokatny" << std::endl;
	std::cout << std::endl;

	std::cout << "Podaj a ";
	std::cin >> a;
	std::cout << "Podaj b ";
	std::cin >> b;
	std::cout << "Podaj c ";
	std::cin >> c;

	if ((a*a + b*b) == (c*c))
	{
		std::cout << "Boki o dlugosciach a= " << a << " b= " << b << " i c= " << c << std::endl;
		std::cout << "tworza trojkat rownoboczny";
	}
	else
	{
		std::cout << "Boki o dlugosciach a= " << a << " b= " << b << " i c= " << c << std::endl;
		std::cout << "nie tworza trojkatu rownobocznego";
	}

	_getch();

	return 0;
}