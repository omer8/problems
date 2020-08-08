#include<iostream>
using namespace std;
int main(){
 
    long long  x,y;
   cin>>x>>y;
    if(x%2==0) {
        if(y<=x/2) cout<<(2*y)-1<<endl;
        else cout<<(2*y)-x<<endl;
    }
else{
        if(y<=(x/2)+1) cout<<(2*y)-1<<endl;
        else cout<<(2*y)-x-1<<endl;
}
 
 
    return 0;
}