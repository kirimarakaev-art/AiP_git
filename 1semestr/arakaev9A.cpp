#include <iostream>
#include <windows.h>
#include <cmath> 
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    double num1 = 0.0;
    double num2 = 0.0;
    cout << "enter number 1: " << endl;
    cin >> num1;
    cout << "enter number 2: " << endl;
    cin >> num2;
    if (((pow(num1, 2) + 3 * num2)) >= 0) {
        if (num2 != 0) {
            cout << "the result is:" << endl;
            cout << (((num1 * -1) + sqrt(pow(num1, 2) + 3 * num2))) / 2 * num2 << endl;
        }
        else {
            cout << "нет решений" << endl;
        }
    }
    else{
        cout << "нет решений" << endl;
    }
    cout << "press enter to exit";
    return 0;
}