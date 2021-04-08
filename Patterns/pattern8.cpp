#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n; 
    int i;
    for(i=n; i>=1; i--){
        if(i==n){
            for(int j=1; j<=(2*i)-1; j++){
                cout<<"*";
            }
        }
        else{
            for(int k=i; k>=1; k--){
                cout<<"*";
            }
             for(int k=1; k<=(2*(n-i))-1; k++){
                cout<<" ";
            }
            for(int k=i; k>=1; k--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(i=1; i<=n; i++){
        if(i==n){
            for(int j=1; j<=(2*i)-1; j++){
                cout<<"*";
            }
        }
        else{
            for(int k=i; k>=1; k--){
                cout<<"*";
            }
             for(int k=1; k<=(2*(n-i))-1; k++){
                cout<<" ";
            }
            for(int k=i; k>=1; k--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}