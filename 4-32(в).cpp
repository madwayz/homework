#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*

������� 4.32 (�)

*/

int main()
{
	setlocale(0, "Russian");
	srand(time(NULL));
	int number = rand() % 8999 + 1000;
	int num_1 = number / 1000;
	int num_2 = (number / 100) % 10;
	int num_3 = (number / 10) % 10;
	int num_4 = (number % 100) % 10;
	int mltpctn = num_1 * num_2 * num_3 * num_4;
	cout << number << endl << num_1 << endl << num_2 << endl << num_3 << endl << num_4 << endl << endl;
	if ((mltpctn % 4) == 0 && mltpctn != 0) {
		cout << "����� " << mltpctn << " ������� �� 4 ��� �������." << endl;
	}
	else if (mltpctn == 0) cout << "����� ����� 0, ������� �� ����� ���� ���������." << endl;
	else cout << "����� " << mltpctn << " �� ������� �� 4 ��� �������." << endl;
	system("pause");
	return 0;
}
