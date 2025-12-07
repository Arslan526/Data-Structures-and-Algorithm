#include<iostream>
#include<string>
using namespace std;
class BankDopsit{
int principal;
int years;
float interestRate;
float returnvalues;
public:
 BankDopsit(){}
  BankDopsit(int p ,int y ,float i, float r){
    principal = p;
    years = y;
    interestRate = i;
    returnvalues = r;
    for(int i = 0; i< years;i++){
        returnvalues = returnvalues *(1 + interestRate);
    }
 }
    BankDopsit(int p ,int y ,int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnvalues = principal;
    for(int i = 0; i< y;i++){
        returnvalues = returnvalues *(1 + interestRate);
    }
 } 
 void show(){
    cout<<"Principal amount :"<<principal<<endl;
    cout<<"Return values of after :"<<years<<endl;
    cout<<"Years is :"<<returnvalues<<endl;
 }
};
int main(){
  BankDopsit ob1, ob2 , ob3;
  int p , y;
  float r; 
  float R;
  cout<<"Enter the values of p , y and r:";
  cin>> p >> y >>r;
  ob1 = BankDopsit(p , y ,r);
  ob1.show();
  cout<<"Enter the value of p , y and R: ";
  cin>> p >> y >>R;
  ob2 = BankDopsit(p , y ,R);
  ob2.show();
}