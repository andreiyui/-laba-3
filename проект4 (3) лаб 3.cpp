#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int number;
    int count = 0;
    int sum = 0;

    cout << "Введите числа (0 для выхода):" << endl;

    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        count++;
        sum += number;
    }

    double average = 0.0;

    if (count > 0) {
        average = static_cast<double>(sum) / count;
    }

    cout << "Количество введенных чисел: " << count << endl;
    cout << "Общая сумма чисел: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}