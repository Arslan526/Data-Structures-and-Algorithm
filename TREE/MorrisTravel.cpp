#include<iostream>
using namespace std;
class Node{
    public:
    int data;
     Node * left;
     Node * right;
    Node(int d){
        this->data =  d;
        this -> left =  NULL;
        this -> right = NULL;
    }
    
};
void MorrisTraversal( Node* root)
{
    Node *current, *pre;
 
    if (root == NULL)
        return;
 
    current = root;
    while (current != NULL) {
 
        if (current->left == NULL) {
            cout << current->data << " ";
            current = current->right;
        }
        else {
 
            
            pre = current->left;
            while (pre->right != NULL
                   && pre->right != current)
                pre = pre->right;
 
            
            if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }
 
            else {
                pre->right = NULL;
                cout << current->data << " ";
                current = current->right;
            } 
        } 
    } 
}

void flatten(Node *root){
        //code here
        Node * curr = root;
        while(curr != NULL){
            if(curr->left){
                Node * pred = curr->left;
                while(pred ->right)
                     pred = pred->right;
                     pred ->right = curr->right;
                     curr->right = curr->left;
                     curr ->left = NULL;
            }
            cout<<curr ->right<<" ";
        }
}
Node * NewNode(int data){
    Node * node = new Node(data);
    node->data = data;
    node->left = NULL;
    node ->right = NULL;
}


int main(){
    struct Node * root = NewNode(1);
    root->right = NewNode(3);
    root->left  = NewNode(4);
    root->right =  NewNode(9);
    root->left  = NewNode(4);
    root->right =  NewNode(9);
   
    //MorrisTraversal(root);
    flatten(root);
}
