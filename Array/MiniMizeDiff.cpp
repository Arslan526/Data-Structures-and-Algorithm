#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int miniMizeOfdiff(vector<int>&arr , int n , int k){
    sort(arr.begin() , arr.end());
    int mini = arr[0];
    int maxi = arr[n -1];
    int ans = maxi - mini;
    for(int i =1;i<n;i++){
        int a =  arr[i -1] + k;
        int b = arr[i] - k;
        if(b < 0) continue;
        maxi =  max(arr[n -1]- k , a);
        mini = min(arr[0]+ k , b);
        ans =  min(ans , maxi - mini);
    }
     return ans;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int k = 3;
    int ans = miniMizeOfdiff(arr , n  , k);
    cout<<"Minimize of Diff "<< ans<<endl;
}