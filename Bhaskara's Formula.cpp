#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c,d;
    cin >> a >> b >> c;
    if (a == 0 || (b * b - 4 * a * c) < 0) cout << "Impossivel calcular" << endl;
    else {
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(5);
        d = sqrt(b * b - 4 * a * c);
        cout << "R1 = " << (-b + d) / (2 * a) << endl;
        cout << "R2 = " << (-b - d) / (2 * a) << endl;
    }

    return 0;
}