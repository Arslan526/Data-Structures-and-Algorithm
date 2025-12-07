#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* BuildTree() {
    int data;
    cout << "Enter data: ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter data for left of " << data << endl;
    root->left = BuildTree();

    cout << "Enter data for right of " << data << endl;
    root->right = BuildTree();

    return root;
}
Node* insertForBSt(Node* root, int val) {
    if (root == nullptr)
        return new Node(val);

    if (val < root->data)
        root->left = insertForBSt(root->left, val);
    else if (val > root->data)
        root->right = insertForBSt(root->right, val);
    return root;
}
Node* insertwithOutBst(Node* root, int val) {
    Node* newNode = new Node(val);

    if (root == NULL)
        return newNode;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // Insert left
        if (temp->left == NULL) {
            temp->left = newNode;
            return root;
        } else {
            q.push(temp->left);
        }

        // Insert right
        if (temp->right == NULL) {
            temp->right = newNode;
            return root;
        } else {
            q.push(temp->right);
        }
    }
    return root;
}

void LevelOrderTraversal(Node * root){
        queue<Node * >q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node * temp =  q.front();
                q.pop();
                cout<< temp -> data <<" ";
                if(temp -> left){
                    q.push(temp->left);
                }
                 if(temp -> right){
                    q.push(temp->right);
                }
            }
            cout<< endl;
        }

}
void InOrderTraversal(Node * root , vector<int>&ans){
    if(root == NULL) return;

    InOrderTraversal(root ->left , ans);
    ans.push_back(root ->data);

    InOrderTraversal(root->right , ans);
}
void Preorder(Node * root){
    if(root == NULL) return;
    cout<<root->data <<" ";
    Preorder(root ->left );
    Preorder(root ->right);
}
void postorder(Node * root ){
    if(root == NULL) return;

    postorder(root->left );
    postorder(root->right);
    cout<<root ->data << " ";
}
int coutNode(Node * root){
    if(root == NULL) return 0;
    int left = coutNode(root ->left );
    int right =  coutNode(root ->right);
    return 1 +  left + right;
}

int countLeafNode(Node * root , int count){
    if(root ==  NULL) return 0;

    if(root ->left == NULL && root ->right == NULL) return 1;

    int left =  countLeafNode(root ->left , count);
    int right = countLeafNode(root ->right , count);

    return left +  right;
}
int Hight(Node * root){
    if(root ==  NULL) return 0;
    int left =  Hight(root ->left);
    int right =  Hight(root ->right);
    int ans = max(left , right) +1;
    return ans;
}
int Diameter(Node * root){
    if(root == NULL) return 0;

    int leftOp1 = Diameter(root ->left);

    int rightOp2 = Diameter(root->right);
    int HiegthOp3 = Hight(root ->left) + Hight(root->right) +1;
    int maxi =  max(leftOp1 , max(rightOp2 , HiegthOp3));
    return maxi;
}
pair<int, int> DiameterFastCode(Node * root){
    if(root == NULL){
        pair<int , int>p = make_pair(0 , 0);
        return p;
    }
    pair<int , int> left = DiameterFastCode(root ->left);
    pair<int , int> right = DiameterFastCode(root ->right);
    int leftOp1 =  left.first;
    int rightOp2 = right.first;
    int HiegthOp3 =  left.second + right.second+1;

    pair<int , int>ans;
    ans.first = max(leftOp1 , max(rightOp2 , HiegthOp3));
    ans.second = max(left.second , right.second) + 1;
    return ans;
}

