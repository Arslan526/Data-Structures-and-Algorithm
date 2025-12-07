#include<iostream>
#include<map>
using namespace  std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this -> next  = NULL;
        this -> data = d;

    }
    ~Node(){
        int val = this-> data;
        if(this -> data != val){

            delete next;
            next = NULL;
        }
        cout<<"Memory is free "<< val << endl;
    }
};
void insertAttail(Node * &tail , int element , int d){
    //empty list
    if(tail == NULL){
        Node * temp =  new Node(d);
        tail =  temp;
        temp->next = tail;
    }
    else{
        Node * curr =  tail;
        while(curr ->data  != element){
            curr =  curr->next;
        }
        Node * temp = new Node(d);
        temp ->next = curr ->next;
        curr ->next =  temp;
    }
}
void print(Node * tail){
    Node * temp = tail;
    //empty;
    if(tail == NULL){
        cout<<"It is empty "<< endl;
        return ;
    }
    do {
        cout<< tail-> data<< " ";
        tail = tail -> next;
    }while(tail != temp);
    cout<< endl;
}

void DeleteNode(Node * tail , int val){
    //empty node 
    if(tail == NULL){
        cout<<"List is empty "<< endl;
        return;
    }
    else{
        Node *prev = tail;
        Node * curr = prev-> next;
        while(curr -> data != val){
            prev = curr;
            curr = curr-> next;
        }
        prev -> next = curr -> next;
        if(curr == prev){
            tail == NULL;
        }
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

bool isCircular(Node * head){
    Node * slow = head;
    Node * fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

bool DetectLoop(Node * head){
    if(head == NULL){
        return false;
    }
    map<Node * , bool> visited;
    Node * temp = head ;
    while(temp != NULL){
    if(visited[temp]==  true){
        return false;
    } 
    visited[temp] = true;
    temp = temp -> next;

    }
    return false;

}
Node * FloydsCycles(Node * head){
    if(head == NULL) return NULL;
    Node * fast = head;

    Node * slow = head;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            cout<<"Print The slow data "<< slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node * StartingLoopFunction(Node * head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection =  FloydsCycles(head);
    Node * slow = head;
    while(slow != NULL){
        slow =  slow ->next;
        intersection = intersection ->next;
    }
    return slow;
}
void RemoveLoop(Node* head){
    if(head == NULL) return;

    Node * StartingLoop = StartingLoopFunction(head);
    Node * temp =  StartingLoop;

    while(temp->next != StartingLoop){
        temp = temp->next;
    }
}
int main() {
    Node* tail = NULL;
    insertAttail(tail , 5  ,3);
    insertAttail(tail , 3 , 5);
    insertAttail(tail , 3 , 10);
    insertAttail(tail ,5 , 8);
    insertAttail(tail , 8 , 9);
    insertAttail(tail , 8 , 9);
    insertAttail(tail ,9, 10);
    insertAttail(tail ,9, 10);
    insertAttail(tail , 10, 101);
    print(tail);
    // DeleteNode(tail , 8);
    // print(tail);
    
    // if(isCircular(tail)){
    //     cout<<"Linked list is circular "<< endl;
    // }
    // else{
    //     cout<<"Linked list is Not circular "<< endl;
    // }
    // cout<<"Remove Loop "<<endl;
    // RemoveLoop(tail);
    
    
    
    // cout<< endl;
    //  if( DetectLoop(tail)){
    //     cout<<"Loop is detect "<< endl;
    //  }
    //  else{
    //     cout<<"Lood is not detect"<< endl;
    //  }
   
    
    // return 0;
}