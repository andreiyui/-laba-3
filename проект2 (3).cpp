#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double S; 
    int N;    
    double rate = 0.03; 

    cout << "Введите начальную сумму вклада: ";
    cin >> S;
    cout << "Введите количество лет: ";
    cin >> N;
   
    for (int i = 1; i <= N; i++) {
        switch (i) {
        case 1:
            S += S * rate;
            break;
        default:
            S += S * rate;
            break;
        }
    }

    cout << "Сумма вклада через " << N << " лет: " << S << " рублей" << endl;

    return 0;
}
