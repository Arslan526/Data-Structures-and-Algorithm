#include<iostream>
#include<algorithm>
using namespace std;
void print(int*arr , int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
void MargeSortedArray(int *arr1 , int * arr2 , int * arr3 , int n, int m){
   int i = 0 ;
    int j = 0;
    int k = 0;
    while(i <n && j <m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n){
         arr3[k++] = arr1[i++];
    }
    while(j <m){
        arr3[k++] = arr2[j++];
    }

}

int main(){
    int arr1[6] = {1,3,5,7,8,2};
    int arr2[4] ={7, 3,4,6};
    int arr3[10] = {0};
    int n = 10;

    cout<<"Marge Two Sorted Array"<<endl;
    MargeSortedArray(arr1 , arr2 , arr3 ,6,4);
    sort(arr3 , arr3 +n);
    print(arr3 , 10);


    return 0;

}