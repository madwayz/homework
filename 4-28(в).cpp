#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/*

������� 4.28 (�)

*/

int main()
{
	setlocale(0, "Russian");
	srand(time(NULL));
	int number = rand() % 899 + 100;
	int num_2 = (number / 10) % 10;
	int num_3 = number % 10;;
	cout << "���� �����: " << number << endl;
	if (num_2 > num_3) cout << "����� " << num_2 << " ������ ����� " << num_3 << endl;
	else cout << "����� " << num_3 << " ������ ����� " << num_2 << endl;

	system("pause");
	return 0;
}
