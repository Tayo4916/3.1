﻿// 3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int x, y;
    bool k;
    cout << "Введите икс и игрек: ";
    cin >> x >> y;
    k = (x >= 0) && (pow(y, 2) != 4);
    if (x > 0 && y > 0) {
        if (k) {
            cout << "Значение логического выражения: " << k << endl;
        }
        else
            cout << "Значение логического выражения: " << k << endl;
    }
    else if (((x < 0) || (x > 10)) && ((y < 0) || (y > 10))) {
        cout << "Введенные переменные не соответствуют диапазону.\n";
    }
    else if (x < 0 || x > 10) {
        cout << "Введенная переменная икс не соответствует диапазону.\n";
    }
    else if (y < 0 || y > 10) {
        cout << "Введенная переменная игрек не соответствует диапазону.\n";
    }  
}
