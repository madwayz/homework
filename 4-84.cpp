#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*

ÇÀÄÀÍÈÅ 4.38

*/

int main()
{
	setlocale(0, "Russian");
	srand((unsigned)time(NULL));
	int array[] = {(rand() % 899 + 100), (rand() % 899 + 100), (rand() % 899 + 100), (rand() % 899 + 100) };
	int summ = 0;

	cout << "Äàíû ÷èñëà: " << array[0] << " | " << array[1] << " | " << array[2] << " | " << array[3] << endl;

	if (!(array[0] % 3)) summ += array[0]; cout << array[0] % 3 << endl;
	if (!(array[1] % 3)) summ += array[1]; cout << array[1] % 3 << endl;
	if (!(array[2] % 3)) summ += array[2]; cout << array[2] % 3 << endl;
	if (!(array[3] % 3)) summ += array[3]; cout << array[3] % 3 << endl;
	cout << summ << endl;


	system("pause");
	return 0;
}