#include<iostream>
using namespace std;
     int fact(int n){
        int fact= 1;
        for(int i = 1; i<= n; i++){
            fact = fact * i;
        }
        return fact;
     }
     int NCR(int n , int r){
         int num = fact(n);
         int dum =  fact( r ) * fact ( n -r );
         int ans = num / dum;
         return ans;
     }
  int main(){
    int n , r;
    cout<<"Enter N and R "<< endl;
    cin>> n >>r;
    cout<<"Answer is "<< NCR(n , r)<< endl;
    return 0;
  }