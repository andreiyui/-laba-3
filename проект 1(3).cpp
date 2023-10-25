#include <iostream>
using namespace std;
double convert(double value, int choice) {
    double conversionFactor;
    
    switch (choice) {
        
    case 1: 
        conversionFactor = 2.1366;
        break;
    case 2: 
        conversionFactor = 2.5;
        break;
    case 3: 
        conversionFactor = 0.3048;
        break;
    case 4: 
        conversionFactor = 3.7325;
        break;
    case 5: 
        conversionFactor = 29.86;
        break;
    case 6: 
        conversionFactor = 0.40951;
        break;
    case 7: 
        conversionFactor = 0.7112;
        break;
    case 8: 
        conversionFactor = 4.2657;
        break;
    case 9: 
        conversionFactor = 25.3995;
        break;
    default:
        cout << "Неверный выбор.\n";
        return 0.0;
    }

    return value * conversionFactor;
}

int main() {
    setlocale(0, "");
    double value;
    int choice;

    cout << "Введите значение для перевода:\n";
   cout << "1. Сажени -> Метры\n";
   cout << "2. Дюймы -> Сантиметры\n";
   cout << "3. Футы -> Метры\n";
   cout << "4. Драхмы -> Граммы\n";
   cout << "5. Унции -> Граммы\n";
   cout << "6. Фунты -> Килограммы\n";
   cout << "7. Аршины -> Метры\n";
   cout << "8. Золотники -> Граммы\n";
   cout << "9. Дюймы -> Миллиметры\n";
    cout << "Выберите тип перевода (1-9): ";
    cin >> choice;

    cout << "Введите значение: ";
    cin >> value;

    double result = convert(value, choice);

    if (result != 0.0) {
        cout << value << " = " << result << "\n";
    }

    return 0;
}