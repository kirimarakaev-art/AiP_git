#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    const char* words[] = {
        "C++", "is", "one", "of", "the", 
        "world's", "most", "popular", "programming", "languages"
    };
    int n = sizeof(words) / sizeof(words[0]);

    for (int i = 0; i < n / 2; i++) {
        const char* temp = words[i];
        words[i] = words[n - 1 - i];
        words[n - 1 - i] = temp;
    }

    cout << "Массив после перестановки:" << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }
    cout << endl;
    return 0;
}