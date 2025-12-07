#include<iostream>
using namespace std;
void print(int arr[] , int s , int e){
    for(int i = s; i<= e; i++){
        cout<<arr[i]<< " ";
    }
    cout<< endl;
}
bool BinarySearch(int arr[] , int s  , int e , int key){
    print(arr  , s , e);
    int mid =  s + (e - s) / 2;
    cout<<"The value of mid "<< mid << endl;
   //  base case;
   if(s > e){
    return false;
   }
  
   if(arr[mid ] ==  key){
    return true;
   }
   else if (arr[mid ] < key){
       BinarySearch(arr ,  mid +1 , e , key);
     }
   else{
    BinarySearch(arr , s , mid -1 , key);
   }
}


int main(int argc, const char** argv) {
    int arr[13] = {2, 4 , 5 , 6 , 15 , 16 , 17, 21 , 22 ,23 , 24 , 26 , 30};
    int size = 13;
    int key = 26;
    int ans = BinarySearch(arr , 0 , size - 1 , key);
    cout<<"Key is Absent and Present "<< ans << endl;
    cout<<endl << endl;
    int arr1[10] = {2, 4 , 5 , 6 , 15 , 16 , 17, 21 , 22 ,23  };
    int size1 = 10;
    int key1 = 2;
    int ans1 = BinarySearch(arr1 , 0 , size1 - 1 , key1);
    cout<<"Key is Absent and Present "<< ans1 << endl;




    return 0;
}