//Задание 3

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "<#> Калькулятор";
    cout << "\n\n<1> Сложение";
    cout << "\n<2> Вычитание";
    cout << "\n<3> Умножение";
    cout << "\n<4> Деление";
    cout << "\n<5> Деление без остатка";

    int operation;
    cout << "\n\nВыберите операцию: ";
    cin >> operation;

    cout << "\nВведите первое число: ";
    int firstNum;
    cin >> firstNum;
    cout << "\nВведите второе число: ";
    int secondNum;
    cin >> secondNum;

    cout << endl;

    if (operation == 1) {
        cout << "Результат: " << firstNum + secondNum;
    }
    else if (operation == 2) {
        cout << "Результат: " << firstNum - secondNum;
    }
    else if (operation == 3) {
        cout << "Результат: " << firstNum * secondNum;
    }
    else if (operation == 4) {
        cout << "Результат: " << firstNum / secondNum;
    }
    else if (operation == 5) {
        cout << "Результат: " << firstNum % secondNum;
    }
    else {
        cout << "Нет такого значения :с";
    }


    int _; cin >> _;

    return 0;
}
