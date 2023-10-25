#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int height = 5; 

    
    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }

        
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }

        cout << std::endl;
    }

    
    for (int i = 0; i < height; i++) {
        
        cout << "*";
        for (int j = 0; j < height - 2; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

   
    for (int i = 0; i < height; i++) {
        cout << "*";
    }

    cout << endl;

    return 0;
}