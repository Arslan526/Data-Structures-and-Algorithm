#include <iostream>
#include <stack>
#include <vector>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<int> inorderTraversal(Node* root) {
    vector<int> result;
    stack<Node*> s;
    Node* current = root;

    while (current != nullptr || !s.empty()) {
   
        while (current != nullptr) {
            s.push(current);
            current = current->left;
        }


        current = s.top();
        s.pop();

        result.push_back(current->data); 

        current = current->right;
    }

    return result;
}
vector<int> preorderTraversal(Node* root) {
    vector<int> result;
    if (root == nullptr) return result;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* current = s.top();
        s.pop();

        result.push_back(current->data);

       
        if (current->right)
            s.push(current->right);
        if (current->left)
            s.push(current->left);
    }

    return result;
}
vector<int> postorderTraversal(Node* root) {
    vector<int> result;
    if (root == nullptr) return result;

    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* curr = s1.top();
        s1.pop();
        s2.push(curr);

        if (curr->left) s1.push(curr->left);
        if (curr->right) s1.push(curr->right);
    }
    while (!s2.empty()) {
        result.push_back(s2.top()->data);
        s2.pop();
    }

    return result;
}

void printTraversal(const vector<int>& traversal) {
    for (int val : traversal)
        cout << val << " ";
    cout << endl;
}

int countLeafNode(Node * root , int count){
    if(root ==  NULL) return 0;

 

    if(root ->left == NULL && root ->right ==  NULL) return 1;

    return countLeafNode(root->left , count) + countLeafNode(root ->right , count);
}

int main() {
   
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int count = 0;
    int ans = countLeafNode(root , count);
    cout<<"count of leaf node "<<count<<endl;

    // vector<int> inorder = inorderTraversal(root);
    // cout << "Inorder Traversal"<<endl;
    // printTraversal(inorder);

    return 0;
}
