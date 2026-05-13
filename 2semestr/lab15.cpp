#include <iostream>
#include <windows.h>

using namespace std;

int fib(int x){
    if(x <= 1) return x;
    return fib(x - 1) + fib(x - 2);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Введите число." << endl;
    cin >> n;
    cout <<  n <<" элемент фибоначчи: " << fib(n - 1) << endl;

    return 0;
}