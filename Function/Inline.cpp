#include<iostream>
using namespace std;
inline int Getmax(int & a , int & b){
       cout<< a <<" " << b << endl;
    //return a > b ? a : b;
    int ans = a < b;
    if(ans){
       return a ;
    }
    else{ 
        return b;
    }
}
int main(){
    int a = 90;
    int  b = 89;
    Getmax(a , b);
    
    cout<<"This is  values is "<< a << " "<< b << endl; 
    return 0;
}