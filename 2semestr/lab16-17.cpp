#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

template <typename T>
T findmax(T* row, int size) {
    T max = row[0];
    for (int i = 1; i < size; i++) {
        if (row[i] > max) max = row[i];
    }
    return max;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(static_cast<unsigned int>(time(0)));

    const int rows = 3, cols = 5;

    int masInt[rows][cols];
    cout << "Массив int" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            masInt[i][j] = rand() % 200 - 100;
            cout << masInt[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Макс. в 1-й строке (index 0): " << findmax(masInt[0], cols) << endl << endl;

    char masChar[rows][cols];
    cout << "Массив char" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            masChar[i][j] = 'a' + rand() % 26;
            cout << masChar[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Макс. во 2-й строке (index 1): " << findmax(masChar[1], cols) << endl << endl;

    string masString[rows][cols] = {
        {"а", "аа", "ааа", "ааб", "ааавс"},
        {"дом", "лес", "река", "гора", "небо"},
        {"aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "тор", "массив", "цикл", "шаблон"}
    };

    cout << "Массив string" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << masString[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Макс. в 3-й строке (index 2): " << findmax(masString[2], cols) << endl;

    return 0;
}
