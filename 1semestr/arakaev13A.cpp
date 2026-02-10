#include <iostream>
#include <windows.h>
using namespace std;

int G(int n);
int T(int p, int q);

int main()
{
    //SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "russian");
    int p;
    int q;
    cout << "введите p и q" << endl;
    cin >> p >> q;
    if (p > q)
    {
        cout << "неверные данные" << endl;
        return 0;
    };
    int res = T(p, q);
    cout << "Результат: " << res << endl;
    return 0;
}

int G(int n)
{
        if ((n % 10 > 5) || (n == 0))
    {
        return n / 10;
    }
    else
    {
        return G(n / 10);
    }
}

int T(int p, int q)
{
    int sum = 0;
    for (int i = p; i < q; i++)
    {
        sum += G(i);
    }
    return sum;
}