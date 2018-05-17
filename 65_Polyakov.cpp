/*#include "stdafx.h"
#include <iostream>
#include <cstdlib>


		Задание 65


using namespace std;

const int N = 5;
int main() {
	setlocale(0, "Ru");
	int a[N];
	int i, k, s;
	for (i = 0; i < N; i++)
		cin >> a[i];*/

	k = -1;
	for (i = 0; i < N; i++)
	{
		if ((a[i] % 2) != 0)
		{
			if (a[i] > k) {
				k = a[i]; // Максимальное нечётное число
			}
		}
		cout << a[i] << " ";
	}
	cout << endl;

	for (i = 0; i < N; i++)
	{
		if ((a[i] % 2) != 0) {
			a[i] -= k - 1;
			if (a[i] == k)
			{
				a[i] = 1;
			}
		}
		else {
			a[i] += 4;
		}
		cout << a[i] << " ";
	}
	cout << endl;
	/*system("pause");
	return 0;
}
*/