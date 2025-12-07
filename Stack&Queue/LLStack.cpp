#include<iostream>
using namespace std;
// creating linked list
class Node{
    public:
    int data;
    Node * next;
};
// create stack using linked list
class Stack {
    public:
    Node * head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int element){
        Node * temp = new  Node();
        temp -> data = element;
        temp ->next = head;
        head = temp;
        cout<<"Push element of stack is "<< element << endl;
        size++;
    }
    void pop(){
        if(head== NULL){
            cout<<"Stack is empty "<< endl;
        }
        Node * temp = head;
        head = temp->next;
        temp ->next =  NULL;
        delete temp;
         size--;
    }
    int top(){
        if(head == NULL){
            cout<<"Stack is empty"<< endl;
            return  -1;
        }
        else{
            cout<<"Top is element "<< head ->data <<endl;
            return head ->data;
        }
    }

    int empty(){
        if(head == NULL){
            cout<<"Stack is empty"<< endl;
            return 1;
        }
        else{
            cout<<"Stack is not empty "<< endl;
        }
    }

};
int main(){
    Stack ob;
    ob.push(3);
    ob.push(2);
    ob.push(1);
    ob.push(9);
    ob.push(6);
    ob.push(1);
    ob.pop();
    ob.top();
    ob.empty();


    return 0;
}