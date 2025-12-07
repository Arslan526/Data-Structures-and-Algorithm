// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print( int * arr ,int n){
    for(int i=0; i< n; i++){
        cout<< arr[i] <<" ";
    }cout<< endl;
}
int BianarySeacrch(int * arr , int n , int key){
    int s = 0;
    int  e = n -1;
    int ans = -1;
    int mid = s + (e - s) /2;
    while(s<= e){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
          e = mid -1;
        }
    }
   cout<< s << e << endl;
    return -1;
}
bool Lin(int * arr , int n  , int key){
    for(int i =0;i<n; i++){
        if(arr[i] == key){
            return 1;
        }}
    return 0;
}
void SelctionSort(int * arr , int n){
    for(int i =0;i<n; i++){
        int minindex = i;
        for(int j = i +1; j<n;j++){
             if(arr[j] < arr[minindex])
            minindex = j;
        }
     swap(arr[minindex] , arr[i]);
    }
}
void  BobboleSort(int * arr , int n ){
    for(int i =0;i< n -1; i++){
        for(int j = 0; j< n -i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j +1]);
            }
        }
    }
}
void InsertionSort(int * arr , int n){
    for(int i  =0;i< n; i++){
        int temp  = arr[i];
        int j = i -1;
        for(; j >=0;j++){
            if(arr[j] > temp){
                arr[j +1]  = arr[j];
            }
            else{
                break;
            }
            arr[j +1] = temp;
        }
    }
}
int main() {
 int arr[13] = {11,121,2 ,3,4,7 , 11,12,23,1,2 ,3,4};
 SelctionSort(arr , 13);
 cout<<"Selction sort "<< endl;
 print(arr ,13);
 BobboleSort(arr , 13);
 cout<<"Bobbole sort "<< endl;
 print(arr ,13);
 InsertionSort(arr , 13);
 cout<<"Insertion sort  "<< endl;
 print(arr ,13);
    return 0;
}