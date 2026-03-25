#include <iostream>
#include <windows.h>
using namespace std;

struct item
{
char name [10];
item *next;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    return 0;
}