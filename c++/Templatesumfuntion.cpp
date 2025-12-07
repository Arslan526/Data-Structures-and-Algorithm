#include<iostream>
using namespace std;
template<class T1 ,class T2>
void show(T1 value1 ,T2 value2){
    cout<<"Enter the two value :"<<value1 <<" " << value2 <<endl;
}
int main(){
    int num1;
    float num2;
    char str;
    cout<<"Enter the interger number:";
    cin>>num1;
    cout<<"Enter the floating number:";
    cin>>num2;
    cout<<"Enter the string number:";
    cin>>str;
    show(num1,str);
    show(num1,num2);
    show(str,num2);
    
}