bool CheckBalanceTree(Node *root){
    if(root ==  NULL) return true;

    bool left =  CheckBalanceTree(root ->left);
    bool right =  CheckBalanceTree(root ->right);
    int diffHight = abs(Hight(root ->left) - Hight(root->right) <=1);
    if(left && right && diffHight){
        return true;
    }
    else{
        return false;
    }
}
pair<bool , int>CheckBalanceTreeFastcode(Node * root ){
    if(root == NULL ){
        pair<bool , int> p = make_pair(true , 0);
        return p;
    }
    pair<bool , int> left =  CheckBalanceTreeFastcode(root ->left);
    pair<bool , int> right = CheckBalanceTreeFastcode(root ->right);

    bool leftAns = left.first;
    int rightAns = right.first;
    bool diffHight = abs((left.second - right.second) <= 1);
    pair<bool , int> ans;
    ans.second = max(left.second , right.second) +1;
    if(leftAns && rightAns &&  diffHight){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
}
bool IndentailTree(Node * root1 , Node* root2){
    if(root1 == NULL &&  root2 == NULL) return true;
    if(root1 == NULL &&  root2 != NULL) return false;
    if(root1 !=  NULL &&  root2 == NULL) return false;

    bool left = IndentailTree(root1 ->left , root2 ->left);
    bool right = IndentailTree(root1 ->right , root2 ->right);
    bool value = root1 ->data ==  root2->data;

    if(left && right && value){
        return true;
    }
    else{
        return  false;
    }

}
int sum(Node * root){
      if(root == NULL) return 0;

      return root ->data +  sum(root ->left) + sum(root ->right);
  }
bool isSumTree(Node* root) {
    if(root == NULL) return true;

    // Leaf node = always true
    if(root->left == NULL && root->right == NULL)
        return true;

    // Condition for sum tree
    int cond = root->data == sum(root->left) + sum(root->right);

    // Recursive check
    bool left = isSumTree(root->left);
    bool right = isSumTree(root->right);

    return (left && right && cond);
}

pair<bool , int>CheckBalanceTreeFastcode1(Node * root ){
    if(root == NULL ){
        pair<bool , int> p = make_pair(true , 0);
        return p;
    }
    pair<bool , int> left =  CheckBalanceTreeFastcode1(root ->left);
    pair<bool , int> right = CheckBalanceTreeFastcode1(root ->right);

    bool leftAns = left.first;
    int rightAns = right.first;
    bool diffHight = abs((left.second - right.second) <= 1);
    pair<bool , int> ans;
    ans.second = max(left.second , right.second) +1;
    if(leftAns && rightAns &&  diffHight){
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;
}
vector<int> ZigZagTravesal(Node * root){
    vector<int> res;
    if(root == NULL){
      return res;
    }
    
    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);

        for(int i = 0; i < size; i++){
            Node * frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : (size - i - 1);
            ans[index] = frontNode->data;

            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }

        // Push this level's result
        for(int x : ans){
            res.push_back(x);
        }

        // Change direction after each level
        leftToRight = !leftToRight;
    }

    return res;
}

void leftTravesal(Node * root , vector<int>&ans){
    if(root == NULL) return;
    if(root ->left == NULL && root ->right ==  NULL) return;

    ans.push_back(root->data);
    if(root ->left)
     leftTravesal(root->left , ans);
    else
      leftTravesal(root->right , ans);
}
void leafTraversal(Node * root , vector<int>& ans){
    if(root == NULL) return;


   if(root ->left == NULL && root ->right ==  NULL) {
      ans.push_back(root ->data);
      return;
   }
   leafTraversal(root ->left , ans);
   leafTraversal(root ->right ,ans);
}


void RightTravsersal(Node * root , vector<int>& ans){
    if(root ==  NULL ) return;

    if(root ->left ==  NULL &&  root ->right == NULL) return;

    if(root ->right){
      RightTravsersal(root ->right ,ans);
    }
    else{
      RightTravsersal(root->left ,ans);
    }

    ans.push_back(root ->data);


}
vector<int> boundaryTraversal(Node* root) {
    vector<int> ans;
    if(root == NULL) return ans;

    // 1. Root push karo (agar leaf nahi hai)
    if(!(root->left == NULL && root->right == NULL))
        ans.push_back(root->data);

    // 2. Left boundary
    leftTravesal(root->left, ans);

    // 3. Leaf nodes
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);

    // 4. Right boundary
    RightTravsersal(root->right, ans);

    return ans;
}


pair<bool, int> IsSumTreeFastCode(Node* root) {
    if(root == NULL) {
        return make_pair(true, 0);
    }
    
    if(root->left == NULL && root->right == NULL) {
        return make_pair(true, root->data);
    }
    
    pair<bool, int> left = IsSumTreeFastCode(root->left);
    pair<bool, int> right = IsSumTreeFastCode(root->right);
    
    bool isSumTree = (root->data == left.second + right.second);
    bool isLeftSumTree = left.first;
    bool isRightSumTree = right.first;
    
    pair<bool, int> ans;
    ans.first = (isSumTree && isLeftSumTree && isRightSumTree);
    ans.second = root->data + left.second + right.second;
    
    return ans;
}

void TopView(Node* root) {
    if(root == NULL) return;
    
    map<int, int> m;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    
    while(!q.empty()) {
        Node* temp = q.front().first;
        int hd = q.front().second;
        q.pop();
        
        if(m.find(hd) == m.end()) {
            m[hd] = temp->data;
        }
        
        if(temp->left) q.push({temp->left, hd - 1});
        if(temp->right) q.push({temp->right, hd + 1});
    }
    
    cout << "Top View: ";
    for(auto p : m) {
        cout << p.second << " ";
    }
    cout << endl;
}

