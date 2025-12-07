#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int ,4 > a = {1, 2, 3 ,4};
    int size = a.size();
    cout<<"Size of "<<size << endl;
   for(int i = 0; i<size; i++){
    cout<<a[i] <<" ";
   }
  cout<<"Element at 2nd index "<<a.at(2)<< endl;
  cout<<"Empty or not "<<a.empty()<< endl;
  cout<<"First Elemment is "<< a.front()<<endl;
  cout<<"Last Element is "<< a.back()<< endl;

    return 0;
   }