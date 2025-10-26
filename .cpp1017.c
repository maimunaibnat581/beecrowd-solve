#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int time, speed;
    cin >> time >> speed;
    double liters = (time * speed) / 12.0;
    cout << fixed << setprecision(3);
    cout << liters << endl;
    return 0;
}
