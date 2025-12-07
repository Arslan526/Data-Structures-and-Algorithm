#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>

using namespace std;
void dfs(int node , int parent , vector<int>&dist , vector<int> & low ,  unordered_map<int , bool>&vis , 
unordered_map<int , list<int , int>> &adj , vector<int> &ap , int & timer ){
    vis[node] =  true;
    int child = 0;
    dist[node] = low[node] = timer++;
    for(auto i : adj[node]){
        if(i == parent){
            continue;
        }
        if(!vis[i]){
            dfs(i , node , dist , low , vis  , adj , ap  , timer );

            low[node] = min(low[node] , low[i]);
            if(low[i] >= dist[node] && parent != -1){
                ap[node] = 1;
            }
            child++;
        }
        else{
            low[node] = min(low[ode] , dist[i]);
        }
    }
    if(parent == -1 && child > 1){
        ap[node] = 1;
    }
}
int main(){
    int n = 5;
    int e = 5;
    vector<pair<int , int >> edge;
    edge.push_back(make_pair(0 , 3));
    edge.push_back(make_pair(3 , 4));
    edge.push_back(make_pair(0 , 4));
    edge.push_back(make_pair(0 , 1));
    edge.push_back(make_pair(1 , 2));
    //  crete the adj list
    unordered_map<int , list<int , int>> adj;
    for(int i = 0; i<edge.size();i++){
        int u = edge[i][0];
        int v = edge[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dist(n);
    vector<int>low(n);
    unordered_map<int , bool>vis;
    int timer = -1;
    vector<int> ap(n , 0);
    for(int i = 0; i<n;i++){
        dist[i] = -1;
        low[i] = -1;
    }
    // do dfs 
    for(int i = 0; i<n;i++){
        if(!vis[i]){
        dfs(i , -1 , dist , low , vis , adj , ap , timer);
    }
 }
// print  ap;
for(int i = 0; i<n;i++){
cout<<"Articular point  are as flows"<< endl;
  for(int  i = 0; i<n;i++){
    if(ap[i] != 0){
        cout<< i <<endl;
    }
  }cout<<endl;
}

    return 0;
}