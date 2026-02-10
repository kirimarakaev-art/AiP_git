#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int i = 0;
	char st[6];
	char ch;
	cout << "введите строку: " << endl;
	cin >> st;
	ch = st[0];
	st[0] = st[4];
	st[4] = ch;
	cout << "result: \n" << st;
	cin.get();
	cin.get();
	return 0;
}