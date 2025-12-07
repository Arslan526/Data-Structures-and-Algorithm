#include<iostream>
using namespace std;
void print(int arr[] , int n){
    for(int i = 0; i< n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}
int BoubbleSort(int arr[] , int n){
    // Base case Allready sort hi 
    print(arr , n);
    if(n == 0 || n == 1){
        return  1;
    }
    for(int i = 0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    BoubbleSort(arr , n -1);
}
int main(int argc, const char** argv) {
    int arr[9] = {2 ,6 , 89 , 5 , 8 , 1 , 0 , 4 , 6};
    int ans = BoubbleSort(arr , 9);
    cout<< ans << endl;
    print(arr , 9);
    return 0;
}
