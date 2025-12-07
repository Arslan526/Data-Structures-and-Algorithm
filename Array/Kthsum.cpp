#include<iostream>
// #incldue<bits/stdc++.h>
using namespace std;
int kthsum(int * arr , int n ,int k){
   long long maxsum = 0;
    int sum = 0;
    for(int i =0; i <n - k;i++){
        sum  = sum + arr[i];
        if(maxsum < sum ){
            maxsum = sum;
            sum = 0;
        }
    
    for(int j = 0;j <k;j++){
        maxsum += sum ; 
    }
    }
    cout<<"MAxsum of "<< maxsum <<endl;
}
int main(){
    int arr[7] = {1, 3,7,3, 12, 12 ,7};
    int k = 2;
    cout<<"Max sum "<< endl;
    kthsum(arr , 7 , k);


}