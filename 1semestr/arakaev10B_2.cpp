#include <iostream>
#include <windows.h>
using namespace std;

enum weekdays
{
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
    SATURDAY = 6,
    SUNDAY = 7
};
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int mondayInt = static_cast<int>(MONDAY);
    int tuesdayInt = static_cast<int>(TUESDAY);
    int wednesdayInt = static_cast<int>(WEDNESDAY);
    int thursdayInt = static_cast<int>(THURSDAY);
    int fridayInt = static_cast<int>(FRIDAY);
    int saturdayInt = static_cast<int>(SATURDAY);
    int sundayInt = static_cast<int>(SUNDAY);

    cout << "MONDAY преобразован в: " << mondayInt << endl;
    cout << "TUESDAY преобразован в: " << tuesdayInt << endl;
    cout << "WEDNESDAY преобразован в: " << wednesdayInt << endl;
    cout << "THURSDAY преобразован в: " << thursdayInt << endl;
    cout << "FRIDAY преобразован в: " << fridayInt << endl;
    cout << "SATURDAY преобразован в: " << saturdayInt << endl;
    cout << "SUNDAY преобразован в: " << sundayInt << endl;

    return 0;
}