// Q1 : LevelOrder Traversal
 vector<int> levelOrder(Node* root)
    {
      vector<int>ans;
      if(root == NULL){
          return ans;
      }
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          Node * temp =  q.front();
          ans.push_back(temp ->data);
          if(temp->left)
          q.push(temp->left);
          if(temp->right)
          q.push(temp ->right);
          q.pop();
      }
      return ans;

    }

    // Q2 : Revrese level Oredr traversal
     vector<int> levelOrder(Node* root)
    {
      vector<int>ans;
      if(root == NULL){
          return ans;
      }
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          Node * temp =  q.front();
          ans.push_back(temp ->data);
          if(temp->left)
          q.push(temp->left);
          if(temp->right)
          q.push(temp ->right);
          q.pop();
      }
      return ans;
    }


    // Q3 : Height of Binary Tree

    class Solution{
    public:
    //Function to find the height of a binary tree.
        pair<int , int>diameterfast(Node * root ){
        if(root ==NULL){
            pair<int , int> p = make_pair(0 , 0);
            return p;
        }
        pair<int ,int> l =diameterfast(root ->left);
        pair<int , int> r =  diameterfast(root ->right);
        int op1 = l.first;
        int op2= r.first;
        int op3 = l.second + r.second +1;
        pair<int , int>ans;
        ans.first = max(op1 , max(op2 , op3));
        ans .second = max(l.second , r.second) + 1;
        return ans;
    }
    int height(struct Node* root){
        return diameterfast(root).second;
    }
};

// Q4 : Daimeter of Binary Tree 

class Solution 
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* root){
        if(root == NULL)
        return 0;
        int left1 = height(root ->left);
        int right1 = height(root ->right);
        int ans  = max(left1 , right1 ) + 1;
        return ans;
    }
    pair<int , int>diameterfast(Node * root ){
        if(root ==NULL){
            pair<int , int> p = make_pair(0 , 0);
            return p;
        }
        pair<int ,int> l =diameterfast(root ->left);
        pair<int , int> r =  diameterfast(root ->right);
        int op1 = l.first;
        int op2= r.first;
        int op3 = l.second + r.second +1;
        pair<int , int>ans;
        ans.first = max(op1 , max(op2 , op3));
        ans .second = max(l.second , r.second) + 1;
        return ans;
    }
    int diameter(Node* root) {
        return diameterfast(root).first;
       
    }

     // Q5 Check for BST 
       public:
    //Function to check whether a Binary Tree is BST or not.
    int minValue(Node* root) {
    if(root ==NULL){
        return -1;
    }
   while(root->left)
        root = root->left;

    // Return value in leaf node.
    return root->data;
}
int maxValue(Node* root) {
    if(root ==NULL){
        return -1;
    }
   while(root->right)
        root = root->right;

    // Return value in leaf node.
    return root->data;
}
    bool isBST(Node* node) {
        if(node == NULL)
        return 1;
        if (node->left != NULL && maxValue(node->left) >= node->data)
        return 0;
 
   
    if (node ->right != NULL && minValue(node->right) <= node->data)
        return 0;
 
   
    if (!isBST(node->left) || !isBST(node->right))
        return 0;
 
   
    return 1;
    }



     // Q6 Minimum element in BST
     int minValue(Node* root) {
    if(root ==NULL){
        return -1;
    }
   while(root->left)
        root = root->left;

    // Return value in leaf node.
    return root->data;
}

// Q 7  Delete Node in a BST

class Solution {
    TreeNode*findminval(TreeNode* root ){
        if(root == NULL){
            return root;
        }
        TreeNode*temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
        return temp;
}
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
      if(root==NULL)
          return NULL;
        if(root->val==key){
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            if(root->left!=NULL && root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            if(root->right!=NULL && root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            if(root->right!=NULL && root->left!=NULL){
                int minimum= findminval(root->right)->val;
                root->val=minimum;
                root->right=deleteNode(root->right,minimum);
                return root;
            }
        }
        else if(root->val>key){
        root->left=deleteNode(root->left,key);
        return root;
    }
    else{
        root->right=deleteNode(root->right,key);
        return root;
    }
    return root;
        
    }
};