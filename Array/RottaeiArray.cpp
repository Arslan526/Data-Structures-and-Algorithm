#include<iostream>
#include<vector>
using namespace std;
void PrintArray(int *arr , int n ){
    for(int i = 0;i<n; i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}
void Rotate(vector<int> &arr , int n){
       vector<int> temp(arr.size());
       for(int i = 0; i<arr.size() ; i++){
        temp[(i + n ) % arr.size()]  = arr[i];
       }
       arr = temp;
}

int main(int argc, const char** argv) {

    return 0;
}