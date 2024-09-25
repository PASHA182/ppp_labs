/*
* Лабораторная работа №1
* Вариант №22
* Студент: Ившин П.В.
* Группа: ИТ-1
* Дата: 25.09.2024
* 
* Задача: Даны два натуральных числа N и D (N < D). 
* Найти десятичную дробь, 
* равную дроби 𝑁/D
* с точностью до двух знаков после запятой.
* Пример: N = 3, D = 7. Ответ: 0.43.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int N, D; float res;
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите D: ";
	cin >> D;
	if (N >= D)
		cout << "Числа должны соответствовать условию: N < D.";
	else if (D == 0)
		cout << "D не может быть равно 0.";
	else
	{
		res = float(N) / float(D);
		printf("%.2f", res);
		
	}

}