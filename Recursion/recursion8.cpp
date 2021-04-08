// reverse a string
#include <iostream>
using namespace std;
void reverse(string str){
    if(str.size()==0){
        return;
    }
    string ros = str.substr(1);
    reverse(ros);
    cout<<str[0];
    
}
int main(){
    string str;
    cin>>str;
    reverse(str);

    return 0;
}