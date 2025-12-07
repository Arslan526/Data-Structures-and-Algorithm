#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin>> n;
    int  i =0; 
    int ans =0;
    while(n != 0){
        int digit = n % 10;
        if(digit == 1){
            ans = ans + pow(2 , i);
        }
        n = n/10;
        i++;
    }
    cout<<"Binary to Decimal "<< endl;
    cout<<ans << endl;
    /*long long int num;
    cin>>num;
    unsigned long long int  ans = 1  , i = 0;
    
    if(num < 0){
        num = pow (2 , 16);

    }
    cout<<"Number is "<< endl;
    cout<< num << endl;
    while(num){
        int lastbit = num & 1;
        ans = (pow(10 ,i)*lastbit) + ans;
        num = num>>1;
        i++;
    }
    cout<<"Decimal to Binary "<< endl;
    cout<< ans << endl;
    /*int count = 0;
    while(num != 0){
        if(num & 1){
            count ++;
        }
        num = num >> 1;
    }
    cout<<count << endl;
    int prot = 1;
    int sum  = 0;
    while(num != 0){
        int digit  = num % 10;
        prot = prot * digit;
        sum += digit; 
        num = num/10;
    }
    int ans = prot - sum;
    cout<< ans << endl;*/
    return 0;
}