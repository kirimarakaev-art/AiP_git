#include<iostream>

using namespace std;
bool IsPrime(int n);
int main()
{
    int n;
    int sum = 0;
    cout << "введите числа:" << endl;
    for(int i = 1;i <= 10 ;i++)
    {
        cout << "n" << i << ": ";
        cin >> n;
        if(IsPrime(n))
        {
            sum += 1;
        }
    }
    cout << "кол-во простых чисел: " << sum << endl;
}

bool IsPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for(int i = 2;i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}