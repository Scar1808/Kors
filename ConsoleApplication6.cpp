// ConsoleApplication6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;


int main()//���������� �������
{
	int arr[5];
	int tmp;
	for (int k = 0; k < 5; k++)
	{
		cout << "Vvedite chislo" << endl;
		cin >> arr[k];

	}
	for (int i = 0; i < 5; ++i)
	{
		int pos = i;
		tmp = arr[i];
		for (int j = i + 1; j < 5; ++j) {
			if (arr[j] < tmp)
			{
				pos = j;
				tmp = arr[j];
			}
		}
		arr[pos] = arr[i];
		arr[i] = tmp; // ������ ������� ���������� � a[i]
	}
	for (int k = 0; k < 5; k++)
	{
		cout << "Vivod Chisel = " << arr[k] << endl;
	}
	_getch();
	return 0;
}
