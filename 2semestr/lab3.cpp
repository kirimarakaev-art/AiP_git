#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    /* инициализация массива */
    const int str = 10;
    const int row = 10;
    int mass[str][row] = {};
    for (int x = 0; x < str; x++)
    {
        for (int y = 0; y < row; y++)
    {
        mass[x][y] = (rand() % 200) - 100;
    }
    }

    /*  задание а */
    int nech[row] = {};

    for (int y = 0; y < row; y++)
    {
        for (int x = 0; x < str; x++)  
        {
            if (mass[x][y] % 2 != 0)
            {
                nech[y] = mass[x][y];
                break;
            }
        }
    }


    /* вывод массива */
    cout << "\n\nМиассив:\n\n";
    for (int x = 0; x < str; x++)
    {
        for (int y = 0; y < row; y++)
        {
        cout << mass[x][y]<< "\t";
        }
    cout <<"\n";
    }
    cout << "\n\nПервые нечетные элементы\n\n";
    /* вывод задания а */
    for (int x = 0; x < row; x++)
    {
        cout << nech[x] << "\t";
    }


    /* задание б */
    int posit[row] = {};

    for (int y = 0; y < row; y++)
    {
        for (int x = 0; x < str; x++)
        {
            if (mass[x][y] > 0)
            {
                posit[y] = mass[x][y];
            }
        }
    }
    /* вывод задания б */
    cout << "\n\nПоследние положительные элементы:\n\n";
    for (int x = 0; x < row; x++)
    {
        cout << posit[x] << "\t";
    }
}