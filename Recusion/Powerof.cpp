#include<iostream>
using namespace std;

int Power(int a , int b ){
    //base case
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    // Recursive call
    int ans = Power(a , b / 2);
    // If b even
    if(b % 2 == 0){
        return ans * ans ;
       
    }
    else{// if b is odd
       return a * ans * ans;
    
    }
    cout<< a << " , "<< b <<endl;

   
}
int main(int argc, const char** argv) {

    /*int a , b;
    cin>> a >> b ;
    int ans = 1;
    for(int i = 0 ; i< b; i++){
        ans = ans * a;
        cout<< ans << endl;
    }
    cout<<"Answer is " << ans;*/
    int a , b;
    cout<<"Enter the two number is" << endl;
    cin>> a >> b;
    int ans =  Power(a , b);
    cout<< ans << endl;
    return 0;
}