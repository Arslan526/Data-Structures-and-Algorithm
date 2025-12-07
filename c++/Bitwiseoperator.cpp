#include<iostream>
using namespace std;
int main(){
  /*  lift shift and rigth shift
    cout<< (45 >> 2) << endl;  //11
    cout<< (23 >> 3 )<< endl; // 2
    cout<< (12 << 1 )<< endl; // 24
    cout<< (15 << 2 )<< endl;  // 60

    Increment and Derecement  operator

    
    int  i = 9;
    cout<< (i++) <<endl;   // post increment   ans = 9
    cout<< (++i) <<endl;   // pre increment    ans = 11
    cout<< (i--) <<endl;   // post derement   ans  = 11
    cout<< (--i) <<endl;   // pre deriment    ans =  9
    
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int prod  = 1;
    int sum = 0;
    while(n!=0){
      int digit = n % 10;
      sum = sum + digit;
      prod = prod * digit;
      n = n /10;
    }
    int ans = prod - sum;
    cout<<"Annwer of subtraction : "<< ans << endl;
    
    int i = 34;
    cout<< (i++) << endl;   // 34
    cout<< (++i) << endl;   // 36 
    cout<< (i--) << endl;   // 36
    cout<< (--i) << endl;   // 34
  
  int a , b = 1;
  a = 10;
  if(++a){
    cout<< b;       // output 1
  }
    else{
      cout<< ++b;
    }
   
   int a  = 1;
   int b = 1;
   if(a-- >0 && ++b> 2){
    cout<<"Stage 1 inside if "<< endl;
   }                                      // ans Stage 2 inside else   0 2
   else {
    cout <<"Stage 2 inside else "<< endl;
   }
   cout<< a <<" " << b <<" "<< endl;
   
   int a = 1;
   int b = 1;
   if(a -- || ++b){
     cout<<"Stage 1 inside if "<< endl;
   }                                       // ans  Stage 1 inside if    0 1 
    else {
    cout <<"Stage 2 inside else "<< endl;
   }
   cout<< a <<" " << b <<" "<< endl;
   */
   int num = 4;
   cout<< 25 * (++num) << endl;     // 125
    return 0;
}