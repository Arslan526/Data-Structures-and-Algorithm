#include<bits/stdc++.h>

using namespace std;
class Tree
{
public:
  int data;
  Tree *left = NULL, *right = NULL;
  // Constructor initialised
    Tree (int x)
  {
    data = x;
    left = NULL;
    right = NULL;
  }
};
Tree*minival(Tree * root ){
  Tree *temp = root;
  while(root -> left != NULL){
    temp = temp ->left;

  }
  return temp;
}
Tree *Delete (Tree * root, int x){

if(root == NULL){
  delete root;
  return NULL;
}
if(root->data == x){
  if(root ->left ==  NULL && root ->right == NULL){
    delete root;
    return root;
  }
  if(root ->left != NULL&& root ->right == NULL){
    Tree * temp = root->left;
    delete root;
    return temp;
  }
  if(root ->left == NULL&& root ->right != NULL){
    Tree * temp = root->right;
    delete root;
    return temp;
  }
  if(root ->left!= NULL&& root ->right){
    int mini = minival(root->right)->data;
    root ->data = mini;
    root->right =Delete(root->right , mini);
    return root;
  }
}
if(root ->data > x){
  root ->left = Delete(root ->left , x);
  return root;
}
else if(root ->data < x){
  root ->right = Delete(root ->right , x);
    return root;
  }
}
   

void inorder_traversal (Tree * root)
{
  if (root == NULL)
    return;
  inorder_traversal (root->left);

  cout << root->data << " ";

  inorder_traversal (root->right);

}

int main (){
  Tree *root = new Tree (15);
  root->left = new Tree (13);
  root->right = new Tree (18);
  root->left->left = new Tree (8);
  root->left->right = new Tree (14);
  root->right->left = new Tree (16);
  root->right->right = new Tree (19);
  
  cout << "Inorder Traversal of the Binary Search Tree:";
  inorder_traversal (root);
  cout << endl;
  
  cout <<"Value to be deleted : 18"<<endl;
  Delete (root, 18);
  
  cout <<"Now is  Inorder Traversal :";
  inorder_traversal (root);

}