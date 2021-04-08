// ways to arrange tiles in nx2 board and tile's dimensions are 2x1
#include <iostream>
using namespace std;
int tilingWay(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
          // for vertical   // for horizontal
    return tilingWay(n-1) + tilingWay(n-2);    // fibonacci
}
int main(){
    int n;
    cin>>n; 
    cout<<tilingWay(n);

    return 0;
}