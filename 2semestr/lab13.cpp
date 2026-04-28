#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите строку -> ";
    string s;
    string s_new = "";

    getline(cin, s);

    for (int it = 0; it < s.length(); it++) {
        if (s[it] != ' ') {
            s_new += s[it];
        }
    }
    cout << "Новая строка: " << s_new << endl;

    return 0;
}