#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    cin >> R;
    double V = (4.0/3) * 3.14159 * R * R * R;
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << V << endl;
    return 0;
}
