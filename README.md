# Домашнее задание к занятию «Структуры и перечисления»

------

### Задание 1

[Месяцы](01).
<details>
Напишите программу, которая спрашивает у пользователя номер месяца и выводит на экран название месяца, введённого пользователем.

Если пользователь ввёл некорректный номер месяца, сообщите ему об этом.

Спрашивайте пользователя до тех пор, пока он не введёт `0`.

Для решения задачи воспользуйтесь перечислением.

### Пример работы программы
```
Введите номер месяца: 1
Январь
Введите номер месяца: 7
Июль
Введите номер месяца: 13
Неправильный номер!
Введите номер месяца: 0
До свидания
```
#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>

Используйте перечисление для обработки пользовательского ввода. Не забудьте привести пользовательский ввод к типу перечисления с помощью `static_cast`.
  
Обрабатывайте пользовательский ввод с помощью `switch case`.

Для ввода значений с консоли используйте `std::cin`.

Для вывода на консоль используйте `std::cout`.

</details>
</details>

### Задание 2

[Счета](02).
<details>
Создайте структуру для хранения информации о банковском счёте. Она должна хранить номер счёта (целое число), имя владельца (строка) и количество денег на счету (дробное число).

Создайте функцию для изменения баланса счёта. Функция должна принимать экземпляр структуры банковского счёта и новую сумму.

Попросите пользователя заполнить поля экземпляра структуры, сообщить новый баланс счёта и выведите обновлённый экземпляр структуры на консоль.

### Пример работы программы
```
Введите номер счёта: 123456789
Введите имя владельца: Андрей
Введите баланс: 5000
Введите новый баланс: 6000
Ваш счёт: Андрей, 123456789, 6000
```
#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>
  
Не забудьте, что для изменения экземпляра структуры внутри функции нужно передавать его по ссылке или через указатель.
  
Для объявления структуры используйте ключевое слово `struct`.

Для ввода значений с консоли используйте `std::cin`.

Для вывода на консоль используйте `std::cout`.

</details>  
</details>  

### Задание 3

[Вывод структуры](03).
<details>
Создайте структуру для хранения адреса. Структура должна содержать название страны, города, улицы, номер дома, номер квартиры и индекс.

Создайте функцию для вывода структуры на консоль.

Протестируйте созданную функцию. Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры.

### Пример работы программы
```
Город: Москва
Улица: Арбат
Номер дома: 12
Номер квартиры: 8
Индекс: 123456

Город: Ижевск
Улица: Пушкина
Номер дома: 59
Номер квартиры: 143
Индекс: 953769
```
#### Подсказки

> Не читайте этот раздел сразу. Попытайтесь сначала решить задачу самостоятельно :)

<details>

<summary>Что использовать для решения.</summary>
  
Структура объявляется вне функций.
  
Чтобы создать экземпляр структуры, нужно указать её тип.
  
Для доступа к полям структуры используйте оператор `.`.

Для ввода значений с консоли используйте `std::cin`.

Для вывода на консоль используйте `std::cout`.

</details>  
</details> 
