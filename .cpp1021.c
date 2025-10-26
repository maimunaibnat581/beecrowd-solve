#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double value;
    cin >> value;
    int cents = round(value * 100);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << cents / notes[i] << " nota(s) de R$ " << fixed << setprecision(2) << notes[i] / 100.0 << endl;
        cents %= notes[i];
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << cents / coins[i] << " moeda(s) de R$ " << fixed << setprecision(2) << coins[i] / 100.0 << endl;
        cents %= coins[i];
    }

    return 0;
}
