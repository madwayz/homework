/*#include "stdafx.h"
#include <iostream>
#include <cstdlib>


		/*

		Задание 66
		
		*/


using namespace std;

const int N = 5;
int main() {
	setlocale(0, "Ru");
	int a[N];
	int i, k, s;
	for (i = 0; i < N; i++)
		cin >> a[i]; */

	k = -1;
	for (i = 0; i < N; i++)
		if (a[i] < 40)
			if (a[i] > k) k = a[i]; // Ищем максимальное значение < 40

	s = 10000 / k;  // Множитель для всех чисел
	for (i = 0; i < N; i++) {
		if (a[i] < 40) a[i] *= s;
		printf("[%d] ", a[i]);
	}
/*
	system("pause");
	return 0;
}*/