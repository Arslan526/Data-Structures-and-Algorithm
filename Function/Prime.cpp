#include<iostream>
using namespace std;

    bool isprime(int n){
        for(int i = 2; i <= n; i++ ){
            if(n % i == 0){ // not prime number
                return 0;
            }
            else {
                return 1;
            }
        }
    }
int main(){
   int num;
   cout<<"Enter a number "<< endl;
   cin>>num;
   if(isprime(num)){
    cout<<"Not a prime number "<< endl;
   }
   else{
    cout<<"Prime number "<< endl;
   }

    return 0;
}