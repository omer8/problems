#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int dur = (c * 60 + d) - (a * 60 + b);
	int hours = dur / 60;
	if (dur < 0) { dur += 1440;  hours = dur / 60; }
	else if (dur == 0) { hours = 24; dur = 1440; }
	cout << "O JOGO DUROU " << hours << " HORA(S) E " << dur - (hours * 60) << " MINUTO(S)\n";
	return 0;

	

}
