// string.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>
#include <string>
#include "String.h"
using namespace std;


int main() 
{

    String s1; // используется конструктор по умолчанию, создаётся строка длиной 80 символов
    s1.input(); // ввод строки с клавиатуры
    s1.output(); // вывод строки на экран

    String s2("This is task about class String!"); // создание строки и инициализация её значениями
    s2.output();

    char target = 'o'; //реализация функции перезагрузки оператора ()
    int index = s2(target);

    if (index != -1) {
        cout << "Symbol '" << target << "' found at index: " << index << endl;
    }
    else {
        cout << "Symbol '" << target << "' not found in the string." << endl;
    }

    return 0;
}
