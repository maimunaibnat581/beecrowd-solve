#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, new_salary, increase;
    int perc;
    cin >> salary;

    if (salary <= 400.00) perc = 15;
    else if (salary <= 800.00) perc = 12;
    else if (salary <= 1200.00) perc = 10;
    else if (salary <= 2000.00) perc = 7;
    else perc = 4;

    increase = salary * perc / 100.0;
    new_salary = salary + increase;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << increase << endl;
    cout << "Em percentual: " << perc << " %" << endl;

    return 0;
}
