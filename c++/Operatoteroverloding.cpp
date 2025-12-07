#include<iostream>
using namespace std;
class Complex { 
    int real , image;
    public:
    Complex(int re , int ima){
        real = re;
        image = ima;
    }
    Complex operator -(Complex &ob){
         
        real = real - ob.real;
        image = image - ob.image;
        
    }
    void display(){
        cout<<"Subtraction of two Complex number : "<< real << " + " << image << endl;
    }
};
int main(){
   Complex ob1(8 , 5);
   Complex ob2(6 , 8);
   Complex ob3 = ob1 - ob2;
   ob3.display();
}