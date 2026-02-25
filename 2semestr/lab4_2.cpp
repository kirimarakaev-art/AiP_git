#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int x = 21;
    int* px = &x;
    (*px % 2) == 0 ? cout << "число чётное": cout << "число нечётное";
}