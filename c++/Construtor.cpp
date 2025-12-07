#include<iostream>
using namespace std;
class Complex{
    int a ,b;
    public:
    Complex(int a , int b){
        this -> a  = a;
        this-> b = b;
       
    }
    void print(){
        cout<<"The values a "<< a << " b "<< b << endl;
    }
};
int main(int argc, const char** argv) {
    Complex ob(2 , 5);
    ob.print();
    return 0;
}