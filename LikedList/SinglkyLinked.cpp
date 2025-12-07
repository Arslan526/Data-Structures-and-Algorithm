#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this ->data  = data;
        this ->next = NULL;
    }
    // ~Node(){
    //     int value = this -> data;
    //     //memory free
    //     if(this -> next != NULL){
    //         delete next;
    //         this -> next = NULL;
    //     }
    //     cout<<"memory free for node with data "<< value <<endl;
    // }
};

void InserAtTail(Node * &tail, int d){
     // new node create
    Node * temp = new Node(d);
   tail-> next =  temp;
   tail = temp;
}

void InserAthead(Node * &head , int d){
     // new node create
    Node * temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(Node * &head){
   
    Node * temp = head;
    while(temp != NULL){
        cout<< temp-> data<<" -> ";
        temp =  temp->next;
        if(temp == NULL){
        cout<<"NULL"<<endl;
    }
 
    }cout<<endl;
    

}
void InsertAtPosition(Node * &head , int position , int d){
    Node * temp = head;
    // inserting at start
    if(position == 1){
        InserAthead(head , d);
        return;
    }
    // inserting at middle
    int cnt  = 1;
    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    } 
    // inserting at end
    if(temp ->next == NULL){
        InserAtTail(head , d);
        return;
    }
    // inserting at middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    

}

