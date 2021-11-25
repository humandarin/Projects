//Задание 4

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

    string month1 = "Январь"; string month2 = "Февраль";
    string month3 = "Март"; string month4 = "Апрель";
    string month5 = "Май"; string month6 = "Июнь";
    string month7 = "Июль"; string month8 = "Август";
    string month9 = "Сентябрь"; string month10 = "Октябрь";
    string month11 = "Ноябрь"; string month12 = "Декабрь";

    cout << "[1] Январь\n"; cout << "[2] Февраль\n";
    cout << "[3] Март\n"; cout << "[4] Апрель\n";
    cout << "[5] Май\n"; cout << "[6] Июнь\n";
    cout << "[7] Июль\n"; cout << "[8] Август\n";
    cout << "[9] Сентябрь\n"; cout << "[10] Октябрь\n";
    cout << "[11] Ноябрь\n"; cout << "[12] Декабрь\n";

    short num;

    cout << "Введите номер месяца: ";
    cin >> num;

    switch (num)
    {
        case 1: cout << "Выбран месяц: " << month1;
            break;
        case 2: cout << "Выбран месяц: " << month2;
            break;
        case 3: cout << "Выбран месяц: " << month3;
            break;
        case 4: cout << "Выбран месяц: " << month4;
            break;
        case 5: cout << "Выбран месяц: " << month5;
            break;
        case 6: cout << "Выбран месяц: " << month6;
            break;
        case 7: cout << "Выбран месяц: " << month7;
            break;
        case 8: cout << "Выбран месяц: " << month8;
            break;
        case 9: cout << "Выбран месяц: " << month9;
            break;
        case 10: cout << "Выбран месяц: " << month10;
            break;
        case 11: cout << "Выбран месяц: " << month11;
            break;
        case 12: cout << "Выбран месяц: " << month12;
            break;
        default: cout << "Такого месяца нет :с";
			  break;
    }

    short _; cin >> _;

    return 0;
}