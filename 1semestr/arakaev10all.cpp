#include<iostream>
using namespace std;
int main()
{
	int code;
	char ch;
	cout << "type characters and press Enter: " << endl;
	cin >> ch;
	code = (int)ch;
	cout << "type characters and press Enter: " << code << endl;
	cout << "the previous character is: " << code - 1 << endl;
	cout << "the next character is: " << code + 1 << endl;
	cout << "press Enter to exit" << endl;
	cin.get();
	cin.get();
}