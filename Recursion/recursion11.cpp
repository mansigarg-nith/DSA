// remove duplicates from string
#include <iostream>
using namespace std;
string removeDup(string str){
    if(str.length()==0){
        return "";
    }
    char ch = str[0];
    string ans = removeDup(str.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    else{
        return ch + ans;
    }
}
int main(){
    string str;
    cin>>str;
    cout<<removeDup(str)<<endl;

    return 0;
}