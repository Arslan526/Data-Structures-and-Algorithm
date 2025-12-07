#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * prev;
    Node * next;
    Node(int d){
        this -> data =  d;
        this-> next = NULL;
        this-> prev = NULL;
    }
    ~Node(){
        int val = this-> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Momoery is free "<< val << endl;
    }
};
void print(Node * head){ 
    Node * temp =  head;
    while(temp != NULL){

        cout<<temp->data <<" -> ";
        temp =  temp -> next;
        if(temp == NULL){
            cout<<"NULL";
        }
    }
    cout<<endl;

}
int getLegth(Node * head){
    int len = 0;
    Node * temp = head;
     while(temp != NULL){
       len++;
       temp = temp-> next;
    }
    return len;

}
void InsertAtHead( Node * & head , int d){
    Node * temp = new Node(d);
    temp->next =  head;
    head->prev = temp;
    head = temp;
}
void InsertAtTail(Node *& tail, int d){
    Node * temp = new Node(d);
    tail->next =  temp;
    tail->prev =  tail;
    tail = temp;
    }

void InsertAtPosition(Node *& head , Node * & tail , int position , int d){
   
    if(position == 1){
        InsertAtHead(head , d);
        return;
    }
    Node * temp = head;;
    int count = 1;
    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    Node * nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;    
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
   if(position == 1){
    Node * temp =  head;
    temp->next ->prev =  NULL;
    head = temp ->next;
    temp->next = NULL;
    delete temp;
   }
   else{
    Node  * curr =  head;
    Node * prev = NULL;
    int count  =1;
    while(count < position){
        prev =  curr;
        curr =  curr ->next;
        count++;
    }
    curr ->prev =  NULL;
    prev->next =  curr->next;
    curr ->next = NULL;
    delete curr;
   }
}


int main() {
   Node * node1 = new Node(10);
    Node * head = node1; 
    Node * tail = node1;
   
    
   //cout<< getLegth(head)<< endl;
  
   InsertAtTail(tail , 27 );
   InsertAtTail(tail , 13);
   InsertAtTail(tail , 22);
   InsertAtTail(tail , 11);
   InsertAtTail(tail , 21);
   InsertAtTail(tail , 3);
   InsertAtTail(tail , 8);
   InsertAtTail(tail , 15);
   print(head);


    cout<<"Insert At position  of 3 "<<endl;
    InsertAtPosition(head , tail , 3 , 200);
    print(head);

    cout<<"Delting a Node"<<endl;
    deleteNode(10, head);
    print(head);

   
    
    
    return 0;
}