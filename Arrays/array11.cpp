// find element in array
#include <iostream>
using namespace std;
int main(){
    int n, m, x;
    cin>>n>>m>>x;
    int arr[n][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int r=0, c=m-1;
    bool flag = false;
    while(r<n && c>=0){
        if(arr[r][c]==x){
            flag = true;
        }
        if(arr[r][c]>x){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag==true){
        cout<<"Element Found!"<<endl;
    }
    else{
        cout<<"Element not found!"<<endl;
    }
}
