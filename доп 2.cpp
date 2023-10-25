#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int arr[] = { 5, -2, 10, -8, 3, -6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Положительные числа: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
        }
    }

    cout << "\nОтрицательные числа: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}