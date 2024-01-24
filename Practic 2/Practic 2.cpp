#include <iostream>
#include <string>
#include <cmath>
int cin(int num) {
    while (!(std::cin >> num)) {
        std::cout << "Введите корректное число!\nВведите второе число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return num;
}
int main() {
    system("chcp 1251 >> null");
    setlocale(LC_ALL, "Russian");
    bool stop = true;
    double num1=0;
    double num2 = 0;
    int numI = 0;
    while (stop) {
        num1 = 0;
        num2 = 0;
        numI = 0;
        std::cout << "Введите наименвание операции из приведенного ниже списка, которую вы хотите выполнить\n";
        std::cout << "Сложение\nВычитание\nУмножение\nДеление\nСтепень\nКвадратный корень\nПроцент\nФакториал\nЗавершить работу\n";
        std::string operation;
        std::cin >> operation;
        if (operation == "Завершить работу") {
            stop = false;
            continue;
        }
        else if (operation == "Сложение") {
            std::cout << "Введите 1 слагаемое ";
            num1 = cin(num1);
            std::cout << "Введите 2 слагаемое ";
            num2 = cin(num2);
            std::cout << "Результат: " << num1 + num2 << std::endl;
        }
        else if (operation == "Вычитание") {
            std::cout << "Введите уменьшаемое ";
            num1 = cin(num1);
            std::cout << "Введите вычитаемое ";
            num2 = cin(num2);
            std::cout << "Результат: " << num1 - num2 << std::endl;
        }
        else if (operation == "Умножение") {
            std::cout << "Введите 1 множитель ";
            num1 = cin(num1);
            std::cout << "Введите 2 множитель ";
            num2 = cin(num2);
            std::cout << "Результат: " << num1 * num2 << std::endl;
        }
        else if (operation == "Деление") {
            std::cout << "Введите делимое ";
            num1 = cin(num1);
            std::cout << "Введите делитель ";
            num2 = cin(num2);
            if (num2 == 0) {
                std::cout << "Деление на 0 недопустимо\n";
            }
            else {
                std::cout << "Результат: " << num1 / num2 << std::endl;
            }
        }
        else if (operation == "Степень") {
            std::cout << "Введите число ";
            num1 = cin(num1);
            std::cout << "Введите показатель степени ";
            numI = cin(numI);
            std::cout << "Результат: " << pow(num1, numI) << std::endl;
        }
        else if (operation == "Квадратный корень") {
            std::cout << "Введите подкоренное выражение ";
            num1 = cin(num1);
            if (num1 < 0) {
                std::cout << "Подкоренное выражение не может быть меньше 0\n";
            }
            else {
                std::cout << "Результат: " << sqrt(num1) << std::endl;
            }
        }
        else if (operation == "Процент") {
            std::cout << "Введите число ";
            num1 = cin(num1);
            std::cout << "Результат: " << (num1 / 100) * num2 << std::endl;
        }
        else if (operation == "Факториал") {
            std::cout << "Введите число";
            numI = cin(num1);
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