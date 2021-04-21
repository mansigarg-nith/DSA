// count sort
#include <iostream>
using namespace std;
void countSort(int arr[], int n){
    int m=arr[0];
    for(int i=0; i<n; i++){
        m = max(m, arr[i]);
    }
    int count[10] = {0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i=1; i<=m; i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<output[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countSort(arr, n);
    return 0;
}