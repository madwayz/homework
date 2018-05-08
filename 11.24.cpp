#include "stdafx.h"
#include <iostream>
#include <ctime>
#define n 20
using namespace std;

/*
	Задание 11.37
*/

int main() {
	setlocale(LC_ALL, "Russian");
	srand((unsigned)time(NULL));
	int arr[n], sum;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 + 50;
		cout << " [" << arr[i] << "] ";
	}
	
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	printf("Общее сопротивление цепи: ", sum);
	system("pause");
	return 0;
}