#include <iostream>
using namespace std;
bool sumPair(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(arr[low]+arr[high]==x){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]<x){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}
int main(){
    int n,x;
    cin>>n>>x; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(sumPair(arr,n,x)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}