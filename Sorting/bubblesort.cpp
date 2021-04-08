#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    int counter = 0;
    while(counter<n-1){
        for(int i=0; i<n-counter; i++){
            if(arr[i+1]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
}
