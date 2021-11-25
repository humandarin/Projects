//Задание 2

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	cout << "<#> Программа времена года";

	cout << "\n\n<1> Лето";
	cout << "\n<2> Осень";
	cout << "\n<3> Зима";
	cout << "\n<4> Весна";

	cout << "\n\nВведите значение: ";
	
	int answer;
	cin >> answer;
	cout << endl;

	if (answer == 1) {
		cout << "Сейчас лето, на улице тепло, и светит солнышко!";
	}
	else if (answer == 2) {
		cout << "Сейчас осень, следует одеться тепло и взять с собой зонт";
	}
	else if (answer == 3) {
		cout << "Сейчас зима. На улице прохладно и идет красивый снег.";
	}
	else if (answer == 4) {
		cout << "Сейчас весна! Скоро все деревья станут зелеными, а пока тает снег и на улице лужи.";
	}
	else {
		cout << "Нет такого времени года :с";
	}
	



	int _; cin >> _;

	return 0;
}
