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

    int numberOfMonth = 0;
    bool check = false;
    
    do
    {
        std::cout << "Введите номер месяца: "; 
        std::cin >> numberOfMonth;

        if (numberOfMonth == 0)
        {
            std::cout << "До свидания" << std::endl;
            return static_cast<int> (commentForCode::Введён_терминальный_ноль);
        }
        else if (numberOfMonth < 1 || numberOfMonth > 12)
        {
            std::cout << "Неправильный номер месяца! " << std::endl;
        }
        else
        {
            check = true;
        }

    } while (!check);

    switch (numberOfMonth)
    {
    case 1: std::cout << "Это Январь месяц." << std::endl;
        break;
    case 2: std::cout << "Это Февраль месяц." << std::endl;
        break;
    case 3: std::cout << "Это Март месяц." << std::endl;
        break;
    case 4: std::cout << "Это Апрель месяц." << std::endl;
        break;
    case 5: std::cout << "Это Май месяц." << std::endl;
        break;
    case 6: std::cout << "Это Июнь месяц." << std::endl;
        break;
    case 7: std::cout << "Это Июль месяц." << std::endl;
        break;
    case 8: std::cout << "Это Август месяц." << std::endl;
        break;
    case 9: std::cout << "Это Сентябрь месяц." << std::endl;
        break;
    case 10: std::cout << "Это Октябрь месяц." << std::endl;
        break;
    case 11: std::cout << "Это Ноябрь месяц." << std::endl;
        break;
    case 12: std::cout << "Это Декабрь месяц." << std::endl;
        break;
    default: std::cout << "Не угадал" << std::endl;
        break;
    }
}