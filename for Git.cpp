#include <iostream>
using namespace std;

int clear() {
	return 0;
	system("cls");
}

int setBackgroundColor() {
	system("color 2");
	return 0;
}

int setTextColor() {
	system("color 3D");
	return 0;
}

int getSizeInt() {
	sizeof(int);
	return 0;
}

char getSizeChar() {
	sizeof(char);
	return 0;
}

double getSizeDouble() {
	sizeof(double);
	return 0;
}

float getSizeFloat() {
	sizeof(float);
	return 0;
}

bool getSizeBool() {
	sizeof(bool);
	return 0;
}

string Output() {
	cout << "Привет, я функция.";
	return " ";
}

int drawSquare() {
	int i = 0;
	while (i < 5)
	{
		short j = 0;
		while (j < 4)
		{
			cout << '#' << " ";
			j++;
		}
		cout << '#' << "\n";
		i++;
	}
	return 0;
}

int main()
{
	setlocale(0, "");

	cout << "[+] Программа \"Функции\"";
	cout << endl << endl;
	cout << "[1]  Очищение консоли" << "\n";
	cout << "[2]  Изменить цвет фона" << "\n";
	cout << "[3]  Изменить цвет текста консоли" << "\n";
	cout << "[4]  Вывод размера типа данных INT" << "\n";
	cout << "[5]  Вывод размера типа данных CHAR" << "\n";
	cout << "[6]  Вывод размера типа данных DOUBLE" << "\n";
	cout << "[7]  Вывод размера типа данных FOLAT" << "\n";
	cout << "[8]  Вывод размера типа данных BOOL" << "\n";
	cout << "[9]  Вывод  сообщения \"Привет, я функция\"" << "\n";
	cout << "[10] Вывод квадрата 5x5" << "\n";
	cout << endl;

	int numMenu;
	cout << "Введите пункт: ";
	cin >> numMenu;
	cout << endl;

	switch (numMenu)
	{
	case 1:
		clear();
		break;
	case 2:
		setBackgroundColor();
		break;
	case 3:
		setTextColor();
		break;
	case 4:
		getSizeInt();
		break;
	case 5:
		getSizeChar();
		break;
	case 6:
		getSizeDouble();
		break;
	case 7:
		getSizeFloat();
		break;
	case 8:
		getSizeBool();
		break;
	case 9:
		Output();
		break;

	case 10:
		drawSquare();
		break;

	default:
		cout << "Нет такого значения.";
		break;
	}


	int _; cin >> _;

	return 0;
}
