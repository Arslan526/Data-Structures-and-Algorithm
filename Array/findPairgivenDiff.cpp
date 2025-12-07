#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>>FindPairGvenDiff(vector<int>&arr , int diff){
  vector<vector<int>>ans;
  for(int i =0; i<arr.size();i++){
        for(int j = i+1;j<arr.size();j++){
            if(abs(arr[i] - arr[j]) == diff){
                vector<int>temp;
                temp.push_back(min(arr[i] , arr[j]));
                temp.push_back(max(arr[i] , arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin() , ans.end());
    return ans;
}
vector<vector<int>>FindPairGvenDiffTwoPointer(vector<int>&arr , int  diff){
  int n = arr.size();
  int i =0;
  int j = 1;
  sort(arr.begin() , arr.end());
  vector<vector<int>>ans;
  while(i < n && j < n){
    if(i != j && abs(arr[i] - arr[j]) == diff){
      vector<int>temp;
      temp.push_back(min(arr[i] , arr[j]));
      temp.push_back(max(arr[i] , arr[j]));
      ans.push_back(temp);
      i++;
      j++;
    }
    else if(abs(arr[i] - arr[j] < diff)){
      j++;
    }
    else{
      i++;
    }
  }
  return ans;
}
int main(){
  vector<int> arr = {2,3,4,5,1,5};
    int diff = 2;
    vector<vector<int>> pairs = FindPairGvenDiffTwoPointer(arr, diff);
    cout <<"Find pair Gevin Pair "<< diff << endl;
    for (auto& p : pairs) {
        cout<< p[0] << " " << p[1] <<endl;
    }
}