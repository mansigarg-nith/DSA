// tower of hanoi
#include <iostream>
using namespace std;
void toh(int n, char src, char dst, char hlp){
    if(n==0){
        return;
    }
    toh(n-1, src, hlp, dst);
    cout<<"Move from "<<src<<" to "<<dst<<endl;
    toh(n-1,hlp, dst, src);
}
int main(){

    toh(3,'A','C','B');

    return 0;
}