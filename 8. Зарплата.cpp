﻿// Зарплата.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{    
     system("chcp 1251"); // Установить кодировку
    int a;
    int b;
    int c;
    int diff;
    int average;
    int maxSalary;

    std::cout << "Введите зарплату первого сотрудника: \n";
    std::cin >> a;

    std::cout << "Введите зарплату второго сотрудника: \n";
    std::cin >> b;

    std::cout << "Введите зарплату третьего сотрудника: \n";
    std::cin >> c;

    std::cout << "---Считаем---\n";

     maxSalary = a;
 if (b >= c) {
     diff = a - c;
     std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << diff << " рублей\n"
         << "Самая высокая зарплата в отделе: " << a << " рублей\n";
 }
 else if (b <= c) {
     diff = a - b;
     std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << diff << " рублей\n"
         "Самая высокая зарплата в отделе: " << a << " рублей\n";
 }

 if (b > maxSalary) {
     maxSalary = b;
     if (a >= c) {
         diff = b - c;
         std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << diff << " рублей\n"
             "Самая высокая зарплата в отделе: " << b << "рублей\n";
     }
     else if (a <= c) {
         diff = b - a;
         std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << diff << " рублей\n"
             "Самая высокая зарплата в отделе: " << b << " рублей\n";
     }
 }
 if (c > maxSalary) {
     maxSalary = c;
     if (a >= b) {
         diff = c - b;
         std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << diff << " рублей\n"
             "Самая высокая зарплата в отделе: " << c << " рублей\n";
     }
     else if (a <= b) {
         diff = c - a;
         std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << diff << " рублей\n"
             "Самая высокая зарплата в отделе: " << c << " рублей\n";
     }
 }


    average = (a + b + c) / 3;
    std::cout << "Средняя зарплата в отделе: " << average << "рублей\n";
}


