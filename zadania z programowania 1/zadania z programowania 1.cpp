// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* Program ktory oblicza objetosc kuli o promieniu r.
* wartosc promienia wprowadzamy z klawiatury. Nalezy przyjac, ze r jest typu double.
* Dla zmiennych r oraz objetosc nalezy przyjac wyswietlania ich na ekranie z dokladnoscia do 2 miejsc po kropce.
*/

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <conio.h>

int main()
{
	double r, objetosc;

	std::cout << "progra wyswietla objetosc kuli o promieniu r " << std::endl;
	std::cout << "podaj promien kuli ";
	std::cin >> r;
	objetosc = 4 * M_PI*r*r*r / 3;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "objetosc kuli o promieniu r = " << r << " wynosi " << objetosc << std::endl;
	_getch();

	return 0;
}