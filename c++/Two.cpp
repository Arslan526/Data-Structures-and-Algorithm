#include<iostream>
using namespace std;
void swap(int &a , int  &b){
    int temp;
    temp  = a;
    a = b;
    b =  temp;
}
int main(){
    int num1 ,num2;
    cout<<"Enter the number "<< endl;
    cin>>num1 >> num2;
    
    swap(num1 , num2);
    cout<<"Swap "<<num1 << " " << num2<< endl;
    return 0;
}