#include <iostream>
using namespace std;

double sum(double num1, double num2, char symb) {
        
    if ((num2 == 0 && symb == '/') || (num2 == 0 && symb == '^')) {
            cout << "Error";
    }

    switch (symb) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        case '%': return (int)num1 % (int)num2;
        case '!': return ((num1 + num2) * 2);
        case '?': return ((num1 - num2) / 2);
        case '@': return ((num1 * num2) + 1000);
        case '^': return (((int)num1 / (int)num2) % 10);
        default: cout << "no found sign";
    }

}

int main()
{
    system("color 9");

    setlocale(0, "");

    int num1;
    cout << "Enter first number: ";
    cin >> num1;
    //system("cls");

    int num2;
    cout << "Enter second number: ";
    cin >> num2;
    //system("cls");

    char symb;
    cout << "Enter the sign: ";
    cin >> symb;
    system("cls");

    cout << "\x1b[32m Result: " << sum(num1, num2, symb);

    int _; cin >> _;
}
