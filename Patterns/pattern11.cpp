#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int coef = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            if(i==0  || j==0){
                coef = 1;
            }
            else{
                coef = coef * (i-j+1)/j;
            }
            cout<<coef<<"  ";
        }
        cout<<endl;
    }
}