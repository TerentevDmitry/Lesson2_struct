#include <iostream>

// Задача 1. Месяцы

// Список месяцев
enum class monthOfYear
{
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

// Список комментариев для кода
enum class commentForCode
{
    Введён_терминальный_ноль
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
            return static_cast<int> (commentForCode::Введён_терминальный_ноль);
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
                case (monthOfYear::Январь): std::cout << "Это Январь месяц." << std::endl;
                    break;
                case (monthOfYear::Февраль): std::cout << "Это Февраль месяц." << std::endl;
                    break;
                case (monthOfYear::Март): std::cout << "Это Март месяц." << std::endl;
                    break;
                case (monthOfYear::Апрель): std::cout << "Это Апрель месяц." << std::endl;
                    break;
                case (monthOfYear::Май): std::cout << "Это Май месяц." << std::endl;
                    break;
                case (monthOfYear::Июнь): std::cout << "Это Июнь месяц." << std::endl;
                    break;
                case (monthOfYear::Июль): std::cout << "Это Июль месяц." << std::endl;
                    break;
                case (monthOfYear::Август): std::cout << "Это Август месяц." << std::endl;
                    break;
                case (monthOfYear::Сентябрь): std::cout << "Это Сентябрь месяц." << std::endl;
                    break;
                case (monthOfYear::Октябрь): std::cout << "Это Октябрь месяц." << std::endl;
                    break;
                case (monthOfYear::Ноябрь): std::cout << "Это Ноябрь месяц." << std::endl;
                    break;
                case (monthOfYear::Декабрь): std::cout << "Это Декабрь месяц." << std::endl;
                    break;
            }
        }
    } while (!check);
}