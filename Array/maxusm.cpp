#include<iostream>
int maximumSumSubarray(int * arr , int n , int k){
    long long  sum = 0;
    long long maxsum  = 0;
    for(int i = 0; i<k; i++){
        for(int j = i; j<k +1; j++){
            sum  = sum + arr[i];
        }
    }
    if(maxsum  < sum ){
        maxsum = sum;
        sum = 0;
        
    }
    return maxsum;
}
using namespace std;
int main(){
   int arr[] = {100, 200, 300, 400};
    int k =  2;
    int n = 4;

    cout<<"Max sum of with K "<< maximumSumSubarray(arr , n , k)<<endl;

}