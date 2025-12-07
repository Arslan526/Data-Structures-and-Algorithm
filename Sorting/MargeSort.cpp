#include<iostream>
using namespace std;
   void print(int * arr , int n ){
    for(int i = 0;i< n; i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
   }
   void marge(int * arr , int s ,int e){
    int mid = s + (e -s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int * first = new int[len1];
    int * second = new int[len2];
    int k = s;
    for(int i =0;i < len1; i++){
        first[i] = arr[k++];
    }
    k = mid +1;
      for(int i = 0;i < len2; i++){
        second[i] = arr[k++];
    }
    int i = 0  , j =0;
    k = s;
    while(i < len1 && j < len2){
        if(first[i] < second[j]){
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }
    while(i < len1){
        arr[k++] = first[i++];
    }
     while(j < len2){
        arr[k++] = second[j++];
    }
   }
   void MargeSort(int * arr , int s , int e){
      if(s>=e){
        return ;
      }
      int mid =  s + ( e - s ) /2;
      // margesort left part
      MargeSort(arr , s , mid);
       // margesort left part
      MargeSort(arr , mid + 1 , e);
      // marge
      marge(arr , s , e);

   }
int main(int argc, const char** argv) {
   int arr[15] = {5 , 6, 2 , 78 , 1 , 13 , 14 ,5 ,12 , 6 , 89 ,11 , 56 , 17, 90 };
    int n = 15;
    MargeSort(arr , 0 , n -1);
    print(arr , n);
   
    return 0;
}