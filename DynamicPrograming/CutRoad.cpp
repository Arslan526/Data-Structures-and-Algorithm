#include<iostream>
#include<vector>
using namespace std;
int CutRoadSegment(int n , int x , int y , int z){
    if(n == 1){
        return 0;
    }
    if(n < 0) return -1;
    int a =  CutRoadSegment(n -x ,x , y , z) +1;
    int b =  CutRoadSegment(n -y ,x , y , z) +1;
    int c =  CutRoadSegment(n -z ,x , y , z) +1;
    return max(a , max(b , c));
}
int CutRoadSegmentMem(int n , int x , int y , int z ,vector<int>&dp){
    if(n == 1){
        return 0;
    }
    if(n < 0) return -1;
    if(dp[n] != -1) return dp[n];

    int a =  CutRoadSegmentMem(n -x ,x , y , z ,dp) +1;
    int b =  CutRoadSegmentMem(n -y ,x , y , z ,dp) +1;
    int c =  CutRoadSegmentMem(n -z ,x , y , z ,dp) +1;
    return dp[n] = max(a , max(b , c));
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    vector<int>dp(n +1 , -1);
    int x , y , z;
    cout<<"Enter the Value of x , y , z"<<endl;
    cin>>x>>y>>z;
    int ans = CutRoadSegmentMem(n , x , y , z , dp);
    if(ans < 0){
       return 0;
    }
    else{ 
        cout<<"Maximize The Cut Segments "<< ans <<endl;
    }

   
}