
// double array

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int  rows, colums, max, add, num;
	cout << "Enter count of rows: "; cin >> rows; 
	cout << "Enter count of colums: "; cin >> colums; 

	int **arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[colums];
	}

	
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
			arr[i][j] = -5 + rand() % (2 - (-5) + 1);
	}

	
	max = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
	}

	
	cout << "\n";
	cout << "USER'S MATRIX:\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colums; j++)
			cout << " " << arr[i][j];
		cout << endl;
	}

	cout << "Max element: " << max << endl;


	num = 0;
	add = 0;
	int key = 0;
	cout << endl << "Enter num: ";
	cin >> num;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < num - 1; j++)
			cout << arr[i][j] << " ";
		for (int j = 0; j < 1; j++)
			arr[i][j] = max;
		for (int j = 0; j < num + 1; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete arr[i];
	}

	delete[] arr;

	system("pause");
    return 0;
}
