// Task 19 (Quize)

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int itemSettings;

const int SIZE1 = 15;
const int SIZE2 = 6;

int qtyLives = 5;
int qtyHelps = 3;
int qtyTime = 10;
int qtyScores = 0;
int qtyQuestions = 15;
int numQuestion[15]{ 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
int numAnswer[5]{ 0,1,2,3,4 };

int numAnswerUser;
string arrayQuestions[SIZE1][SIZE2];


//Викторина
int goQuiz() {
	srand(time(NULL));
	system("cls");


	//Объявление элементов массива
	{
		arrayQuestions[0][0] = "Сколько людей на земле?";
		arrayQuestions[0][1] = "24";
		arrayQuestions[0][2] = "7,753 млрд";
		arrayQuestions[0][3] = "126 млн";
		arrayQuestions[0][4] = "16 тыс";
		arrayQuestions[0][5] = "7,753 млрд";

		arrayQuestions[1][0] = "Какие пончики самые вкусные?";
		arrayQuestions[1][1] = "С клубникой";
		arrayQuestions[1][2] = "С шоколадом";
		arrayQuestions[1][3] = "С корицей";
		arrayQuestions[1][4] = "Пончики это миф";
		arrayQuestions[1][5] = "С шоколадом";

		arrayQuestions[2][0] = "В какое время года едят хот-доги?";
		arrayQuestions[2][1] = "Зимой вместе с глинтвейном";
		arrayQuestions[2][2] = "Всегда";
		arrayQuestions[2][3] = "На луне нет времен года";
		arrayQuestions[2][4] = "Летом перед мороженым";
		arrayQuestions[2][5] = "Всегда";

		arrayQuestions[3][0] = "Сколько типов машин в Яндекс.Такси?";
		arrayQuestions[3][1] = "1";
		arrayQuestions[3][2] = "6";
		arrayQuestions[3][3] = "9";
		arrayQuestions[3][4] = "14";
		arrayQuestions[3][5] = "9";

		arrayQuestions[4][0] = "Как зовут четвертого из BTS?";
		arrayQuestions[4][1] = "Джордж Вашингтон";
		arrayQuestions[4][2] = "Ким Ки Дук";
		arrayQuestions[4][3] = "RM";
		arrayQuestions[4][4] = "Ким Чен Ын";
		arrayQuestions[4][5] = "RM";

		arrayQuestions[5][0] = "Сколько максимум конфет можно съесть за время этой викторины?";
		arrayQuestions[5][1] = "4";
		arrayQuestions[5][2] = "12";
		arrayQuestions[5][3] = "8";
		arrayQuestions[5][4] = "Сахар это вредно";
		arrayQuestions[5][5] = "8";

		arrayQuestions[6][0] = "Самый вкусный вкус Schwepps?";
		arrayQuestions[6][1] = "Bitter Lemon";
		arrayQuestions[6][2] = "Russchian Original";
		arrayQuestions[6][3] = "Indian Tonic";
		arrayQuestions[6][4] = "Spritz Aperetivo";
		arrayQuestions[6][5] = "Bitter Lemon";

		arrayQuestions[7][0] = "Сколько времени лететь до Пакистана?";
		arrayQuestions[7][1] = "10 часов";
		arrayQuestions[7][2] = "5 минут";
		arrayQuestions[7][3] = "18 часов";
		arrayQuestions[7][4] = "6 часов";
		arrayQuestions[7][5] = "10 часов";

		arrayQuestions[8][0] = "Почему самое вкусное мороженое в Икее?";
		arrayQuestions[8][1] = "Потому что это Икеа";
		arrayQuestions[8][2] = "В икее есть мороженое с облепихой";
		arrayQuestions[8][3] = "Там лучшие фрикадельки";
		arrayQuestions[8][4] = "У них хорошая мебель";
		arrayQuestions[8][5] = "Потому что это Икеа";

		arrayQuestions[9][0] = "Сколько тысячелетий я писал эту викторину?";
		arrayQuestions[9][1] = "12";
		arrayQuestions[9][2] = "4";
		arrayQuestions[9][3] = "0";
		arrayQuestions[9][4] = "1";
		arrayQuestions[9][5] = "0";

		arrayQuestions[10][0] = "Сколько обычно баллов трафика на дорогах в Москве в пятницу вечером?";
		arrayQuestions[10][1] = "1-3";
		arrayQuestions[10][2] = "4-5";
		arrayQuestions[10][3] = "5-7";
		arrayQuestions[10][4] = "8-10";
		arrayQuestions[10][5] = "8-10";

		arrayQuestions[11][0] = "Какие грибы лучше не есть?";
		arrayQuestions[11][1] = "Подосиновики";
		arrayQuestions[11][2] = "Трюфели";
		arrayQuestions[11][3] = "Мухоморы";
		arrayQuestions[11][4] = "Белые грибы";
		arrayQuestions[11][5] = "Мухоморы";

		arrayQuestions[12][0] = "Лучшая бургерная в Москве?";
		arrayQuestions[12][1] = "Farш";
		arrayQuestions[12][2] = "BB & Burgers";
		arrayQuestions[12][3] = "Burger Heroes";
		arrayQuestions[12][4] = "BEVERLY HILLS DINER";
		arrayQuestions[12][5] = "Burger Heroes";

		arrayQuestions[13][0] = "2 * 2 + 2 * 2 + 8 = ?";
		arrayQuestions[13][1] = "8";
		arrayQuestions[13][2] = "44";
		arrayQuestions[13][3] = "28";
		arrayQuestions[13][4] = "16";
		arrayQuestions[13][5] = "16";

		arrayQuestions[14][0] = "Какое сейчас время года?";
		arrayQuestions[14][1] = "Зима";
		arrayQuestions[14][2] = "Весна";
		arrayQuestions[14][3] = "Лето";
		arrayQuestions[14][4] = "Осень";
		arrayQuestions[14][5] = "Осень";
	}

	//Рандомирование вопросов
	for (int i = 0; i < qtyQuestions; i++) {
		numQuestion[i] = rand() % 15;
		for (int k = 0; k < qtyQuestions; k++) {
			for (int j = 0; j < i; j++) {
				if (numQuestion[i] == numQuestion[j]) {
					while (numQuestion[i] == numQuestion[j]) {
						numQuestion[i] = rand() % 15;
					}
				}
			}
		}
	}


	//Рандомирование ответов
	for (int i = 1; i < 5; i++) {
		numAnswer[i] = rand() % 4 + 1;
		for (int k = 0; k < 5; k++) {
			for (int j = 0; j < i; j++) {
				if (numAnswer[i] == numAnswer[j]) {
					while (numAnswer[i] == numAnswer[j]) {
						numAnswer[i] = rand() % 4 + 1;
					}
				}
			}
		}
	}

	//for (int a = 0; a < 15; a++) {
	//	cout << numQuestion[a] << "   ";
	//}

	string arrayQuestionsOther[SIZE1][SIZE2];

	for (int k = 0; k < qtyQuestions; k++) {
		arrayQuestionsOther[k][0] = arrayQuestions[numQuestion[k]][0];
		arrayQuestionsOther[k][5] = arrayQuestions[numQuestion[k]][5];
		for (int j = 1; j < 5; j++) {
			arrayQuestionsOther[k][j] = arrayQuestions[numQuestion[k]][numAnswer[j]];
		}
	}

	//Вывод вопросов и прием ответов
	cout << "\x1b[94mВикторина началась!\x1b[0m\n";
	cout << "У вас \x1b[90m" << qtyLives << " \x1b[0mжизней.\n";
	cout << "Для вывода подсказки введите \x1b[90m0\x1b[0m.\n\n\n";

	for (int i = 0; i < qtyQuestions; i++) {
		cout << "\x1b[90m<" << i+1 << ">\x1b[0m " << arrayQuestionsOther[i][0] << endl << endl;

		for (int j = 1; j < 5; j++) {
			cout << "\x1b[90m<" << j << ">\x1b[0m " << arrayQuestionsOther[i][j] << endl;
		}

		cout << "\nВведите номер ответа: ";
		cin >> numAnswerUser;

		//Если вводится подсказка
		if ((numAnswerUser == 0) && qtyLives >= 1) {
			int a = rand() % 2 + 1;
			int random = rand() % 4 + 1;
			if (arrayQuestionsOther[i][random] == arrayQuestionsOther[i][5]) {
				while (arrayQuestionsOther[i][random] == arrayQuestionsOther[i][5]) {
					random = rand() % 4 + 1;
				}
			}
			if (a % 2 == 0) {
				cout << "Один из правильных вариантов ответа: " << arrayQuestionsOther[i][random] << " или " << arrayQuestionsOther[i][5];
			}
			else {
				cout << "Один из правильных вариантов ответа: " << arrayQuestionsOther[i][5] << " или " << arrayQuestionsOther[i][random];
			}
			qtyHelps--;
			if (qtyHelps >= 1) {
				cout << "\nПодсказок осталось: \x1b[94m" << qtyHelps << "\x1b[0m ";
			}
			else {
				cout << "\nПодсказки закончились :с";
			}
			i--;
			cout << "\n\n\x1b[94mОтветьте на вопрос еще раз ";
		}

		//Если вводится возможный вариант ответа
		{
			if ((arrayQuestionsOther[i][numAnswerUser] == arrayQuestionsOther[i][5]) && (qtyLives >= 1) && (numAnswerUser != 0)) {
				qtyScores++;
				cout << "Верно!";
				//Проверка на баллы
				{
					if (qtyScores > 4) {
						cout << "\nУ вас \x1b[92m" << qtyScores << " \x1b[0mбаллов!";
					}
					else if (qtyScores <= 4 && qtyScores > 1) {
						cout << "\nУ вас \x1b[92m" << qtyScores << " \x1b[0mбалла!";
					}
					else if (qtyScores == 1) {
						cout << "\nУ вас \x1b[92m" << qtyScores << " \x1b[0mбалл!";
					}
					else {
						cout << "\nУ вас \x1b[92m" << qtyScores << " \x1b[0mбаллов!";
					}
				}
			}
			else if ((arrayQuestionsOther[i][numAnswerUser] != arrayQuestionsOther[i][5]) && (qtyLives >= 1) && (numAnswerUser != 0)) {
				qtyLives--;
				cout << "Неверно :с";
				//Проверка на жизни
				{
					if (qtyLives > 4) {
						cout << "\nУ вас осталось \x1b[91m" << qtyLives << " \x1b[0mжизней.";
					}
					else if (qtyLives <= 4 && qtyLives > 1) {
						cout << "\nУ вас осталось \x1b[91m" << qtyLives << " \x1b[0mжизни.";
					}
					else if (qtyLives == 1) {
						cout << "\nУ вас осталась \x1b[91m" << qtyLives << " \x1b[0mжизнь.";
					}
					else {
						cout << "\nУ вас осталось \x1b[91m" << qtyLives << " \x1b[0mжизней.";
					}
				}
			}
			else if (numAnswerUser != 0) {
				cout << "\n\n\x1b[91mВы проиграли. У вас кончились жизни :с\x1b[0m";
				i = 100;
			}
		}

		cout << endl << endl;

		//Вывод результатов
		{
			if (i == 100) {
				if (qtyScores > 4) {
					cout << "\nУ вас " << qtyScores << " баллов!";
				}
				else if (qtyScores <= 4 && qtyScores > 1) {
					cout << "\nУ вас " << qtyScores << " балла!";
				}
				else if (qtyScores == 1) {
					cout << "\nУ вас " << qtyScores << " балл!";
				}
				else {
					cout << "\nУ вас " << qtyScores << " баллов!";
				}

				if (qtyLives > 4) {
					cout << "\nУ вас осталось " << qtyLives << " жизней.";
				}
				else if (qtyLives <= 4 && qtyLives > 1) {
					cout << "\nОсталось " << qtyLives << " жизни.";
				}
				else if (qtyLives == 1) {
					cout << "\nОсталась " << qtyLives << " жизнь.";
				}
				else {
					cout << "\nОсталось " << qtyLives << " жизней.";
				}
			}
			if (i == qtyQuestions - 1) {
				cout << "\x1b[92mВы выиграли! Поздравляю.\x1b[0m";
				if (qtyScores > 4) {
					cout << "\nУ вас " << qtyScores << " баллов!";
				}
				else if (qtyScores < 4 && qtyScores > 1) {
					cout << "\nУ вас " << qtyScores << " балла!";
				}
				else if (qtyScores == 1) {
					cout << "\nУ вас " << qtyScores << " балл!";
				}
				else {
					cout << "\nУ вас " << qtyScores << " баллов!";
				}

				if (qtyLives > 4) {
					cout << "\nУ вас осталось " << qtyLives << " жизней.";
				}
				else if (qtyLives < 4 && qtyLives > 1) {
					cout << "\nОсталось " << qtyLives << " жизни.";
				}
				else if (qtyLives == 1) {
					cout << "\nОсталась " << qtyLives << " жизнь.";
				}
				else {
					cout << "\nОсталось " << qtyLives << " жизней.";
				}
			}
		}
	}
	
	

	return 0;
}


//Настройки
int showSettings(string error) {
	system("cls");
	cout << "<~> Настройки";
	cout << "\n\n<1> Количество жизней " << "\x1b[94m" << qtyLives << "\x1b[0m";
	cout << "\n<2> Количество вопросов " << "\x1b[94m" << qtyQuestions << "\x1b[0m";
	cout << "\n<3> Настройка подсказки " << "\x1b[94m" << qtyHelps << "\x1b[0m";
	cout << "\n<4> Настройка времени " << "\x1b[94m" << qtyTime << "\x1b[0m";
	cout << "\n<5> Выйти";

	if (error != "") {
		cout << endl << error;
	}
	cout << "\n\nВыберите пункт настроек: ";
	cin >> itemSettings;

	if (itemSettings == 1) {
		error = "";
		system("cls");
		cout << "<1> Одна жизнь";
		cout << "\n<2> Две жизни";
		cout << "\n<3> Три жизни";
		cout << "\n<4> Четыре жизни";
		cout << "\n<5> Пять жизней";

		cout << "\n\nВыберите количество жизней: ";
		cin >> qtyLives;
		cout << endl << endl;
		system("pause");
		showSettings(error);
	}
	else if (itemSettings == 2) {
		error = "";
		system("cls");
		cout << "<1> 5 вопросов";
		cout << "\n<2> 10 вопросов";
		cout << "\n<3> 15 вопросов";

		cout << "\n\nВыберите количество вопросов: ";
		int itemQtyQuestions;
		cin >> itemQtyQuestions;
		qtyQuestions = itemQtyQuestions * 5;
		cout << endl << endl;
		system("pause");
		showSettings(error);
	}
	else if (itemSettings == 3) {
		error = "";
		system("cls");
		cout << "<1> 1 подсказка 50/50";
		cout << "\n<2> 2 подсказки 50/50";
		cout << "\n<3> 3 подсказки 50/50";

		cout << "\n\nВыберите количество подсказок: ";
		cin >> qtyHelps;
		cout << endl << endl;
		system("pause");
		showSettings(error);
	}
	else if (itemSettings == 4) {
		error = "";
		system("cls");
		cout << "<1> 5 минут";
		cout << "\n<2> 10 минут";
		cout << "\n<3> 15 минут";

		cout << "\n\nВыберите количество времени: ";
		int itemQtyTime;
		cin >> itemQtyTime;
		qtyTime = itemQtyTime * 5;
		cout << endl << endl;
		system("pause");
		showSettings(error);
	}
	else if (itemSettings == 5) {
		error = "";
		system("cls");
	}
	else {
		if (itemSettings < 1 || itemSettings > 5) {
			while (itemSettings < 1 || itemSettings > 5) {
				system("cls");
				error = "\x1b[91mНет такого значения.\x1b[0m";
				showSettings(error);
			}
		}
	}


	return 0;
}


//Правила
int showRules() {
	system("cls");

	cout << "<~> Правила викторины: ";
	cout << "\n\n<1> В ходе викторины задается определенное количество вопросов, на которые вы можете ответить.";
	cout << "\n<2> У вас есть конкретное количество жизней, которые вы можете использовать в ходе викторины.";
	cout << "\n<3> На викторину вам дается ограниченное время.";
	cout << "\n<4> За каждый правильный ответ вам начисляется +1 балл. За каждый неверный -1 жизнь.";
	cout << "\n<5> Также вы можете воспользоваться подсказкой в любых двух вопросах.";
	cout << "\n<6> Все вышеперечисленные условия вы можете изменить в настройках.";
	cout << endl << endl;
	system("pause");
	string error = "";
	showSettings(error);


	return 0;
}


//Меню
int showMenu() {
	string error = "";

	//Вывод интерфейса меню
	cout << "<~> Викторина";
	cout << "\n\n<1> Начать викторину";
	cout << "\n<2> Настройки";
	cout << "\n<3> Правила";
	cout << "\n<4> Выйти";

	//Выбор пункта меню
	int itemMenu;
	cout << endl;
	cout << "\nВыберите пункт меню: ";
	cin >> itemMenu;

	//Вывод меню с защитой от неверного ввода
	if (itemMenu > 0 || itemMenu < 5) {
		switch (itemMenu)
		{
			case 1: goQuiz();
				break;
			case 2: showSettings(error);
				if (itemSettings == 5) {
					showMenu();
				}
				break;
			case 3: showRules();
				break;
			case 4: system("cls");
				cout << "Вы покинули игру :c";
				break;
			default:
				while (itemMenu < 1 || itemMenu > 4) {
					cout << "\n\x1b[91mНет такого зачения :с\x1b[0m";
					cout << "\nВыберите пункт меню: ";
					cin >> itemMenu;
					switch (itemMenu)
					{
					case 1: goQuiz();
						break;
					case 2: showSettings(error);
						break;
					case 3: showRules();
						break;
					case 4: system("cls");
						cout << "Вы покинули игру :c";
						break;
					default: cout << "\n";
						break;
					}
				}
				break;
		}
	}

	return 0;
}


//Главная
int main()
{
	setlocale(0, "");

	showMenu();

	int _; cin >> _;
	return 0;
}