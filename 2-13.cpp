#include <stdafx.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

long Reverse(long x)
{
	long y = 0;
	while (x)
	{
		y = y * 10 + x % 10;
		x /= 10;
	}
	return y;
}

int main()
{
	setlocale(0, "Russian");
	int number = 0;
	cout << "������� ���������� �����: " << endl;
	cin >> number;
	int count = log10(number) + 1;

	while(count != 3)
	{
		cout << "[������!] ������� ���������� ����� �����: ";
		cin >> number;
		int count = log10(number) + 1;
		if(count == 3)
		{
			cout << "��������� �����: " << Reverse(number) << endl;
			break;
		}
	}

	system("pause");
	return 0;
}