//clear bit
#include <iostream>
using namespace std;
int main(){
    int n, i;
    cin>>n>>i;
    int mask = ~(1<<i);
    cout<<(n & mask);
    return 0;
}