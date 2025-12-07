#include<iostream>
using namespace std;
int combinctiom(int * arr ,int tar , int n){
    if(tar == 0) return 0;

    if(tar < 0) return 1;

    int ans = 0;
    for(int i = 1; i<n;i++){
        ans += combinctiom(arr , tar - arr[i] , n);
    }
    return ans;
}
int main(){
    cout<<"Hi My name is Arslan Ansari"<<endl;
    int arr[5] = {11, 3,3,5,1};
    int n = 5;
    int tar = 11;
    cout<<"ans "<<combinctiom(arr  , tar , n)<<endl;
    return 0;
}