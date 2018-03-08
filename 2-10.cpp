#include <stdafx.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


int main() 
{
	setlocale(0, "Russian");
	int number = 0;
	cout << "Введите двухзначное число: ";
	cin >> number;
	int count = log10(number) + 1;
	
	while (count != 2) 
	{
		cout << "[ОШИБКА!] Введите двухзначное целое число: ";
		cin >> number;
		int count = log10(number) + 1;
		if (count == 2)
		{
			int ten = number / 10;
			cout << "В числе " << number << " единиц " << number << " и десятков " << ten << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
