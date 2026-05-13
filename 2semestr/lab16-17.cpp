#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;
template <typename T>
T findmax(T &ptr, int i){
    T max;
    for(T elem : ptr[i]){
        if(elem > max){
            max = elem;
        }
    };
    return 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    srand(time(0));
    const int len = 5;
    const int row = 5;
    int mas[len][row] = {};
    for (int x = 0; x < len; x++)
    {
        for (int y = 0; y < row; y++)
    {
        mas[x][y] = (rand() % 200) - 100;
    }
    }
    cout << "Массив:" << endl;
    for (int x = 0; x < len; x++)
    {
        for (int y = 0; y < row; y++)
        {
        cout << mas[x][y]<< "\t";
        }
    cout <<"\n";
    }
   // int x = findmax(mas, 3);
    return 0;
}