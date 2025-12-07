#include<iostream>
#include<vector>

using namespace std;
int solve(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    return ((n -1) * solve(n -1) + solve(n -2));
}
int solveTab(int n){
    vector<int>dp(n+1);
    dp[1] = 0;
    dp[2] = 1;
    for(int i =3; i<n;i++){
        int first = dp[i -1];
        int second = dp[i -2];
        int sum = first + second;
        int ans =  (i -1) * sum;
        dp[i] = sum;
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Count Derangment "<< solveTab(n)<<endl;
}