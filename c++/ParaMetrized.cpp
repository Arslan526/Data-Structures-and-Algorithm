#include<iostream>
using namespace std;
class Complex{
    int a , b;
    public:
    Complex(int a , int b){
        this -> a = a;
        this -> b = b;
    }
    void print(){
        cout<<"A : "<< a <<" B :" << b << endl;
    }

};
int main(int argc, const char** argv) {
    Complex ob(3 ,5 );
    ob.print();
    return 0;
}