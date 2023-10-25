#include <iostream>
using namespace std;
void drawTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        int spaces = height - i;

        switch (spaces) {
        case 4:
            cout << "    ";
            break;
        case 3:
            cout << "   ";
            break;
        case 2:
            cout << "  ";
            break;
        case 1:
            cout << " ";
            break;
        default:
            break;
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void drawTrapezoid(int height) {
    int width = 2 * height - 1;

    for (int i = 1; i <= height; i++) {
        int spaces = height - i;

        switch (spaces) {
        case 4:
            cout << "    ";
            break;
        case 3:
            cout << "   ";
            break;
        case 2:
            cout << "  ";
            break;
        case 1:
            cout << " ";
            break;
        default:
            break;
        }

        for (int k = 1; k <= width; k++) {
            cout << "*";
        }

        width -= 2;

        cout << endl;
    }
}

int main() {
    setlocale(0, "");
    int height;

    cout << "Введите высоту треугольника и трапеции: ";
    cin >> height;

    cout << "Равнобедренный треугольник:" << endl;
    drawTriangle(height);

    cout << "Равнобедренная трапеция:" << endl;
    drawTrapezoid(height);

    return 0;
}