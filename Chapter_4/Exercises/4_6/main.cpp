#include <bits/stdc++.h>
#include "../4_10/imperial_metric.h"
#include "chooser_feet_to_meter.h"

using namespace std;

int main() {

    char quest = 'Y';
    bool choose = 0;
    while (quest == 'Y') {
    
    chooser_feed_to_meter (choose);

    cout << "Хотите сделать еще один расчет? Нажмите Y и Enter или любую клавишу и Enter, чтобы выйти.";
    cin >> quest;
    }

    return 0;
}

void chooser_feed_to_meter (bool& choose) {
    
}