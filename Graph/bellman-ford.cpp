#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int dist[10005];
vector<Edge> edges; // edge list
int n, e;

void bellmanFord() {
    for(int i = 1; i <= n - 1; i++) { // relax all edges n-1 times
        for(auto edge : edges) {
            int u = edge.u;
            int v = edge.v;
            int w = edge.w;
            if(dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
}

int main() {
    cin >> n >> e;

    while(e--){
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    for(auto edge : edges){
        cout << edge.u << " " << edge.v << " " << edge.w << endl;
    }

    for(int i = 0; i < n; i++)
        dist[i] = INT_MAX;
    dist[0] = 0; // source node

    bellmanFord();

    cout << "Shortest distances from source node 0:" << endl;
    for(int i = 0; i < n; i++){
        cout << i << " -> " << dist[i] << endl;
    }

   return 0;
}