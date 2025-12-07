#include <iostream>
using namespace std;
int main() {
    int num , r , sum = 0;
    cout<<"Enter a number : ";
    cin>>num;
    while(num!=0){
       r = num%10;
       sum = sum + r;
       num = num/10;
    } 
    cout<<"Sum of digit number : "<<sum<<endl; 
    return 0;
}