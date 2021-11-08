#include <iostream>
#include <ctime>
using namespace std;


int colorSymbX;
int colorSymbO;
int typegame;
int sizeField;
int firstMove;

int goPlayTest(int firstMove, int sizeField, int colorSymbX, int colorSymbO) {

	srand(time(NULL));

	const int ArrField = 25;
	int Field3[5][5]
	{
		1, 1, 1, 1, 1,
		1, 1, 1, 1, 1,
		1, 1, 1, 1, 1,
		1, 1, 1, 1, 1,
		1, 1, 1, 1, 1
	};

	int placeOnMapY;
	int placeOnMapX;

	system("cls");

	cout << "\x1b[104m<~> Тип игры\x1b[0m\n";
	cout << "<1> Человек + Человек\n";
	cout << "<2> Человек + Бот\n";
	cout << "Введите тип игры: ";
	cin >> typegame;
	if (typegame > 2) {
		typegame = rand() % 2;
		cout << "Тип игры будет: " << typegame << "\x1b[0m\n\n";
	}

	system("cls");

	//игра человек + человек
	if (typegame == 1) {

		//Поле 3х3
		if (sizeField == 1) {

			for (int k = 0; k < 9; k++) {

				Field3[0][3] = 2; Field3[3][0] = 2;
				Field3[1][3] = 2; Field3[3][1] = 2;
				Field3[2][3] = 2; Field3[3][2] = 2;
				Field3[3][3] = 2; Field3[3][3] = 2;
				Field3[0][4] = 2; Field3[4][0] = 2;
				Field3[1][4] = 2; Field3[4][1] = 2;
				Field3[2][4] = 2; Field3[4][2] = 2;
				Field3[3][4] = 2; Field3[4][3] = 2;

				//Первичный вывод
				if (firstMove % 2 == 1) {
					cout << "Сейчас ходит крестик\n\n";
				}
				else if (firstMove % 2 == 0) {
					cout << "Сейчас ходит нолик\n\n";
				}

				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (Field3[i][j] == 1) {
							cout << '#' << " ";
						}
						else if (Field3[i][j] % 2 == 1) {
							cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
						}
						else if (Field3[i][j] % 2 == 0) {
							cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
						}
					}
					cout << endl;
				}
				cout << "\nВведите номер строки: ";
				cin >> placeOnMapY;
				cout << "Введите номер столбца: ";
				cin >> placeOnMapX;

				//Защита от повторного ввода в клетку
				if (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {
					while (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {

						system("cls");

						if (firstMove % 2 == 1) {
							cout << "Сейчас ходит крестик\n\n";
						}
						else if (firstMove % 2 == 0) {
							cout << "Сейчас ходит нолик\n\n";
						}

						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								if (Field3[i][j] == 1) {
									cout << '#' << " ";
								}
								else if (Field3[i][j] % 2 == 1) {
									cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
								}
								else if (Field3[i][j] % 2 == 0) {
									cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
								}
							}
							cout << endl;
						}

						cout << "Эта клеточка уже занята, выберите другую: ";
						cout << "\nВведите номер строки: ";
						cin >> placeOnMapY;
						cout << "Введите номер столбца: ";
						cin >> placeOnMapX;
					}
				}
				else {
					cout << "\x1b[91mашипка!\x1b[0m\n";
				}

				//Замена элементов массива
				if (firstMove % 2 == 1) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 3;
					if ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
						while ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				else if (firstMove % 2 == 0) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 2;
					if ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
						while ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				system("cls");

				if (/*по диаг вправо*/(Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1) ||
					/*по диаг влево*/ (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[0][2] % 2 == 1 && Field3[0][2] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1))
				{

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mКрестики выиграли!\x1b[0m " << endl;
					}
				}
				else if (/*по диаг вправо*/(Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1) ||
					/*по диаг влево*/ (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[0][2] % 2 == 0 && Field3[0][2] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1))
				{

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНолики выиграли!\x1b[0m " << endl;
					}
				}
				else if (Field3[0][0] != 1 && Field3[0][1] != 1 && Field3[0][2] != 1 &&
					Field3[1][0] != 1 && Field3[1][1] != 1 && Field3[1][2] != 1 &&
					Field3[2][0] != 1 && Field3[2][1] != 1 && Field3[2][2] != 1)
				{

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНичья!\x1b[0m " << endl;
					}
				}
			}
		}
		//Поле 4х4
		else if (sizeField == 2)
		{
			Field3[0][4] = 2; Field3[4][0] = 2;
			Field3[1][4] = 2; Field3[4][1] = 2;
			Field3[2][4] = 2; Field3[4][2] = 2;
			Field3[3][4] = 2; Field3[4][3] = 2;

			for (int k = 0; k < 16; k++) {

				//Первичный вывод
				if (firstMove % 2 == 1) {
					cout << "Сейчас ходит крестик\n\n";
				}
				else if (firstMove % 2 == 0) {
					cout << "Сейчас ходит нолик\n\n";
				}

				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						if (Field3[i][j] == 1) {
							cout << '#' << " ";
						}
						else if (Field3[i][j] % 2 == 1) {
							cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
						}
						else if (Field3[i][j] % 2 == 0) {
							cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
						}
					}
					cout << endl;
				}
				cout << "\nВведите номер строки: ";
				cin >> placeOnMapY;
				cout << "Введите номер столбца: ";
				cin >> placeOnMapX;

				//Защита от повторного ввода в клетку
				if (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {
					while (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {

						system("cls");

						if (firstMove % 2 == 1) {
							cout << "Сейчас ходит крестик\n\n";
						}
						else if (firstMove % 2 == 0) {
							cout << "Сейчас ходит нолик\n\n";
						}

						for (int i = 0; i < 4; i++) {
							for (int j = 0; j < 4; j++) {
								if (Field3[i][j] == 1) {
									cout << '#' << " ";
								}
								else if (Field3[i][j] % 2 == 1) {
									cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
								}
								else if (Field3[i][j] % 2 == 0) {
									cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
								}
							}
							cout << endl;
						}

						cout << "Эта клеточка уже занята, выберите другую: ";
						cout << "\nВведите номер строки: ";
						cin >> placeOnMapY;
						cout << "Введите номер столбца: ";
						cin >> placeOnMapX;
					}
				}
				else {
					cout << "\x1b[91mашипка!\x1b[0m\n";
				}

				//Замена элементов массива
				if (firstMove % 2 == 1) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 3;
					if ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
						while ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				else if (firstMove % 2 == 0) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 2;
					if ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
						while ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				system("cls");

				if (/*по диаг вправо*/(Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1) ||
					/*по диаг влево*/ (Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[3][0] % 2 == 1 && Field3[3][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[0][3] % 2 == 1 && Field3[0][3] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 1 && Field3[3][0] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[3][0] % 2 == 1 && Field3[3][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1))
				{

					for (int i = 0; i < 4; i++) {
						for (int j = 0; j < 4; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mКрестики выиграли!\x1b[0m " << endl;
					}
				}
				else if (/*по диаг вправо*/(Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1) ||
					/*по диаг влево*/ (Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[3][0] % 2 == 0 && Field3[3][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[0][3] % 2 == 0 && Field3[0][3] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 0 && Field3[3][0] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[3][0] % 2 == 0 && Field3[3][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1))
				{

					for (int i = 0; i < 4; i++) {
						for (int j = 0; j < 4; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНолики выиграли!\x1b[0m " << endl;
					}
				}
				else if (Field3[0][0] != 1 && Field3[0][1] != 1 && Field3[0][2] != 1 && Field3[0][3] != 1 &&
					Field3[1][0] != 1 && Field3[1][1] != 1 && Field3[1][2] != 1 && Field3[1][3] != 1 &&
					Field3[2][0] != 1 && Field3[2][1] != 1 && Field3[2][2] != 1 && Field3[2][3] != 1 &&
					Field3[3][0] != 1 && Field3[3][1] != 1 && Field3[3][2] != 1 && Field3[3][3] != 1)
				{

					for (int i = 0; i < 4; i++) {
						for (int j = 0; j < 4; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНичья!\x1b[0m " << endl;
					}
				}

			}
		}
		//Поле 5х5
		else if (sizeField == 2) {
			for (int k = 0; k < 25; k++) {

				//Первичный вывод
				if (firstMove % 2 == 1) {
					cout << "Сейчас ходит крестик\n\n";
				}
				else if (firstMove % 2 == 0) {
					cout << "Сейчас ходит нолик\n\n";
				}

				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (Field3[i][j] == 1) {
							cout << '#' << " ";
						}
						else if (Field3[i][j] % 2 == 1) {
							cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
						}
						else if (Field3[i][j] % 2 == 0) {
							cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
						}
					}
					cout << endl;
				}
				cout << "\nВведите номер строки: ";
				cin >> placeOnMapY;
				cout << "Введите номер столбца: ";
				cin >> placeOnMapX;

				//Защита от повторного ввода в клетку
				if (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {
					while (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {

						system("cls");

						if (firstMove % 2 == 1) {
							cout << "Сейчас ходит крестик\n\n";
						}
						else if (firstMove % 2 == 0) {
							cout << "Сейчас ходит нолик\n\n";
						}

						for (int i = 0; i < 5; i++) {
							for (int j = 0; j < 5; j++) {
								if (Field3[i][j] == 1) {
									cout << '#' << " ";
								}
								else if (Field3[i][j] % 2 == 1) {
									cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
								}
								else if (Field3[i][j] % 2 == 0) {
									cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
								}
							}
							cout << endl;
						}

						cout << "Эта клеточка уже занята, выберите другую: ";
						cout << "\nВведите номер строки: ";
						cin >> placeOnMapY;
						cout << "Введите номер столбца: ";
						cin >> placeOnMapX;
					}
				}
				else {
					cout << "\x1b[91mашипка!\x1b[0m\n";
				}

				//Замена элементов массива
				if (firstMove % 2 == 1) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 3;
					if ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
						while ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				else if (firstMove % 2 == 0) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 2;
					if ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
						while ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				system("cls");

				if (/*по диаг вправо*/(Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1 && Field3[4][4] % 2 == 1 && Field3[4][4] > 1) ||
					/*по диаг влево*/ (Field3[0][4] % 2 == 1 && Field3[0][4] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[4][0] % 2 == 1 && Field3[4][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[0][4] % 2 == 1 && Field3[0][4] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[1][3] % 2 == 1 && Field3[1][4] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1 && Field3[2][4] % 2 == 1 && Field3[2][4] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 1 && Field3[3][0] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1 && Field3[3][4] % 2 == 1 && Field3[3][4] > 1) ||
					/*в 5 строку*/	  (Field3[4][0] % 2 == 1 && Field3[4][0] > 1 && Field3[4][1] % 2 == 1 && Field3[4][1] > 1 && Field3[4][2] % 2 == 1 && Field3[4][2] > 1 && Field3[4][3] % 2 == 1 && Field3[4][3] > 1 && Field3[4][4] % 2 == 1 && Field3[4][4] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[3][0] % 2 == 1 && Field3[3][0] > 1 && Field3[4][0] % 2 == 1 && Field3[4][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[4][1] % 2 == 1 && Field3[4][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1 && Field3[4][2] % 2 == 1 && Field3[4][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1 && Field3[4][3] % 2 == 1 && Field3[4][3] > 1) ||
					/*в 5 столбец*/	  (Field3[0][4] % 2 == 1 && Field3[0][4] > 1 && Field3[1][4] % 2 == 1 && Field3[1][4] > 1 && Field3[2][4] % 2 == 1 && Field3[2][4] > 1 && Field3[3][4] % 2 == 1 && Field3[3][4] > 1 && Field3[4][4] % 2 == 1 && Field3[4][4] > 1))
				{

					for (int i = 0; i < 5; i++) {
						for (int j = 0; j < 5; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mКрестики выиграли!\x1b[0m " << endl;
					}
				}
				else if (/*по диаг вправо*/(Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1 && Field3[4][4] % 2 == 0 && Field3[4][4] > 1) ||
					/*по диаг влево*/ (Field3[0][4] % 2 == 0 && Field3[0][4] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[4][0] % 2 == 0 && Field3[4][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[0][4] % 2 == 0 && Field3[0][4] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[1][3] % 2 == 0 && Field3[1][4] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1 && Field3[2][4] % 2 == 0 && Field3[2][4] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 0 && Field3[3][0] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1 && Field3[3][4] % 2 == 0 && Field3[3][4] > 1) ||
					/*в 5 строку*/	   (Field3[4][0] % 2 == 0 && Field3[4][0] > 1 && Field3[4][1] % 2 == 0 && Field3[4][1] > 1 && Field3[4][2] % 2 == 0 && Field3[4][2] > 1 && Field3[4][3] % 2 == 0 && Field3[4][3] > 1 && Field3[4][4] % 2 == 0 && Field3[4][4] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[3][0] % 2 == 0 && Field3[3][0] > 1 && Field3[4][0] % 2 == 0 && Field3[4][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[4][1] % 2 == 0 && Field3[4][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1 && Field3[4][2] % 2 == 0 && Field3[4][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1 && Field3[4][3] % 2 == 0 && Field3[4][3] > 1) ||
					/*в 5 столбец*/   (Field3[0][4] % 2 == 0 && Field3[0][4] > 1 && Field3[1][4] % 2 == 0 && Field3[1][4] > 1 && Field3[2][4] % 2 == 0 && Field3[2][4] > 1 && Field3[3][4] % 2 == 0 && Field3[3][4] > 1 && Field3[4][4] % 2 == 0 && Field3[4][4] > 1))
				{

					for (int i = 0; i < 5; i++) {
						for (int j = 0; j < 5; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНолики выиграли!\x1b[0m " << endl;
					}
				}
				else if (Field3[0][0] != 1 && Field3[0][1] != 1 && Field3[0][2] != 1 && Field3[0][3] != 1 && Field3[0][4] != 1 &&
					Field3[1][0] != 1 && Field3[1][1] != 1 && Field3[1][2] != 1 && Field3[1][3] != 1 && Field3[1][4] != 1 &&
					Field3[2][0] != 1 && Field3[2][1] != 1 && Field3[2][2] != 1 && Field3[2][3] != 1 && Field3[2][4] != 1 &&
					Field3[3][0] != 1 && Field3[3][1] != 1 && Field3[3][2] != 1 && Field3[3][3] != 1 && Field3[3][4] != 1 &&
					Field3[4][0] != 1 && Field3[4][1] != 1 && Field3[4][2] != 1 && Field3[4][3] != 1 && Field3[4][4] != 1)
				{

					for (int i = 0; i < 5; i++) {
						for (int j = 0; j < 5; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНичья!\x1b[0m " << endl;
					}
				}

			}

		}
		else {
			cout << "\x1b[81mашипка!\x1b[0m";
		}
	}
	//Игра человек + бот
	else if (typegame == 2) {

		//Поле 3х3
		if (sizeField == 1) {

			Field3[0][3] = 2; Field3[3][0] = 2;
			Field3[1][3] = 2; Field3[3][1] = 2;
			Field3[2][3] = 2; Field3[3][2] = 2;
			Field3[3][3] = 2; Field3[3][3] = 2;
			Field3[0][4] = 2; Field3[4][0] = 2;
			Field3[1][4] = 2; Field3[4][1] = 2;
			Field3[2][4] = 2; Field3[4][2] = 2;
			Field3[3][4] = 2; Field3[4][3] = 2;

			for (int k = 0; k < 9; k++) {

				//Первичный ввод
				if (firstMove % 2 == 1) {
					cout << "Сейчас ходит крестик\n\n";
				}
				else if (firstMove % 2 == 0) {
					cout << "Сейчас ходит нолик\n\n";
				}

				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (Field3[i][j] == 1) {
							cout << '#' << " ";
						}
						else if (Field3[i][j] % 2 == 1) {
							cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
						}
						else if (Field3[i][j] % 2 == 0) {
							cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
						}
					}
					cout << endl;
				}
				cout << "\nВведите номер строки: ";
				cin >> placeOnMapY;
				cout << "Введите номер столбца: ";
				cin >> placeOnMapX;

				//Защита от повторного ввода в клетку
				if (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {
					while (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {

						system("cls");

						if (firstMove % 2 == 1) {
							cout << "Сейчас ходит крестик\n\n";
						}
						else if (firstMove % 2 == 0) {
							cout << "Сейчас ходит нолик\n\n";
						}

						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								if (Field3[i][j] == 1) {
									cout << '#' << " ";
								}
								else if (Field3[i][j] % 2 == 1) {
									cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
								}
								else if (Field3[i][j] % 2 == 0) {
									cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
								}
							}
							cout << endl;
						}

						cout << "Эта клеточка уже занята, выберите другую: ";
						cout << "\nВведите номер строки: ";
						cin >> placeOnMapY;
						cout << "Введите номер столбца: ";
						cin >> placeOnMapX;
					}
				}
				else {
					cout << "\x1b[91mашипка!\x1b[0m\n";
				}

				//Замена элементов массива
				if (firstMove % 2 == 1) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 3;
					if ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
						while ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				else if (firstMove % 2 == 0) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 2;
					if ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
						while ((placeOnMapX > 3 || placeOnMapX < 1) || (placeOnMapY > 3 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}

				int randFirstNum = 0;
				int randSecondNum = 0;

				//Ход бота 3х3
				if (firstMove == 10 || firstMove == 11) {
					cout << "Ничья!";
					k = 100;
				}
				else if (firstMove % 2 == 1 || firstMove % 2 == 0) {
					if (firstMove % 2 == 1) {
						while (Field3[randFirstNum][randSecondNum] != 1) {
							randFirstNum = rand() % 3;
							randSecondNum = rand() % 3;
						}
						Field3[randFirstNum][randSecondNum] = 3;
						firstMove++;
					}
					else if (firstMove % 2 == 0) {
						while (Field3[randFirstNum][randSecondNum] != 1) {
							randFirstNum = rand() % 3;
							randSecondNum = rand() % 3;
						}
						Field3[randFirstNum][randSecondNum] = 2;
						firstMove++;
					}
				}
				else {
					cout << "wtf?";
				}
				system("cls");

				if (/*по диаг вправо*/(Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1) ||
					/*по диаг влево*/ (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[0][2] % 2 == 1 && Field3[0][2] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1))
				{

					//Вывод выигрыша 3х3
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mКрестики выиграли!\x1b[0m " << endl;
					}
				}
				else if (/*по диаг вправо*/(Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1) ||
					/*по диаг влево*/ (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[0][2] % 2 == 0 && Field3[0][2] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1))
				{

					//Вывод выигрыша 3х3
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНолики выиграли!\x1b[0m " << endl;
					}
				}
				else if (Field3[0][0] != 1 && Field3[0][1] != 1 && Field3[0][2] != 1 &&
					Field3[1][0] != 1 && Field3[1][1] != 1 && Field3[1][2] != 1 &&
					Field3[2][0] != 1 && Field3[2][1] != 1 && Field3[2][2] != 1)
				{

					//Вывод выигрыша 3х3
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНичья!\x1b[0m " << endl;
					}
				}

			}
			//Поле 4х4
		}
		else if (sizeField == 2) {

			Field3[0][4] = 2; Field3[4][0] = 2;
			Field3[1][4] = 2; Field3[4][1] = 2;
			Field3[2][4] = 2; Field3[4][2] = 2;
			Field3[3][4] = 2; Field3[4][3] = 2;

			for (int k = 0; k < 16; k++) {

				//Первичный вывод
				if (firstMove % 2 == 1) {
					cout << "Сейчас ходит крестик\n\n";
				}
				else if (firstMove % 2 == 0) {
					cout << "Сейчас ходит нолик\n\n";
				}

				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						if (Field3[i][j] == 1) {
							cout << '#' << " ";
						}
						else if (Field3[i][j] % 2 == 1) {
							cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
						}
						else if (Field3[i][j] % 2 == 0) {
							cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
						}
					}
					cout << endl;
				}
				cout << "\nВведите номер строки: ";
				cin >> placeOnMapY;
				cout << "Введите номер столбца: ";
				cin >> placeOnMapX;

				//Защита от повторного ввода в клетку
				if (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {
					while (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {

						system("cls");

						if (firstMove % 2 == 1) {
							cout << "Сейчас ходит крестик\n\n";
						}
						else if (firstMove % 2 == 0) {
							cout << "Сейчас ходит нолик\n\n";
						}

						for (int i = 0; i < 4; i++) {
							for (int j = 0; j < 4; j++) {
								if (Field3[i][j] == 1) {
									cout << '#' << " ";
								}
								else if (Field3[i][j] % 2 == 1) {
									cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
								}
								else if (Field3[i][j] % 2 == 0) {
									cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
								}
							}
							cout << endl;
						}

						cout << "Эта клеточка уже занята, выберите другую: ";
						cout << "\nВведите номер строки: ";
						cin >> placeOnMapY;
						cout << "Введите номер столбца: ";
						cin >> placeOnMapX;
					}
				}
				else {
					cout << "\x1b[91mашипка!\x1b[0m\n";
				}

				//Замена элементов массива
				if (firstMove % 2 == 1) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 3;
					if ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
						while ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				else if (firstMove % 2 == 0) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 2;
					if ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
						while ((placeOnMapX > 4 || placeOnMapX < 1) || (placeOnMapY > 4 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 3";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}

				int randFirstNum = 0;
				int randSecondNum = 0;

				//Ход бота 4х4
				if ((firstMove == 17 && firstMove % 2 == 1) || (firstMove == 17 && firstMove % 2 == 0) ||
					(firstMove == 18 && firstMove % 2 == 1) || (firstMove == 18 && firstMove % 2 == 0)) {
					cout << "Ничья!";
					//k = 100;
				}
				else if (firstMove % 2 == 1 || firstMove % 2 == 0) {
					if (firstMove % 2 == 1) {
						while (Field3[randFirstNum][randSecondNum] != 1) {
							randFirstNum = rand() % 4;
							randSecondNum = rand() % 4;
						}
						Field3[randFirstNum][randSecondNum] = 3;
						firstMove++;
					}
					else if (firstMove % 2 == 0) {
						while (Field3[randFirstNum][randSecondNum] != 1) {
							randFirstNum = rand() % 4;
							randSecondNum = rand() % 4;
						}
						Field3[randFirstNum][randSecondNum] = 2;
						firstMove++;
					}
				}
				else {
					cout << "wtf?";
				}
				system("cls");

				if /*по диаг вправо*/ ((Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1) ||
					/*по диаг влево*/ (Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[3][0] % 2 == 1 && Field3[3][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[0][3] % 2 == 1 && Field3[0][3] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 1 && Field3[3][0] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[3][0] % 2 == 1 && Field3[3][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1))
				{

					//Вывод выигрыша
					for (int i = 0; i < 4; i++) {
						for (int j = 0; j < 4; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mКрестики выиграли!\x1b[0m " << endl;
					}
				}
				else if (/*по диаг вправо*/(Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1) ||
					/*по диаг влево*/ (Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[3][0] % 2 == 0 && Field3[3][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[0][3] % 2 == 0 && Field3[0][3] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 0 && Field3[3][0] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[3][0] % 2 == 0 && Field3[3][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1))
				{

					//Вывод выигрыша 4х4
					for (int i = 0; i < 4; i++) {
						for (int j = 0; j < 4; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНолики выиграли!\x1b[0m " << endl;
					}
				}
				else if (Field3[0][0] != 1 && Field3[0][1] != 1 && Field3[0][2] != 1 && Field3[0][3] != 1 &&
					Field3[1][0] != 1 && Field3[1][1] != 1 && Field3[1][2] != 1 && Field3[1][3] != 1 &&
					Field3[2][0] != 1 && Field3[2][1] != 1 && Field3[2][2] != 1 && Field3[2][3] != 1 &&
					Field3[3][0] != 1 && Field3[3][1] != 1 && Field3[3][2] != 1 && Field3[3][3] != 1)
				{

					//Вывод выигрыша 4х4
					for (int i = 0; i < 4; i++) {
						for (int j = 0; j < 4; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНичья!\x1b[0m " << endl;
					}
				}

			}
			// Поле 5х5
		}
		else if (sizeField == 3) {

			for (int k = 0; k < 25; k++) {

				//Первичный вывод
				if (firstMove % 2 == 1) {
					cout << "Сейчас ходит крестик\n\n";
				}
				else if (firstMove % 2 == 0) {
					cout << "Сейчас ходит нолик\n\n";
				}

				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (Field3[i][j] == 1) {
							cout << '#' << " ";
						}
						else if (Field3[i][j] % 2 == 1) {
							cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
						}
						else if (Field3[i][j] % 2 == 0) {
							cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
						}
					}
					cout << endl;
				}
				cout << "\nВведите номер строки: ";
				cin >> placeOnMapY;
				cout << "Введите номер столбца: ";
				cin >> placeOnMapX;

				//Защита от повторного ввода в клетку
				if (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {
					while (Field3[placeOnMapY - 1][placeOnMapX - 1] == 2 || Field3[placeOnMapY - 1][placeOnMapX - 1] == 3) {

						system("cls");

						if (firstMove % 2 == 1) {
							cout << "Сейчас ходит крестик\n\n";
						}
						else if (firstMove % 2 == 0) {
							cout << "Сейчас ходит нолик\n\n";
						}

						for (int i = 0; i < 5; i++) {
							for (int j = 0; j < 5; j++) {
								if (Field3[i][j] == 1) {
									cout << '#' << " ";
								}
								else if (Field3[i][j] % 2 == 1) {
									cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
								}
								else if (Field3[i][j] % 2 == 0) {
									cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
								}
							}
							cout << endl;
						}

						cout << "Эта клеточка уже занята, выберите другую: ";
						cout << "\nВведите номер строки: ";
						cin >> placeOnMapY;
						cout << "Введите номер столбца: ";
						cin >> placeOnMapX;
					}
				}
				else {
					cout << "\x1b[91mашипка!\x1b[0m\n";
				}

				//Замена элементов массива
				if (firstMove % 2 == 1) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 3;
					if ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
						while ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 5";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}
				else if (firstMove % 2 == 0) {
					Field3[placeOnMapY - 1][placeOnMapX - 1] = 2;
					if ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
						while ((placeOnMapX > 5 || placeOnMapX < 1) || (placeOnMapY > 5 || placeOnMapY < 1)) {
							cout << "\nВведите значения от 1 до 5";
							cout << "\nВведите номер строки: ";
							cin >> placeOnMapY;
							cout << "Введите номер столбца: ";
							cin >> placeOnMapX;
						}
					}
					firstMove++;
				}

				int randFirstNum = 0;
				int randSecondNum = 0;

				//Ход бота 5х5
				if ((firstMove == 27 && firstMove % 2 == 1) || (firstMove == 27 && firstMove % 2 == 0) ||
					(firstMove == 26 && firstMove % 2 == 1) || (firstMove == 26 && firstMove % 2 == 0)) {
					cout << "Ничья!";
					k = 100;
				}
				else if (firstMove % 2 == 1 || firstMove % 2 == 0) {
					if (firstMove % 2 == 1) {
						while (Field3[randFirstNum][randSecondNum] != 1) {
							randFirstNum = rand() % 5;
							randSecondNum = rand() % 5;
						}
						Field3[randFirstNum][randSecondNum] = 3;
						firstMove++;
					}
					else if (firstMove % 2 == 0) {
						while (Field3[randFirstNum][randSecondNum] != 1) {
							randFirstNum = rand() % 5;
							randSecondNum = rand() % 5;
						}
						Field3[randFirstNum][randSecondNum] = 2;
						firstMove++;
					}
				}
				else {
					cout << "wtf?";
				}
				system("cls");

				if /*по диаг вправо*/ ((Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1 && Field3[4][4] % 2 == 1 && Field3[4][4] > 1) ||
					/*по диаг влево*/ (Field3[0][4] % 2 == 1 && Field3[0][4] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[4][0] % 2 == 1 && Field3[4][0] > 1) ||
					/*в 1 строку*/    (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[0][4] % 2 == 1 && Field3[0][4] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[1][3] % 2 == 1 && Field3[1][4] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1 && Field3[2][4] % 2 == 1 && Field3[2][4] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 1 && Field3[3][0] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1 && Field3[3][4] % 2 == 1 && Field3[3][4] > 1) ||
					/*в 5 строку*/	  (Field3[4][0] % 2 == 1 && Field3[4][0] > 1 && Field3[4][1] % 2 == 1 && Field3[4][1] > 1 && Field3[4][2] % 2 == 1 && Field3[4][2] > 1 && Field3[4][3] % 2 == 1 && Field3[4][3] > 1 && Field3[4][4] % 2 == 1 && Field3[4][4] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 1 && Field3[0][0] > 1 && Field3[1][0] % 2 == 1 && Field3[1][0] > 1 && Field3[2][0] % 2 == 1 && Field3[2][0] > 1 && Field3[3][0] % 2 == 1 && Field3[3][0] > 1 && Field3[4][0] % 2 == 1 && Field3[4][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 1 && Field3[0][1] > 1 && Field3[1][1] % 2 == 1 && Field3[1][1] > 1 && Field3[2][1] % 2 == 1 && Field3[2][1] > 1 && Field3[3][1] % 2 == 1 && Field3[3][1] > 1 && Field3[4][1] % 2 == 1 && Field3[4][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 1 && Field3[0][2] > 1 && Field3[1][2] % 2 == 1 && Field3[1][2] > 1 && Field3[2][2] % 2 == 1 && Field3[2][2] > 1 && Field3[3][2] % 2 == 1 && Field3[3][2] > 1 && Field3[4][2] % 2 == 1 && Field3[4][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 1 && Field3[0][3] > 1 && Field3[1][3] % 2 == 1 && Field3[1][3] > 1 && Field3[2][3] % 2 == 1 && Field3[2][3] > 1 && Field3[3][3] % 2 == 1 && Field3[3][3] > 1 && Field3[4][3] % 2 == 1 && Field3[4][3] > 1) ||
					/*в 5 столбец*/	  (Field3[0][4] % 2 == 1 && Field3[0][4] > 1 && Field3[1][4] % 2 == 1 && Field3[1][4] > 1 && Field3[2][4] % 2 == 1 && Field3[2][4] > 1 && Field3[3][4] % 2 == 1 && Field3[3][4] > 1 && Field3[4][4] % 2 == 1 && Field3[4][4] > 1))
				{

					//Вывод выигрыша
					for (int i = 0; i < 5; i++) {
						for (int j = 0; j < 5; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mКрестики выиграли!\x1b[0m " << endl;
					}
				}
				else if (/*по диаг вправо*/(Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1 && Field3[4][4] % 2 == 0 && Field3[4][4] > 1) ||
					/*по диаг влево*/ (Field3[0][4] % 2 == 0 && Field3[0][4] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[4][0] % 2 == 0 && Field3[4][0] > 1) ||
					/*в 1 строку*/	   (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[0][4] % 2 == 0 && Field3[0][4] > 1) ||
					/*в 2 строку*/    (Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[1][3] % 2 == 0 && Field3[1][4] > 1) ||
					/*в 3 строку*/    (Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1 && Field3[2][4] % 2 == 0 && Field3[2][4] > 1) ||
					/*в 4 строку*/    (Field3[3][0] % 2 == 0 && Field3[3][0] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1 && Field3[3][4] % 2 == 0 && Field3[3][4] > 1) ||
					/*в 5 строку*/	   (Field3[4][0] % 2 == 0 && Field3[4][0] > 1 && Field3[4][1] % 2 == 0 && Field3[4][1] > 1 && Field3[4][2] % 2 == 0 && Field3[4][2] > 1 && Field3[4][3] % 2 == 0 && Field3[4][3] > 1 && Field3[4][4] % 2 == 0 && Field3[4][4] > 1) ||
					/*в 1 столбец*/   (Field3[0][0] % 2 == 0 && Field3[0][0] > 1 && Field3[1][0] % 2 == 0 && Field3[1][0] > 1 && Field3[2][0] % 2 == 0 && Field3[2][0] > 1 && Field3[3][0] % 2 == 0 && Field3[3][0] > 1 && Field3[4][0] % 2 == 0 && Field3[4][0] > 1) ||
					/*в 2 столбец*/   (Field3[0][1] % 2 == 0 && Field3[0][1] > 1 && Field3[1][1] % 2 == 0 && Field3[1][1] > 1 && Field3[2][1] % 2 == 0 && Field3[2][1] > 1 && Field3[3][1] % 2 == 0 && Field3[3][1] > 1 && Field3[4][1] % 2 == 0 && Field3[4][1] > 1) ||
					/*в 3 столбец*/   (Field3[0][2] % 2 == 0 && Field3[0][2] > 1 && Field3[1][2] % 2 == 0 && Field3[1][2] > 1 && Field3[2][2] % 2 == 0 && Field3[2][2] > 1 && Field3[3][2] % 2 == 0 && Field3[3][2] > 1 && Field3[4][2] % 2 == 0 && Field3[4][2] > 1) ||
					/*в 4 столбец*/   (Field3[0][3] % 2 == 0 && Field3[0][3] > 1 && Field3[1][3] % 2 == 0 && Field3[1][3] > 1 && Field3[2][3] % 2 == 0 && Field3[2][3] > 1 && Field3[3][3] % 2 == 0 && Field3[3][3] > 1 && Field3[4][3] % 2 == 0 && Field3[4][3] > 1) ||
					/*в 5 столбец*/   (Field3[0][4] % 2 == 0 && Field3[0][4] > 1 && Field3[1][4] % 2 == 0 && Field3[1][4] > 1 && Field3[2][4] % 2 == 0 && Field3[2][4] > 1 && Field3[3][4] % 2 == 0 && Field3[3][4] > 1 && Field3[4][4] % 2 == 0 && Field3[4][4] > 1))
				{

					//Вывод выигрыша
					for (int i = 0; i < 5; i++) {
						for (int j = 0; j < 5; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНолики выиграли!\x1b[0m " << endl;
					}
				}
				else if (Field3[0][0] != 1 && Field3[0][1] != 1 && Field3[0][2] != 1 && Field3[0][3] != 1 && Field3[0][4] != 1 &&
					Field3[1][0] != 1 && Field3[1][1] != 1 && Field3[1][2] != 1 && Field3[1][3] != 1 && Field3[1][4] != 1 &&
					Field3[2][0] != 1 && Field3[2][1] != 1 && Field3[2][2] != 1 && Field3[2][3] != 1 && Field3[2][4] != 1 &&
					Field3[3][0] != 1 && Field3[3][1] != 1 && Field3[3][2] != 1 && Field3[3][3] != 1 && Field3[3][4] != 1 &&
					Field3[4][0] != 1 && Field3[4][1] != 1 && Field3[4][2] != 1 && Field3[4][3] != 1 && Field3[4][4] != 1)
				{

					//Вывод выигрыша
					for (int i = 0; i < 5; i++) {
						for (int j = 0; j < 5; j++) {
							if (Field3[i][j] == 1) {
								cout << '#' << " ";
							}
							else if (Field3[i][j] % 2 == 1) {
								cout << "\x1b[" << colorSymbX << "mX" << "\x1b[0m" << " ";
							}
							else if (Field3[i][j] % 2 == 0) {
								cout << "\x1b[" << colorSymbO << "mO" << "\x1b[0m" << " ";
							}
						}
						cout << endl;
					}

					cout << endl;

					k = 100;
					for (int i = 100; i < 108; i++)
					{
						cout << "\x1b[" << i << "mНичья!\x1b[0m " << endl;
					}
				}
			}
		}
		else {
			cout << "x1b[81mашипка!";
		}
	}
	else {
		cout << "\nНет такого пункта меню(";
	}

	return 0;
}


int showSettings() {
	system("cls");
	srand(time(NULL));

	cout << "\x1b[104mЦвета: \x1b[0m\n";
	cout << "\x1b[89m89 - классический;\n\x1b[90m90 - серый;\n\x1b[91m91 - красный;\n\x1b[92m92 - зеленый;\n";
	cout << "\x1b[93m93 - желтый\n\x1b[94m94 - синий;\n\x1b[95m95 - фиолетовый;\n\x1b[96m96 - голубой;\n\x1b[97m97 - белый\n\n";

	cout << "\x1b[104mПервым ходит: \x1b[0m\n";
	cout << "<1> Крестик \n";
	cout << "<2> Нолик \n\n";

	cout << "\x1b[104mРазмеры поля: \x1b[0m\n";
	cout << "<1> 3x3 \n";
	cout << "<2> 4x4 \n";
	cout << "<3> 5x5 \n\n";

	cout << "Выберите цвет крестика: ";
	cin >> colorSymbX;
	if (colorSymbX > 97 || colorSymbX < 89) {
		colorSymbX = rand() % 9 + 89;
		cout << "Цвет крестика будет: " << "\x1b[" << colorSymbX << "m" << colorSymbX << "\x1b[0m\n";
	}
	cout << "Выберите цвет нолика: ";
	cin >> colorSymbO;
	if (colorSymbO > 97 || colorSymbO < 89) {
		colorSymbO = rand() % 9 + 89;
		cout << "Цвет нолика будет: " << "\x1b[" << colorSymbO << "m" << colorSymbO << "\x1b[0m\n";
	}

	cout << "\nКто ходит первый: ";
	cin >> firstMove;
	if (firstMove > 3) {
		firstMove = rand() % 2 + 1;
		cout << "Первым будет ходить: " << firstMove << "\x1b[0m\n";
	}

	cout << "\nВыберите размер поля: ";
	cin >> sizeField;
	if (sizeField < 1 || sizeField > 3) {
		sizeField = rand() % 3 + 1;
		cout << "Размер поля будет: " << sizeField << "\x1b[0m\n";
	}

	cout << "\nНачать игру (y/n)? ";
	string doStart;
	cin >> doStart;

	if (doStart == "y") {
		goPlayTest(firstMove, sizeField, colorSymbX, colorSymbO);
	}
	else if (doStart == "y") {
		cout << "Вы покинули игру :с";
	}
	else {
		goPlayTest(firstMove, sizeField, colorSymbX, colorSymbO);
	}

	return 0;
}


int showRules() {
	system("cls");

	cout << "\x1b[96m<~> Привет! Это игра крестики-нолики. Вот основные правила по ней:\x1b[0m \n" << endl;
	cout << "<1> Существуют два символа: крестик и нолик. Человек, выбравший крестик - ходит крестиком. А человек, выбравший нолик - ноликом.\n";
	cout << "<2> Есть два режима игры:  бот + человек  |  человек + человек.\n";
	cout << "<3> Выигрывает тот, чьи символы займут всю длину поля (по вертикали/горизонатли/диагонали)\n\n";
	cout << "<!> Удачной игры!)";

	return 0;
}


int showMenu() {
	cout << "<~> Игра крестики-нолики" << endl;
	cout << endl;
	cout << "<#> Меню:" << endl;
	cout << "<1> Начать игру" << endl;
	cout << "<2> Настройки" << endl;
	cout << "<3> Правила" << endl;
	cout << "<4> Выйти" << endl;
	cout << endl;
	cout << "Введите пункт меню: ";
	int numMenu;
	cin >> numMenu;

	switch (numMenu) {
	case 1:
		goPlayTest(1, 1, 91, 92);
		break;
	case 2: showSettings();
		break;
	case 3: showRules();
		break;
	case 4: system("cls");
		cout << "Вы вышли из игры :c";
		break;
	default: cout << "\nНет такого пункта меню(";
		break;
	}

	return 0;
}


int main()
{
	setlocale(0, "");

	showMenu();

	int _; cin >> _;
	return 0;
}
