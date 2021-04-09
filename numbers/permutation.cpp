// permutate array using next_permutation
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> ans;
int main(){
   int n;
   cin>>n;
   vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    do{
        ans.push_back(v);
    }while(next_permutation(v.begin(), v.end()));
    for(auto v: ans){
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}