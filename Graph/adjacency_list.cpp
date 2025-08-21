#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> adj[n]; // array of vectors
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }

    for(int i = 0; i < n; i++){
        cout << i << ": ";
        for(int j : adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}