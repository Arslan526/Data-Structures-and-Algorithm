#include<iostream>
using namespace std;
  int Add(int a ,int b , int c , int z = 0 , int x = 0){
  return a + b + c + x +z;
  }
  int Add(float a , float b) {
    return a * b;
  }
int main() {
    cout<< Add(10 , 2 , 5)<< endl;
    cout<<"Floting cal :" <<Add(3.4 , 1.3);
    return 0;
}