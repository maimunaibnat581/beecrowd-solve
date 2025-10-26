#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number, hours;
    double value;
    cin >> number >> hours >> value;
    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << hours * value << endl;
    return 0;
}
