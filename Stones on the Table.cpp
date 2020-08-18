#include<iostream>
using namespace std;
int main() {
	int n,counter=0;
	string color;
	cin >> n;
	cin >> color;
	for (int i = 0; i < n; ++i) {
		if (color[i] == color[i + 1]) counter++;
		else continue;
	}
	cout << counter << endl;
	return 0;
}