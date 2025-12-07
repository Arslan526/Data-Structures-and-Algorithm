
#include <climits>
#include <iostream>
using namespace std;

 bool ispossiple(int arr[] , int n , int m , int mid){
    int Bourdcount = 1;
    int numPaint = 0;
    for(int  i = 0; i < n; i++){
        if(numPaint + arr[i] <= mid){
            numPaint += arr[i];
        }
        else {
            Bourdcount++;
            if(Bourdcount > m || arr[i] > mid){
                return false;
            }
            numPaint = arr[i];
        }
    }
    return true;
 }
 
int partition(int arr[], int n, int m)
{
       int s = 0;
       int sum = 0;
       for(int i = 0; i<n; i++){
        sum += arr[i];
       }
       int e = sum;
       int mid = s + (e - s) / 2;
       int ans = -1;
       while(s <=e){
        if(ispossiple(arr , n  , m  , mid)){
           ans = mid;
           e = mid -1;
        }
        else{
            s = mid + 1;
        }
         mid = s + (e - s) / 2;
       }
       return ans;
}
 

int main()
{
    int arr[5] = {10,20,30,40,50};
    int ans = partition(arr , 5 , 2);
    cout<<"Painter patission " << ans<< endl;
   
}