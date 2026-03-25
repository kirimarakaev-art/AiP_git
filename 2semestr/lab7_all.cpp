#include <iostream>
#include <math.h>
#include <windows.h>
#include <ctime>

using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int m, n;
    cout << "Введите размер массива:" << endl; 
    cin >> m >> n;
    int **a = new int *[m];
    
    for (int i=0;i<m;i++)
    {
        a[i]= new int [n];
        for (int j=0;j<n;j++)
        {
            a[i][j]=rand()%100;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int min = **a;
    int count = 0;
    for (int j=0; j < m;j++)
    {
        for (int i=0;i<n;i++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                count = j;
            }
        }
       
    }
    cout << "Минимальный элемент массива: " << min << endl;
    cout << "Номер столбца: " << count << endl; 

    delete []a;
    return 0;
}