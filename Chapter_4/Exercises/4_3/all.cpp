#include <bits/stdc++.h>

using namespace std;

void compute_coin (int coin_value, int& number, int& amount_left);
// Предусловие: 0<coin_value<100<=amoutnt_left<100
// Постусловие: переменной number присвоено значение, равное максимальному количеству монет
// достоинством в coin_value центов, из которых получена сумма меньшая, чем amoutnt_left.
// Значени amoutnt_left уменьшено на эту сумму: number * coin_value

int main() {
    int amount_left = 0, number = 0, coin_value = 0;
    bool flag = 1;
    char quest = 'Y';
    while (quest == 'Y') {
    cout << "Введите сумму сдачи в пределах от 1 до 99 центов:";
    cin >> amount_left;
    if ( (amount_left > 0) && (amount_left < 100))
    {
   
    cout << amount_left << " центов можно выдать "; 
 
    compute_coin(25, number, amount_left);
    if (number != 0)
    cout  << number << " монетами по 25 центов ";
   
    compute_coin(10, number, amount_left);
    if (number != 0)
    cout << number << " монетами по 10 центов ";

    compute_coin(1, number, amount_left);
    if (number != 0)
    cout << number << " монетами по центу." << endl;

    } else {
     cout << "Введена неверная сдача, число должно быть в пределах от 1 до 99" << endl;
    }
    cout << endl;
    cout << "Хотите сделать еще один расчет? Нажмите Y и Enter или любую клавишу и Enter, чтобы выйти.";
    cin >> quest;
    }

    return 0;
}

void compute_coin (int coin_value, int& number, int& amount_left) {
    number = amount_left/coin_value;

    amount_left = amount_left - number*coin_value;
}

