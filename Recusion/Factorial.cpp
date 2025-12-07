#include<iostream>
using namespace std;
int Factorial(int n ){
    // Base case
    if(n == 0){
        return 1;
    }
    // recursive relation
   // int smallerproblem = Factorial( n -1);
   // int biggerproblem = n * smallerproblem ;
   // return biggerproblem;
   return n * Factorial( n - 1);
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>> n;
    int ans = Factorial(n);
    cout<<"Factorial is "<< ans << endl;
    return 0;
}
