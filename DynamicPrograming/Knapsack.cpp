#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Knapsack(int index , int capacity , vector<int>&weight, vector<int>&value){
    if(index == 0 ||  capacity == 0) return 0;

    if(weight[index -1] > capacity){
        return Knapsack(index -1 , capacity , weight , value);
    }
    else{
        int include =  value[index -1] + Knapsack(index -1 , capacity - weight[index -1] , weight , value);
        int exclude = Knapsack(index -1 , capacity , weight , value);
        return max(include , exclude);
    }
}

int KnapsackRes(int index , int capacity , vector<int>&weight, vector<int>&value){
    if(index == 0){
        if(weight[0] <= capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    int include =0;
    if(weight[index] <= capacity){
        include = value[index] + KnapsackRes(index -1 , capacity - weight[index] , weight , value);
    }
    int exclude = KnapsackRes(index -1 , capacity , weight ,value);
    return max(include , exclude);
}

int KnapsackMem(int index , int capacity , vector<int>&weight, vector<int>&value , vector<vector<int>>&dp){
    if(index == 0){
        if(weight[0] <= capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    if(dp[index][capacity] != -1) return dp[index][capacity];
    
    int include =0;
    if(weight[index] <= capacity){
        include = value[index] + KnapsackMem(index -1 , capacity - weight[index] , weight , value , dp);
    }
    int exclude = KnapsackMem(index -1 , capacity , weight ,value , dp);

    dp[index][capacity] =  max(include , exclude);
    return dp[index][capacity];
}

int KnapsackTab(int n , int capacity, vector<int>&weight, vector<int>&value ){
    vector<vector<int>>dp(n +1 , vector<int>(capacity +1 ));
    for(int w = 0; w < weight[0];w++){
        if(weight[0] <= capacity){
            dp[0][w] = value[0];
        }
        else{
            dp[0][w] = 0;
        }
    }
    for(int index = 0; index<n;index++){
        for(int w = 0; w<=capacity;w++){
            int include = 0;
            if(weight[index] <= capacity){
                include = value[index] + dp[index -1][w];
                int exclude = dp[index -1][w];
                dp[index][w] = max(include , exclude);
            }
        }
    }
    return dp[n -1 ][capacity];
    
}

int main(){
    int  n , w;
    cout<<"Enter number of item "<<endl;
    cin>>n;
    cout<<"Enter the Knapsack capacity "<<endl;
    cin>>w;
    vector<vector<int>>dp(n+1 , vector<int>(w+1 , -1));
    vector<int>weight(n);
    vector<int>value(n);
    cout<<"Enter weight of items"<<endl;
    for(int i = 0; i<n;i++){
        cin>>weight[i];
    }
    cout<<"Enter value of items"<<endl;
    for(int i = 0; i<n;i++){
        cin>>value[i];
    }
    int res =  KnapsackTab(n , w , weight ,value);
    cout<<"Maximum  value of Knapsack "<<res <<endl;
    

}