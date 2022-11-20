#include <iostream>

// Задача 1. Месяцы

// Список месяцев
enum class monthOfYear
{
    January = 1, February, March, April, May, June, July, August, September, October, November, December
};

// Список комментариев для кода
enum class commentForCode
{
    terminalZeroIsEntered
};

int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    int NumberOfMonth = 0;
    bool check = false;

    do
    {
        std::cout << "Введите номер месяца (0 для выхода): ";
        std::cin >> NumberOfMonth;

        if (NumberOfMonth == 0) // Проверка на ранний выход
        {
            std::cout << "До свидания" << std::endl;
            check = true;
            return static_cast<int> (commentForCode::terminalZeroIsEntered);
        }
        else if (NumberOfMonth < 1 || NumberOfMonth > 12) // Проверка на корректность номера месяца
        {
            std::cout << "Введен неверный номер месяца! " << std::endl;
        }
        else // Перебираем на вывод нужного значения
        {
            monthOfYear enteredNumberOfMonth = static_cast<monthOfYear> (NumberOfMonth);
            
            switch (enteredNumberOfMonth)
            {
                case (monthOfYear::January): std::cout << "Это Январь месяц." << std::endl;
                    break;
                case (monthOfYear::February): std::cout << "Это Февраль месяц." << std::endl;
                    break;
                case (monthOfYear::March): std::cout << "Это Март месяц." << std::endl;
                    break;
                case (monthOfYear::April): std::cout << "Это Апрель месяц." << std::endl;
                    break;
                case (monthOfYear::May): std::cout << "Это Май месяц." << std::endl;
                    break;
                case (monthOfYear::June): std::cout << "Это Июнь месяц." << std::endl;
                    break;
                case (monthOfYear::July): std::cout << "Это Июль месяц." << std::endl;
                    break;
                case (monthOfYear::August): std::cout << "Это Август месяц." << std::endl;
                    break;
                case (monthOfYear::September): std::cout << "Это Сентябрь месяц." << std::endl;
                    break;
                case (monthOfYear::October): std::cout << "Это Октябрь месяц." << std::endl;
                    break;
                case (monthOfYear::November): std::cout << "Это Ноябрь месяц." << std::endl;
                    break;
                case (monthOfYear::December): std::cout << "Это Декабрь месяц." << std::endl;
                    break;
            }
        }
    } while (!check);
}