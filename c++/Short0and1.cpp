#include<iostream>
using namespace  std;
void printArray(int arr[] , int n){
    for(int i =0 ; i<n; i++){
        cout<< arr[i] <<" ";
    }cout<< endl;
}
void Sort0and1(int arr[] , int n ){
    int s = 0;
    int e = n -1;
    while(s < e){
        while(arr[s] == 0){
            s++;
        }
         while(arr[e] == 1){
            e--;
        }
        if(s < e){
            swap(arr[s] , arr[e]);
            s++;
            e--;
        }
    }
}
 int main(int argc, const char** argv) {
    int arr[10] = {1,0 ,1, 0 ,0 , 1 , 0 ,1, 0, 1};
   Sort0and1(arr , 10);

    printArray(arr , 10);

    return 0;
}