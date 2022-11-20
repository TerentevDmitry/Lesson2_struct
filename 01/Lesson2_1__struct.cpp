#include <iostream>

// Задача 1. Месяцы

enum monthOfYear
{
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    unsigned int numberOfMonth = 0;

    std::cout << "Введите номер месяца: ";
    std::cin >> numberOfMonth;
    std::cout << "Месяц: " << numberOfMonth << std::endl;



    /*color paint = color_black;
    color house(color_red);
    color apple = color_red;

    std::cout << paint << std::endl;
    std::cout << house << std::endl;
    std::cout << apple << std::endl;
   
    switch (apple)
    {
    case color_black: std::cout << "Чёрный" << std::endl;
        break;
    case color_red: std::cout << "Красный" << std::endl;
        break;
    case color_blue: std::cout << "Синий" << std::endl;
        break;
    default: std::cout << "Не угадал" << std::endl;
        break;
    }*/
    



    




    //person p;
    //std::cout << "name: ";
    //p.first_name = "Егор";
    ////std::cin >> p.first_name;
    ////std::cout << std::endl;
    //std::cout << p.first_name << std::endl;



    //std::cout << "suname: ";
    //p.second_name = "Летов";
    ////std::cin >> p.second_name;
    ////std::cout << std::endl;
    //std::cout << p.second_name << std::endl;


    //std::cout << "age: ";
    //p.age = 39;
    ////std::cin >> p.age;
    ////std::cout << std::endl;

    //std::cout << p.age << " years." << std::endl;


}