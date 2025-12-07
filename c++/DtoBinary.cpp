#include<iostream>
#include<math.h>
using namespace std;
int main(){
  /*
  // DECIMAL TO BINARY NUMBER SYSTEM 
   long long int n ;
    cout<<"Enter a Decimal number : ";
    cin>>n;
    unsigned long long int ans = 0;
    unsigned long long int i = 0;
    
    unsigned long long int ans = 0;
    unsigned long long int i = 0;
    while (n != 0){
      int bit =  n & 1; 
      ans = (bit * pow(10 ,i)) + ans;
      n =  n >> 1;
      i++;
    }
    cout<<"Answer is Bianry number  : "<< ans << endl;
    

    // NEGATIVE DECIMAL TO BIANARY NUMBER  SYSTEM
      unsigned long long int ans = 0;
      unsigned long long int i = 0;
    if (n < 0){
      n = pow(2  , 16) + n;
    }
    while(n != 0 ){
      int bit =  n & 1;
      ans =  (bit  * pow( 10 , i)) + ans;
      n = n >> 1;
      i++;
    }
    cout<<"Answer is nagative binary number : "<< ans << endl;
 */ 



     // BIANARY TO DECIMAL NUMBER SYYSTEM 
     long long int n ;
    cout<<"Enter a Bianary number : ";
    cin>>n;
    unsigned long long int ans = 0;
    unsigned long long int i = 0;
     while(n != 0){
      int digit =  n % 10;
      if(digit == 1){
          ans = ans + pow(2   , i );

      }
      n = n / 10;
     i++;
     }
     cout<<"Answer is Decimal numbder :  " << ans  << endl;

  
}