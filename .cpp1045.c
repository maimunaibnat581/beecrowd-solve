#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    double sides[] = {A, B, C};
    sort(sides, sides + 3, greater<double>());
    A = sides[0]; B = sides[1]; C = sides[2];

    if (A >= B + C) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        if (fabs(A*A - (B*B + C*C)) < 1e-9)
            cout << "TRIANGULO RETANGULO" << endl;
        else if (A*A > B*B + C*C)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else
            cout << "TRIANGULO ACUTANGULO" << endl;

        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (A == B || B == C || A == C)
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}
