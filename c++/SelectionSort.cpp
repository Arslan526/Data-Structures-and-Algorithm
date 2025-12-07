#include<iostream>
using namespace std;
void printarr(int arr[] , int n){
    for(int i = 0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int SelectionSort(int arr[] , int n){
    for(int i = 0; i < (n); i++){
        int minIndex = i;
        for(int j =  (i + 1); j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
            
        }
        swap(arr[minIndex] , arr[i]);
    }
}
int main(){
    int arr[8] = {5, 13  , 9 , 7 , 6 , 12 , 1 ,90};
     int Ansari = SelectionSort(arr , 7);
     cout<<"Selection sort is " << endl;
     printarr(arr, 7); 
     cout<<endl;
    return 0;
}