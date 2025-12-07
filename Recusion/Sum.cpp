#include<iostream>
using namespace std;
void print(int arr[] , int size){
    for(int i  = 0 ; i<size; i++){
        cout<< arr[i] << " "; 
    }cout<< endl;
}
int GetSum(int * arr , int size ){
    print(arr , size);
    // Base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];

    }
   
    int sum = arr[0] + arr[1] ;
     GetSum(arr + 1 , size -1);
     print(arr ,size);
    return sum;
}
 int main(int argc, const char** argv) {
    int arr[5] = {3, 2 ,5 ,1 ,6};
    int ans = GetSum(arr , 5);
    cout<<"The sum of Array "<< ans <<endl;
    return 0;
}