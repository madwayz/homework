#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*

ЗАДАНИЕ 11.19

*/

int main()
{
	setlocale(0, "Russian");
	srand((unsigned)time(NULL));
	int a = 0, b = 0, v = 0, g = 0, d = 0, e = 0, j = 0, sum = 0, k1 = 0, k2 = 0, s1 = 0, s2 = 0;
	int array[] = { 0, 0, 0, 0, 0, 0, 0 };
	int array_size = sizeof(array) / sizeof(int);

	while (!(k2 > k1) || !(s2 > s1)) {
		cout << "Условие: K2 > K1" << endl;
		cout << "Введите число K2: "; cin >> k2;
		cout << "Введите число K1: "; cin >> k1;
		cout << "\n";
		cout << "Условие: S2 > S1" << endl;
		cout << "Введите число S2: "; cin >> s2;
		cout << "Введите число S1: "; cin >> s1;
		system("cls");
	}

	array[0] = k1;
	array[1] = k2;
	array[2] = s1;
	array[3] = s2;

	for (int i = 4; i < array_size; i++) {
		array[i] = rand() % 89 + 10; 
	}

	for (int i = 0; i < 7; i++) {
		a += array[i];
		b *= array[i];
		v += pow(array[i], 2);
		if (i < 5) g += array[i];
		if (i < 3) d += array[0] + array[1];
		e += array[i] / array_size;
		if (i > 2 && i < 5) j += array[2] + array[3];
	}

	cout << "Даны числа: " << array[0] << " | " << array[1] << " | " << array[2] << " | " << array[3] << " | " << array[4] << " | " << array[5] << " | " << array[6] << endl << endl;
	cout << "Сумма всех элементов: " << a << endl;
	cout << "Произведение всех элементов: " << b << endl;
	cout << "Сумма квадратов всех элементов: " << v << endl;
	cout << "Сумма шести первых элементов: " << g << endl;
	cout << "Сумма элементов с K1 по K2: " << d << endl;
	cout << "Среднее арифметическое элементов всех элементов: " << e << endl;
	cout << "Среднее арифметическое  с S1 по S2: " << j << endl;


	system("pause");
	return 0;
}