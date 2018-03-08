#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*

ЗАДАНИЕ 4.28 (в)

*/

int main()
{
	setlocale(0, "Russian");
	srand(time(NULL));
	int number = rand() % 8999 + 1000;
	int num_1 = number / 1000;
	int num_2 = (number / 100) % 10;
	int num_3 = (number / 10) % 10;
	int num_4 = number % 10;
	int proizv = num_1 * num_2 * num_3 * num_4;
	cout << "Дано число: " << number << endl;
	if (proizv == 0) {
		cout << "Произведение чисел равно 0 и не может быть вычислено" << endl;
	}
	else {
		if (proizv % 4 == 0) cout << "Число " << number << " кратно произведению его цифр" << endl;
		else cout << "Число " << number << " не кратно произведению его цифр" << endl;
	}
	
	system("pause");
	return 0;
}
