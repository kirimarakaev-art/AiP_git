#include <iostream>
#include <cmath>

using namespace std;


bool square(int num);
int main()
{
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "N не может быть <= 0!" << endl;
        return 1;
    }
    int x = 0;
    int num;
    
    cout << "Введите " << n << " целых чисел:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a" << i + 1 << ": ";
        cin >> num;
        if (square(num))
        {
            x++;
        }
    }
    cout << "Количество полных квадратов: " << x << endl;
    return 0;
}


bool square(int num)
{
    if (num < 0) {
        return false;
    }
    
    int q = sqrt(num);
    return q * q == num;
}