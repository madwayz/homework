#include <stdafx.h>
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;


int main() 
{
	setlocale(0, "Russian");
	srand(time(0));
	int number = rand() % 99 + 10;
	
	cout << "���� �����: " << number << endl;
	int units = number % 10;
	int ten = number / 10;
	cout << "��������: " << ten << " | ������: " << units << endl;
	system("pause");
	return 0;
}
