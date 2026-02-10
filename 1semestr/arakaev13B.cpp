#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

bool smpl(int num);
int h(int n);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введите n: ";
    cin >> n;

    cout << "Количество простых чисел от 1 до " << n << ": " << h(n) << endl;
    return 0;
}

int h(int n)
{
    if (n <= 1) 
    {
        return 0;
    }
    return h(n - 1) + smpl(n);
}

bool smpl(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2;i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}