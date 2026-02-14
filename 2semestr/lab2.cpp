#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    //SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "russian");
    const int n = 100;
    float m[n] = {};
    for (int q = 0; q < n; q++)
    {
        m[q] = rand() % n;
    }


    float m1[n] = {};
    for (int q = 0; q < n; q++)
    {
        m1[q] = m[q];
    }
    float m2[n] = {};
    for (int q = 0; q < n; q++)
    {
        m2[q] = m[q];
    }
    float m3[n] = {};
    for (int q = 0; q < n; q++)
    {
        m3[q] = m[q];
    }

    int i = 0;
    cout << "Массив:" << endl;

    while (i < n)
    {
        cout << m[i] << endl;
        i++;
    }
    i = 0;

    cout << "задание a) - Умножить на 2:" << endl;
    
    while (i < n)
    {
        m1[i] *= 2;
        cout << m1[i] << endl;
        i++;
    }
    i = 0;

    int A;
    cout << "Введите число A" << endl;
    cin >> A;
    cout << "задание б) - Уменьшить на А:" << endl;
    while (i < n)
    {
        m2[i] -= A;
        cout << m2[i] << endl;
        i++;
    }


    i = 0;
    float x = m[0];
    cout << "задание в) - Разделить на 1 элемент" << endl;
    while (i < n)
    {
        m3[i] = m3[i] / x;
        cout << m3[i] << endl;
        i++;
    }

    return 0;
    
}