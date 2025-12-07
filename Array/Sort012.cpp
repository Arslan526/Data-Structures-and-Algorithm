#include<iostream>
using namespace std;
   void printArray(int arr[] , int n){
      for(int i = 0; i<n; i++){
      cout<<arr[i] <<" ";
      }
      cout<<endl;
   }
   void sort012(int arr[] ,int n){
      int s =0; 
      int mid = 0;
      int e = n -1;
      while(s<=e){
         if(arr[s] == 0){
            swap(arr[s++] , arr[mid++]);
         }
         else if(arr[s] == 2){
            swap(arr[s] , arr[e--]);
         }
         else{
            s++;
         }
      }
   } 
   void sort012RW(int * arr , int n){
      int s =0;
      int mid = 0;
      int e = n -1;;
      while(s < e){
         if(arr[s] == 0){
            swap(arr[s++] , arr[mid++]);
         }
         else if(arr[s] == 2){
            swap(arr[s] , arr[e--]);
         }
         else{
            s++;
         }
      }
   }
int main(){
   int arr[10] = {1,2,0,1,0,2, 1,0,1,2}; 
   cout<< "Sort of 012 "<< endl;
   sort012RW(arr , 10);
   printArray(arr , 10);

   return 0;
}