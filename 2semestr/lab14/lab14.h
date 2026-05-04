#include <iostream>
#include <windows.h>
using namespace std;
bool is_Simple(int x){
    for(int i = 2; i < x; i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}