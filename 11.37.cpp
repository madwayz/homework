#include "stdafx.h"
#include <iostream>
#include <ctime>
#define n 10
using namespace std;

/*
	Задание 11.37
*/

int main() {
	setlocale(LC_ALL, "Russian");
	srand((unsigned)time(NULL));
	int arr[n];

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 + 50;
		cout << " [" << arr[i] << "] ";
	}
	
	cout << "А: ";
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2)
			cout << " [" << arr[i] << "] ";
	}

	cout << "Б: ";
	for (int i = 0; i < n; i++) {
		if ((arr[i] % 10) == 0) {
			cout << " [" << arr[i] << "] ";
		}
	}

	system("pause");
	return 0;
}