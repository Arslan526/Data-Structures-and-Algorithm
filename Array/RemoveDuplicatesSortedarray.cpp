#include<iostream>
using namespace std;
void print(int * arr , int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int RemovesSortedArray(int * arr , int n ){
    int i =0;
    int j =1;
    while(j < n){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
        j++;
    }
    return i + 1;
}
int main(){
    int arr[10] =  {0,0,1,1,1,2,2,3,3,4};
    int n = 10;
    cout<<RemovesSortedArray(arr , n)<<endl;
    cout<<"Removes Sorted Array"<<endl;
    print(arr , n);

}