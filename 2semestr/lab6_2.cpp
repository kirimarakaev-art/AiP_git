/*#include <iostream>
#include <windows.h>
using namespace std;
struct Point
{
    int x, y;
};
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Point p;
    Point* ptr = &p;
    ptr->x = rand() % 11;
    ptr->y = rand() % 11;
    cout << ptr->x << endl;
    cout << ptr->y << endl;
}*/

#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
struct Point
{
    int x, y;
};
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(static_cast<unsigned int>(time(0)));
    Point p;
    Point* ptr = &p;
    ptr->x = rand() % 11;
    ptr->y = rand() % 11;
    cout << ptr->x << endl;
    cout << ptr->y << endl;
    return 0;
}