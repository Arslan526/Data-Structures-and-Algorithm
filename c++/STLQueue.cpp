#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Arslan");
    q.push("Ansari");
    q.push("Boy");
    cout<<"First Element "<<q.front()<< endl;
    cout<<"size of Queue "<< q.size()<< endl;

    q.pop();
    

    cout<<"First Element "<<q.front()<< endl;
    cout<<"Empty or not "<< q.empty()<< endl;
    return 0;
}