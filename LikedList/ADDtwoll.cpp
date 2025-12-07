class Solution
{
    private:
    Node * reverse(Node * head){
        Node * curr = head;
        Node * prev = NULL;
        Node * next =  NULL;
        while(curr != NULL){
            next = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAttail(struct Node* head, struct Node* tail, int value){
        Node * temp = new Node (value);
        //empty list
        if(head == NULL){
            head = temp;
            tail = temp;
            return;
        }else{
            tail -> next = temp;
            tail = temp;
        }
    }
    
    struct Node * ADD(struct Node* first, struct Node* second){
        Node * anshead =NULL;
        Node * anstail = NULL;
        int curry =0;
        while(first != NULL || second != NULL || curry != 0){
            int val1 = 0;
            if(first != NULL)
            val1 =first -> data;
            int val2 = 0;
            if(second != NULL)
            
            val2 = second -> data;
            int sum = curry  + val1 + val2;
            int digit = sum % 10;
            insertAttail(anshead , anstail , digit );
            curry = sum / 10;
            if(first != NULL)
            first = first -> next;
         if(second != NULL )
            second = second -> next;
        }
        return anshead;
    }
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    
    {
        if(first == NULL){
            return NULL;
            if(second == NULL){
                return NULL;
            }
        }
       // 1-> reverse linked list
       first = reverse(first);
       second = reverse(second);
       
       
       // 2-> add linked list 
       Node* ans = ADD(first , second);
       
       
       // 3 -> revese ans;
       ans = reverse(ans);
       return ans;
    }
};
