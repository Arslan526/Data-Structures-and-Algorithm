#include<iostream>
using namespace std;
int power(int num){
    // base base 
    if (num == 0){
        return 1;
    }
    int sp = power(num - 1);
    int gp = 2*sp;
    return gp;
}
int PowerOf2(int num){
    if(num == 0 ){
         return 1;
    }
    return 2 * PowerOf2(num -1);
}
int main(){
    int num;
    cout<<"Enter the number "<< endl;
    cin>> num;
    int ans = PowerOf2(num);
    cout<<"Power of "<< ans << endl;
    return 0;
}