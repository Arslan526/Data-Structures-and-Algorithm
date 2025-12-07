#include<iostream>
using namespace std;

int solve(int * cost , int n ){
    if(n == 0) return cost[0];

    if(n == 1) return cost[1];

    return  cost[n] + min(solve(cost , n -1) , solve(cost , n -1));
}
int solve1(int * cost , int n){
    int prev2 = cost[0];
    int prev1 = cost[1];

    for(int i =2;i<n;i++){
        int curr = cost[i] + min(prev1 , prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1 , prev2);
}
int main(){
    int cost[9] = {3, 5, 4,9,11 ,8 ,45 ,34,12};

    int n =  9;

    int ans = solve1(cost , n);

    cout<<"Min cost Climbing Stairs "<<ans<<endl;
    return 0;
}