// print all sustring of a string along with ASCII value
#include <iostream>
using namespace std;
void subseq(string str, string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    char c = str[0];
    int code = c;
    string ros = str.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+c);
    subseq(ros,ans+to_string(code));
}
int main(){
    string str;
    cin>>str;
    subseq(str,"");

    return 0;
}