#include "stdafx.h"
#include <iostream>
#include <ctime>
#define n 10
using namespace std;

/*
	������� 11.52
*/

int main() {
	setlocale(LC_ALL, "Russian");
	srand((unsigned)time(NULL));
	int arr[n];
	int a, b;

	cout << "������� ����� A: ";
	cin >> a;
	cout << "������� ����� B: ";
	cin >> b;
	system("cls");

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 + 50;
		cout << " [" << arr[i] << "] ";
	}
	cout << endl << "�: ";
	for (int i = 0; i < n; i++) {
		if ((arr[i] % 10) == 4) {
			arr[i] /= 2;
			cout << " [" << arr[i] << "] ";
		}
	}

	cout << endl << endl << "�: ";
	for (int i = 0; i < n; i++) {
		if ((arr[i] % 2))
			pow(arr[i], 2);
		else
			arr[i] -= 2;

		cout << " [" << arr[i] << "] ";
	}

	cout << endl << endl << "�: ";
	for (int i = 0; i < n; i++) {
		
		if (!(arr[i] % 2)) {
			arr[i] += a;
		}

		if (!(i % 2)) {
			arr[i] -= b;
		}

		cout << " [" << arr[i] << "], ";
	}
	system("pause");
	return 0;
}