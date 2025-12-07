#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string RemoveAllOcc(string str , string part){
    int Lenght =  str.length();

    while(Lenght > 0 && str.find(part) < Lenght){
        str.erase(str.find(part) , part.length());
    }
    return str;
}
int main(){
    string str = "daabcaabcbc";
    string part =  "abc";
    string remove =  RemoveAllOcc(str , part);
    cout<<"Remove all Occurrenaces of a Substring " << remove<<endl; 
}