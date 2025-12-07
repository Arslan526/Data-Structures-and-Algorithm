#include<iostream>
using namespace std;
template<typename T>
void Swap(T &m1 ,T &m2){
    T temp;
    temp =m1;
    m1 = m2;
   m2 = temp;
}
int main(){
    int i1,i2;
    float f1,f2;
    char c1,c2;
    
    cout<<"Enter the interger :";
    cin>>i1>>i2;
    cout<<"Enter the floating number is:";
    cin>>f1>>f2;
    cout<<"Eter the charter :";
    cin>>c1>>c2;
    cout<<"Before passing data to function template:"<<endl;
    Swap(i1,i2);
    Swap(f1,f2);
    Swap(c1,c2);
    cout<<"After passing data to function template:"<<endl;
    cout<<"I1 ="<<i1<<" "<<"I2="<<i2<<endl;
    cout<<"F1 ="<<f1<<" "<<"F2="<<f2<<endl;
    cout<<"C1= "<<c1<<" "<<"C2="<<c2<<endl;
   
}