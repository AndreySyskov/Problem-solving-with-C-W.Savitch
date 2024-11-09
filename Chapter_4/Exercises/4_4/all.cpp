#include <bits/stdc++.h>
#include "../4_10/imperial_metric.h"


using namespace std;

void input (int& feed, int& inches);
// Функция для ввода информации
// Предусловие: созданны переменные feed, inches созданы
// Постусловие: переменными feed, inches присвоены значения

void output (int& meters, int& centimeters);

int main() {

    char quest = 'Y';
    bool choose = 0;
    int feed = 0, inches = 0, meters = 0, centimeters = 0;
    while (quest == 'Y') {
    
    input(feed, inches);
    foot_and_inc_to_meter_and_centimeter(feed, inches, meters,centimeters);
    output(meters,centimeters);
    

    cout << "Хотите сделать еще один расчет? Нажмите Y и Enter или любую клавишу и Enter, чтобы выйти.";
    cin >> quest;
    }

    return 0;
}

void input (int& feed, int& inches) {
    cout << "Этот модуль осуществляет перевод длины в футах и дюймах в метры и сантиметры." << endl;
    cout << "Введите значение длины в футах: ";
    cin >> feed;
    cout << endl;
    cout << "Введите значение длины в дюймах: ";
    cin >> inches;
    cout << endl;

}

void output (int& meters, int& centimeters) {
cout << "Значение длины после преобразования составляет " << meters << " метра и " << centimeters << " санитметров." << endl;
}