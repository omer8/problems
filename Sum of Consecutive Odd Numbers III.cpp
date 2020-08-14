#include <iostream>
using namespace std;
 
int main() {
	 int a,b,n,sum=0;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        sum = 0;
        cin >> a >> b;
        if (a % 2 == 0) 
            ++a;
        for (int j = 0; j < b; ++j) {
            sum += a;
            a += 2;
        }
        cout << sum<<endl;
    }
	return 0;
}
