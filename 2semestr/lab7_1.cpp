#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int m = 4;
    int n = 4;
    int *mass = new int[m * n];
    for(int *q = mass; q != mass + (m * n); q++)
    {
        *q = rand() % 10;
        cout << *q << "\t";
    }

    cout << endl;
    int min = 99999;
    int str = 1;
    int num = 1;
    
    for(int *q = mass; q < mass + (m * n);)
    {
        int x = 0;
        while(x < n)
        {
            if(*q <= min)
            {
                min = *q;
                num = str;
            }
            x++;
            q++;
        }
        str++;
    }
    
    for(int *q = mass + m * (num - 1); q != mass + m * num; q++)
    {
        cout << *q << "\t";
    }
    delete [] mass;
    return 0;
}