// Задание 14 (Массивы)

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    /*string mass_arr[8]{

    };*/

    const int SIZE1 = 10;
    short arr1[SIZE1]{
        12, 78, 98, 73, 01, 83, 84, 81, 94, 81
    };
    cout << "Массив short: " << "\n";
    for (int i = 0; i < SIZE1; i++) {
        cout << arr1[i] << "\n";
    }
    cout << "\n";


    const int SIZE2 = 10;
    int arr2[SIZE2]{
        110, 115, 918, 671, 913, 741, 138, 191, 173, 818
    };
    cout << "Массив int: " << "\n";
    for (int i = 0; i < SIZE2; i++) {
        cout << arr2[i] << "\n";
    }
    cout << "\n";


    const int SIZE3 = 10;
    long arr3[SIZE3]{
        8312, 91229, 3219, 9432, 6122, 9545, 8732, 1122, 2438, 9123
    };
    cout << "Массив long: " << "\n";
    for (int i = 0; i < SIZE3; i++) {
        cout << arr3[i] << "\n";
    }
    cout << "\n";


    const int SIZE4 = 10;
    string arr4[SIZE4]{
        "asd", "zxc", "qwe", "ert", "utr", "ekh", "jfh", "lfo", "yeo", "iur"
    };
    cout << "Массив string: " << "\n";
    for (int i = 0; i < SIZE4; i++) {
        cout << arr4[i] << "\n";
    }
    cout << "\n";


    const int SIZE5 = 10;
    char arr5[SIZE5]{
        'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'o'
    };
    cout << "Массив char: " << "\n";
    for (int i = 0; i < SIZE5; i++) {
        cout << arr5[i] << "\n";
    }
    cout << "\n";


    const int SIZE6 = 10;
    float arr6[SIZE6]{
        3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 3.11
    };
    cout << "Массив float: " << "\n";
    for (int i = 0; i < SIZE6; i++) {
        cout << arr6[i] << "\n";
    }
    cout << "\n";


    const int SIZE7 = 10;
    double arr7[SIZE7]{
        3.12, 3.13, 3.14, 3.15, 3.16, 3.17, 3.18, 3.19, 3.21, 3.23
    };
    cout << "Массив double: " << "\n";
    for (int i = 0; i < SIZE7; i++) {
        cout << arr7[i] << "\n";
    }
    cout << "\n";

    const int SIZE8 = 10;
    bool arr8[SIZE8]{
        1, 0, 1, 0, 1, 0, 1, 0, 1, 0
    };
    cout << "Массив bool: " << "\n";
    for (int i = 0; i < SIZE8; i++) {
        cout << arr8[i] << "\n";
    }

    return 0;
}
