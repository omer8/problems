#include<iostream>
using namespace std;
int main() {
	string n;
	cin >> n;
	int counter = 1;
	for (int i = 0; i < n.length(); ++i) {
		if (n[i] != n[i +1]) counter = 1;
		else {
			counter++;
			if (counter == 7) break;	
		}
	}
	if (counter == 7) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}