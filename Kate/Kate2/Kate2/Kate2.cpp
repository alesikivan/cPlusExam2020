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
	string s; // сюда будем класть считанные строки
	ifstream file("inlet.txt"); // файл, из которого читаем 
	ofstream file2("outlet.txt"); // файл куда записывает
	while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную s
		file2 << s << endl;
	}

	file2.close();
	file.close(); // обязательно закрываем файл что бы не повредить его


	system("pause");
	return 0;
}