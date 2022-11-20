#include <iostream>

// Задача 2. Счета

struct bankАccount
{
    int numberAccount = 0;
    std::string nameOwner;
    double moneyInAccount = 0.00;
};

void changingAccountBalance (bankАccount* person1, double newMoneyInAccount)
{
    person1->moneyInAccount = newMoneyInAccount;
}

int main()
{
    setlocale(LC_ALL, "Russian"); // Корректное отображение Кириллицы
    system("chcp 1251");

    bankАccount person1;
    double newMoneyInAccount = 0;

    std::cout << "Введите номер счёта: ";
    std::cin >> person1.numberAccount;
    
    std::cout << "Введите имя владельца: ";
    std::cin >> person1.nameOwner;
    
    std::cout << "Введите баланс: ";
    std::cin >> person1.moneyInAccount;
    
    std::cout << "Введите новый баланс: ";
    std::cin >> newMoneyInAccount;

    changingAccountBalance(&person1, newMoneyInAccount);

    std::cout.precision(0);
    std::cout << "Ваш счёт: ";
    std::cout << person1.nameOwner << ", "
              << person1.numberAccount << ", "
              << std::fixed
              << person1.moneyInAccount << " руб." 
              << std::endl;
}