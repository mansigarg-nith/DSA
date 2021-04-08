#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s=0, e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<key<<" is at "<<binarySearch(arr,n,key)<<" index"<<endl;
}