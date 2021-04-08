// move all x to end of the string
#include <iostream>
using namespace std;
string moveX(string str){
    if(str.length()==0){
        return "";
    }
    char c = str[0];
    string ans = moveX(str.substr(1));
    if(c=='x'){
        return ans+'x';
    }
    else{
        return c + ans;
    }
}
int main(){
    string str;
    cin>>str;
    cout<<moveX(str)<<endl;

    return 0;
}