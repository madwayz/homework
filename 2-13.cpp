#include <stdafx.h>
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;


int main() 
{
	setlocale(0, "Russian");
	srand(time(0));
	int number = rand() % 999 + 100;
	
	cout << "���� �����: " << number << endl;
	int units = number % 10;
	int tens =  (number / 10) % 10;
	int hundreds = number / 10 / 10;
	cout << "�����: " << units << tens << hundreds << endl;
	system("pause");
	return 0;
}
