#include<iostream>
#include<map>
using namespace std;
int main(){

   map<int , string> m;
   m[1] = "Arslan";
   m[2] = "Ansari";
   m[3] = "Dr";
   m[4] = "Gulfam";
   cout<<"Before earse "<<endl;
   for(auto i : m){
    cout<< i .first<<" "<<i .second<<endl;
   }
   cout<<"Finding 5 "<< m.count(5 )<< endl;
   m.erase(5);
   cout<<"After erase "<< endl;
    for(auto i : m){
    cout<< i .first<<" "<<i .second<<endl;
   }



}