#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char x ;
    char* px = &x;
    cout << "Введите символ" << endl;
    cin.get(x);
    int y = *px;
    cout << y;
}