﻿using namespace std;

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");
	int k, m, i, min;
	string S;
	k = 0;
	cout << "Введите строку: ";
	getline(cin, S);
	m = S.size();
	min = m;
	for (i = 0; i < m; i++) {
		if (S[i] != ' ') {
			k++;
		};
		if ((S[i] == ' ') || (i == m - 1)) {
			if ((k != 0) & (k < min)) {
				min = k;
			};
			k = 0;
		};
	};
	cout << "Длина самого короткого слова: " << min;
}