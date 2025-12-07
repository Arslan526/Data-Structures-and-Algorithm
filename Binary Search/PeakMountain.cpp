#include<iostream>
#include<algorithm>
using namespace std;
int PeakMountain(int arr[] , int n  ){
    sort(arr , arr+n);
    int s = 0 , e = n - 1; 
    int mid = s + (e - s) / 2;
    while(s < e){
        if(arr[mid] < arr[mid +1]){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e -s ) / 2;
    }
    return s;
}
int PeakMountain1(int * arr , int n){
    int s =0;
    sort(arr , arr+n);
    int e = n -1;
    while(s <= e){
        int mid = s + (e -s)/2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;


        if(arr[mid -1] < arr[mid]){
            s = mid +1;
        }
        else{
            e =  mid -1;
        }
    }
    return -1;
}
    
 int main() {

    int arr[6] = {0,3,8,9,5,2};
    int arr1[8] = {2,5,7,9,7,6,4,3};

    cout<<"Peak mountain  At index " << PeakMountain(arr , 6)<<endl;
    cout<<"Peak mountain At index "  << PeakMountain1( arr1 , 8)<<endl;
    return 0;
} 