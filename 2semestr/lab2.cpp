#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    const int n = 5;
    float m[n]  = {10, 10, 11, 8, 5};
    
    cout << "задание a) - Умножить на 2:" << endl;

    int i = 0;

    while(i < 5)
    {
        m[i] *= 2;
        cout << m[i] << endl;
        i++;
    }

    i = 0;

    int A;
    cout << "Введите число A" << endl;
    cin >> A;
    cout << "задание б) - Уменьшить на А:" << endl;
    while(i < 5)
    {
        m[i] -= A;
        cout << m[i] << endl;
        i++;
    }


    i = 0;
    float x =  m[0];
    cout << "задание в) - Разделить на 1 элемент" << endl;
    while(i < 5)
    {
        m[i] = m[i] / x;
        cout <<  m[i] << endl;
        i++;
    }

    return 0;

}