#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u  , int v , bool direction){
    // derectior = 0 -> underiction
    // inderection = 1 -> dericted graph
    
    //  create an edge from u To v
    adj[u].push_back(v);
    if(direction == 0){
        adj[v].push_back(u);
      }
}
void printAddjList(){
    for(auto i : adj){
        cout<< i.first << "-> ";
        for(auto j : i.second){
            cout<< j;
        }cout<<endl;
    }
}

};

void prepareAdjList(vector<pair<int,int>>&edges , unordered_map<int , list<int>>&adj){
    int n  = edges.size();
    for(int i =0; i<n;i++){
        int  u = edges[i].first;
        int  v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void BreathFirstSearh(unordered_map<int , list<int>>&adj ,
                      unordered_map<int , bool>&vis, vector<int>&ans , int node ){
    queue<int>q;
    q.push(node);
    vis[node] = true;

    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);

        for(auto i : adj[frontnode]){
            if(!vis[i]){
                q.push(i);
                vis[i] = true;
            }
        }
    }
}
int main(){
    Graph g;
    int num;
    cout<<"Enter the number Node "<< endl;
    cin>> num;
    int adg;
    cout<<"Enter the Adg "<< endl;
    cin>>adg;
    cout<<"Enter the Vlaue of V , U"<<endl;
    for(int i = 0; i<adg;i++){
        int u  , v;
        cin>> u >> v;
        //create the graph unorderd7r 
        g.addEdge(u , v , 0);

    }
    g.printAddjList();
    


    return 0;
}