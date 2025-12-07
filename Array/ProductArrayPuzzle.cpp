#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> ProArrayPuzzle(vector<int>&nums ){
 vector<int>ans;
        int n = nums.size();
        long long pos =  1;
        long long pre = 1;
        for(int i =0; i<n-1;i++){
            int j =  i +1;
            pos =1;
            while(j < n ){
                pos*= nums[j];
                j++;
            }
            ans.push_back(pre* pos);
            pre *= nums[i];
        }
        return ans;
}
int main(){
  vector<int> arr  = {2,6,4,9,7 ,3,2,1,0};
  vector<int> product =  ProArrayPuzzle(arr);
  cout<<"Product Array Puzzle "<<endl;
  for(int i =0; i< product.size();i++){
    cout<<product[i] <<" ";
  }
  cout<<endl;


}