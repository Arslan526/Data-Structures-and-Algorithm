#include<iostream>
#include<algorithm>
using namespace std;
  int solve(int * arr , int n){
    int ans = 0;
    for(int i =0; i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
  }
bool Unique(int arr[] , int n){
    for(int i = 0; i<n;i++){
        if(arr[i] == n){
            return true;
        }
        
    }
    return false;
}
int main(){
    int arr[7] = {3,7,3,2,7,2,4 ,4};
    int n = 7;
    int ans = solve(arr , n);
    cout<<"Unique number is -> "<<ans <<endl;

    cout<<"Sort the array"<<endl;
    sort(arr , arr + n);
    for(int i =0;i <n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans1 = Unique(arr , n);
    if(ans1){
        cout<<"Unique number"<< endl;
    }
    else{
        cout<<"Not a Uique number"<<endl;
    }

   
   
    return 0;
} 
