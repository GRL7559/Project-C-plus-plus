#include <iostream>
#include <string>
#include <cmath>
int main() {
    system("chcp 1251 >> null");
    setlocale(LC_ALL, "Russian");
    bool stop = true;
    while (stop) {
        std::cout << "Введите наименвание операции из приведенного ниже списка, которую вы хотите выполнить\n";
        std::cout << "Сложение\nВычитание\nУмножение\nДеление\nСтепень\nКвадратный корень\nПроцент\nФакториал\nЗавершить работу\n";
        std::string operation;
        std::cin >> operation;
        std::cout << operation;
        if (operation == "Завершить работу") {
            stop = false;
            continue;
        }

        double num1, num2;
        int numI;

        if (operation == "Сложение" || operation == "Вычитание" || operation == "Умножение" || operation == "Деление" ||
            operation == "Степень" || operation == "Квадратный корень" || operation == "Процент") {
            std::cout << "Введите первое число: ";
            while (!(std::cin >> num1)) {
                std::cout << "Введите корректное число!\nВведите первое число: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        if (operation == "Вычитание" || operation == "Умножение" || operation == "Деление" || operation == "Процент") {
            std::cout << "Введите второе число: ";
            while (!(std::cin >> num2)) {
                std::cout << "Введите корректное число!\nВведите второе число: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        if (operation == "Степень") {
            std::cout << "Введите целую степень: ";
            while (!(std::cin >> numI)) {
                std::cout << "Введите корректное число!\nВведите целую степень: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        if (operation == "Факториал") {
            std::cout << "Введите целое число для факториала: ";
            while (!(std::cin >> numI) || numI < 0) {
                std::cout << "Введите положительное целое число!\nВведите целое число для факториала: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        if (operation == "Сложение") {
            std::cout << "Результат: " << num1 + num2 << std::endl;
        }
        else if (operation == "Вычитание") {
            std::cout << "Результат: " << num1 - num2 << std::endl;
        }
        else if (operation == "Умножение") {
            std::cout << "Результат: " << num1 * num2 << std::endl;
        }
        else if (operation == "Деление") {
            if (num2 == 0) {
                std::cout << "Деление на 0 недопустимо\n";
            }
            else {
                std::cout << "Результат: " << num1 / num2 << std::endl;
            }
        }
        else if (operation == "Степень") {
            std::cout << "Результат: " << pow(num1, numI) << std::endl;
        }
        else if (operation == "Квадратный корень") {
            if (num1 < 0) {
                std::cout << "Подкоренное выражение не может быть меньше 0\n";
            }
            else {
                std::cout << "Результат: " << sqrt(num1) << std::endl;
            }
        }
        else if (operation == "Процент") {
            std::cout << "Результат: " << (num1 / 100) * num2 << std::endl;
        }
        else if (operation == "Факториал") {
            int factorial = 1;
            for (int i = 1; i <= numI; i++) {
                factorial *= i;
            }
            std::cout << "Результат: " << factorial << std::endl;
        }
        else {
            std::cout << "Вы ввели некорректное значение\n";
        }
    }
    return 0;
}