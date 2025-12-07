#include<iostream>
using namespace std;
int main(){
    int nume,deno;
    cout<<"Enter numerater value :";
    cin>>nume;
    cout<<"Enter denometer value :";
    cin>>deno;
    try{
        if(deno!=0){
            cout<<"Division value of:"<<nume/deno<<endl;
        }
        else{
            throw deno;
        }
    }
    catch(int deno){
        cout<<"Division by zero error occerred "<<endl;
    }
    cout<<"After catch (will be exxecutedd)"<<endl;
    return 0;
}