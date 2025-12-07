#include<iostream>
#include<vector>
using namespace std;
void solve(int *arr1 , int *arr2 , int n , int m){
    int carry = 0;
    int i =0;
    int j =0;
    int ans;
    while(i < n && j < m ){
      int sum = arr1[i] + arr2[j] + carry;
      carry = sum %10;
      sum = sum %10;
      cout<<ans;
      i++;
      j++;
    } 
    while(i < n ){
    int sum  = arr1[i] + carry;
       carry = sum %10;
      sum = sum %10;
      //ans.push_back(sum);
      cout<<ans;
      i++;
    }
    while(j < m ){
    int sum  = arr1[i] + carry;
       carry = sum %10;
      sum = sum %10;
      //ans.push_back(sum);
      cout<<ans;
    
     j++;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum %10;
      sum = sum %10;
      //ans.push_back(sum);
      cout<<ans;

    }
    //return ans;
}


int main(){
   int arr1[5] = {2 , 3 , 4 , 6,8};
   int arr2[4] = {3 ,1 , 7 ,8};
   

    cout<<"Two Sum Of The Array"<<endl;
   solve(arr1 , arr2 , 5 , 4);
    
    
    return 0;
}