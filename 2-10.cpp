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
	
	cout << "Дано число: " << number << endl;
	int units = number % 10;
	int ten = number / 10;
	cout << "Десятков: " << ten << " | Единиц: " << units << endl;
	system("pause");
	return 0;
}
