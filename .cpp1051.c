#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double income, tax = 0;
    cin >> income;

    if (income <= 2000.00)
        cout << "Isento" << endl;
    else {
        if (income > 4500.00) {
            tax += (income - 4500.00) * 0.28;
            income = 4500.00;
        }
        if (income > 3000.00) {
            tax += (income - 3000.00) * 0.18;
            income = 3000.00;
        }
        if (income > 2000.00)
            tax += (income - 2000.00) * 0.08;

        cout << fixed << setprecision(2);
        cout << "R$ " << tax << endl;
    }
    return 0;
}
