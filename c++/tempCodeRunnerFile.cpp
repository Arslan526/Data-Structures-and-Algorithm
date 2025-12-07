#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter the Binary first number "<<endl;
    cin>>a;
    cout<<"Enter the Binary Second number "<<endl;
    cin>>b;
    int carry;
    while(b != 0){
       carry=  a & b;
        a = a ^ b;
        b = carry << 1; 
    }
    cout<<"Sum of "<< a << endl;
}