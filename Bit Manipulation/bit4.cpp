// is power of 2
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<(n && !(n & n-1));

    return 0;
}