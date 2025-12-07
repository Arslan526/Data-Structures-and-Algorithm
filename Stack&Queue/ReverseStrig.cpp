#include<iostream> 
#include "string"
#include<stack>
using namespace std;
int main(){
   string str;
   cout<<"Enter of the String "<<endl;
   cin>>str;
   int n = str.size();
   stack<char>s;
   for(int i =0; i<n;i++){
    s.push(str[i]);
   }
   string ans = "";
   while(!s.empty()){
    int top =  s.top();
    ans.push_back(top);
    s.pop();
   }
    
    cout<<"Reverse of the String"<< endl;
    cout<<ans<<endl;
    cout<<"Orignal String"<<endl;
    cout<<str<<endl;
    return 0;
}