#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    int sum;
    cout << "insert N: " << endl ;
    cin >> N;
    if(N <= 0)
    {
        cout << "N > 0!!!" << endl;
        return 0;
    }
    for (int i = 0; i <= N; i++)
    {
        sum += pow((N + i), 2);
    }
    cout << "result: " << sum << endl;
    return 0;
}