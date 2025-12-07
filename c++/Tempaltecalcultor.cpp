
#include <iostream>
using namespace std;
template<class A>
class cal{
    A num1 ,num2;
    public:
    cal(A n1 , A n2){
        num1 = n1;
        num2 = n2;
    }
    A Add(){
        return (num1+num2);
    }
    A dive(){
        return(num1 / num2);
    }
    A mul(){
        return(num1 * num2);
    }
    A sub(){
        return (num1  - num2);
    }
    void display(){
        cout<<" Two Numbers : "<< num1 << " , "<<num2 <<endl;
        cout<<" sum of "<< num1 << " + "<< num2 << " = "<< Add() << endl;
        cout<<" Divide "<< num1 << " / "<< num2 << " = "<< dive() << endl;
        cout<<" Multiply of "<< num1 << " * "<< num2 << " = "<< mul() << endl;
        cout<<" subtraction of "<< num1 << " - "<< num2 << " = "<< sub() << endl;
    }
};
      

int main() {
    cout<<" Interger number "<<endl;
   cal<int> ob1(12,9);
   ob1.display();
   cout<<" Floating number "<<endl;
   cal<float> ob2(1.3, 12.3);
   ob2.display();
   cout<<" Charter number "<<endl;
   cal<char> ob3('A', 'B');
   ob3.display();
   cout<<" Boolean number "<<endl;
   cal<bool> ob4(false , true);
   ob4.display();
   
}