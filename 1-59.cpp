// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <stdafx.h>
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0, b = 0, frsta = 0;

	cout << "Введите значение A: ";
	cin >> a;
	cout << "Введите значение B: ";
	cin >> b;
	cout << "Значение B до: " << b << " | Значение A до: " << a << endl;
	frsta = a;
	a = b; 
	b = frsta;
	cout << "Значение B после: " << b << " | Значение A после: " << a << endl;
	system("pause");
    return 0;
}