//Задание 7,8,9,10 (линии, квадрат, прямоугольник, треугольник и т.д.)
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	char textureOfLine;
	cout << "Введите текстуру фигуры: ";
	cin >> textureOfLine;
	cout << " \n";
	//if (cin.fail()) { cout << 123; return 0; }
	/*if (typeid(textureOfLine) != typeid(char)) 
	{
		cout << "Введены неверные данные..";
	}*/

	system("Color B");	
	//system("Color 1");
	cout << "1 - горизонтальная линия \n";
	cout << "2 - вертикальная линия \n";
	cout << "3 - линия под наклоном\n";
	cout << "4 - в виде квадрата\n";
	cout << "5 - в виде прямоугольника\n";
	cout << "6 - в виде треугольника\n";
	cout << "7 - крестиком\n";
	cout << "8 - плюсиком\n";
	cout << "9 - решеткой\n";
	cout << "Введите тип фигуры: ";

	short position;
	cin >> position;
	cout << " \n";

	short longOfLine;
	short i = 0;
	switch (position)
	{
	case 1:
		system("Color 1");
		cout << "Введите размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";


		cout << "Вот такой результат получился: \n";
		while (i < longOfLine)
		{
			cout << textureOfLine;
			i++;
		}
		break;

	case 2:
		system("Color 2");
		cout << "Введите размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";
		system("Color E");

		while (i < longOfLine)
		{
			cout << textureOfLine << "\n";
			i++;
		}
		break;
		// if(cin.fail()){ cout<<123;return0;}
	case 3:
		system("Color 3");
		//short longOfLine;
		cout << "Введите размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";

		while (i < longOfLine)
		{
			for (short j = 0; j < i; j++)
			{
				cout << " ";
			}
			cout << textureOfLine << "\n";
			i++;
		}
		break;

	case 4:
		system("Color 4");
		//short longOfLine;
		cout << "Введите размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";
		system("Color 9");

		short fullness;
		cout << "Пустой (1) или заполненный (2) ? -> ";
		cin >> fullness;
				switch (fullness) 
				{
				case 1:
					while (i < longOfLine)
					{
						short j = 0;
						while (j < longOfLine - 1)
						{
							if (i == 0 || j == 0 || i == longOfLine - 1 || j == longOfLine - 1) 
							{
								cout << textureOfLine << " ";
							}
							else 
							{
								cout << "  ";
							}
							j++;
						}
						cout << textureOfLine << "\n";
						i++;
					}
					break;

				case 2:
					while (i < longOfLine)
					{
						short j = 0;
						while (j < longOfLine - 1)
						{
							cout << textureOfLine << " ";
							j++;
						}
						cout << textureOfLine << "\n";
						i++;
					}
					break;
				}
		break;

	case 5:
		system("Color 5");
		//short longOfLine;
		cout << "Введите размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";
		system("Color D");

		cout << "Пустой(1) или заполненный(2) ? -> ";
		cout << "\n";
		cin >> fullness;
		switch (fullness)
		{
					case 1:
						short height;
						cout << "Введите ширину прямоугольника: ";
						cin >> height;
						while (i < longOfLine)
						{
							short j = 0;
							while (j < height - 1)
							{
								if (i == 0 || j == 0 || i == longOfLine - 1 || j == height - 1)
								{
									cout << textureOfLine << " ";
								}
								else
								{
									cout << "  ";
								}
								j++;
							}
							cout << textureOfLine << "\n";
							i++;
						}
						break;

					case 2:
						//short height;
						cout << "Введите высоту прямоугольника: ";
						cin >> height;
						while (i < longOfLine)
						{
							short j = 0;
							while (j < height - 1)
							{
								cout << textureOfLine << " ";
								j++;
							}
							cout << textureOfLine << "\n";
							i++;
						}
						break;
					}
		break;

	case 6:
		//short longOfLine;
		system("Color 6");
		cout << "Введите размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";
		system("Color B");

		//short baseOfTriangle = longOfLine + (longOfLine - 1);
		cout << "Пустой(1) или заполненный(2) ? -> ";
		cin >> fullness;
		switch (fullness)
		{
			case 1:
				for (short y = 0; y < longOfLine; y++)
				{
					for (short x = 0; x < longOfLine+1; x++)
					{
						if (x == (longOfLine / 2) - y || x == (longOfLine / 2) + y)
						{
							cout << textureOfLine << " ";
						} 
						else if (y == (longOfLine - (longOfLine / 2)))
						{
							cout << textureOfLine << " ";
						}
						else
						{
							cout << "  ";
						}
						/*if (y == (longOfLine - (longOfLine / 2)))
						{
							cout << textureOfLine << " ";
						}*/
					}
					/*for (short x = 0; x < longOfLine + 1; x++)
					{
						if (y == (longOfLine - (longOfLine/2)))
						{
							cout << textureOfLine << " ";
						}
					}*/
					cout << "\n";
					/*for (short x = 0; x < y + y - 1; x++)
					{
						cout << textureOfLine;
					}
					cout << "\n";*/
				}
				break;

			case 2:
				for (short i = 0; i < longOfLine + 1; i++)
				{
					for (short j = 0; j < longOfLine - i; j++)
					{
						cout << " ";
					}
					for (short j = 0; j < i + i - 1; j++)
					{
						cout << textureOfLine;
					}
					cout << "\n";
				}
				break;
		}
		break;

	case 7: 
		system("Color A");
		//short longOfLine;
		cout << "Введите нечетный размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";
		system("Color B");

		for (short y = 0; y < longOfLine; y++)
		{
			for (short x = 0; x < longOfLine + 1; x++)
			{
				if (x == (longOfLine) - y || x == (longOfLine/longOfLine) + y)
				{
					cout << textureOfLine << " ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;

	case 8:
		system("Color E");
		//short longOfLine;
		cout << "Введите нечетный размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";
		system("Color D");

		while (i < longOfLine)
		{
			short j = 0;
			while (j < longOfLine)
			{
				if (i == longOfLine/2 || j == longOfLine/2)
				{
					cout << textureOfLine << " ";
				}
				else
				{
					cout << "  ";
				}
				j++;
			}
			cout << "\n";
			i++;
		}
		break;

	case 9:
		system("Color D");
		//short longOfLine;
		cout << "Введите нечетный размер фигуры: ";
		cin >> longOfLine;
		cout << " \n";
		
		//if (longOfLine % 2 == 1) 
		//{
		system("Color C");
			for (short i = 0; i < longOfLine; i++)
			{
				if (i % 2 == 0)
				{
					for (short y = 0; y < longOfLine / 2; y++)
					{
						cout << "   " << textureOfLine;
					}
					cout << "\n";
				}
				else
				{
					for (short x = 0; x < longOfLine; x++)
					{
						cout << " " << textureOfLine;
					}
					cout << "\n";
				}
			}
		//}
		//else
		//{
			//cout << "Введите нечетное число: ";
			//cin >> longOfLine;
		//}
		break;

	default: 
		cout << " \n";
		cout << "Введены неверные данные..";
	}

	int _; cin >> _;
}