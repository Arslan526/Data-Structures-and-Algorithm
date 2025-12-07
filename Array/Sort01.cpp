#include<iostream>
using namespace std;
void print(int * arr , int n){
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int * arr , int n){
    int i =0;
    int j = n -1;
    while(i < j){
        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){

            j--;
        }
        else{
            swap(arr[i++] , arr[j--]);
        }
    }
}
void sort01Rw(int*arr , int n){
    int s = 0;
    int e = n -1;
    while(s < e){
        if(arr[s] ==  0) {
            s++;
        }
        else if(arr[e] == 1) {
            e--;
        }
        else{
            swap(arr[s++] , arr[e--]);
        }
    }
}
int main(){
    int arr[10] = {1 , 0 , 0 , 0 ,1 , 0 , 1 , 1 , 0 , 1};
    int n = 10;
    sort01Rw(arr  , n );
    print(arr , n);
    
    return 0;
}