#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

/*

ЗАДАНИЕ П4.19; П4.20 (а)

*/

int main()
{
	setlocale(0, "Russian");
	int x, y;

	cout << "Введите число X: ";
	cin >> x;
	cout << "Введите число Y: ";
	cin >> y;

	cout << "Число X: " << x << " | Число Y: " << y << endl << endl << endl;

	if ((pow(x, 2) + pow(y, 2)) >= 2 && y <= 4 && y <= pow(x, 2)) {
		cout << "M(" << x << ", " << y << ") для задачи п4.19 принадлежит заштрихованной области" << endl;
	}
	else cout << "M(" << x << "," << y << ") для задачи п4.19 не принадлежит заштрихованной области" << endl;

	if ((0 <= y <= 8) && (0 <= x <= 8) && ((pow(x, 2) + pow(y, 2)) >= 5)) {
		cout << "M(" << x << "," << y << ") для задачи П4.20 (а) принадлежит заштрихованной области" << endl;
	}
	else cout << "M(" << x << "," << y << ") для задачи П4.20 (а) не принадлежит заштрихованной области" << endl;

	system("pause");
	return 0;
}

