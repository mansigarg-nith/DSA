// print numbers in increasing and decresing order
#include <iostream>
using namespace std;
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}