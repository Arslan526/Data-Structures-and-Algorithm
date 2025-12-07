#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        cout<<"Your are ebilitiy for vote:"<<endl;
    }
    catch(int e){
        cout<<"Sorry your are  ebilitiy for vote:"<<endl;
    }
    return 0;
}