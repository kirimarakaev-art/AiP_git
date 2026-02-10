#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char a = ' ';
	char b;
	cout << "введите символ:\n";
	cin.get(b);
	if (a == b) {
		cout <<"символ является пробелом";
	}
	else {
		cout << "символ не является пробелом";
	}
}