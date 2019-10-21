using namespace std;

#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i;
	string S;
	cout << "Введите полное имя файла: ";
	getline(cin, S);
	cout << "Имя файла: ";
	for (i = S.find_last_of(92) + 1; i < S.find_last_of('.'); i++){
		cout << S[i];
	};
}
