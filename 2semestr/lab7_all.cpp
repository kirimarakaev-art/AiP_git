#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int len;
    cin >> len;
    int *mass = new int[len];
    for (int i = 0; i < len ;i++) mass[i] = rand() % 10;
    
    delete [] mass;
    return 0;
}