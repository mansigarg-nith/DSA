// find the unique number in the array(with one unique number)
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int xorsum = 0;
    for(int i=0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    cout<<xorsum<<endl;
    return 0;
}