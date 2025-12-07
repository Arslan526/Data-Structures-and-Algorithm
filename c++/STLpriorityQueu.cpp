#include<iostream>
#include<queue>
using namespace  std;
int main(){
    // max heap
    priority_queue<int> maxi;
    // min heap
    priority_queue<int , vector<int> , greater<int> > mini;
    cout<<"Staring of maxi number is "<< endl;
  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  maxi.push(0);
  maxi.push(6);
  int n = maxi.size();
  for(int i = 0; i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }cout<< endl;

   cout<<"Staring of mini number is "<< endl;
  mini.push(4);
  mini.push(2);
  mini.push(3);
  mini.push(0);
  mini.push(1);
  int m = mini.size();
  for(int i = 0; i<n;i++){
    cout<<mini.top()<<" ";
    mini.pop();
  }cout<< endl;
  cout<<"Khaali h kya bhai ?? "<< mini.empty()<< endl;
    return 0;
}