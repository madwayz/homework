#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/*

������� �4.19; �4.20 (�)

*/

int main()
{
	setlocale(0, "Russian");
	int x, y;

	cout << "������� ����� X: ";
	cin >> x;
	cout << "������� ����� Y: ";
	cin >> y;

	cout << "����� X: " << x << " | ����� Y: " << y << endl << endl << endl;

	if ((pow(x, 2) + pow(y, 2)) >= 2 && y <= 4 && y <= pow(x, 2)) {
		cout << "M(" << x << ", " << y << ") ��� ������ �4.19 ����������� �������������� �������" << endl;
	}
	else cout << "M(" << x << "," << y << ") ��� ������ �4.19 �� ����������� �������������� �������" << endl;

	if ((0 <= y <= 8) && (0 <= x <= 8) && ((pow(x, 2) + pow(y, 2)) >= 5)) {
		cout << "M(" << x << "," << y << ") ��� ������ �4.20 (�) ����������� �������������� �������" << endl;
	}
	else cout << "M(" << x << "," << y << ") ��� ������ �4.20 (�) �� ����������� �������������� �������" << endl;

	system("pause");
	return 0;
}

