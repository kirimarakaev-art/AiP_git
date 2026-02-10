#include<iostream>
using namespace std;
int main()
{
	float x;
	float x1;
	char y;
    char y1;
	cout << "введите число типа float: " << endl;
	cin >> x;
	cout << "введите переменную типа char: " << endl;
	cin >> y;
    x1 = y;
    y1 = x;
    cout << "float => char: \n" << x1 << endl;
    cout << "char => float: \n" << y1 << endl;
	cin.get();
	cin.get();
	return 0;
}