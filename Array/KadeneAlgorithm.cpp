#include<iostream>
#include<vector>
using namespace std;
void TakeInputArr(vector<int>&arr , int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int solve(vector<int>&arr, int n){
    for(int i =0;i<n;i++){
        int sum  = 0;
        for(int j = i; j<n;j++){
            sum += arr[j];
        }
        return sum;
    } 
}

int KadenAlgorith(vector<int>&arr , int n){
    int sum =0;
    int maxi = arr[0];
    for(int i =0; i<n;i++){
        sum += arr[i];
        maxi = max(sum , maxi);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}
int main(){
   vector<int>arr = {1,3,5,1,7,1,9,19};
   int n = arr.size();
   
  
    // int sum = KadenAlgorith(arr , n);
    int sum = solve(arr , n);

    cout<<"Sum of the given arr : "<< sum << endl;

   
}