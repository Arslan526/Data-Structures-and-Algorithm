#include<iostream>
#include<vector>
using namespace std;
int FindFibbonaci(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return  FindFibbonaci(n -2) +  FindFibbonaci(n -1);
    }

     
}
vector<int> FibbonaciNumber(int n){
    vector<int>ans;
    for(int i =0;i<n;i++){
        ans.push_back(FindFibbonaci(i));
    }
    return ans;
}
vector<int>fibonacciNumbers(int n){
    vector<int>ans;
    int firstNumber = 0;
    int secondNumber = 1;
    ans.push_back(firstNumber);

    for(int i = 1; i<n;i++){
        ans.push_back(secondNumber);
        int nextNumber =  firstNumber + secondNumber;
        firstNumber =  secondNumber;
        secondNumber = nextNumber;
    }
    return ans;
}
int NthfibonacciNumbersDynamic(int n , vector<int>&dp){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    else{
        return dp[n] =NthfibonacciNumbersDynamic(n -2 , dp) + NthfibonacciNumbersDynamic(n -1 , dp);
    }
}

int main(){
    // Fisrt Code Fibbonaci
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
   // int ḥ = NthfibonacciNumbers(n);
    vector<int>dp(n +1);

   for(int i =0;i<n;i++){
    dp[i] =-1;
    cout<<NthfibonacciNumbersDynamic(n , dp)<<endl;
   }
    // vector<int>ans = fibonacciNumbers(n);


    // for(int i =0; i<n; i++){
    
    //  cout<< ans[i]<<" ";
    // }


}