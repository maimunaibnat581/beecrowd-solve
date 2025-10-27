#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    cin >> x;

    if (x < 0.0 || x > 100.0)
        cout << "Fora de intervalo" << endl;
    else if (x <= 25.0)
        cout << "Intervalo [0,25]" << endl;
    else if (x <= 50.0)
        cout << "Intervalo (25,50]" << endl;
    else if (x <= 75.0)
        cout << "Intervalo (50,75]" << endl;
    else
        cout << "Intervalo (75,100]" << endl;

    return 0;
}
