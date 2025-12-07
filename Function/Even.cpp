 /*#include<iostream>
using namespace std;
bool iseven(int n){
    //  1 -> even number 
    // 0 -> odd number 
    if(n & 1){  // odd number 
        return 0;
    }
    else {  //  even number
        
    return 1;
    }
}
int main(){
    int num;
    cout<<"Enter a number "<< endl;
    cin>>num;
    if(iseven(num)){
        cout<<"Even number"<< endl;
    }
    else {
        cout<<" Odd number "<< endl;
    }
    return 0;
} */
     // A . P
#include<iostream>
using namespace std;
   
    int AP(int a , int n , int d){
       return (a + (n - 1 ) * d);
    }
int main(){
    int num1 , num2 ,num3;
    cout<<"Enter  AP number "<< endl;
    cin>>num1 >> num2 >> num3;
    cout<<"AP seris "<< AP(num1 , num2 , num3)<< endl;
    return 0;

}