#include<iostream>
using namespace std;
void PrintArray(int *arr , int n ){
    for(int i = 0;i<n; i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}

void  MargeArray(int *arr1 , int n , int *arr2 , int m , int *arr3){
   
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
int main(int argc, const char** argv) {
    int arr1[5] = {2 ,4 , 6 , 7 , 90};
    int arr2[3] = {5 , 8  ,9};
    int arr3[8] ={0};
    
    MargeArray(arr1 , 5 , arr2 , 3, arr3);
    std::cout <<"Marge to sort is Array" << std::endl;
    PrintArray(arr3 , 8);

    return 0;
}