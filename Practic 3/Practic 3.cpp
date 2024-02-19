#include <iostream>
#include <iomanip> // Для использования setprecision

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int rows = 3; 
    const int cols = 5; 
    double array[rows][cols]{};
    cout << "Введите элементы массива (3x5), разделяя их пробелами:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j] ;
        }
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        double sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
        double average = sum / cols;
        cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << average << endl;
    }
    return 0;
}