#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=3; i++){
        int j;
        for(j=1; j<=n; j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}