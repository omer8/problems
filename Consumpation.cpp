#include<iostream>
using namespace std;
int main() {
	int x;
	double y;
	cin >> x;
	cin >> y;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);
	cout << x / y << " km/l" << endl;
	return 0;



}