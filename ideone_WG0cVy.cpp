#include<iostream>
using namespace std;
int main() {
	int time;
	cin >> time;
	int hour = time / (60 * 60);
	time -= hour * (60 * 60);
	int min = time / 60 ;
	int sec = time - min * 60;
	cout << hour<<":"<<min<<":"<<sec<<"\n";
	return 0;



}