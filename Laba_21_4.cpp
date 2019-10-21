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
	k = 0;
	cout << "Введите строку: ";
	getline(cin, S);
	m = S.size();
	for (i = 0; i < m; i++) {
		if ((S[i] == 'а') || (S[i] == 'А') || (S[i] == 'о') || (S[i] == 'О') || (S[i] == 'у') || (S[i] == 'У') || (S[i] == 'е') || (S[i] == 'Е') || (S[i] == 'я') || (S[i] == 'Я') || (S[i] == 'ю') || (S[i] == 'Ю') || (S[i] == 'ё') || (S[i] == 'Ё') || (S[i] == 'ы') || (S[i] == 'И') || (S[i] == 'и') || (S[i] == 'э') || (S[i] == 'Э')) {
			k++;
		};
	};
	cout << "Количество гласных в строке: " << k;
}