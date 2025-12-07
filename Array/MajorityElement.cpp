#include<iostream>
#include <algorithm>
using namespace std;
int Majority(int * arr , int n){
    
}
int Majority2(int * arr , int n){
    int freq =1;
    sort(arr , arr+n);
    int ans = arr[0];
    
    for(int i =1; i<n;i++){
        if(arr[i] == arr[i+1]){
            freq++;
        }
        else{
         freq = 1;
         ans = arr[i];
        } 
    }
   if(freq > n /2) return ans;

}
int main(){
    int arr[5] = {2,2,1,1,1};
    cout<<"Majority Element "<<Majority2(arr , 5)<<endl;
}