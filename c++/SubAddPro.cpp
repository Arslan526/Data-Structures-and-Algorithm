#include<iostream>
using namespace std;
int SubAddPro(int num){
    int sum = 0;
    int ans = 0;
    int prod = 1;
    while(num != 0){
        int digit = num % 10;
         prod = num  * digit;
        sum = sum + digit;
      

        num = num / 10;
         
    }
    
    cout <<"sum of "<< sum <<endl;
    cout<<"Prod of "<< prod << endl;
     ans = prod  - sum ;
    return ans;

}
int main(){
    int num1;
    cout<<"Enter a number "<< endl;
    cin>> num1;
    int ans = SubAddPro(num1);
    cout<<"Answer is " <<ans << endl;
    
}
