#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        if(i==1 || i==n){
            for(int k=1; k<=n; k++){
                cout<<"*";
            }
        }
        else{
                cout<<"*";
                for(int k=1; k<=n-2; k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}