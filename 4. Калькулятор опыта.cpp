// Калькулятор опыта.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int exPoints;
    int level = 1;

    std::cout << "Введите число очков опыта: ";
    std::cin >> exPoints;
    std::cout << "---Считаем---\n";

    if (exPoints < 0) {
        std::cout << "Данные введены некорректно!";
    }
    
    if (exPoints >= 1000 && exPoints < 2500) {
        level = 2;
    }
    else if (exPoints >= 2500 && exPoints < 5000) {
        level = 3;
    }
    else if (exPoints >= 5000) {
        level = 4;
    }

    std::cout << "Ваш уровень: " << level << "\n";

}

