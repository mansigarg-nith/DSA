// print all substrings of a string
#include <iostream>
using namespace std;
void subseq(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    char c = str[0];
    string ros = str.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+c);
}
int main(){
    string str;
    cin>>str;
    subseq(str,"");

    return 0;
}