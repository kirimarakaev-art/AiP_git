#include <iostream> 
#include <string> 
#include <windows.h>

using namespace std;

int main()
{ 
  SetConsoleOutputCP(CP_UTF8);
 struct car
 {
  string Brand;
  string Model;
  int Year;
  int Сar_mileage;
  string Color;
 };
 car car[10];

 int i = 0;
 string flag = "none";
 int min_probeg = 1000;
 float sum = 0;
 int year;
 do
 {
  cout << "введите марку автомобиля: " << endl;
  cin >> car[i].Brand;
  cout << "введите модель автомобиля: " << endl;
  cin >> car[i].Model;
  cout << "введите год выпуска автомобиля: " << endl;
  cin >> car[i].Year;
  cout << "введите пробег автомобиля: " << endl;
  cin >> car[i].Сar_mileage;
  cout << "введите цвет автомобиля: " << endl;
  cin >> car[i].Color;
  i++;
  cout << "продолжить?\n чтобы выйти введите quit. " << endl;
  cin >> flag;
 } while (flag != "quit");
 int x = 0;
 while(x < i)
 {
  if (car[x].Сar_mileage < min_probeg)
  {
   min_probeg = car[x].Сar_mileage;
  }
  x++;
 }
 x = 0;
 cout << "укажите год:" << endl;
 cin >> year;
 while (x <= i)
 {
  if (year == car[x].Year)
  {
   sum += car[x].Сar_mileage;
  }
  x++;
 }
 cout << "минимальный пробег:\n " << min_probeg << endl;
 cout << "средний пробег автомобилей " << year << " года:\n " << sum / (x - 1) << endl;
}