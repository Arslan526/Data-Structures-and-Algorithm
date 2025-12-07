#include<iostream> 
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode * children[26];
    bool isTreminal;
    TrieNode(char ch ){
        data = ch;
        for(int i =0; i<26;i++){
            children[i] = NULL;
        }
        isTreminal =  false;
    }

};
class Trie{
    public:
    TrieNode * root;
    Trie(){
        root = new TrieNode('\0');
    }

    void InsertUtil(TrieNode * root , string word){
        //  base case
        if(word.length() == 0){
            root ->isTreminal = true;
            return;
        }
        
        // Assuming word will be in CAPS
        int index = word[0] - 'A';
        TrieNode * child;

        // present 
        if(root ->children[index] != NULL){
            child =  root -> children[index];
        }
        else{
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // RECURISION 
        InsertUtil(child , word.substr(1));
    }
    void InsertWord(string word){
        InsertUtil(root , word);
    }


    bool searchUtil(TrieNode * root , string word){
         // base case
        if(word.length() == 0){
            return root ->isTreminal;
        }
        int index =  word[0] - 'A';
        TrieNode * child;

        // present 
        if(root ->children[index] != NULL){
            child = root ->children[index];
        }
        else{
        // absent 
          return false;
        }

         // RECURISION 
         return searchUtil(child , word.substr(1));
    }

    bool searchWord(string word){
    return searchUtil(root , word);
    }
     bool searchUtilPrefix(TrieNode * root , string word){
         // base case
        if(word.length() == 0){
            return 1;
        }
        int index =  word[0] - 'A';
        TrieNode * child;

        // present     
        if(root ->children[index] != NULL){
            child = root ->children[index];
        }
        else{
        // absent 
          return false;
        }

         // RECURISION 
         return searchUtilPrefix(child , word.substr(1));
    }

    bool startsWith(string prefix) {
        return searchUtilPrefix(root , prefix);
    }

};
int main(){
    Trie * t = new Trie();
    t->InsertWord("ABCD");
    t->InsertWord("ANSARI");
    t->InsertWord("ARSALAN");
    t->InsertWord("GULFAM");
    t->InsertWord("GUFRAN");

    cout<<"Present or Not "<< t->searchWord("ARSLAN") <<endl;
    return 0;
}   