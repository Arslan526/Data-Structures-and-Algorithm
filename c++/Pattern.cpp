#include<iostream>
using namespace std;

int main(){
    int n =0;
    cout<<"Enter of the number of line"<<endl;
    cin>>n;
    // int i = 0;
    // while(i < n){
    //     int j = 0;
    //     while(j < n){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    int count = 1;
    for(int i = 1; i<=n;i++){
      for(int j =1; j<=i;j++){
        cout<<count<<" ";
        count++;
      }
      cout<<endl;
    }
}