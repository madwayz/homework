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
	int number = rand() % 8999 + 1000;
	int num_1 = number / 1000;
	int num_2 = (number / 100) % 10;
	int num_3 = (number / 10) % 10;
	int num_4 = number % 10;
	int proizv = num_1 * num_2 * num_3 * num_4;
	cout << "���� �����: " << number << endl;
	if (proizv == 0) {
		cout << "������������ ����� ����� 0 � �� ����� ���� ���������" << endl;
	}
	else {
		if (proizv % 4 == 0) cout << "����� " << number << " ������ ������������ ��� ����" << endl;
		else cout << "����� " << number << " �� ������ ������������ ��� ����" << endl;
	}
	
	system("pause");
	return 0;
}
