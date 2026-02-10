#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char x;
	unsigned int a = 0;
	cout << "введите символ\n";
	cin.get(x);
	a = x;
	cout << "ASCII код этого символа: " << a;
}