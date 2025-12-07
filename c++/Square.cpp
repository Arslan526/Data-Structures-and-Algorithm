// Find Square of a number using inline function integer and flosting point 
#include<iostream>
using namespace std;
class Square{
    private:
    int n,f;
    float n1,f1;
    public:
    void getdata();
    void calc();
    void display();
};
 inline void Square :: getdata(){
    cout<<"Enter the interger number:";
    cin>>n;
    cout<<"Enter the floating number:";
    cin>>n1;
} 
 inline void Square ::  calc(){
    f = n*n;
    f1 = n1 *n1;
}
inline void Square :: display(){
    cout<<"Suare of the integer :"<< f <<endl;
    cout<<"Square of the flaoting :"<< f1 <<endl;
}
int main(){
    Square obj;
    obj.getdata();
    obj.calc();
    obj.display();
    return 0;
}