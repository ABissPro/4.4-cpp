// Прогрессивный налог.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int salary;
    float tax;

    std::cout << "Введите доход: \n";
    std::cin >> salary;

    if (salary < 0) {
        std::cout << "Введены некорректные данные!\n";
    }
    else if (salary == 0) {
        std::cout << "Грустно :(\n";
    }
    else if (salary <= 10000) {
        tax = salary * 0.13;
        std::cout << "С дохода " << salary << " надо заплатить такой налог: " << tax << "\n";
    }
    else if ((salary > 10000) && (salary <= 50000)) {
        tax = 0.2 * (salary - 10000) + 0.13 * 10000;
        std::cout << "С дохода " << salary << " надо заплатить такой налог: " << tax << "\n";
    }
    else if ((salary > 50000) && (salary <= 100000)) {
        tax = 0.3 * (salary - 50000) + 0.2 * ((salary - (salary - 50000)) - 10000) + 0.13 * 10000;
        std::cout << "С дохода " << salary << " надо заплатить такой налог: " << tax << "\n";
    }
}


