#include <iostream>

// Задача 3. Вывод структуры

struct adressOfHome
{
    std::string nameOfTown;
    std::string nameOfStreet;
    int numOfHouse;
    int numOfApartment;
    int index;
};

void PrintAdressOfHome(adressOfHome* residenceN)
{
    std::cout << "Город: " << residenceN->nameOfTown << std::endl;
    std::cout << "Улица: " << residenceN->nameOfStreet << std::endl;
    std::cout << "Номер дома: " << residenceN->numOfHouse << std::endl;
    std::cout << "Номер квартиры: " << residenceN->numOfApartment << std::endl;
    std::cout << "Индекс: " << residenceN->index << std::endl;

    std::cout << std::endl;
}



int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    adressOfHome residence1;
    residence1.nameOfTown = "Москва";
    residence1.nameOfStreet = "Арбат";
    residence1.numOfHouse = 12;
    residence1.numOfApartment = 8;
    residence1.index = 123456;

    adressOfHome residence2;
    residence2.nameOfTown = "Ижевск";
    residence2.nameOfStreet = "Пушкина";
    residence2.numOfHouse = 59;
    residence2.numOfApartment = 143;
    residence2.index = 953769;

    PrintAdressOfHome(&residence1);
    PrintAdressOfHome(&residence2);
}
