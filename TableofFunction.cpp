#include <cmath>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");


    const int r_pass = 123;
    int count = 0;
    int pass;
    do {
        cout << "Get password: ";
        cin >> pass;
        count++;
    } while (pass != r_pass && count < 3);

    if (pass != r_pass && count == 3) {
        cout << "Password is not correct, attempts are over." << endl;
        system("pause");
        return 0; //выход из программы
    }
    cout << "Login successful, starting..." << endl;


    double Xn, Xk, Dx, a, b;
        cout << "Введи число (а)" << '\n';
            cin >> a;
        cout << "Введи число (b)" << '\n';
            cin >> b;
    do{
        cout << "Введи нижнее значение (Xn)" << '\n';
            cin >> Xn;
        cout << "Введи верхнее значение (Xk)" << '\n';
            cin >> Xk;
        cout << "Введи шаг (Dx)" << '\n';
            cin >> Dx;
    if ((Xn > Xk) || (Dx == 0) || (Dx > (Xk - Xn))) {
        cout << "Ошибка ввода данных!";
        return 0; //можно закомментировать, тогда будет цикл, который выполняется до тех пор, пока не будут введены корректные данные
    }
    } while ((Xk < Xn) || (Dx == 0) || (Dx > (Xk-Xn)));
        cout << setw(10) << "X" << "||" << setw(10) << "F(X)" << endl;
    for (int i = 0; i < 22; i++) cout << "-";
        cout << endl;
    for (double i = Xn; i < Xk; i += Dx) {
        cout.precision(3);//количество выводимых символов псоле запятой
        cout << setw(10) << i << "||" << setw(10) << cbrt(exp(a * i - b * sin(i))) << endl;
    }

    return 0;
}