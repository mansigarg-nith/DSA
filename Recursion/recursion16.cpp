// permutations of a string
#include <iostream>
using namespace std;
void perm(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        string ros = str.substr(0,i) + str.substr(i+1);
        perm(ros,ans + c);
    }
}
int main(){
    string str;
    cin>>str;
    perm(str,"");

    return 0;
}