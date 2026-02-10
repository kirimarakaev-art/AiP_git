#include <iostream>
#include <windows.h>
#include <cmath> 
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    double num1 = 0.0;
    double num2 = 0.0;
    setlocale(LC_ALL, "RUSSIAN");
    cout << "enter number 1: " << endl;
    cin >> num1;
    cout << "enter number 2: " << endl;
    cin >> num2;
    if (((num1 + num2) / 3) >= 0) {
        cout << (sqrt((num1 + num2) / 3) + sin(num2)) << endl;
    }
    else {
        cout << "нет решений" << endl;
    }
    cout << "press enter to exit";
    return 0;
}