// print first and last occurence of a number in an array
#include <iostream>
using namespace std;
int first(int arr[], int n, int i, int value){
    if(i==n){
        return -1;
    }
    if(arr[i]==value){
        return i;
    }
    return first(arr,n,i+1,value);
}
int last(int arr[], int n, int i, int value){
    if(i==-1){
        return -1;
    }
    if(arr[i]==value){
        return i;
    }
    return last(arr,n,i-1,value);
}
int main(){
    int n,value;
    cin>>n>>value;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<first(arr,n,0,value)<<endl;
    cout<<last(arr,n,n-1,value);
    return 0;
}