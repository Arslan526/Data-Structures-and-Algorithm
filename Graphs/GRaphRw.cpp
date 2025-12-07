#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

// BFS helper
/*void BreathFirstSearch(unordered_map<int, list<int>> &adj,
                       unordered_map<int, bool> &vis,
                       vector<int> &ans, int node) {
    queue<int> q;
    q.push(node);
    vis[node] = true;

    while (!q.empty()) {
        int frontnode = q.front();
        q.pop();
        ans.push_back(frontnode);

        for (auto i : adj[frontnode]) {
            if (!vis[i]) {
                q.push(i);
                vis[i] = true;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> &edges) {
    unordered_map<int, list<int>> adj;

    // Prepare adjacency list
    for (auto &e : edges) {
        adj[e.first].push_back(e.second);
        adj[e.second].push_back(e.first);
    }

    unordered_map<int, bool> vis;
    vector<int> ans;

    for (int i = 0; i < vertex; i++) {
        if (!vis[i]) {
            BreathFirstSearch(adj, vis, ans, i);
        }
    }
    return ans;
}

// DFS
void dfs(int node, vector<vector<int>> &adj, vector<int> &ans, vector<bool> &vis) {
    vis[node] = true;
    ans.push_back(node);
    for (auto i : adj[node]) {
        if (!vis[i]) {
            dfs(i, adj, ans, vis);
        }
    }
}

vector<int> dfsOfGraph(vector<vector<int>> &adj) {
    vector<int> ans;
    int n = adj.size();
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, adj, ans, vis);
        }
    }
    return ans;
}

// Topological Sort using DFS
void topoDFS(int node, vector<bool> &vis, stack<int> &s,
             unordered_map<int, list<int>> &adj) {
    vis[node] = true;
    for (auto i : adj[node]) {
        if (!vis[i]) {
            topoDFS(i, vis, s, adj);
        }
    }
    s.push(node);
}

vector<int> FindTopologicalSort(int v, vector<pair<int,int>> &edges) {
    unordered_map<int, list<int>> adj;
    for (auto &e : edges) {
        int u = e.first;
        int vv = e.second;
        adj[u].push_back(vv);
    }

    vector<bool> vis(v, false);
    stack<int> s;

    for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            topoDFS(i, vis, s, adj);
        }
    }

    vector<int> ans;
    while (!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

// Kahn's Algorithm (BFS for topo sort)
vector<int> topoSort(int V, vector<vector<int>>& edges) {
    unordered_map<int, list<int>> adj;

    // Build adjacency list
    for (int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v); // u -> v
    }

    // Step 1: Compute indegree
    vector<int> ind(V, 0);
    for (auto& i : adj) {
        for (auto& j : i.second) {
            ind[j]++;
        }
    }

    // Step 2: Push all nodes with indegree 0
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (ind[i] == 0) {
            q.push(i);
        }
    }

    // Step 3: Process queue
    vector<int> ans;
    while (!q.empty()) {
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for (auto& i : adj[front]) {
            ind[i]--;
            if (ind[i] == 0) q.push(i);
        }
    }

    return ans;
}*/

int main() {
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    int V = 5; // total vertices
    int src = 0, dest = 4;

    int ans = g.shortestPathDFS(V, src, dest);
    if (ans != -1)
        cout << "Shortest path length: " << ans << endl;
    else
        cout << "No path found!" << endl;

    
    /*int V = 6;
    vector<vector<int>> edges = {{5, 0}, {5, 2}, {4, 0}, {4, 1}, {2, 3}, {3, 1}};

    // Convert for BFS and DFS
    vector<pair<int,int>> edgePairs;
    for (auto &e : edges) {
        edgePairs.push_back({e[0], e[1]});
    }

    cout<<"Topological Sort (Kahn's Algorithm): "<<endl;
    vector<int> result = topoSort(V, edges);
    for (int x : result) cout << x << " ";
    cout << endl;

    cout << "BFS Traversal: " <<endl;
    vector<int> bfsRes = BFS(V, edgePairs);
    for (auto x : bfsRes) cout << x << " ";
    cout << endl;

    cout << "Topological Sort (DFS method): ";
    vector<int> topo = FindTopologicalSort(V, edgePairs);
    for (auto x : topo) cout << x << " ";
    cout << endl;*/
    

    return 0;
}
     