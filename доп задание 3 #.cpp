﻿#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int score = 0; 

    
    string questions[] = {
        "1. Какое число является основанием двоичной системы счисления?",
        "2. Какой тип данных используется для хранения целых чисел в C++?",
        "3. Какой оператор используется для выполнения повторяющихся действий в C++?",
        "4. До скольки лет живут бараны и овцы?",
        "5. сколько костей в ребенке? ",
        "6. Сколько серий в сериале СашаТаня?",
        "7.  Сколько серий в сериале универ?",
        "8.  Срок хранения молока?",
        "9.  сколько дней в 1 недели?",
        "10. сколько времен года?",
        "11. сколько рук у человека?",
        "12. зачем коровы?",
        "13. среднее iq человека ?",
        "14. какой номинал купюры самый большой в России?",
        "15. мышь считала дырки в сыре 3+2 = ?",
        "16. летело два крокодила один синий другой в Африку сколько весит килограмм помидор?",
        "17. сколько учиников в группе 2ИП2?",
        "18. какой последний айфон?",
        "19. сколько дней надо работать на айфон 15?",
        "20. когда никита станет богатым?",
       
    };

    string options[] = {
        "a) 8\nb) 10\nc) 2",
        "a) int\nb) float\nc) char",
        "a) for\nb) if\nc) switch",
        "а) 8\nb) 10-11\nc) 12-14",
        "a) 200\nb 250\nc) 300",
        "a) 241\nb 263\nc) 313",
        "a) 374\nb 380\nc) 350",
        "a) 2\nb 3\nc) 4",
        "a) не знаю\nb 7\nc) да",
        "a) 4\nb 6\nc) 1",
        "a) 2\nb 2\nc) 0",
        "a) нет\nb потамучто\nc)  да",
        "a) -45\nb 70\nc) 100",
        "a) 1000\nb 2000\nc) 5000",
        "a) 5\nb 9\nc) 1",
        "a) 1000гр\nb 1кл\nc) 100тон",
        "a) 25\nb 35\nc не знаю)",
        "a) 15\nb 15pro\nc 14)",
        "a) 20\nb 90\nc 61)",
        "a) никогда\nb завтра\nc когда рак на горе свистнет)",
    };

    char answers[] = {
        'c',
        'a',
        'a',
        'a',
        'a',
        'a',
        'b',
        'c',
        'c',
        'b',
        'a',
        'c',
        'b',
        'b',
        'c',
        'a',
        'c',
        'c',
        'b',
        'c',
        'a',
        

    };
        
 
    for (int i = 0; i < 20; i++) {
        cout << questions[i] << endl;
        cout << options[i] << endl;

        char userAnswer;
        cout << "Введите ваш ответ (a, b или c): ";
        cin >> userAnswer;

        
        switch (userAnswer) {
        case 'a':
        case 'b':
        case 'c':
            if (userAnswer == answers[i]) {
                cout << "Правильный ответ!" << endl;
                score++;
            }
            else {
                cout << "Неправильный ответ!" << endl;
            }
            break;
        default:
            cout << "Некорректный ввод!" << endl;
            break;
        }

        cout << endl;
    }

   
    cout << "Ваш счет: " << score << " из 20." << endl;

    return 0;
}
