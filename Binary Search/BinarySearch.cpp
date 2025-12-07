#include<iostream>
using namespace std;
int BinarySearch(int* arr ,int n , int key){
    int s =0;
    int e = n -1;

    int mid =  s + (e -s)/2;
    int ans = -1;
    while(s < e){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid +1;
        }
        else {
            e =  mid -1;
        }
        mid = s + (e -s)/2;

     }
     return ans;
}
int main(){
    int arr[5] = {2,4,7,8,12};
    int key = 13;
   
    cout<<"Index of 13 = "<<BinarySearch(arr ,  5 , key) <<endl;
    return 0;
}