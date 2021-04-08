#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str = "sdbdskjhfeshfksdnflkejfoi";
    char count[26];
    for(int i=0; i<26; i++){
        count[i] = 0;
    }
    for(int i=0; i<str.size(); i++){
        count[str[i]-'a']+=1;
    }
    char c = 'a';
    int maxFreq = 0;
    for(int i=0; i<26; i++){
        if(maxFreq<count[i]){
            maxFreq = count[i];
            c = i + 'a';
        }
    }
    cout<<c<<" "<<maxFreq;
    return 0;
}