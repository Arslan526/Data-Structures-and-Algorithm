#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int d){
        this -> data =  d;
        this -> left =  NULL;
        this -> right = NULL;
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

Node * buildTree(Node * root){
    cout<<"Enter the data : "<< endl;
    int data;
    cin>> data;
    root =  new Node (data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left "<< data << endl;
    root-> left =  buildTree(root);
    cout<<"Enter data for intserting in right "<< data <<endl;
    root->right =  buildTree(root);
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

void InOrderTraversal(Node * root , vector<int>&ans){
    if(root == NULL) return;

    InOrderTraversal(root ->left ,ans);
    ans.push_back(root->data);
    InOrderTraversal(root ->right ,ans);
}

void preorder(Node * root){
    if(root == NULL){
        return;
    }
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node * root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

void MorrisTraversal( Node* root){
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

int Height(Node * root ){
    if(root == NULL){
        return 0;
    }
    int left =  Height(root ->left);
    int right = Height(root ->right);
    int ans =  max(left , right) +1;
    return ans;
}


int Diameter(Node * root ){
    if(root == NULL){
        return 0;
    }
    int op1 =  Diameter(root ->left);
    int op2 = Diameter(root ->right);
    int op3 = Height(root ->left ) +  Height(root ->right ) + 1;
    int maxi  =  max(op1 , max(op2 , op3));
    return maxi;
}

pair<int, int> DiameterFastCode(Node * root){
    if(root == NULL){
        pair<int , int> p = make_pair(0 , 0);
        return p;

    }

    pair<int , int> left = DiameterFastCode(root ->left);
    pair<int, int> right =  DiameterFastCode(root ->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 =  left.second + right.second;

    pair<int  , int> ans;

    ans.first = max(op1 , max(op2 , op3));

    ans.second = max(left.second , right.second) +1;
    return ans;
}
int coutNode(Node * root){
    if(root == NULL){
        return 0;
    }
    int left = coutNode(root ->left);
    int right = coutNode(root->right);
    return  1 + left + right;
}

int countLeafNode(Node * root , int count){
    if(root ==  NULL) return 0;

 

    if(root ->left == NULL && root ->right ==  NULL) return 1;

    return countLeafNode(root->left , count) + countLeafNode(root ->right , count);
}


bool CheckBalanceTree(Node *root){
    if(root == NULL) return true;

    bool left = CheckBalanceTree(root ->left);
    bool right = CheckBalanceTree(root ->right);
    bool diff = abs(Height(root ->left) - Height(root ->right)) <= 1;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}
pair<bool, int> CheckBalanceTreeFastcode(Node * root){
    if(root == NULL){
        pair<bool , int> p = make_pair(true , 0);
        return p;
    }
    bool leftAns =  left.first;

    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool , int>ans;

    ans.second = max(left.second , right.second) + 1;

    if(leftAns && rightAns && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
}

bool TwoTreeIdentail(Node * root1 ,  Node*root2){
    if(root1 == NULL && root2 == NULL) return true;

    if(root1 == NULL && root2 != NULL) return false;

    if(root1 != NULL && root2 == NULL) return false;

    bool left = TwoTreeIdentail(root1->left , root2 ->left);
    bool right = TwoTreeIdentail(root1->right , root2->right);

    bool value =  root1->data ==  root2->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}

bool pathsum(Node * root , int targetsum){
    if(root == NULL) return false;

    targetsum -= root->data;

    if(targetsum == 0 && !root->left && !root->right ) return true;

    bool leftpath =  pathsum(root->left , targetsum);
    bool rightpath = pathsum(root->right , targetsum);
    
    targetsum += root->data;

    return leftpath || rightpath;



}

void leftBoundaryTravesal(Node * root , vector<int>&ans){
    if(root == nullptr) return;

    if(root ->left == nullptr && root->right == nullptr) return;

    ans.push_back(root ->data);

    if(root->left){
        leftBoundaryTravesal(root->left ,ans);
    }
    else{
        leftBoundaryTravesal(root ->right , ans);
    }
}

void LeafBoundaryTravesal(Node * root , vector<int>&ans){
    if(root == NULL) return;

    if(root->left == nullptr &&  root ->right == nullptr){
      ans.push_back(root->data); 
      return;
    }
      

    LeafBoundaryTravesal(root->left , ans);
    LeafBoundaryTravesal(root->right , ans);
}

void RightBoundaryTravesal(Node * root , vector<int>&ans){
    if(root == nullptr) return;

    if(root ->left == nullptr && root->right == nullptr) return;

    if(root->left){
        RightBoundaryTravesal(root->right ,ans);
    }
    else{
        RightBoundaryTravesal(root ->left , ans);
    }
    ans.push_back(root ->data);
}

void MirrorOfTree(Node * root){
    if(root == NULL) return;

    Node * left = root->left;
    root ->left = root ->right;
    root->right =  left;

    MirrorOfTree(root ->left);
    MirrorOfTree(root->right);
}


vector<int> LeftView(Node * root , vector<int>&ans){
   
    queue<Node*>q;
    if(root == NULL) return ans;

    if(!q.empty()){
        int size =  q.size();
        ans.push_back(q.front()->data);

        while(size--){
            Node * temp =  q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp ->right){
                q.push(temp->right);
            }
        }
    }
   
    return ans;
  
}

void DiagonalTraversal(Node* root , vector<int>&ans){
    if(root ==  NULL) return;
    queue<Node*> leftq;
    Node* temp = root;
    while(temp){
        ans.push_back(temp->data);
        if(temp ->left){
            leftq.push(temp->left);

            if(temp ->right){
                temp =  temp ->right;

            }
        }
        else{
            if(!leftq.empty()){
                temp =leftq.front();
                leftq.pop();

            }
            else{
                temp = NULL;
            }
        }
    }
}

int main() {

    Node* root = nullptr;
    root = insert(root, 5);
    insert(root, 4);
    insert(root, 2);
    insert(root, 3);
    insert(root, 8);
    insert(root, 6);
    insert(root, 10);
    insert(root , 7);
    vector<int>ans;
    DiagonalTraversal(root ,ans);
    int n = ans.size();

    cout<<"Diagonal Traversal"<<endl;

    for(int i =0; i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    // vector<int>ans;

    // ans.push_back(root1->data);

    // leftBoundaryTravesal(root1->left , ans);

    // LeafBoundaryTravesal(root1 ->left , ans);

    // LeafBoundaryTravesal(root1->right , ans);

    // RightBoundaryTravesal(root1 ->right , ans);

    // int n = ans.size();
    // cout<<"Boundry Traversal "<<endl;
    // for(int i =0; i<n;i++){
    //     cout<<ans[i] <<" ";
    // }
    // cout<<endl;


    // int targetsum = 4;
    // bool ans = pathsum(root1 , targetsum);

    // if(ans){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }

    // Node* root2 = new Node(1);
    // root2->left = new Node(2);
    // root2->right = new Node(2);
    // root2->left->left = new Node(4);
    // root2->left->right = new Node(5);

    // bool check = TwoTreeIdentail(root1 , root2);
    // if(check){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }

    // pair<bool, int> checkTree = CheckBalanceTreeFastcode(root);

    // if(checkTree.first){
    //     cout<<"Tree is  Balance Tree"<<endl;
    // }
    // else{
    //     cout<<"Tree is Not  Balance Tree"<<endl;

    // }
  
    cout<<"Diameter of "<<DiameterFastCode(root).first<<endl;
    // Node * root =  NULL;
    
    // create a tree
    //  root = buildTree(root);
    //  cout<<"printing the level ordder travlase"<< endl;
    //  LevelOrderTraversal(root);
     cout<<"Hiegth of Tree "<< Height(root )<<endl;
     cout<<"Diameter of Binary Tree "<<Diameter(root)<<endl; 
     cout<<"Count of the Nodes : "<< coutNode(root) << endl;
     cout<<"Inoder travesal is "<< endl;
    InOrderTraversal(root ,ans);
     cout<<endl;
    //  cout<< endl<<"Preorder traveasal is "<< endl;
    //  cout<<endl;
    //  preorder(root);
    //  cout<< endl <<"Postorder traveasal is "<< endl;
    //  postorder(root);
    //  cout<<endl;
    //  cout<<"Morris Travesal"<<endl;
    //  MorrisTraversal(root);
    // return 0;
}
