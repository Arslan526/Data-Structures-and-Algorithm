#include<iostream>
#include<string>
using namespace std;
int tower(string s , string d , string h , int num){
    if(num == 1){
        return 0;
    }
    cout<< "Move is "<< s << " "<< d << endl;
    return tower(s , h , d , num -1);
    cout<< "Move is "<< s << " "<< d << endl;
    return tower(h , d , s , num -1);

}
int main(int argc, const char** argv) {

    int  num;
    cout<<"Enter the number "<< endl;
    cin>> num;
    string source , dection , helper;
  
    int ans = tower(source , dection , helper , num);
    cout<<"Answer is "<< ans << endl; 
   
    return 0;
}