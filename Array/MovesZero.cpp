#include<iostream>
using namespace std;
void PrintArray(int *arr , int n ){
    for(int i = 0;i<n; i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}
void MovesZero(int * arr , int n){
    int i = 0;
    for(int j = 0; j<n;j++){
        if(arr[j] != 0){
            swap(arr[j] , arr[i++]);
        }
    }
}

int main() {
    int arr[8]  = {1,3,0, 4,0,9,0,1};
    MovesZero(arr , 8);
    cout<<"Moves Zero "<< endl;
    PrintArray(arr ,8);
   
    return 0;
}