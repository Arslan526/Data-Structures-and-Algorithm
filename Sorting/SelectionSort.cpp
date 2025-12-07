#include<iostream>
using namespace std;
void print(int * arr , int n){
    for(int i =0; i< n; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
}
void selction(int * arr , int n){
    for(int i =0;i< n -1; i++){
        int minindex = i;
        for(int j =  i +1; j<n;j++){
            if(arr[j]<  arr[minindex]){
                minindex = j;
            }
            swap(arr[minindex] , arr[i]);
        }
    }
}
int  main(int argc, const char** argv) {
    int arr[9] = {3,4 ,1,5,9,3,6,19,0};
    selction(arr , 9);
    cout<<"Selection Sort "<< endl;
    print(arr , 9);

    return 0;
}