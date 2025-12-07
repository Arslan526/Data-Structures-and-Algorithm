#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> s;
   
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4); 
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    for(int i : s){
        cout<< i<< " ";
    }cout<< endl;
   
  set<int>::iterator it = s.begin();
  it++;
  s.erase(it);
   for(int i : s){
        cout<< i<< " ";
    }cout<< endl;
   cout<<"14 is present or not "<< s.count(14)<< endl;
   set<int>:: iterator itr = s.find(2);
   for(auto it = itr; it!= s.end();it++){
    cout<<*it<<" ";
   }cout<< endl;
    return 0;
}