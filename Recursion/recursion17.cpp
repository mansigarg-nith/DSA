// number of ways to reach from one point to another in board game
#include <iostream>
using namespace std;
int countPath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int sum = 0;
    for(int i=1; i<=6; i++){
        sum+=countPath(s+i,e);
    }
    return sum;
}
int main(){
    int s,e;
    cin>>s>>e;
    cout<<countPath(s,e);

    return 0;
}