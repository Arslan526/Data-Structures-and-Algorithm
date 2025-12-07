#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>>Find4SumPair(vector<int>& arr , int k){
  sort(arr.begin() ,arr.end());
  vector<vector<int>>ans;
  int n = arr.size();
  for(int i = 0; i<n-3; i++){
    for(int j = 0; j < n-2; j++){
      int s = j +1;
      int e = n -1;
      int sum = 0;
      while(s < e){
        vector<int>temp;
        int sum  = arr[i] + arr[j] + arr[s] + arr[e];

        if(sum ==  k){
          temp.push_back(arr[i]);
          temp.push_back(arr[j]);
          temp.push_back(arr[s]);
          temp.push_back(arr[e]);
          ans.push_back(temp);
          s++;
          e--;
        }
         else if(sum < k){
          s++;
         }
         else{
          e--;
         }
      }
    }
  }
  return ans;
}
int find3WithSumSmallerThanX(vector<int>arr , int x){
  int n = arr.size();
  int count = 0;
  for(int i = 0; i <n -2;i++){
    for(int j = i+1; j <n -1;j++){
      for(int k =  j+1; k <n; k++){
        int sum = arr[i] + arr[j] + arr[k];
        if(x < sum){
          count++;
        }
      }
    }
  }
  return count;
}
vector<vector<int>> find3WithSumSmallerThanXTwoPointer(vector<int>& arr , int x){
  int count = 0;
  sort(arr.begin() , arr.end());
  vector<vector<int>>ans;
  int n = arr.size();
  for(int i = 0;i<n;i++){
    vector<int>temp;
    int s =  i +1;
    int e = n -1;
    int sum = 0;
    sum =  arr[i] + arr[s] + arr[e];
    if(x > sum){
      temp.push_back(arr[i]);
      temp.push_back(arr[s]);
      temp.push_back(arr[e]);
      ans.push_back(temp);
      s++;
      e--;
      
    }
    else if(x < sum){
        e--;
    }
    else{
      s++;
    }
  }
  return ans;
}
int main(){
  vector<int> arr = {2,6,4,9,7 ,3,2,1,0};
    // int sum = 35;
    // vector<vector<int>>FourSum = Find4SumPair(arr, sum);
    // cout <<"Find pair Gevin Pair "<< sum << endl;
    // for (auto& p   : FourSum) {
    //     cout<< p[0] << " " << p[1] << " " << p[2] << " "<< p[3] <<endl;
    // }
  int x = 15;
  
  vector<vector<int>> count =  find3WithSumSmallerThanXTwoPointer(arr , x);
  cout<<"Find 3 With SumSmaller Than X " << x <<endl;
  for (auto& p : count) {
        cout<< p[0] << " " << p[1] << " " << p[2] <<endl;
    }
 
}