#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

double solve(vector<int> arr1 , vector<int> arr2){
    vector<int>ans(arr1.begin() , arr1.end());
    ans.insert(ans.end() , arr2.begin() ,arr2.end());
    sort(ans.begin() , ans.end());
    int size = ans.size();
    if(size % 2 == 0){
        return ans[size / 2 - 1] + ans[size /2];

    }
    return ans[size /2];
}
double MargeArray(vector<int> &arr1 , vector<int> &arr2){
    int n = arr1.size() , m = arr2.size();
    int i = 0, j = 0;
    vector<int> ans; 
   while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    while(i < n){
        ans.push_back(arr1[i++]);
    }
    while(j < m){
      ans.push_back(arr2[j++]);
    }
    int size = ans.size();
    if(size % 2 == 0){
        return (ans[size / 2 - 1] + ans[size /2])/2.0;

    }
    return ans[size /2];
    
}
int main(){
    vector<int>arr1 =  {1,3,8};
    vector<int>arr2 = {7,9,10,11};
    cout<< MargeArray(arr1 , arr2);
  
}