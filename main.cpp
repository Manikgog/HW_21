#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // установка кодовой страницы на ввод текста
	srand(time(NULL));

	// Exercise 1.
	std::cout << "Exercise 1.\nCalculation of the arithmetic mean of two numbers.\n";
	/*
		Referring to the variables X and Y through pointers, 
	find the arithmetic mean of their values.
		Обращаясь к переменным X и Y через указатели
	найдите среднее арифметическое их значений.

	*/
	double x, y;
	double* px = &x;
	double* py = &y;
	std::cout << "Enter first number: ";
	std::cin >> *px;
	std::cout << "Enter second number: ";
	std::cin >> *py;
	std::cout << "The arithmetic mean of these two numbers is -> " << (*px + *py) / 2 << '\n';


	return 0;
}
