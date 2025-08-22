#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005]; 
bool visited[1005];

void dfs(int src) {
    cout << src << " "; // current node
    visited[src] = true;

    for(int ngbr : adj[src]){
        if(!visited[ngbr]){
            dfs(ngbr); // recursive call
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }

    memset(visited, false, sizeof(visited));
    dfs(0);

    return 0;
}