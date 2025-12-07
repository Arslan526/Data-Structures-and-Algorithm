#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter 32 bit  number : ";
    cin>> n;
    int count = 0 ;
    while(n != 0){
        // checking last bit
        if(n & 1){
            count ++;
        }
        n >> 1;
        n++;

    }
   cout<< "bit : "<< count <<endl;
}