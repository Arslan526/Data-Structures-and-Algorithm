#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
int  getmaxnumber(int arr[] , int n){
    int mini = INT_MAX;
   for(int i = 0; i<n;i++){
       mini = min(mini ,arr[i]);
   }
   return mini;
}
int  getmininumber(int arr[] , int n){
    int maxi= INT_MIN;
    for(int i = 0; i<n;i++){
        maxi = max(maxi , arr[i]);
    }
    return maxi;
}

int main(){
      int arr[8] = {1,4,6 , 8 ,6 , 9 , 0 , -1};
      //cout<<"Minimum value is  "<< getmaxnumber(arr , 8)<< endl;
      //cout<<"Maximum value is  "<< getmininumber(arr , 8)<< endl;
      sort(arr , arr+8);
      int k  = 2;

      cout<< arr[8 -k] <<endl;
    return 0;
}