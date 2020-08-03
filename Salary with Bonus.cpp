#include <iostream>

using namespace std;

int main() {
    string a;
    double b, c;
    cin >> a >> b >> c;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << "TOTAL = R$ " << (b + 0.15 * c) << endl;
    return 0;
}