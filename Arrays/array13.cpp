// print word of max length
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();
    int i=0; 
    int curLen = 0, maxLen = 0;
    int st = 0, maxst = 0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(curLen>maxLen){
                maxLen = curLen;
                maxst = st;
            }
            curLen = 0;
            st = i+1;
        }
        else{
            curLen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0; i<maxlen; i++){
        cout<<arr[i+maxst]<<" ";
    }
}
