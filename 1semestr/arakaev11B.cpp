
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    double N = 3000.0;
    int i = 0;
    int p;
    cout << "введите процент %: " << endl;
    cin >> p;
    if (p <= 0 || p >= 7)
    {
        cout << "Не соответствует условию";
        return 1;
    }
    while (N <= 4000)
    {
        N += N * p / 100;
        i++;
    }
    cout << "Кол-во месяцев: " << i << endl;
}
