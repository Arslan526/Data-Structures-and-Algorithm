/*
case 1:
  class B: public A{
 Order of exection construtor _ A() then B()
  };
  class C : public A ,public B{
  Order of exection construtor = B() and A() then  c()
  };
  class C: public A ,virtual public B{
    Order of exection construtor  = B() and A() then C()
  };
*/
#include<iostream>
using namespace std;
  class Base1{
    int data1;
    public:
    Base1(int a){
        data1 = a;
        cout<<"Base 1 class constructor caled:"<<endl;
    } 
    void printdata1(){
        cout<<"The value of data1 is:" << data1 << endl;
    }
  };
  class Base2{
    int data2;
    public:
    Base2(int b){
        data2 = b;
        cout<<"Base 2 class constructor caled:"<<endl;
    } 
    void printdata2(){
        cout<<"The value of data2 is:" << data2 << endl;
    }
  };
  class Derived : virtual public Base1,   public Base2{
         int data3,data4;
         public:
         Derived(int x,int y,int z,int s) : Base1(x) , Base2(y) {
            data3 = z; 
            data4 = s;
            cout<<"Derived class constructor called:"<< endl;
         }
         void printDerived(){
            cout<<"The value of data3:"<< data3 <<endl;
            cout<<"The value of data4:"<<data4 << endl;
         }
  };
int main(){
     Derived obj(1,2,3,4);
     obj.printdata1();
     obj.printdata2();
     obj.printDerived();
    return 0;
}