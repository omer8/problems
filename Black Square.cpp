#include<iostream>
#include<string>
using namespace std;
int main() {
	int a1, a2, a3, a4,counter;
	cin >> a1 >> a2 >> a3 >> a4;
	string s;
	cin >> s;
	counter = 0;
	for (int i=0;i<s.length(); ++i) {
		if (s[i] == '1') counter += a1;
		else if(s[i] == '2') counter += a2;
		else if (s[i]  == '3') counter += a3;
		else if (s[i] == '4') counter += a4;
	}
	cout << counter << endl;
	return 0;


}
