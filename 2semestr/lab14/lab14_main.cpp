#include <iostream>
#include <windows.h>
#include "lab14.h"


using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x = 4;
    if(is_Simple(x)){
        cout << "Число " << x << " пристое" << endl;
    }else{
        cout << "Число "<< x << " не является пристым" << endl;
    }

    return 0;
}