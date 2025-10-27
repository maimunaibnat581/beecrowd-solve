#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    int duration = (end > start) ? end - start : 24 - start + end;
    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
    return 0;
}
