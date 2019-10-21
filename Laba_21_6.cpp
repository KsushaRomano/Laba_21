using namespace std;

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i, m, k;
	string S;
	k = 0;
	cout << "Введите путь к файлу: ";
	getline(cin, S);
	m = S.size();
	for (i = 0; i < m; i++) {
		if (S[i] == 92) {
			k++;
		};
	};
	if (k == 1) {
		cout << char(92);
	}
	else {
		cout << "Имя последнего каталога: ";
		for (i = S.find_last_of(92, S.find_last_of(92) - 1) + 1; i < S.find_last_of(92); i++) {
			cout << S[i];
		};
	};
}