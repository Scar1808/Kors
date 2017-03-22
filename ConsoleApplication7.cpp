// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int tmp, arr[5];
	for (int k = 0; k < 5; k++)
	{
		cout << "Vvedite chislo" << endl;
		cin >> arr[k];
	}

	for (int i = 0; i < 5 - 1; ++i) // i - номер прохода
	{
		for (int j = 0; j < 5 - 1; ++j) {
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int k = 0; k < 5; k++) {
		cout << "Viviod chisel - " << arr[k] <<
			endl;
	}
	_getch();

    return 0;
}

