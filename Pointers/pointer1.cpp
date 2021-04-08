#include <iostream>
using namespace std;
int main(){
    char c;
    char* cptr = &c;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(cptr)<<endl;
    return 0;
}
