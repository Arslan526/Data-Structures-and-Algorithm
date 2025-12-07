#include<iostream>
using namespace std;
void PrintArray(int arr[] , int n){
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void SwapAlternate(int * arr , int n){
    for(int i =0; i< n; i+=2){
        if(arr[i+1] < n){
            swap(arr[i] , arr[i+1]);
        }
    }
}
void SwapAlternate1(int* arr , int n){
    int i  = 0;
    while(i < n+1){
        swap(arr[i] , arr[i+1]);
        i = i + 2;
    }
}
 int main() {
    int Even[8] = {1, 2, 3 ,4 , 5 , 6 , 7 , 8};
     cout<<"Swap Alteranet in Even number  "<< endl;
     SwapAlternate1(Even , 8);
     PrintArray(Even , 8);
    return 0;
}