void BottomView(Node* root) {
    if(root == NULL) return;
    
    map<int, int> m;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    
    while(!q.empty()) {
        Node* temp = q.front().first;
        int hd = q.front().second;
        q.pop();
        
        m[hd] = temp->data;
        
        if(temp->left) q.push({temp->left, hd - 1});
        if(temp->right) q.push({temp->right, hd + 1});
    }
    
    cout << "Bottom View: ";
    for(auto p : m) {
        cout << p.second << " ";
    }
    cout << endl;
}
void LeftView(Node* root) {
    if(root == NULL) return;
    
    map<int, int> m;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    
    while(!q.empty()) {
        Node* temp = q.front().first;
        int level = q.front().second;
        q.pop();
        
        if(m.find(level) == m.end()) {
            m[level] = temp->data;
        }
        
        if(temp->left) q.push({temp->left, level + 1});
        if(temp->right) q.push({temp->right, level + 1});
    }
    
    cout << "Left View: ";
    for(auto p : m) {
        cout << p.second << " ";
    }
    cout << endl;
}

void RightView(Node* root) {
    if(root == NULL) return;
    
    map<int, int> m;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    
    while(!q.empty()) {
        Node* temp = q.front().first;
        int level = q.front().second;
        q.pop();
        
        m[level] = temp->data;
        
        if(temp->left) q.push({temp->left, level + 1});
        if(temp->right) q.push({temp->right, level + 1});
    }
    
    cout << "Right View: ";
    for(auto p : m) {
        cout << p.second << " ";
    }
    cout << endl;
}

void DiagonalTraversal(Node* root) {
    if(root == NULL) return;
    
    map<int, vector<int>> m;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    
    while(!q.empty()) {
        Node* temp = q.front().first;
        int diagonal = q.front().second;
        q.pop();
        
        m[diagonal].push_back(temp->data);
        
        if(temp->left) q.push({temp->left, diagonal + 1});
        if(temp->right) q.push({temp->right, diagonal});
    }
    
    cout << "Diagonal Traversal: ";
    for(auto p : m) {
        for(int val : p.second) {
            cout << val << " ";
        }
    }
    cout << endl;
}




int main() {

    // Node* root = new Node(26);
    // root->left = new Node(10);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(6);
    // root->right->right = new Node(3);
    Node * root =  NULL;
    root = insertwithOutBst(root, 20);
    insertwithOutBst(root, 5);
    insertwithOutBst(root, 2);
    insertwithOutBst(root, 3);
    insertwithOutBst(root, 4);
    insertwithOutBst(root, 1);
    insertwithOutBst(root, 5);
    insertwithOutBst(root, 3);
    insertwithOutBst(root, 5);
    insertwithOutBst(root, 7);
    insertwithOutBst(root, 11);
    insertwithOutBst(root, 17);
    insertwithOutBst(root, 3);
    insertwithOutBst(root, 5);
    insertwithOutBst(root, 7);


    cout<<"Level Order Traversal "<< endl;
    LevelOrderTraversal(root);
    vector<int>ans;
    InOrderTraversal(root ,ans);
    int n = ans.size();
    cout<<"Print of InorderTravesal"<<endl;
    for(int i = 0; i<n;i++){



        
        cout<<ans[i] <<" ";
    }cout<<endl;
    cout<<"Print of Post Travesal"<<endl;
    postorder(root );
    cout<<endl;
    cout<<"Print of pre Travesal"<<endl;
    Preorder(root );
    cout<<endl;
    cout<<"Count of the Node "<<coutNode(root )<<endl;
    int count = 0;
    cout<<"Count of leaf Node " << countLeafNode(root , count)<<endl;
    cout<<"Hight of Tree "<< Hight(root)<<endl;
    cout<<"Daimeter of Tree "<< Diameter(root)<<endl;

    cout<<"DiameterFastCode of Tree "<<DiameterFastCode(root).first<<endl;

    int checkTree =  CheckBalanceTreeFastcode(root).first;

    if(checkTree){
        cout<<"This is Given a Blance Tree"<<endl;
    }
    else{
        cout<<"This is Give a Tree Not Blance"<<endl;
    }


    cout<<"sum of Tree "<<sum(root) <<endl;
    cout << "Normal Sum Tree Check: ";
    if(isSumTree(root)){
     cout << "Yes" <<endl;
    }
    else{

    cout << "No"<<endl;
    }

    cout << "Optimized Sum Tree Check: ";
    if(IsSumTreeFastCode(root).first) cout << "Yes\n";
    else cout << "No\n";
    
    
    cout<<"Zig Zag Travesal"<<endl;
    vector<int> Traversal = ZigZagTravesal(root);
    for(int i = 0; i<Traversal.size(); i++){
        cout<< Traversal[i]<< " ";
    }
    cout<<endl;
    ans = boundaryTraversal(root);

    cout << "Boundary Traversal: "<<endl;
    for(int x : ans) cout << x << " ";
    cout<<endl;
    TopView(root);
    BottomView(root);
    LeftView(root);
    RightView(root);
    DiagonalTraversal(root);

    // int checkIdentail =  IndentailTree(root , root2);
    // if(checkIdentail){
    //     cout<<"This is a Indentail Tree "<< endl;
    // }
    // else{
    //     cout<<"This is A Not Indentail Tree"<<endl;
    // }

}