﻿//Задание 6
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "[1] Январь\n"; cout << "[2] Февраль\n";
	cout << "[3] Март\n"; cout << "[4] Апрель\n";
	cout << "[5] Май\n"; cout << "[6] Июнь\n";
	cout << "[7] Июль\n"; cout << "[8] Август\n";
	cout << "[9] Сентябрь\n"; cout << "[10] Октябрь\n";
	cout << "[11] Ноябрь\n"; cout << "[12] Декабрь\n";

	cout << "Выберите номер месяца: ";
	short numMonth;
	short numDay;
	cin >> numMonth;

	switch (numMonth)
	{
	case 1: cout << "Выбран месяц - Январь\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Января"; break;
		case 2: cout << "Календарь: " << numDay << " Января"; break;
		case 3: cout << "Календарь: " << numDay << " Января"; break;
		case 4: cout << "Календарь: " << numDay << " Января"; break;
		case 5: cout << "Календарь: " << numDay << " Января"; break;
		case 6: cout << "Календарь: " << numDay << " Января"; break;
		case 7: cout << "Календарь: " << numDay << " Января"; break;
		case 8: cout << "Календарь: " << numDay << " Января"; break;
		case 9: cout << "Календарь: " << numDay << " Января"; break;
		case 10: cout << "Календарь: " << numDay << " Января"; break;
		case 11: cout << "Календарь: " << numDay << " Января"; break;
		case 12: cout << "Календарь: " << numDay << " Января"; break;
		case 13: cout << "Календарь: " << numDay << " Января"; break;
		case 14: cout << "Календарь: " << numDay << " Января"; break;
		case 15: cout << "Календарь: " << numDay << " Января"; break;
		case 16: cout << "Календарь: " << numDay << " Января"; break;
		case 17: cout << "Календарь: " << numDay << " Января"; break;
		case 18: cout << "Календарь: " << numDay << " Января"; break;
		case 19: cout << "Календарь: " << numDay << " Января"; break;
		case 20: cout << "Календарь: " << numDay << " Января"; break;
		case 21: cout << "Календарь: " << numDay << " Января"; break;
		case 22: cout << "Календарь: " << numDay << " Января"; break;
		case 23: cout << "Календарь: " << numDay << " Января"; break;
		case 24: cout << "Календарь: " << numDay << " Января"; break;
		case 25: cout << "Календарь: " << numDay << " Января"; break;
		case 26: cout << "Календарь: " << numDay << " Января"; break;
		case 27: cout << "Календарь: " << numDay << " Января"; break;
		case 28: cout << "Календарь: " << numDay << " Января"; break;
		case 29: cout << "Календарь: " << numDay << " Января"; break;
		case 30: cout << "Календарь: " << numDay << " Января"; break;
		case 31: cout << "Календарь: " << numDay << " Января"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;

	case 2: cout << "Выбран месяц - Февраль\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Февраля"; break;
		case 2: cout << "Календарь: " << numDay << " Февраля"; break;
		case 3: cout << "Календарь: " << numDay << " Февраля"; break;
		case 4: cout << "Календарь: " << numDay << " Февраля"; break;
		case 5: cout << "Календарь: " << numDay << " Февраля"; break;
		case 6: cout << "Календарь: " << numDay << " Февраля"; break;
		case 7: cout << "Календарь: " << numDay << " Февраля"; break;
		case 8: cout << "Календарь: " << numDay << " Февраля"; break;
		case 9: cout << "Календарь: " << numDay << " Февраля"; break;
		case 10: cout << "Календарь: " << numDay << " Февраля"; break;
		case 11: cout << "Календарь: " << numDay << " Февраля"; break;
		case 12: cout << "Календарь: " << numDay << " Февраля"; break;
		case 13: cout << "Календарь: " << numDay << " Февраля"; break;
		case 14: cout << "Календарь: " << numDay << " Февраля"; break;
		case 15: cout << "Календарь: " << numDay << " Февраля"; break;
		case 16: cout << "Календарь: " << numDay << " Февраля"; break;
		case 17: cout << "Календарь: " << numDay << " Февраля"; break;
		case 18: cout << "Календарь: " << numDay << " Февраля"; break;
		case 19: cout << "Календарь: " << numDay << " Февраля"; break;
		case 20: cout << "Календарь: " << numDay << " Февраля"; break;
		case 21: cout << "Календарь: " << numDay << " Февраля"; break;
		case 22: cout << "Календарь: " << numDay << " Февраля"; break;
		case 23: cout << "Календарь: " << numDay << " Февраля"; break;
		case 24: cout << "Календарь: " << numDay << " Февраля"; break;
		case 25: cout << "Календарь: " << numDay << " Февраля"; break;
		case 26: cout << "Календарь: " << numDay << " Февраля"; break;
		case 27: cout << "Календарь: " << numDay << " Февраля"; break;
		case 28: cout << "Календарь: " << numDay << " Февраля"; break;
			//case 29: cout << "Календарь: " << numDay << " Февраля"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;

	case 3: cout << "Выбран месяц - Март\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Марта"; break;
		case 2: cout << "Календарь: " << numDay << " Марта"; break;
		case 3: cout << "Календарь: " << numDay << " Марта"; break;
		case 4: cout << "Календарь: " << numDay << " Марта"; break;
		case 5: cout << "Календарь: " << numDay << " Марта"; break;
		case 6: cout << "Календарь: " << numDay << " Марта"; break;
		case 7: cout << "Календарь: " << numDay << " Марта"; break;
		case 8: cout << "Календарь: " << numDay << " Марта"; break;
		case 9: cout << "Календарь: " << numDay << " Марта"; break;
		case 10: cout << "Календарь: " << numDay << " Марта"; break;
		case 11: cout << "Календарь: " << numDay << " Марта"; break;
		case 12: cout << "Календарь: " << numDay << " Марта"; break;
		case 13: cout << "Календарь: " << numDay << " Марта"; break;
		case 14: cout << "Календарь: " << numDay << " Марта"; break;
		case 15: cout << "Календарь: " << numDay << " Марта"; break;
		case 16: cout << "Календарь: " << numDay << " Марта"; break;
		case 17: cout << "Календарь: " << numDay << " Марта"; break;
		case 18: cout << "Календарь: " << numDay << " Марта"; break;
		case 19: cout << "Календарь: " << numDay << " Марта"; break;
		case 20: cout << "Календарь: " << numDay << " Марта"; break;
		case 21: cout << "Календарь: " << numDay << " Марта"; break;
		case 22: cout << "Календарь: " << numDay << " Марта"; break;
		case 23: cout << "Календарь: " << numDay << " Марта"; break;
		case 24: cout << "Календарь: " << numDay << " Марта"; break;
		case 25: cout << "Календарь: " << numDay << " Марта"; break;
		case 26: cout << "Календарь: " << numDay << " Марта"; break;
		case 27: cout << "Календарь: " << numDay << " Марта"; break;
		case 28: cout << "Календарь: " << numDay << " Марта"; break;
		case 29: cout << "Календарь: " << numDay << " Марта"; break;
		case 30: cout << "Календарь: " << numDay << " Марта"; break;
		case 31: cout << "Календарь: " << numDay << " Марта"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;

	case 4: cout << "Выбран месяц - Апрель\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Апреля"; break;
		case 2: cout << "Календарь: " << numDay << " Апреля"; break;
		case 3: cout << "Календарь: " << numDay << " Апреля"; break;
		case 4: cout << "Календарь: " << numDay << " Апреля"; break;
		case 5: cout << "Календарь: " << numDay << " Апреля"; break;
		case 6: cout << "Календарь: " << numDay << " Апреля"; break;
		case 7: cout << "Календарь: " << numDay << " Апреля"; break;
		case 8: cout << "Календарь: " << numDay << " Апреля"; break;
		case 9: cout << "Календарь: " << numDay << " Апреля"; break;
		case 10: cout << "Календарь: " << numDay << " Апреля"; break;
		case 11: cout << "Календарь: " << numDay << " Апреля"; break;
		case 12: cout << "Календарь: " << numDay << " Апреля"; break;
		case 13: cout << "Календарь: " << numDay << " Апреля"; break;
		case 14: cout << "Календарь: " << numDay << " Апреля"; break;
		case 15: cout << "Календарь: " << numDay << " Апреля"; break;
		case 16: cout << "Календарь: " << numDay << " Апреля"; break;
		case 17: cout << "Календарь: " << numDay << " Апреля"; break;
		case 18: cout << "Календарь: " << numDay << " Апреля"; break;
		case 19: cout << "Календарь: " << numDay << " Апреля"; break;
		case 20: cout << "Календарь: " << numDay << " Апреля"; break;
		case 21: cout << "Календарь: " << numDay << " Апреля"; break;
		case 22: cout << "Календарь: " << numDay << " Апреля"; break;
		case 23: cout << "Календарь: " << numDay << " Апреля"; break;
		case 24: cout << "Календарь: " << numDay << " Апреля"; break;
		case 25: cout << "Календарь: " << numDay << " Апреля"; break;
		case 26: cout << "Календарь: " << numDay << " Апреля"; break;
		case 27: cout << "Календарь: " << numDay << " Апреля"; break;
		case 28: cout << "Календарь: " << numDay << " Апреля"; break;
		case 29: cout << "Календарь: " << numDay << " Апреля"; break;
		case 30: cout << "Календарь: " << numDay << " Апреля"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;


	case 5: cout << "Выбран месяц - Май\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Мая"; break;
		case 2: cout << "Календарь: " << numDay << " Мая"; break;
		case 3: cout << "Календарь: " << numDay << " Мая"; break;
		case 4: cout << "Календарь: " << numDay << " Мая"; break;
		case 5: cout << "Календарь: " << numDay << " Мая"; break;
		case 6: cout << "Календарь: " << numDay << " Мая"; break;
		case 7: cout << "Календарь: " << numDay << " Мая"; break;
		case 8: cout << "Календарь: " << numDay << " Мая"; break;
		case 9: cout << "Календарь: " << numDay << " Мая"; break;
		case 10: cout << "Календарь: " << numDay << " Мая"; break;
		case 11: cout << "Календарь: " << numDay << " Мая"; break;
		case 12: cout << "Календарь: " << numDay << " Мая"; break;
		case 13: cout << "Календарь: " << numDay << " Мая"; break;
		case 14: cout << "Календарь: " << numDay << " Мая"; break;
		case 15: cout << "Календарь: " << numDay << " Мая"; break;
		case 16: cout << "Календарь: " << numDay << " Мая"; break;
		case 17: cout << "Календарь: " << numDay << " Мая"; break;
		case 18: cout << "Календарь: " << numDay << " Мая"; break;
		case 19: cout << "Календарь: " << numDay << " Мая"; break;
		case 20: cout << "Календарь: " << numDay << " Мая"; break;
		case 21: cout << "Календарь: " << numDay << " Мая"; break;
		case 22: cout << "Календарь: " << numDay << " Мая"; break;
		case 23: cout << "Календарь: " << numDay << " Мая"; break;
		case 24: cout << "Календарь: " << numDay << " Мая"; break;
		case 25: cout << "Календарь: " << numDay << " Мая"; break;
		case 26: cout << "Календарь: " << numDay << " Мая"; break;
		case 27: cout << "Календарь: " << numDay << " Мая"; break;
		case 28: cout << "Календарь: " << numDay << " Мая"; break;
		case 29: cout << "Календарь: " << numDay << " Мая"; break;
		case 30: cout << "Календарь: " << numDay << " Мая"; break;
		case 31: cout << "Календарь: " << numDay << " Мая"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;


	case 6: cout << "Выбран месяц - Июнь\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Июня"; break;
		case 2: cout << "Календарь: " << numDay << " Июня"; break;
		case 3: cout << "Календарь: " << numDay << " Июня"; break;
		case 4: cout << "Календарь: " << numDay << " Июня"; break;
		case 5: cout << "Календарь: " << numDay << " Июня"; break;
		case 6: cout << "Календарь: " << numDay << " Июня"; break;
		case 7: cout << "Календарь: " << numDay << " Июня"; break;
		case 8: cout << "Календарь: " << numDay << " Июня"; break;
		case 9: cout << "Календарь: " << numDay << " Июня"; break;
		case 10: cout << "Календарь: " << numDay << " Июня"; break;
		case 11: cout << "Календарь: " << numDay << " Июня"; break;
		case 12: cout << "Календарь: " << numDay << " Июня"; break;
		case 13: cout << "Календарь: " << numDay << " Июня"; break;
		case 14: cout << "Календарь: " << numDay << " Июня"; break;
		case 15: cout << "Календарь: " << numDay << " Июня"; break;
		case 16: cout << "Календарь: " << numDay << " Июня"; break;
		case 17: cout << "Календарь: " << numDay << " Июня"; break;
		case 18: cout << "Календарь: " << numDay << " Июня"; break;
		case 19: cout << "Календарь: " << numDay << " Июня"; break;
		case 20: cout << "Календарь: " << numDay << " Июня"; break;
		case 21: cout << "Календарь: " << numDay << " Июня"; break;
		case 22: cout << "Календарь: " << numDay << " Июня"; break;
		case 23: cout << "Календарь: " << numDay << " Июня"; break;
		case 24: cout << "Календарь: " << numDay << " Июня"; break;
		case 25: cout << "Календарь: " << numDay << " Июня"; break;
		case 26: cout << "Календарь: " << numDay << " Июня"; break;
		case 27: cout << "Календарь: " << numDay << " Июня"; break;
		case 28: cout << "Календарь: " << numDay << " Июня"; break;
		case 29: cout << "Календарь: " << numDay << " Июня"; break;
		case 30: cout << "Календарь: " << numDay << " Июня"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;


	case 7: cout << "Выбран месяц - Июль\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Июля"; break;
		case 2: cout << "Календарь: " << numDay << " Июля"; break;
		case 3: cout << "Календарь: " << numDay << " Июля"; break;
		case 4: cout << "Календарь: " << numDay << " Июля"; break;
		case 5: cout << "Календарь: " << numDay << " Июля"; break;
		case 6: cout << "Календарь: " << numDay << " Июля"; break;
		case 7: cout << "Календарь: " << numDay << " Июля"; break;
		case 8: cout << "Календарь: " << numDay << " Июля"; break;
		case 9: cout << "Календарь: " << numDay << " Июля"; break;
		case 10: cout << "Календарь: " << numDay << " Июля"; break;
		case 11: cout << "Календарь: " << numDay << " Июля"; break;
		case 12: cout << "Календарь: " << numDay << " Июля"; break;
		case 13: cout << "Календарь: " << numDay << " Июля"; break;
		case 14: cout << "Календарь: " << numDay << " Июля"; break;
		case 15: cout << "Календарь: " << numDay << " Июля"; break;
		case 16: cout << "Календарь: " << numDay << " Июля"; break;
		case 17: cout << "Календарь: " << numDay << " Июля"; break;
		case 18: cout << "Календарь: " << numDay << " Июля"; break;
		case 19: cout << "Календарь: " << numDay << " Июля"; break;
		case 20: cout << "Календарь: " << numDay << " Июля"; break;
		case 21: cout << "Календарь: " << numDay << " Июля"; break;
		case 22: cout << "Календарь: " << numDay << " Июля"; break;
		case 23: cout << "Календарь: " << numDay << " Июля"; break;
		case 24: cout << "Календарь: " << numDay << " Июля"; break;
		case 25: cout << "Календарь: " << numDay << " Июля"; break;
		case 26: cout << "Календарь: " << numDay << " Июля"; break;
		case 27: cout << "Календарь: " << numDay << " Июля"; break;
		case 28: cout << "Календарь: " << numDay << " Июля"; break;
		case 29: cout << "Календарь: " << numDay << " Июля"; break;
		case 30: cout << "Календарь: " << numDay << " Июля"; break;
		case 31: cout << "Календарь: " << numDay << " Июля"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;


	case 8: cout << "Выбран месяц - Август\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Августа"; break;
		case 2: cout << "Календарь: " << numDay << " Августа"; break;
		case 3: cout << "Календарь: " << numDay << " Августа"; break;
		case 4: cout << "Календарь: " << numDay << " Августа"; break;
		case 5: cout << "Календарь: " << numDay << " Августа"; break;
		case 6: cout << "Календарь: " << numDay << " Августа"; break;
		case 7: cout << "Календарь: " << numDay << " Августа"; break;
		case 8: cout << "Календарь: " << numDay << " Августа"; break;
		case 9: cout << "Календарь: " << numDay << " Августа"; break;
		case 10: cout << "Календарь: " << numDay << " Августа"; break;
		case 11: cout << "Календарь: " << numDay << " Августа"; break;
		case 12: cout << "Календарь: " << numDay << " Августа"; break;
		case 13: cout << "Календарь: " << numDay << " Августа"; break;
		case 14: cout << "Календарь: " << numDay << " Августа"; break;
		case 15: cout << "Календарь: " << numDay << " Августа"; break;
		case 16: cout << "Календарь: " << numDay << " Августа"; break;
		case 17: cout << "Календарь: " << numDay << " Августа"; break;
		case 18: cout << "Календарь: " << numDay << " Августа"; break;
		case 19: cout << "Календарь: " << numDay << " Августа"; break;
		case 20: cout << "Календарь: " << numDay << " Августа"; break;
		case 21: cout << "Календарь: " << numDay << " Августа"; break;
		case 22: cout << "Календарь: " << numDay << " Августа"; break;
		case 23: cout << "Календарь: " << numDay << " Августа"; break;
		case 24: cout << "Календарь: " << numDay << " Августа"; break;
		case 25: cout << "Календарь: " << numDay << " Августа"; break;
		case 26: cout << "Календарь: " << numDay << " Августа"; break;
		case 27: cout << "Календарь: " << numDay << " Августа"; break;
		case 28: cout << "Календарь: " << numDay << " Августа"; break;
		case 29: cout << "Календарь: " << numDay << " Августа"; break;
		case 30: cout << "Календарь: " << numDay << " Августа"; break;
		case 31: cout << "Календарь: " << numDay << " Августа"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;


	case 9: cout << "Выбран месяц - Сентябрь\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Сентября"; break;
		case 2: cout << "Календарь: " << numDay << " Сентября"; break;
		case 3: cout << "Календарь: " << numDay << " Сентября"; break;
		case 4: cout << "Календарь: " << numDay << " Сентября"; break;
		case 5: cout << "Календарь: " << numDay << " Сентября"; break;
		case 6: cout << "Календарь: " << numDay << " Сентября"; break;
		case 7: cout << "Календарь: " << numDay << " Сентября"; break;
		case 8: cout << "Календарь: " << numDay << " Сентября"; break;
		case 9: cout << "Календарь: " << numDay << " Сентября"; break;
		case 10: cout << "Календарь: " << numDay << " Сентября"; break;
		case 11: cout << "Календарь: " << numDay << " Сентября"; break;
		case 12: cout << "Календарь: " << numDay << " Сентября"; break;
		case 13: cout << "Календарь: " << numDay << " Сентября"; break;
		case 14: cout << "Календарь: " << numDay << " Сентября"; break;
		case 15: cout << "Календарь: " << numDay << " Сентября"; break;
		case 16: cout << "Календарь: " << numDay << " Сентября"; break;
		case 17: cout << "Календарь: " << numDay << " Сентября"; break;
		case 18: cout << "Календарь: " << numDay << " Сентября"; break;
		case 19: cout << "Календарь: " << numDay << " Сентября"; break;
		case 20: cout << "Календарь: " << numDay << " Сентября"; break;
		case 21: cout << "Календарь: " << numDay << " Сентября"; break;
		case 22: cout << "Календарь: " << numDay << " Сентября"; break;
		case 23: cout << "Календарь: " << numDay << " Сентября"; break;
		case 24: cout << "Календарь: " << numDay << " Сентября"; break;
		case 25: cout << "Календарь: " << numDay << " Сентября"; break;
		case 26: cout << "Календарь: " << numDay << " Сентября"; break;
		case 27: cout << "Календарь: " << numDay << " Сентября"; break;
		case 28: cout << "Календарь: " << numDay << " Сентября"; break;
		case 29: cout << "Календарь: " << numDay << " Сентября"; break;
		case 30: cout << "Календарь: " << numDay << " Сентября"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;

	case 10: cout << "Выбран месяц - Октярь\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Октября"; break;
		case 2: cout << "Календарь: " << numDay << " Октября"; break;
		case 3: cout << "Календарь: " << numDay << " Октября"; break;
		case 4: cout << "Календарь: " << numDay << " Октября"; break;
		case 5: cout << "Календарь: " << numDay << " Октября"; break;
		case 6: cout << "Календарь: " << numDay << " Октября"; break;
		case 7: cout << "Календарь: " << numDay << " Октября"; break;
		case 8: cout << "Календарь: " << numDay << " Октября"; break;
		case 9: cout << "Календарь: " << numDay << " Октября"; break;
		case 10: cout << "Календарь: " << numDay << " Октября"; break;
		case 11: cout << "Календарь: " << numDay << " Октября"; break;
		case 12: cout << "Календарь: " << numDay << " Октября"; break;
		case 13: cout << "Календарь: " << numDay << " Октября"; break;
		case 14: cout << "Календарь: " << numDay << " Октября"; break;
		case 15: cout << "Календарь: " << numDay << " Октября"; break;
		case 16: cout << "Календарь: " << numDay << " Октября"; break;
		case 17: cout << "Календарь: " << numDay << " Октября"; break;
		case 18: cout << "Календарь: " << numDay << " Октября"; break;
		case 19: cout << "Календарь: " << numDay << " Октября"; break;
		case 20: cout << "Календарь: " << numDay << " Октября"; break;
		case 21: cout << "Календарь: " << numDay << " Октября"; break;
		case 22: cout << "Календарь: " << numDay << " Октября"; break;
		case 23: cout << "Календарь: " << numDay << " Октября"; break;
		case 24: cout << "Календарь: " << numDay << " Октября"; break;
		case 25: cout << "Календарь: " << numDay << " Октября"; break;
		case 26: cout << "Календарь: " << numDay << " Октября"; break;
		case 27: cout << "Календарь: " << numDay << " Октября"; break;
		case 28: cout << "Календарь: " << numDay << " Октября"; break;
		case 29: cout << "Календарь: " << numDay << " Октября"; break;
		case 30: cout << "Календарь: " << numDay << " Октября"; break;
		case 31: cout << "Календарь: " << numDay << " Октября"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;


	case 11: cout << "Выбран месяц - Ноябрь\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Ноября"; break;
		case 2: cout << "Календарь: " << numDay << " Ноября"; break;
		case 3: cout << "Календарь: " << numDay << " Ноября"; break;
		case 4: cout << "Календарь: " << numDay << " Ноября"; break;
		case 5: cout << "Календарь: " << numDay << " Ноября"; break;
		case 6: cout << "Календарь: " << numDay << " Ноября"; break;
		case 7: cout << "Календарь: " << numDay << " Ноября"; break;
		case 8: cout << "Календарь: " << numDay << " Ноября"; break;
		case 9: cout << "Календарь: " << numDay << " Ноября"; break;
		case 10: cout << "Календарь: " << numDay << " Ноября"; break;
		case 11: cout << "Календарь: " << numDay << " Ноября"; break;
		case 12: cout << "Календарь: " << numDay << " Ноября"; break;
		case 13: cout << "Календарь: " << numDay << " Ноября"; break;
		case 14: cout << "Календарь: " << numDay << " Ноября"; break;
		case 15: cout << "Календарь: " << numDay << " Ноября"; break;
		case 16: cout << "Календарь: " << numDay << " Ноября"; break;
		case 17: cout << "Календарь: " << numDay << " Ноября"; break;
		case 18: cout << "Календарь: " << numDay << " Ноября"; break;
		case 19: cout << "Календарь: " << numDay << " Ноября"; break;
		case 20: cout << "Календарь: " << numDay << " Ноября"; break;
		case 21: cout << "Календарь: " << numDay << " Ноября"; break;
		case 22: cout << "Календарь: " << numDay << " Ноября"; break;
		case 23: cout << "Календарь: " << numDay << " Ноября"; break;
		case 24: cout << "Календарь: " << numDay << " Ноября"; break;
		case 25: cout << "Календарь: " << numDay << " Ноября"; break;
		case 26: cout << "Календарь: " << numDay << " Ноября"; break;
		case 27: cout << "Календарь: " << numDay << " Ноября"; break;
		case 28: cout << "Календарь: " << numDay << " Ноября"; break;
		case 29: cout << "Календарь: " << numDay << " Ноября"; break;
		case 30: cout << "Календарь: " << numDay << " Ноября"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;


	case 12: cout << "Выбран месяц - Декабрь\n";
		cout << "Выберите день месяца: "; cin >> numDay;
		switch (numDay)
		{
		case 1: cout << "Календарь: " << numDay << " Декабря"; break;
		case 2: cout << "Календарь: " << numDay << " Декабря"; break;
		case 3: cout << "Календарь: " << numDay << " Декабря"; break;
		case 4: cout << "Календарь: " << numDay << " Декабря"; break;
		case 5: cout << "Календарь: " << numDay << " Декабря"; break;
		case 6: cout << "Календарь: " << numDay << " Декабря"; break;
		case 7: cout << "Календарь: " << numDay << " Декабря"; break;
		case 8: cout << "Календарь: " << numDay << " Декабря"; break;
		case 9: cout << "Календарь: " << numDay << " Декабря"; break;
		case 10: cout << "Календарь: " << numDay << " Декабря"; break;
		case 11: cout << "Календарь: " << numDay << " Декабря"; break;
		case 12: cout << "Календарь: " << numDay << " Декабря"; break;
		case 13: cout << "Календарь: " << numDay << " Декабря"; break;
		case 14: cout << "Календарь: " << numDay << " Декабря"; break;
		case 15: cout << "Календарь: " << numDay << " Декабря"; break;
		case 16: cout << "Календарь: " << numDay << " Декабря"; break;
		case 17: cout << "Календарь: " << numDay << " Декабря"; break;
		case 18: cout << "Календарь: " << numDay << " Декабря"; break;
		case 19: cout << "Календарь: " << numDay << " Декабря"; break;
		case 20: cout << "Календарь: " << numDay << " Декабря"; break;
		case 21: cout << "Календарь: " << numDay << " Декабря"; break;
		case 22: cout << "Календарь: " << numDay << " Декабря"; break;
		case 23: cout << "Календарь: " << numDay << " Декабря"; break;
		case 24: cout << "Календарь: " << numDay << " Декабря"; break;
		case 25: cout << "Календарь: " << numDay << " Декабря"; break;
		case 26: cout << "Календарь: " << numDay << " Декабря"; break;
		case 27: cout << "Календарь: " << numDay << " Декабря"; break;
		case 28: cout << "Календарь: " << numDay << " Декабря"; break;
		case 29: cout << "Календарь: " << numDay << " Декабря"; break;
		case 30: cout << "Календарь: " << numDay << " Декабря"; break;
		case 31: cout << "Календарь: " << numDay << " Декабря"; break;
		default: cout << "Такого дня нет";
			break;
		}
		break;

	default: cout << "Такого месяца нет";
		break;
	};

	int _; cin >> _;
	return 0;
}