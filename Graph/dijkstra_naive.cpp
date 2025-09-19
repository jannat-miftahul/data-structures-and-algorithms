#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[1005]; // adjacency list
int dist[1005]; // distance array

void dijkstra(int src) {
    queue<pair<int, int>> q; // {node, distance}
    q.push({src, 0});
    dist[src] = 0;

    while(!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        int node = par.first;
        int dis = par.second;

        for(auto it : adj[node]) {
            int child = it.first;
            int edge_dis = it.second;

            if(dis + edge_dis < dist[child]) {
                dist[child] = dis + edge_dis;
                q.push({child, dist[child]});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while(e--){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // for undirected graph
    }

    for(int i = 0; i < n; i++) 
        dist[i] = INT_MAX;
    dijkstra(0);

    for(int i = 0; i < n; i++) 
        cout << i << " -> " << dist[i] << endl;
}