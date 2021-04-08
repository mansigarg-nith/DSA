// find range of sub array with given sum
#include <iostream>
using namespace std;
int main(){
    int n, S;
    cin>>n>>S; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int st = -1, en = -1;
    int i=0, j=0;
    int currSum = 0;
    while(j<n && currSum+arr[j]<=S){
        currSum+=arr[j];
        j+=1;
    }
    if(currSum==S){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        currSum+=arr[j];
        while(currSum>S){
            currSum-=arr[i];
            i++;
        }
        if(currSum==S){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
}
