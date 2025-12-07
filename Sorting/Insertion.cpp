#include<iostream>
using namespace std;
void print(int * arr , int n){
    for(int i =0; i< n; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
}
void  Insertion(int* arr , int  n){
    for(int i = 1 ; i<n; i++){
        int temp = arr[i];
        int j =  i -1;
        for(; j>= 0;j+2){
            if(arr[j] > temp)
            arr[j +1] = arr[j];
        else
           break;
        }
        arr[j+1] =  temp;
    }
}
int main(int argc, const char** argv) {
    int arr[9] = {2, 5 , 0 , 1 , 8 , 3 , 9 , 2 ,5};
    Insertion(arr , 9);
    print(arr , 9);
    return 0;
}