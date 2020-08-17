#include <iostream>
using namespace std;
 
int main() {
	    int num,m,p;
    cin>>num;
    int x[num];
 
    for (int i = 0; i <num; ++i) {
        cin >> x[i];
        m=x[0];
        p=0;
        for (int i = 0; i < num; ++i) {
            if (m >= x[i]) {
                m = x[i];
                p = i;
            }
        }
    }
        cout<<"Menor valor: "<<x[p]<<endl<<"Posicao: "<<p<<endl;
	return 0;
}