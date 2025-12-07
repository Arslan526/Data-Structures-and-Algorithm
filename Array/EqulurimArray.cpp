#include<iostream>
using namespace std;
int EqulurimNumber(int * arr , int n){
    
    for(int i =0; i<n;i++){
        int leftsum  = 0;
        for(int j = 0; j<i;j++){
            leftsum += arr[j];
        }
        int rightsum = 0;
        for(int j = i+1;j<n;j++){
            rightsum += arr[j];
        }
        if(leftsum == rightsum){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[7] = {-7, 1, 5, 2, -4, 3, 0};
    int ans = EqulurimNumber(arr , 7);
    cout<<"EqulurimNumber " << ans << endl;
}