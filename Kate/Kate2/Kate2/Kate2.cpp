// Kate2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	string s; // ���� ����� ������ ��������� ������
	ifstream file("inlet.txt"); // ����, �� �������� ������ 
	ofstream file2("outlet.txt"); // ���� ���� ����������
	while (getline(file, s)) { // ���� �� ��������� ����� ����� ������ ��������� ������ � ���������� s
		file2 << s << endl;
	}

	file2.close();
	file.close(); // ����������� ��������� ���� ��� �� �� ��������� ���


	system("pause");
	return 0;
}