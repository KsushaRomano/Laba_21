using namespace std;

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i, m, j;
	string S, I;
	cout << "Введите строку: ";
	getline(cin, S);
	j = 0;
	m = S.size();
	I = S;
	for (i = 0; i < m; i++)
	{
		if ((i % 10 == 1) || (i % 10 == 3) || (i % 10 == 5) || (i % 10 == 7) || (i % 10 == 9)) {
			S[j] = I[i];
			j++;
		};
	};
	for (i = (m - 1); i >= 0; i--) {
		if (i % 2 == 0) {
			S[j] = I[i];
			j++;
		};
	};
	cout << "Зашифрованная строка: " << S;
}