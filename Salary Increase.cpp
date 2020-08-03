#include <iostream>

using namespace std;

int main() {
    double sal;
    cin >> sal;
    if (sal >= 0 && sal <= 400.00) {
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout << "Novo salario: " << (sal + 0.15 * sal) << endl;
        cout << "Reajuste ganho: " << (0.15 * sal) << endl;
        cout << "Em percentual: 15 %" << endl;
}
    else if (sal >= 400.01 && sal <= 800.00) {
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout << "Novo salario: " << (sal + 0.12 * sal) << endl;
        cout << "Reajuste ganho: " << (0.12 * sal) << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (sal >= 800.01 && sal <= 1200.00) {
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout << "Novo salario: " << (sal + 0.10 * sal) << endl;
        cout << "Reajuste ganho: " << (0.10 * sal) << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (sal >= 1200.01 && sal <= 2000.00) {
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout << "Novo salario: " << (sal + 0.07 * sal) << endl;
        cout << "Reajuste ganho: " << (0.07 * sal) << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else {
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout << "Novo salario: " << (sal + 0.04 * sal) << endl;
        cout << "Reajuste ganho: " << (0.04 * sal) << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0; 
}