#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*

ЗАДАНИЕ 4.38

*/

int main()
{
	setlocale(0, "Russian");
	int x = 3, y = 2;
	int x2 = 4, y2 = -2;
	
	if (x > 3 && y > 2)
		cout << "а) Точка попадает в область I";
	else cout << "а) Точка не попадает в область I";
	
	if (x < 4 && y < -2)
	system("pause");
	return 0;
}
