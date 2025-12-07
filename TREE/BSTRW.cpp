#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node * right;
    Node(int data){
        this ->data = data;
        this->left = NULL;  
        this->right = NULL;
    }

};

Node* insert(Node* root, int val) {
    if (root == nullptr)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}
void LevelOrderTraversal(Node * root){
        queue<Node * >q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node * temp =  q.front();
            q.pop();
            if(temp == NULL){
                cout<< endl;
                if(!q.empty()){
                    q.push(NULL);

                }
            }else{
                cout<< temp -> data <<" ";
                if(temp -> left){
                    q.push(temp->left);
                }
                 if(temp -> right){
                    q.push(temp->right);
                }
            }
        }
}
Node * InsertIntoBST(Node * root , int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root ->data){
        root ->right = InsertIntoBST(root ->right , data);
    }
    else
    root ->left = InsertIntoBST(root->left , data);
     return root;
}


void TakeInput(Node * &root){
    int data;
    cout<<"Enter the data to create BST"<<endl;
    cin>> data;
    while(data != -1){
        root = InsertIntoBST(root , data);
        cin>>data;
    }
}
Node* Minivalue(Node * root){
    Node * temp = root;
    while(temp ->left != NULL){
        temp = temp ->left;
    }
    return temp;
}
Node* Maxvalue(Node * root){
    Node * temp = root;
    while(temp ->right != NULL){
        temp = temp ->right;
    }
    return temp;
}
bool toSearch1(Node * root , int val){
    // base case
    if(root ==  NULL){
        return 0;
    }
    if(root ->data == val){
        return 1;
    }
    if(root ->data > val){
        return toSearch1(root ->left , val);
    }
    else{
        return toSearch1(root ->right ,val);
    }
}
bool toSearch(Node * root , int X){
    Node * temp =  root;
    while(temp != NULL){
        if(temp ->data == X){
            return 1;
        }
        if(temp -> data > X){
            temp =  temp ->left ;
        }
        else{
            temp =  temp ->right;
        }
        return 0;
    }
}
Node * Deletection(Node * root , int val){
    //base case
    if(root == NULL){
        return root;
        delete root;
    }
    if(root ->data == val){
      //  0  child
      if(root ->left == NULL && root ->right == NULL){
        return root;
        delete root;
      }
      if(root ->left != NULL && root ->right == NULL){
        Node * temp = root->left;
        delete root;
        return temp;
      }
      if(root ->left == NULL && root ->right != NULL){
        Node * temp =  root ->right;
        delete root;
        return temp;
      }
      if(root -> left != NULL && root ->right != NULL){
        int mini = Minivalue(root ->right) ->data;
        root->data = mini;
        root->right = Deletection(root->right  , mini);
        return root;
      }

    } 
    if(root ->data > val){
        root ->left = Deletection(root ->left , val);
        return root;
    }
    else{
        root ->right = Deletection(root ->right  , val);
        return root;
    }
}


bool toSearchBSt(Node *root , int val){
    if(root == nullptr) return false;

    if(root->data ==  val) {
        return true;
    }

    if(root ->data > val){
        return toSearchBSt(root->left , val);
    }
    else{
        return toSearchBSt(root ->right , val);
    }
}

bool toSearchBStIterator(Node* root ,int val){
    Node * temp = root ;
    while(temp != nullptr){

        if(val == temp->data){
            return true;
        }
        else if(temp->data > val){
            temp = temp->left;
        }
        else{
            temp =  temp ->right;
        }
    }
    return false;
}

Node * Deletection2TimeCode(Node * root , int val){
    if(root == NULL){
        delete root;
        return NULL;
    }
    if(root ->data == val){
        if(root ->left  == nullptr && root -> right == nullptr){
            delete root;
            return NULL;
        }
        if(root ->left != nullptr && root ->right == nullptr){
            Node * temp = root->left;

            delete root;

            return temp;
        }


        if(root ->left == nullptr && root ->right != nullptr){
            Node * temp = root->right;

            delete root;

            return temp;
        }

        if(root ->left != NULL && root ->right != NULL){
            int mini = Minivalue(root->right)->data;
            root->data = mini;
            root ->right = Deletection2TimeCode(root->right , mini);
            return root;
        }
            

        
    }
    else if(root -> data > val){
        root ->left = Deletection2TimeCode(root ->left , val);
        return root;
    }
    else{
        root ->right = Deletection2TimeCode(root ->right , val);
        return root;
    }
}

int KthSmallestElementInBST(Node * root , int& index , int k){
    if(root == NULL) return -1;

    int left = KthSmallestElementInBST(root ->left , index , k);

    if(left != -1){
        return left;
    }
    index++;



    // cout<<"index of : "<<index<< " "<<endl;

    if(index == k){
        return root ->data;
    }

    return KthSmallestElementInBST(root ->right , index , k);

}

void InOrderTraversal(Node * root , vector<int>&ans){
    if(root == NULL) return;

    InOrderTraversal(root ->left ,ans);
    ans.push_back(root->data);
    InOrderTraversal(root ->right ,ans);
}
void MirrorOfTree(Node * root){
    if(root == NULL) return;

    Node * left = root->left;
    root ->left = root ->right;
    root->right =  left;

    MirrorOfTree(root ->left);
    MirrorOfTree(root->right);
}


int main(){

    Node* root = nullptr;
    root = insert(root, 5);
    insert(root, 4);
    insert(root, 2);
    insert(root, 3);
    insert(root, 8);
    insert(root, 6);
    insert(root, 10);
    insert(root , 7);
    // int k = 3;
    vector<int>ans;
    cout<<"Inorder Oredr Travresal "<< endl;
    InOrderTraversal(root , ans);
    
    for(int i =0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    MirrorOfTree(root);
    cout<<"======================= "<<endl; 
    for(int i =0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    // int index = 0;

    // int res = KthSmallestElementInBST(root , index , k);
    // cout<<"Kth Smallest Element InBST using index " << res <<endl;
   

    // InOrderTraversal(root , ans);
    // cout<<"Kth Smallest ElementInBST "<<ans[k -1]<<endl;

    // cout<<"Kth Largse tElementInBST " << ans[ans.size() - k +1]<<endl;

    // bool found  = toSearchBStIterator(root , val);
    // if(found){
    //     cout<<"True"<<endl;
    // }
    // else{
    //     cout<<"False"<<endl;
    // }

    // cout<<"Before  Deletion Inorder Traversal"<<endl;
    // InOrderTraversal(root);

    // Deletection2TimeCode(root ,80);
    // cout<<endl;

//     Node *root = NULL;
//     TakeInput(root );
    

//     Deletection(root , 7);
//     cout<< endl;
    // cout<<"After  Deletion Inorder Traversa "<< endl;
    // InOrderTraversal(root);
    // cout<<endl;
   
//     cout<<"Level Oredr Travresal "<< endl;
//     LevelOrderTraversal(root);
//     cout<<"The max value of bst "<< endl;
//     cout<<Maxvalue(root)->data<<endl;
//     cout<<"The min value of Bst "<< endl;
//     cout<< Minivalue(root)->data<<endl;
//     int found  = toSearch(root , 7);
//     if(found){
//         cout<<"Data is present in BST "<< endl;
//     }
//     else{
//         cout<<"Data is not oresent in BST "<<endl;
//     }
//     return 0;
// }
}
