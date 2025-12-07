#include<iostream>
using namespace std;
template<class T>
T smallest(T a,T b ,T c){
if(a<b && b<c){
    return a;
}
else if(b<a && b<c){
    return b;
}
else if(c<a && c<b){
    return c;
}
}

int main(){
   int num1,num2,num3;
   float val1,val2,val3;
   char char1,char2,char3;
   cout<<"Enter the three integer value :";
   cin>>num1>>num2>>num3;
   cout<<"Enter the three flaoting value :";
   cin>>val1>>val2>>val3; 
   cout<<"Enter the three charter  value :";
   cin>>char1>>char2>>char3;
   cout<<"smallest three integer number:"<<smallest(num1,num2,num3)<<endl;
   cout<<"smallest three foating values:"<<smallest(val1,val2 ,val3)<<endl;
   cout<<"smallest three char number:"<<smallest(char1,char2,char3)<<endl;

}