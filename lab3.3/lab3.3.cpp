// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= R)
        y = -R;
    else
        if (R < x && x <= R)
            y = R + sqrt(R * R - x * x);
        else
            if (R < x && x <= 6)
                y = (R / 6) * x;
            else
                y = 0;

    cout << "y = " << y << endl;
    cin.get();
    return 0;
}