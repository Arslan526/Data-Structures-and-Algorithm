#include<iostream>
using namespace std;
int DigitSumProdAndSub(int n){
    int sum  = 0;
    int prod = 1;
    while(n!= 0){
        int digit =  n % 10;
        prod =  prod * digit;
        sum = sum + digit;
        n = n /10;
    }
    int ans = prod - sum;
    return ans;
}
int main(){
    int num;
    cin>>num;
    //int ans =  DigitSumProdAndSub(num);
    //cout<<"Answer is "<<ans<<endl;
    int count = 0;
    while(num != 0){
        if(num & 1){
            count++;
        }
        num = num>>1;
    }
    cout<<"Count is "<<count<<endl;
    
}