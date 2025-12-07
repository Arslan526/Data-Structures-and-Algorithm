#include<iostream>
using namespace std;
class Swap{
    int a,b;
    public:
    void getdata();
    void swapv();
    void display();
};
void Swap :: getdata(){
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<" Enter the value of b : ";
    cin>>b;
}
void Swap ::  swapv(){
    a = a + b;
    b = a - b;
    a = a - b;
}
void Swap :: display(){
      cout<<"The value of a : "<< a  <<endl;
      cout<<"The value of b : " << b <<endl;
}

 int main()
{
    Swap s;
    s.getdata();
    cout<<"Before the swap :"<<endl;
    s.display();
    cout<<"================="<<endl;
    s.swapv();
    cout<<"After the swap:"<<endl;
    s.display();
    system("pause");
    return 0;
}
