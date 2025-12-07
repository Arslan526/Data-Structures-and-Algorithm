#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
  LinkedListNode<int>* getmid(LinkedListNode<int> * head){
      LinkedListNode<int> * slow = head;
        LinkedListNode<int> * fast =  head-> next;
        while(fast != NULL && fast -> next != NULL){
            fast = fast->next-> next;
            slow =  slow-> next;
        }
        return slow;
    }
  LinkedListNode<int> *reverse(LinkedListNode<int> * head){
       LinkedListNode<int> * curr = head;
      LinkedListNode<int> * prev = NULL;
       LinkedListNode<int> * next = NULL;
        while(curr != NULL){
            next = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
bool isPalindrome(LinkedListNode<int> *head)
      {
          if(head ==  NULL )
          return true;
        if(head-> next == NULL){
            return true;
        }
        //1->  find middle
         LinkedListNode<int> * middle = getmid(head);
        
        //2-> revese list after middle
        
        LinkedListNode<int> * temp = middle-> next;
        middle -> next = reverse(temp);
        
        // 3-> compre both values 
        LinkedListNode<int> * head1 =  head;
       LinkedListNode<int> * head2 = middle-> next;
        while(head2 != NULL){
            if(head1-> data != head2-> data){
                return false;
            }
            
            head1 = head1-> next;
            head2 = head2-> next;
        }
        
        // 4-> repet step 2
        
        return true;
        
    }
   

