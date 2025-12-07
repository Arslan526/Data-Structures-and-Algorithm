#include<iostream>
using namespace std;
void print(int * arr , int n){
    for(int i =0; i< n; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
}
void   bobblesort(int* arr ,int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j< n -i;j++){
            if(arr[j] > arr[j +1])
            swap(arr[j] , arr[j+1]);
        }
    }
}
int main(int argc, const char** argv) {
    int arr[9] = {3,4 ,1,5,9,3,6,19,0};
    bobblesort(arr , 9);
    print(arr , 9);
    return 0;
}