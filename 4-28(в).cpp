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
	int number = rand() % 899 + 100;
	int num_2 = (number / 10) % 10;
	int num_3 = number % 10;;
	cout << "Дано число: " << number << endl;
	if (num_2 > num_3) cout << "Число " << num_2 << " больше числа " << num_3 << endl;
	else cout << "Число " << num_3 << " больше числа " << num_2 << endl;

	system("pause");
	return 0;
}
