//Задание 5

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "[+] Переводчик\n";
    cout << "";
    cout << "[1] Русские слова\n";
    cout << "[2] Английские слова\n";
    cout << "";
    cout << "[3] Выйти\n";

    string word1("Дом"); string word111("House");
    string word2("Дорога"); string word22("Road");
    string word3("Лодка"); string word33("Boat");
    string word4("Майнкрафт"); string word44("Minecraft");
    string word5("Огонь"); string word55("Fire");
    string word6("Вода"); string word66("Water");
    string word7("Эффект"); string word77("Effect");
    string word8("Дверь"); string word88("Door");
    string word9("Ковер"); string word99("Carpet");
    string word10("Интересно"); string word1010("Intresting");
    string word11("Шарик"); string word1111("Ball");
    string word12("Квадрат"); string word1212("Square");
    string word13("Кнопка"); string word1313("Button");
    string word14("Этаж"); string word1414("Floor");
    string word15("Аудитория"); string word1515("Audience");

    short numOfMenu;
    short numOfWord;
    cout << "Выберите пункт: ";
    cin >> numOfMenu;

    switch (numOfMenu)
    {
    case 1: cout << "[+] Переводчик “Список русских слов”\n";
        cout << "[1]" << word1 << "\n";
        cout << "[2]" << word2 << "\n";
        cout << "[3]" << word3 << "\n";
        cout << "[4]" << word4 << "\n";
        cout << "[5]" << word5 << "\n";
        cout << "[6]" << word6 << "\n";
        cout << "[7]" << word7 << "\n";
        cout << "[8]" << word8 << "\n";
        cout << "[9]" << word9 << "\n";
        cout << "[10]" << word10 << "\n";
        cout << "[11]" << word11 << "\n";
        cout << "[12]" << word12 << "\n";
        cout << "[13]" << word13 << "\n";
        cout << "[14]" << word14 << "\n";
        cout << "[15]" << word15 << "\n";
        cout << "";

        cout << "Введите номер слова для перевода: ";

        cin >> numOfWord;

        switch (numOfWord)
        {
        case 1: cout << "Перевод: " << word1 << " - " << word11;
            break;
        case 2: cout << "Перевод: " << word2 << " - " << word22;
            break;
        case 3: cout << "Перевод: " << word3 << " - " << word33;
            break;
        case 4: cout << "Перевод: " << word4 << " - " << word44;
            break;
        case 5: cout << "Перевод: " << word5 << " - " << word55;
            break;
        case 6: cout << "Перевод: " << word6 << " - " << word66;
            break;
        case 7: cout << "Перевод: " << word7 << " - " << word77;
            break;
        case 8: cout << "Перевод: " << word8 << " - " << word88;
            break;
        case 9: cout << "Перевод: " << word9 << " - " << word99;
            break;
        case 10: cout << "Перевод: " << word10 << " - " << word1010;
            break;
        case 11: cout << "Перевод: " << word11 << " - " << word1111;
            break;
        case 12: cout << "Перевод: " << word12 << " - " << word1212;
            break;
        case 13: cout << "Перевод: " << word13 << " - " << word1313;
            break;
        case 14: cout << "Перевод: " << word14 << " - " << word1414;
            break;
        case 15: cout << "Перевод: " << word15 << " - " << word1515;
            break;
        default: cout << "Введен неверный номер.";
        }
        break;

    case 2: cout << "[+] Переводчик “Список английских слов”\n";
        cout << "[1]" << word11 << "\n";
        cout << "[2]" << word22 << "\n";
        cout << "[3]" << word33 << "\n";
        cout << "[4]" << word44 << "\n";
        cout << "[5]" << word55 << "\n";
        cout << "[6]" << word66 << "\n";
        cout << "[7]" << word77 << "\n";
        cout << "[8]" << word88 << "\n";
        cout << "[9]" << word99 << "\n";
        cout << "[10]" << word1010 << "\n";
        cout << "[11]" << word111 << "\n";
        cout << "[12]" << word1212 << "\n";
        cout << "[13]" << word1313 << "\n";
        cout << "[14]" << word1414 << "\n";
        cout << "[15]" << word1515 << "\n";
        cout << "";

        cout << "Введите номер слова для перевода: ";

        cin >> numOfWord;

        switch (numOfWord)
        {
        case 1: cout << "Перевод: " << word111 << " - " << word1 ;
            break;
        case 2: cout << "Перевод: " << word22 << " - " << word2;
            break;
        case 3: cout << "Перевод: " << word33 << " - " << word3;
            break;
        case 4: cout << "Перевод: " << word44 << " - " << word4;
            break;
        case 5: cout << "Перевод: " << word55 << " - " << word5;
            break;
        case 6: cout << "Перевод: " << word66 << " - " << word6;
            break;
        case 7: cout << "Перевод: " << word77 << " - " << word7;
            break;
        case 8: cout << "Перевод: " << word88 << " - " << word8;
            break;
        case 9: cout << "Перевод: " << word99 << " - " << word9;
            break;
        case 10: cout << "Перевод: " << word1010 << " - " << word10;
            break;
        case 11: cout << "Перевод: " << word1111 << " - " << word11;
            break;
        case 12: cout << "Перевод: " << word1212 << " - " << word12;
            break;
        case 13: cout << "Перевод: " << word1313 << " - " << word13;
            break;
        case 14: cout << "Перевод: " << word1515 << " - " << word15;
            break;
        case 15: cout << "Перевод: " << word1515 << " - " << word15;
            break;
        default: cout << "Введен неверный номер.";
        }
        break;

    case 3: system("cls");
        break;

    default: cout << "Введен неверный номер";
    }
    short _; cin >> _;
    return 0;
}