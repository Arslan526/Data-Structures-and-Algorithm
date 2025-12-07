#include<iostream>
int computePower(int n  , int x){
    int bf = n;
    int ans = 1;
    
    if(n < 0){
        x = 1 /x;
        bf = -bf;
    }
    while(bf > 0){
        if(bf % 2 ==1){
            ans *= x;
        }
        x *= x;
        bf /= 2;
    }
    return ans;
}
using namespace std;
int main(){
    int n = 5;
    int x = 3;
    cout<<"compute X power of N "<< computePower(n , x)<<endl;
    return 0;
}