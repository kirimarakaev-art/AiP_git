#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    const int n = 3;
    float mass[n];
    cout << "Массив:" << endl;
    for(int i{0}; i < n; i++)
    {
        *(mass + i) = rand()%100;
        cout << *(mass + i) << endl;
    }
    int fst = *mass;
    cout << endl;
    int A;
    cout << "Введите число А:" << endl;
    cin >> A;
    cout << endl;

    
    cout<< "Массив * 2" << endl;
    for(int i{0}; i < n; i++)
    {
        *(mass + i) = *(mass + i)*2;
        cout << *(mass + i) << endl;
    }


    cout<< "Массив - А:" << endl;
    for(int i{0}; i < n; i++)
    {
        *(mass + i) = *(mass + i) - A;
        cout << *(mass + i) << endl;
    }


    cout<< "Массив / первый элемент:" << endl;
    for(int i{0}; i < n; i++)
    {
        *(mass + i) = *(mass + i) / fst;
        cout << *(mass + i) << endl;
    }
}