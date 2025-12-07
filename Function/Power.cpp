#include<iostream>
using namespace std;
// Function signature
int power(int a , int b){
    int ans = 1;
    // fuctiin body
    for(int i = 1; i <= b ;i++ ){
        ans = ans  * a;
    }
    return ans;

}
int main(){
    int num1 , num2;
    cin>> num1 >> num2;
    // funtion call
    int answer = power(num1 , num2);
    cout<<"Answer is :"<< answer<<endl;
    int num3,num4;
    cin>>num3 >>num4;
    int answer1 = power(num3 , num4);
    cout<<"Answer is :"<< answer1 <<endl;
    int num5,num6;
    cin>>num5>>num6;
    int answer2 = power(num5 , num6);
    cout<<"Answer is :"<< answer2 <<endl;
    return 0;
}