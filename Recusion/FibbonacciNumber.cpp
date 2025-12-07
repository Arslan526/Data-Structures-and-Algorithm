#include<iostream>
using namespace std;
int  Fibbonacci(int num){
    // Base case
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    
    // Recursive call
    return  Fibbonacci(num -1 ) +  Fibbonacci( num -2);


}
 int main(int argc, const char** argv) {
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    int ans = Fibbonacci(num);
    cout<<"Fibbonacci number "<< ans << endl;


    return 0;
}