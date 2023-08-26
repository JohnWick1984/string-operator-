#pragma once
#include <iostream>
#include <string>
using namespace std;


class String 
{
public:
    //конструкторы
    String() : String(50) {}
    String(int size) : length(size) { data = new char[size]; }
    String(const char* str) : String(strlen(str)) 
    {
        memcpy(data, str, length);
    }
    //деструктор
    ~String() { delete[] data; }
    //функция ввода с клавиатуры
    void input() {
        cin.getline(data, length);
    }
    //функция вывода на экран введенного текста
    void output() const {
        cout << data << endl;
    }
    // Перегрузка оператора ()
    int operator()(char target) const {
        for (size_t i = 0; i < length; ++i) {
            if (data[i] == target) {
                return static_cast<int>(i);
            }
        }
        return -1;
    }


private:
    static int count;
    char* data;
    int length;
};

