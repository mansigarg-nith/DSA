// get bit
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    if((n & 1<<i)!=0){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    return 0;
}
