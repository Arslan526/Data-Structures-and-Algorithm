#include<iostream>
using namespace std;
class Base {
    protected: 
    int values;
    public:
    Base(int number){
        values = number;
    }
    void virtual display() = 0;   // pure viertal function
};
class Derived : public Base{
    public:
    Derived(int number) : Base(number) {

    }
    void display(){
        cout<<"The vlue of : " << values << endl;
    }
};
int main(){
    int number; 
    cout<<"Enter  a number : ";
    cin>>number ;
    Base *p;
    Derived ob(number); 
    p = &ob;
    p->display();
    return 0;
}