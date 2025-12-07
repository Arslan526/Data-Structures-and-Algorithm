#include<iostream>
using namespace std;
template<class T>
T valume(T a){
    return (a*a*a);
}
template<class T1 ,class T2>
float valume(T1 m,T2 k){
    return (3.14*m*m*k);
}
template<class T3 ,class T4,class T5>
float valume(T3 l,T4 n,T5 g){
    return (l*n*g);
}

int main(){
  int num;
  float num1,num2;
  float num3,num4 ,num5;
  cout<<"Enter the number :";
  cin>>num;
  cout<<"Enter the number of clinyder :";
  cin>>num1>>num2;
  cout<<"Enter the number of rectangle :";
  cin>>num3>>num4>>num5;
  cout<<"The valume of cube :"<<valume(num)<<endl;
  cout<<"The valume of cylinder :"<<valume(num1,num2)<<endl;
  cout << "The valume of rectangle :"<< valume(num3,num4,num5)<<endl;
}