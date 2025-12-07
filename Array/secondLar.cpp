#include<iostream>
#include<algorithm>
using namespace std;
int SecondLargest(int * arr , int n ){
    sort(arr , arr + n);
    int lar  = arr[0];
    int res = -1;

    for(int i =0; i<n;i++){
        if(arr[i] > lar){
            res =  lar;
            lar =  arr[i];
        }
        else if(arr[i] > lar && arr[i] > res){
            res = arr[i];
        }
    }
    return res;


}
void print(int * arr , int n ){
    for(int i =0; i< n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linerSearch(int*arr , int n , int key){
    for(int i =0; i<n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main(){
     int arr[5] = {1 , 2 ,7 , 9 , 11};
     int n = 5;
     int found =  linerSearch(arr , n , 90);
     if(found){
        cout<<"Key is Present in Give Array"<<endl;
     }
     else{
        cout<<"Key is Not Present in Give Array"<<endl;
     }
     //print(arr , n);
    //  cout<<"Second Largest element "<< SecondLargest(arr , n)<< endl;
    return 0;

}