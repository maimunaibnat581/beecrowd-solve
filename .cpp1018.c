#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << N << endl;
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int q = N / notes[i];
        N %= notes[i];
        cout << q << " nota(s) de R$ " << notes[i] << ",00" << endl;
    }
    return 0;
}
