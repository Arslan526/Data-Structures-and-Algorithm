#include<iostream>
using namespace std;
class twoStacks{
  int size;
  int * arr;
  int top1 , top2;
  public:
  twoStacks(int n){
    size =  n;
    arr = new int[n];
    top1 = n /2 + 1;
    top2 = n /2;
  }
    void push1(int element){
      if(top1 < size){
        arr[top1++] = element;
      }
      else{
        cout<<"First Stack is OverFlow"<<endl;
      }
    }
    void push2(int element){
      if(top2 >= 0){
        arr[top2--] = element;
      }
      else{
        cout<<"Second Stack is OverFlow"<<endl;
      }
    }
    int pop1(){
      if(top1 > size/2){
        return arr[--top1];
      }
      else{
        return -1;
      }
    }
    int pop2(){
      if(top2 < size/2){
        return arr[++top2];
      }
      else{
        return -1;
      }
    }
  

};


int main(){
  twoStacks ts(3);
  ts.push1(2);
  ts.push1(1);
  ts.push2(4);
  ts.push2(9);
  ts.push1(12);
  ts.push1(10);
  ts.push2(5);
  ts.push2(7);


  


}