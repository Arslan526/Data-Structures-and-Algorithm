#include<iostream>
using namespace std;
class A{
    public:
    void ABC(){
        cout<<"This is Class A "<< endl;
    }
};
class B{
    public:
    void ABC(){
        cout<<"This is Class B "<< endl;
    }
};
class C : public A , public B{
    public:
   
};
int main(int argc, const char** argv) {
    C obj;
    obj .A ::ABC();
    return 0;
}