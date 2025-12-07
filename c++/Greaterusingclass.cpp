#include<iostream>
using namespace std;
class Greater
{
    int x,y,z;
    public:
    void inputdata(){
        cout<<"Enter the value of x:";
        cin>> x;
        cout<<"Enter the value of y:";
        cin>> y;
        cout<<"Enter the value of z:";
        cin>> z;

    }
    void calc(){
        int r ,s;
        r = ((x>y) && (y>z) ? x :(y>x) && (y>z)? y:z);
        s = ((x<y) && (y<z) ? x :(y<x) && (y<z)? y:z);
        cout<<"The number: "<< x<< ","<< y<< ","<< z <<endl;
        cout<<"The largest number :"<< r <<endl;
        cout<<"====================="<<endl;
        cout<<"The number: "<< x<< ","<< y<< ","<< z <<endl;
        cout<<"The Smalest number :"<< s <<endl;    
    }
     
};
int main(){
    Greater obj;
    obj.inputdata();
    obj.calc();
    return 0;
}