#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/*

������� �4.25 (�,�)

*/

int main()
{
	setlocale(0, "Russian");
	int x, y;

	cout << "������� ����� X...\n";
	cin >> x;
	cout << "������� ����� Y...\n";
	cin >> y;

	cout << "����� X: " << x << " | ����� Y: " << y << endl << endl << endl;

	if (x >= 0 && (pow(x, 2) + pow(y, 2)) <= 1) {
		cout << "����� � ������������ (" << x << ", " << y << ") ��� ������� �4.8 (�) ����������� �������������� �������" << endl;
	}
	else cout << "����� � ������������ (" << x << ", " << y << ") ��� ������� �4.8 (�) �� ����������� �������������� �������" << endl;

	if (x <= 0 && (pow(x, 2) + pow(y, 2)) >= 2) {
		cout << "����� � ������������ (" << x << ", " << y << ") ��� ������� �4.8 (�) ����������� �������������� �������" << endl;
	}
	else cout << "����� � ������������ (" << x << ", " << y << ") ��� ������� �4.8 (�) �� ����������� �������������� �������" << endl;

	system("pause");
	return 0;
}

