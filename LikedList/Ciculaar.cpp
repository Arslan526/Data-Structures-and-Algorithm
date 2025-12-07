#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *  next;
    Node(int d){
        this -> data =  d;
        this-> next =  NULL;
    }
    ~Node(){
        int val = this -> data;
        if(this-> data != NULL){
            delete next ;
            next = NULL;
        }
          cout<<"Memory free for Node with data :: "<< val<< endl;
    }
};
void print(Node * &tail){
    Node * temp  = tail;
    if(tail == NULL){
        cout<<"List is empty "<< endl;
        return ;
    }
    do{
        cout<< tail -> data <<" ";
        tail =  tail -> next;

    }while(tail != temp);
    cout<< endl;
}
void insertNode(Node *&tail , int element , int d){
    if(tail == NULL){
        Node * temp = new Node(d);
        tail = temp;
        temp-> next = temp;
    }
    else{
        Node * curr = tail;
        while(curr -> data != element){
            curr = curr-> next;
        }
        Node * temp1 = new Node(d);
        temp1-> next =  curr-> next;
        curr-> next =  temp1;
    }
}

void Delection(Node * &tail , int val){
    if(tail == NULL){
        cout<<"List is Empty "<< endl;
    }
    else
    {
        Node * prev = tail;
        Node * curr =  prev-> next;
        while(curr-> data != val){
            prev = curr;
            curr = curr-> next;
        }
        prev -> next =  curr -> next;
        if(curr == prev ){
            tail = NULL;
        }
        else if(tail == curr){
           tail = prev;
        }
        curr-> next = NULL;
        delete curr;
    }
}
int main(int argc, const char** argv) {
  Node * tail = NULL;
  insertNode(tail , 4 , 3);
  print(tail);
  insertNode(tail , 3 , 5);
  print(tail);
  insertNode(tail , 5 , 9);
  print(tail);
   insertNode(tail , 9 , 33);
  print(tail);
  insertNode(tail , 33 , 90);
  print(tail);
  insertNode(tail , 90 , 80);
  print(tail);
  Delection(tail , 80);
  print(tail);
   Delection(tail , 90);
  print(tail);
   Delection(tail , 33);
  print(tail);
   Delection(tail , 9);
  print(tail);
   Delection(tail , 5);
  print(tail);
   Delection(tail , 3);
  print(tail);
    return 0;
}