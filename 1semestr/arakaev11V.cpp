#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    int sum = 0;
    cout << "числа от 300 до 600, сумма делителей которых кратна 10: "<< endl;
    for(int i = 300;i <= 600; i++)
    {
        for (int x = 2; x < i/2; x++)
        {
            if (i % x == 0)
            {
                sum += x;
            }
        }
        if (sum % 10 == 0)
        {
            cout << i << endl;
        }
        sum = 0;
    }
}