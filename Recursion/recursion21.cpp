#include <iostream>
using namespace std;
int knapsack(int val[], int w[], int n, int W){
    if(n==0 || W==0){
        return 0;
    }
    if(w[n-1]>W){
        return knapsack(val, w, n-1, W);
    }
    return max(knapsack(val, w, n-1, W-w[n-1]) + val[n-1], knapsack(val, w, n-1, W));
}
int main(){
    int n, W;
    cin>>n>>W;
    int w[n], val[n];
    for(int i=0; i<n; i++){
        cin>>w[i];
    }
    for(int i=0; i<n; i++){
        cin>>val[i];
    }
    cout<<knapsack(val, w, n, W);
    return 0;
}