#include<iostream>
using namespace std;
class Sum{
     int i,sum = 0;
     public:
    void calc();
     void display();
};

 void Sum :: calc(){
    for(i = 1; i < 100; i+=2){
        sum = sum + i;
    }
 }
 void Sum :: display(){
    cout<<"The sum of the odd number is 1 - 100 = " << sum <<endl;
 }
int main(){
    Sum obj;
    obj.calc();
    obj.display();
    return 0;
}