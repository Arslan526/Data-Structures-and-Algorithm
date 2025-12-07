#include<iostream>
using namespace std;
void print(int arr[] , int size){
    cout<<"Size of Array is "<< size << endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}
bool LinearSearch(int arr[] , int size , int key){
    // Bas case
    print(arr , size);
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;

    }
    else{
    return LinearSearch(arr + 1 , size  - 1 , key);
 
    }
 }
 int main(int argc, const char** argv) {
    int arr[8] = {2 , 4 , 5 ,6 , 7 ,8 , 45 , 6};
    int size = 8;
    int key = 7;
    int ans = LinearSearch(arr , size , key);
    if(ans){
        cout<<"Key is  present "<< endl;
    }
    else{
        cout<<"Key is Absent "<< endl;
    }





    return 0;
}