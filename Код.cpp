#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

void task1(); //завдання 1, декларація функції
void task2();//завдання 2, декларація функції
void task3(); //завдання 3, декларація функції

int main() {
    SetConsoleOutputCP(1251);
    int menu; //виклик меню
    for (;;) {
        cout << "Номер завдання:";
        cin >> menu;
        cout << endl; //вільна строка між номером завдання та його реалізацією
        switch (menu) { //перемикання між функціями
        case 1: task1(); break; //завдання 1
        case 2: task2(); break; //завдання 2
        case 3: task3(); break; //завдання 3
        default: cout << "Помилка! Тільки 1-3!" << endl; //сповіщення про помилку
        }
        cout << endl; //вільна строка
        cout << "+------------------+" << endl; //строка для розділення завдань
        cout << endl; //вільна строка
    }
}

//Proc 6
//Процедура, що знаходить кількість С цифр цілого додатнього числа К, а також їх суму S 
//(К - вхідний, С і S - вихідні параметри цілого типу). Знайти кількість і суму цифр для кожного
//з п'яти даних цілих чисел.
void DigitCountSum(int K, int& C, int& S) {
    C = 0; //кількість цифр
    S = 0; //сума цифр
    while (K > 0) { //повтор розрахунку для всіх цифр числа
        int digit = K % 10; //цифра, яка дана (поточна)
        S += digit; //додаємо цифру до суми
        C++; //збільшуємо кількість цифр
        K /= 10; //видаляємо останню цифру
    }
}
void task1() {
    int num[5]; //масив для п'яти чисел
    cout << "Введіть 5 цілих чисел:" << endl; //введеня 5 чисел
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        int C, S;
        DigitCountSum(num[i], C, S);
        //виведення кількості цифр кожного числа та їх суми
        cout << "Число:" << num[i] << " Кількість цифр:" << C << " Сума цифр:" << S << endl;
    }
}

//Boolean 2
//Дано ціле число А. Перевірити істинність висловлювання: "Число А є непарним".
bool Boolean2(int A) { //функція перевірки коректності даних
    return 1; //число підходить
}
bool isOdd(int A) { //перевіряємо на парність введене число
    return A % 2 != 0;
}
void task2() {
    int A;
    cout << "Введіть ціле число:"; //введення числа
    cin >> A;
    cout << endl; //вільна строка задля спрощення читання

    if (!Boolean2(A)) {
        cout << "Помилка! Число повинно бути цілим!" << endl; //сповіщення про помилку
    }
    else {
        bool result = isOdd(A);
        cout << "Число є непарним:" << (result ? "Так." : "Ні.") << endl; //виведення результату
    }
}

//Integer 9
//Дано тризначне число. Використовуючи одну операцію ділення остачі вивести першу цифру даного числа
//(сотні).
void task3() {
    int number;
    cout << "Введіть тризначне число:" << endl; //введення числа
    cin >> number;
    cout << endl; //вільна строка задля спрощення читання

    if (number < 100 || number > 999) { //умова для виконання завдання
        cout << "Помилка! Повинно бути три (3) цифри!" << endl; //сповіщення про помилку
    }

    int hundreds = number / 100; //обчислення першої цифри числа
    cout << "Перша цифра сотні:" << hundreds << endl; //виведення результату
}
