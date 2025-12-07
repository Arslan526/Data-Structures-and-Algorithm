#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ContainerMostWater(int * arr , int n){
    int ans = 0;
    for(int i = 0; i<n;i++){
        int left = i;

        for(int j =  i +1; j<n;j++){
            int right =  j;

            int width = right - left;
            int hight =  min(arr[i] , arr[j]);
            int area = width * hight;

            ans = max(ans , area);
        }
    }
    return ans;
}
int ContainerMostWater1(int * arr , int n){
   
    
    int leftpointer =  0;
    int rightpointer = n-1;
    int ans = 0;
    while(leftpointer < rightpointer){

        int width = rightpointer - leftpointer;

        int hight = min(arr[leftpointer] , arr[rightpointer]);

        int area = width * hight;

        ans  = max(ans , area);

        if(arr[leftpointer] < arr[rightpointer]){
            leftpointer++;
        }
        else{
            rightpointer--;
        }
    }
    return ans;
}
int main(){
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    int n = 9;
    int MaxWater = ContainerMostWater1(arr , n);
    cout<<"Maximum Container with most water "<< MaxWater<< endl;
    return 0;
}