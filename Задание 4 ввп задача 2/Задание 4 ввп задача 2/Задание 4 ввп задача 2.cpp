﻿#include <iostream>
using namespace std;
int main()
{
	float P, L, d;
	setlocale(LC_ALL, "Russian");
	P = 3.14;
	cout << "Введите диаметр:";
	cin >> d;
	L = P * d;
	cout << L;
	return 0;
}