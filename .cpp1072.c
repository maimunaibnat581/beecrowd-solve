#include <iostream>
using namespace std;

int main() {
    int N, x, in = 0, out = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x >= 10 && x <= 20) in++;
        else out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