void deleteNode(int position , Node * & head){
    //deleting first or strat node
    if(position == 1){
        Node *temp =  head;
        head =  head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting middle or last node
        Node * curr = head;
        Node * prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

bool isCircular(Node * head){
    //empty list
    if(head == NULL){
        return true ;
    }
    Node *temp =head -> next;
    while(temp != NULL && temp != head){
        temp = temp-> next;
    }
    if(temp == head){
        return true;
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
 
Node * FloydsCycles(Node * head ){
    if(head == NULL){
        return NULL;
    }
    Node * fast = head;
    Node * slow = head;
    

    while(fast != NULL && slow != NULL){
        fast = fast-> next;
        if(fast != NULL){
            fast =  fast-> next;
        }
        slow = slow -> next;
         if(slow == fast){
        cout<<"present at "<< endl;
        return fast;
    }
    
    
  }
  return NULL;
}

Node * StartingLoop(Node *head){
    if(head == NULL){
        return NULL;
    }
    Node * intersection  = FloydsCycles(head );
    Node * slow = head;
    while(slow != intersection){
        slow = slow-> next;
        intersection = intersection-> next;
    }
    return slow;
}

void RemoveLoop(Node * head ){
    if(head == NULL){
        return ;
    }
    Node * s = StartingLoop (head);
    Node *temp  = s;
    while(temp -> next != s){
        temp = temp-> next;
    }
    temp -> next = NULL;
}
Node* Reverse(Node * head){
    Node * prev = NULL;
    Node * temp = head;
    Node * forwoard = NULL;
    while(temp != NULL){
        forwoard =  temp->next;
        temp ->next =  prev;
        prev = temp;
        temp =  forwoard;
    }
    return prev;
    
}
Node * ReverseRecursion(Node * head ){
    if(head == NULL ||  head ->next == NULL){
        return head;
    }
    Node * temp =  ReverseRecursion(head->next);
    head->next->next = head;
    head ->next = NULL;
    return temp;
}
int getLegth(Node * head){
    int len = 0;
    while(head != NULL){
        len++;
        head =  head->next;
    }
    return len;
}
int middleOfTheLinkedList(Node * head){
    int len =  getLegth(head);
    int ans = (len /2);
    Node * temp = head;
    int count = 0;
    while(count< ans){
        temp = temp->next;
        count++;
    }
    return temp->data;
}
int  middleOfTheLinkedListTwoPointer(Node * head){
    if(head == NULL ||  head ->next == NULL){
        return head->data;

    }  
    if(head ->next ->next == NULL){
        return head ->next->data;
    }
    Node * slow = head;
    Node * fast = head ->next;
    while(fast != NULL){
        fast =  fast ->next;
        if(fast != NULL){
            fast = fast ->next;
        }
        slow = slow ->next;
    }
    return slow->data;
}
Node * ReverseKGroup(Node * head , int k){
    if(head == NULL){
        return NULL;
    }
    Node * prev = NULL;
    Node * curr = head;
    Node * forward = NULL;
    int count = 0;
    //reverse k nodes
    while(curr != NULL && count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    //recursion call
    if(forward != NULL){
        head -> next = ReverseKGroup(forward , k);
    }
    return prev;

}
Node* RemoveFromDuplicate(Node * head){
    if(head == NULL) return head;

    Node * curr = head;

    while(curr != NULL && curr->next != NULL){
        if(curr != NULL && curr ->data ==  curr->next->data){
            Node * nextTonext = curr ->next->next;

            Node * nodeTodllete = curr ->next;

            delete(nodeTodllete);
            cout<<"Delete Node "<< nodeTodllete->data <<endl;

            curr ->next =  nextTonext;

        }
        else{
            curr =  curr ->next;

        }
    }
   return head;
}
Node * SortLL(Node * head){
      if(head == NULL ||  head->next ==  NULL) {
          return head;
      }
      vector<int>ans;
      Node * temp = head;
      while(temp !=NULL){
          ans.push_back(temp->data);
          temp = temp->next;
      }
      sort(ans.begin() ,ans.end());
     

     
      temp = head;
       int i = 0;
       while (temp != NULL) {
        temp->data = ans[i++];
        temp = temp->next;
    }
    return head;
  }

    Node *removeDuplicates(Node *head) {
        
        head = SortLL(head);
        if(head == NULL) return NULL;
        Node * curr =  head;
        while(curr != NULL){
            if(curr ->next != NULL && curr ->data == curr->next ->data){
                Node * nextToNext =  curr->next->next;
                Node * deleteNode  = curr->next;
                delete deleteNode;
                curr->next = nextToNext ;
                
            }
            else{
               curr =  curr->next; 
            }
        }
        return head;
    }
    Node *SortLinkedList(Node *head) {

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    Node *temp =  head;

    while(temp != NULL){
        if(temp ->data == 0){
            count0++;
        }
        else if(temp ->data == 1){
            count1++;
        }
        else if(temp ->data == 2){
            count2++;
        }
        temp =  temp->next;
    }
    temp = head;

    while(temp != NULL){
        if(count0 != 0){
            temp ->data = 0;
            count0--;
        }
        else if(count1 != 0){
            temp->data = 1;
            count1--;
        }
        else if(count2 != 0){
            temp->data = 2;
            count2--;
        }
        temp = temp->next;
    }
    return head;
}
Node *SortLinkedListApproach2(Node *head) {
   Node zeroHead = Node(-1);
    Node * zeroTail = &zeroHead;
    Node oneHead = Node(-1);
    Node * oneTail = &oneHead;
    Node twoHead = Node(-1);
    Node * twoTail = &twoHead;
    Node * curr = head;
    // create separate list 0 , 1 , 2
    while(curr != NULL){
        int value =  curr ->data;
        if(value == 0){
            InserAtTail(zeroTail , value);
        }
        else if(value == 1){
            InserAtTail(oneTail , value);
        }
        else if(value == 2){
            InserAtTail(twoTail , value);
        }
        curr =  curr->next;
    }

    //merge 3 sublist
    // 1s list not empty
    if(oneHead.next != NULL){
        zeroTail ->next = oneHead.next;
        oneTail ->next = twoHead.next;
    }
    else{
        zeroTail ->next = twoHead.next;
    }

    twoTail ->next = NULL;

    //setup head
    head = zeroHead.next;
    //delete dummy nodes
    delete &zeroHead;
    delete &oneHead;
    delete &twoHead;
    return head;
}
int main() {
    Node * node1 = new Node(1);
    Node * head = node1;
    // Node * tail = node1;
    InserAthead(head , 1);
    InserAthead(head , 0);
    InserAthead(head , 2);
    InserAthead(head , 1);
    InserAthead(head , 0);
    InserAthead(head , 1);
    InserAthead(head , 1);
    InserAthead(head , 2);
    InserAthead(head , 0);
    InserAthead(head , 1);
    InserAthead(head , 0);
    InserAthead(head , 2);
    head = SortLinkedListApproach2(head);
    cout<<"Sort 0 1 , 2 "<<endl;
    print(head);
    // cout<<"Remove From Duplicate Linked list"<<endl;
    // head = RemoveFromDuplicate(head);
    // print(head);
    // head = SortLL(head);
    // cout<<"Sorting "<<endl;
    // print(head); 
    // head  = removeDuplicates(head);
    // cout<<"removing duplicate "<<endl;
    // print(head);

    
   
    // print(head);
    // cout<<"print a Tial ";

    // InserAtTail(tail , 12);
    // InserAtTail(tail , 15);
    // head = ReverseKGroup(head , k);
    // cout<<"After Reverse in K group "<<endl;
    // print(head);
    
    // print(head);
    // cout<<"Insert at position "<<endl;
    // InsertAtPosition(head ,2  , 100);
    // print(head);
    // // cout<<"delete node at position "<<endl;
    // // deleteNode(3 , head);
    // // print(head);
    // cout<<"Reverse A linked list"<<endl;
    // head = ReverseRecursion(head);
    // print(head);
    // int ans  =  middleOfTheLinkedListTwoPointer(head);

    // cout<<"Middle Of The LinkedList "<<ans<<endl;



   

}