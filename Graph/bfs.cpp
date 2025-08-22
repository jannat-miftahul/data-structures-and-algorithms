#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005]; 
bool visited[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " "; // current node

        for(int ngbr : adj[node]){
            if(!visited[ngbr]){
                q.push(ngbr);
                visited[ngbr] = true;
            }
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
    bfs(0);

    return 0;
}