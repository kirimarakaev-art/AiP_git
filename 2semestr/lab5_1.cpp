#include<iostream>
#include<windows.h>
using namespace std;

int sumary(int *ptr,int len)
{
    int sum = 0;
    for(int i{0}; i < len; i++)
    {
        sum += *(ptr + i);
    }
    return sum;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    const int n = 3;
    int mass[n];
    for(int i{0}; i < n; i++)
    {
        *(mass + i) = rand() % 100;
        cout << *(mass + i) << endl;
    }
    cout << sumary(mass, n);
}