// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <stdafx.h>
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0, b = 0, frsta = 0;

	cout << "������� �������� A: ";
	cin >> a;
	cout << "������� �������� B: ";
	cin >> b;
	cout << "�������� B ��: " << b << " | �������� A ��: " << a << endl;
	frsta = a;
	a = b; 
	b = frsta;
	cout << "�������� B �����: " << b << " | �������� A �����: " << a << endl;
	system("pause");
    return 0;
}