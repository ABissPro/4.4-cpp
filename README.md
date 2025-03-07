4.4 Практическая работа

Цели практической работы
Научиться работать с условными операторами if, else, else if.
Научиться работать с оператором получения остатка от деления.

Задание 1. Минимум из двух чисел

Что нужно сделать:

Напишите программу, которая ищет минимальное значение из двух чисел.

Пример 1

Введите первое число: 45 
Введите второе число: 70 
-----Проверяем----- 
Наименьшее число: 45

Пример 2

Введите первое число: 45 
Введите второе число: 45 
-----Проверяем----- 
Числа равны!

Советы и рекомендации
Учтите, что числа могут быть равны!

Что оценивается
Правильность нахождения минимального числа
Обработка всех возможных вариантов минимального из двух чисел
Использование конструкций else if и else


Задание 2. Складываем в уме
Что нужно сделать
Напишите программу которая проверяет то, как вы умеете складывать два числа в уме. Программа должна выводить два разных сообщения на верный и неверный ответ пользователя. В последнем случае надо показывать правильный результат.

Пример-1

Введите первое число: 45 
Введите второе число: 70 
Введите их сумму: 115 
-----Проверяем----- 
Верно!

Пример-2

Введите первое число: 45 
Введите второе число: 70 
Введите их сумму: 125 
-----Проверяем----- 
Ошибка! Верный результат: 115

Что оценивается
Корректность использования условных конструкций.



Задание 3. Проверка на чётное число
Что нужно сделать
Напишите программу, которая проверяет, чётное ли число ввел пользователь.

Пример: int remainder = x % 2 (вычисляет остаток от деления `x` на 2).

Пример

Введите число: 28 
-----Проверяем----- 
Число 28 — чётное

Советы и рекомендации
Для проверки чётности используйте оператор %. Он вычисляет остаток от деления двух чисел.
Не забудьте про отрицательные числа.


Задание 4. Калькулятор опыта
Что нужно сделать
Напишите программу, которая определяет уровень персонажа в компьютерной игре. Пользователь вводит число «очков опыта», а программа вычисляет уровень. Новый уровень даётся при достижении 1000, 2500 и 5000 «очков опыта». Начальный уровень равен 1.

Пример

Введите число очков опыта: 2000 
-----Считаем----- 
Ваш уровень: 2

Советы и рекомендации
Программа должна выводить текущий уровень персонажа для любого количества очков.
Обработка некорректного ввода приветствуется.
Чтобы сократить количество проверок, используйте оператор else if.
Что оценивается
Правильное определение текущего уровня персонажа.
Отсутствие лишних и дублирующих проверок.


Задание 5. Кратность числа
Что нужно сделать
Напишите программу, которая проверяет, делится ли одно число на другое без остатка.

Пример 1

Введите первое число: 45 
Введите второе число: 5 
-----Проверяем----- 
Да, 45 делится на 5 без остатка!

Пример2

Введите первое число: 21 
Введите второе число: 8 
-----Проверяем----- 
Нет, 21 не делится на 8 без остатка!

Советы и рекомендации
Не забудьте про отрицательные числа.
Учитывайте правила деления чисел.
Что оценивается
Корректная работа программы.


Задание 6. Улучшим барберов
Что нужно сделать
Помните задачу про барберов из видео 4.3? Кстати, именно оператор % мог помочь нам с барберами. Перепишите программу про них с его использованием для проверки на проблему с целочисленным делением.

Напишите программу, которая отвечает на вопрос хватает ли барберов в данном

городе если задано число людей и число барберов, а так же указано, что

один барбер работает 8 часов в день, на одного клиента тратит 1 час

а каждый клиент приходит раз в месяц. Воспользуйтесь для решения проблемы

целочисленного деления оператором %

Что оценивается
Программа должна всегда корректно работать и не вылетать.



Задание 7. Меню ресторана
Что нужно сделать
Напишите программу, которая выводит меню бизнес-ланча ресторана в зависимости от дня недели. В меню есть общая часть, а есть уникальная, которая зависит от дня недели. Пользователь должен ввести номер дня недели — от 1 (понедельник) до 7 (воскресенье), а программа должна вывести на экран день недели и меню этого дня.

Пример 1

Введите день недели (от 1 до 7): 4 
Меню сегодня (четверг): 
Гороховый суп 
Салат «Цезарь» с креветками 
Куриная ножка с пюре 
Морс

Пример 2

Введите день недели (от 1 до 7): 2
Меню сегодня (вторник):
Харчо
Салат «Оливье»
Баварские колбаски с капустой
Морс

Что оценивается
Оптимальное использование условных операторов.
Приветствуется обработка пользовательского ввода.


Задание 8. Зарплата (дополнительное задание)
Что нужно сделать
В отделе маркетинга работают три сотрудника. Их зарплаты могут быть как разными, так и одинаковыми. Напишите программу, которая вычисляет разницу между самой высокой и самой низкой зарплатами сотрудников, а также среднее арифметическое зарплат всех сотрудников отдела.

Пример

Введите зарплату первого сотрудника: 45 рублей
Введите зарплату второго сотрудника: 45 рублей
Введите зарплату третьего сотрудника: 45 рублей
-----Считаем-----
Самая высокая зарплата в отделе: 45 рублей
Разница между самой высокой и самой низкой зарплатой в отделе: 0 рублей
Средняя зарплата в отделе: 45 рублей

Что оценивается
Правильность нахождения разницы зарплат.
Оптимальность нахождения разницы зарплат.


Задание 9. Прогрессивный налог (дополнительное задание)
Что нужно сделать
В последнем видео мы писали программу, вычисляющую сумму налога по прогрессивной шкале в зависимости от полученного заработка: 13% — на доход до 10 000, 20% — на доход от 10 000 до 50 000, 30% — на доход выше 50 000.

Однако во многих странах, использующих такую шкалу, эта сумма вычисляется более сложным способом: налоговая ставка 30% на доход выше 50 000 означает, что 30% уплачивается не со всей суммы, а лишь с той её части, которая превосходит 50 000. Аналогично: ставка 20% на доход от 10 000 до 50 000 обязывает уплатить 20% лишь с той части суммы, которая превосходит 10 000, но не превосходит 50 000.

Так, например, с дохода 100 000 придётся заплатить такой налог: 30% * (100 000 – 50 000) + 20% * (50 000 – 10 000) + 13% * 10 000 = 15 000 + 8000 + 1300 = 24 300.

С дохода 30 000: 20% * (30 000 – 10 000) + 13% * 10 000 = 4000 + 1300 = 5300.

Напишите программу, которая спрашивает у пользователя его доход и рассчитывает сумму налога для него по вышеописанным правилам.

Советы и рекомендации
Обработка некорректного ввода приветствуется.
Чтобы сократить количество проверок, используйте оператор else if.
Что оценивается
Правильное определение налога.
Отсутствие лишних и дублирующих проверок.
