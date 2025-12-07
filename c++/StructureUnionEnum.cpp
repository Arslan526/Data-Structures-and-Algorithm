#include<iostream>
using namespace std;
typedef struct employe{
    int id;
    char name;
    float salary;


}emp;
int main(){

    emp arslan;
    arslan.id = 1;
    arslan.name = 'ArslanAnsari';
    arslan.salary = 12000;

    cout<<arslan.id<<endl;
    cout<<arslan.name<<endl;
    cout<<arslan.salary<<endl;



}