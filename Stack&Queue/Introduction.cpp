#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int top;
    int * arr; 
    int size;
    Stack(int size){
        this -> size = size;
        
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]  = element;
        }
        else
        {
            cout<<"Stack is overflow "<< endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack is underflow"<< endl;
        }
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            cout<<"Stack is empty "<< endl;
        }
        return -1;
    }
    bool isEmpty(){
        if(top == -1)
        return -1;
    else{
        return 0;
    }
    }
    int Stacksize(){
        return top+1;
    }
    
};
int main() {
   
    Stack s(2);
    s.push(5);
    s.push(4);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(3);
    s.push(6);
    cout<<"Deleting of Middle of Stack"<<endl;
    int size = s.Stacksize();
    cout<<size;
    

    
}