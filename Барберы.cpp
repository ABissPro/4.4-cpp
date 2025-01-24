// Барберы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()

{
    int mansCount;
    int barbersCount;
    // 1 барбер стрижет 8 человек в день
    int mansPerBarber_Month = 240;
    int mansCanTotal;

    std::cout << "************** Барбершоп-калькулятор **************\n";
    std::cout << "Введите число мужчин в городе: ";
    std::cin >> mansCount;

    std::cout << "\nСколько уже барберов удалось нанять: ";
    std::cin >> barbersCount;

    //по условию, каждый человек стрижется раз в месяц. Значит, mansCount означает количество людей, которых надо подстричь за месяц.
       
    std::cout << "За месяц 1 барбер может подстричь: " << mansPerBarber_Month << "\n";

    mansCanTotal = mansPerBarber_Month * barbersCount;
    std::cout << "За месяц нанятые барберы могут подстричь: " << mansCanTotal << "\n";
    
    if (mansCount <= mansCanTotal) {
        std::cout << "Барберов хватает!\n";
    }
    else if  (mansCount > mansCanTotal) {
        std::cout << "Барберов не хватает!!\n";
        int mansRemain = mansCount - mansCanTotal;
        std::cout << "Не могут подстричься " << mansRemain << " человек\n";
        if (mansRemain % mansPerBarber_Month == 0){
            int barbersLeft = mansRemain / mansPerBarber_Month;
            std::cout << "В городе не хватает " << barbersLeft << " барберов\n";
        }
        else if (mansRemain % mansPerBarber_Month > 0) {
            int barbersLeft = (mansRemain / mansPerBarber_Month) + 1;
            std::cout << "В городе не хватает " << barbersLeft << " барберов\n";
        }
        
    }
    


}
