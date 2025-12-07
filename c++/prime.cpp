#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<" Enter a number : ";
    cin>> num;
    int i = 2;
    while(i < num){
        if(num % 2 == 0){
            cout<<"Not a prime number "<< endl;
        }
        i++;
    }
    cout<<"Prime number "<<endl;
}