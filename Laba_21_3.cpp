using namespace std;

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, m, i;
	string S;
	char p;
	cout << "Введите строку: ";
	getline(cin, S);
	m = S.size();
	p = S[0];
	for (i = 1; i < m; i++) {
		if ((S[i] != ' ') & (S[i - 1] == ' ')) {
			p = S[i];
		};
		if ((S[i] != ' ') & (S[i - 1] != ' ') & (S[i] == p)) {
			S[i] = '.';
		};
	};
	cout << "Измененная строка: " << S;
}
