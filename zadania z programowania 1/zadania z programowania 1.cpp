// zadania z programowania 1.cpp : Defines the entry point for the console application.
/*
* Program, który wyświetla na ekranie komputera wartość predefiniowanej stałej "pi" = 3.14...
* Należy przyjąć format prezentowania tej stalej, oznaczanej w jezyku C++ jako M_PI,
* z dokladnoscia do 5 miejsc po kropce dziesietnej.
*/

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
#include <conio.h>

int main()
{
	std::cout << "progra wyswietla wartosc predefiniowanej stalej \"pi\" " << std::endl;
	std::cout << "z dokladnoscia do 5 miejsc po przecinku" << std::endl;
	std::cout << "pi = " << std::fixed << std::setprecision(5) << M_PI << std::endl;
	_getch();

	return 0;
}