#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;
    while(row_start<=row_end && col_start<=col_end){
        for(int row = row_start; row<=row_end; row++){
            cout<<arr[row][col_start]<<" ";
        }
        cout<<endl;
        col_start++;
    }
}