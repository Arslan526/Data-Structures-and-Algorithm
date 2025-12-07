#include "iostream"
using namespace std;
class Complex{
int real;
int imag;
public:
Complex(int r = 0 , int i = 0){
    real = r;
    imag = i;
}
friend Complex operator +(Complex const & , Complex const &);
void display(){
    cout<<real<<" +i "<<imag<<endl;
}
};
 Complex operator +(Complex const &c1 , Complex const &c2){
    return Complex (c1.real + c2.real , c1 .imag + c2.imag);
 }
int main(){
   int real ,imag;
   cout<<"Enter real and imaginary parts : ";
   cin>>real>>imag;
   Complex c1(real, imag);
   cout<<"Enter real and imaginary parts : ";
   cin>>real>>imag;
   Complex c2(real ,imag);
   Complex c3;
   c3 = c1+c2;
   cout<<"Addition of two complex number : ";
   c3.display();
   
    return 0; 
}