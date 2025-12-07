#include<iostream>
using namespace std;
template<class T1, class T2>
float sum(T1 a, T2 b){
    return (a+b);

}
template<class T3 ,class T4,class T5>
int sum(T3 s,T4 k,T5 m){
    return (s+k+m);
}
int main (){
    float num1,num2;
     int val1,val2,val3;
     cout<<"Enter the flaotimg values :";
     cin>>num1>>num2;
     cout<<"Enter the interger valses :";
     cin>>val1>>val2>>val3;
     cout<<"Sum of flaoting :"<<sum(num1,num2)<<endl;
     cout<<"Sum of interger :"<<sum(val1,val2,val3)<<endl;
    return 0;
}