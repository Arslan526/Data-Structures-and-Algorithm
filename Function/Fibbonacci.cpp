#include <iostream>
using namespace std;
class Fibonacci{
    int num;
    public:
    Fibonacci(int num2){
        num = num2;
    }
    void Gernerateseirs(){
        int first = 0 , second = 1 , next;
        for(int i = 0; i < num; i++){
            if( i <= 1){
                next = i;
            }
            else {
                next = first + second;
                first = second;
                second = next;
            }
            cout<<next <<" ";
        }
        cout<< endl;
    }
};
int main(){
     int num;
     cout<<"Enter a  number : ";
     cin>>num;
    Fibonacci ob(num);
    ob. Gernerateseirs();
}