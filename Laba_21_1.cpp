using namespace std;

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");
	int k, m, i;
	string S;
	k = 1;
	cout << "Введите строку: ";
	getline(cin, S);
	m = S.size();
	for (i = 1; i < m; i++) {
		if ((S[i] == ' ') & (S[i - 1] != ' ')) {
			k++;
		};
	};
	cout << "Слов в строке: " << k;
}