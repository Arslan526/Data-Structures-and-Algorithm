#include<iostream>
#include<algorithm>
using namespace std;
bool IspossibleSolve(int * arr , int k , int mid){
    int countcow = 1;
    int lastpos = arr[0];
    for(int i =0; i<k;i++){
        if(arr[i] - lastpos >= mid){
            countcow++;

            if(countcow == k){
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int AggressiveCow(int * arr , int n , int k){
   int ans =  -1;s
    int s = 0;
    int maxi = -1;
    for(int i =0; i<n; i++){
        maxi = max(maxi , arr[i]);
    }
    int e = maxi;
    int mid = s + (e - s) /2;

    while(s <= e){
        if(IspossibleSolve(arr , k , mid)){
            ans = mid;
            e = mid -1;
        }
        else {
            s = mid+1;
        }
        mid = s + (e - s) /2;
    }
    return ans;
}
int main(){
  
    int arr[5] = {8 , 3 , 2 , 7 ,1};
    int n = 5;
    sort(arr , arr + n);
    for(int i =0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    cout<<"Aggrssive Cow is " << AggressiveCow(arr , n , 2) << endl;
    return 0;
} 