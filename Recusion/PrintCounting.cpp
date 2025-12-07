#include<iostream>
using namespace std;
int PrintCounting(int num){
    if(num == 0){
        return 0;
    }
    
     cout<< num << " ";
    PrintCounting(num - 1);
   
}
int main(){
    int num;
    cout<<"Enter the number "<< endl;
    cin>>num;

     PrintCounting(num);
   
    return 0;
}