#include<iostream>
#include<string>
using namespace std;
class  Binary{
    string s;
    public:
    void  read(){
    cout<<"Enter a binary number :";
    cin>>s;
}
    void  chk_binary(){
    for(int i = 0; i<s.length();i++){
        if(s.at(i)!='0'&& s.at(i)!='1'){
            cout<<"Incorerect binary number format:"<<endl;
            exit(0);
        }
    }
    }
    void ones_complement(){
     for(int i = 0; i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else {
            s.at(i)='0';
        }
     }
 } 
   void display(){
    cout<<"Displaying your binary number is:"<<endl;
     for(int i = 0; i<s.length();i++){
        cout<<s.at(i);
     }
     cout<<endl;
 } 
};
int main(){
     Binary ob;
     ob.read();
     ob.chk_binary();
     ob.ones_complement();
     ob.display();
    return 0;
}