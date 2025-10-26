#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double salary, sales;
    cin >> name >> salary >> sales;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary + sales * 0.15 << endl;
    return 0;
}
