// Барберы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int mansCount;
    int barbersCount;
    int mansPerDayNeeds;
    int mansPerBarber = 8; // каждый барбер стрижет 8 человек в день
    int mansPerDayCan;

    std::cout << "************** Барбершоп-калькулятор **************\n";
    std::cout << "Введите число мужчин в городе: ";
    std::cin >> mansCount;

    std::cout << "\nСколько уже барберов удалось нанять: ";
    std::cin >> barbersCount;

    // Сколько человек нужно постричь за день?
    mansPerDayNeeds = mansCount / 30;
    std::cout << "\nЗа день нужно постричь: " << mansPerDayNeeds << "\n";

    // Сколько человек могут постичь за день нанятые барберы?
    mansPerDayCan = barbersCount * mansPerBarber;
    std::cout << "За день нанятые барберы могут постричь: " << mansPerDayCan << "\n";

    if (((mansPerDayNeeds % mansPerDayCan) >= 0) && (mansPerDayNeeds <= mansPerDayCan)) {
        std::cout << "Барберов хватает!\n";
    }
    else if (((mansPerDayNeeds % mansPerDayCan) >= 0) && (mansPerDayNeeds > mansPerDayCan)) {
        std::cout << "Барберов не хватает!!\n";
    }
    


}
