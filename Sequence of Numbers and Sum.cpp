#include <iostream>
using namespace std;
 
int main() {
	    int M,N,x,y,sum=0;
    while(x>0&&y>0) {
        cin >> M>> N;
        x = min(M, N);
        y = max(M, N);
        sum=0;
        if (x <= 0 || y <= 0)
            break;
        else {
            for (int i = x; i <= y; ++i) {
                sum += i;
                cout << i << " ";
            }
            cout << "Sum=" << sum << endl;
        }
    }
	return 0;
}