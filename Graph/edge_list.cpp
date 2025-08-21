#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> edges; // vector of pairs to store edges
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    for(auto e : edges){
        cout << e.first << " " << e.second << endl;
    }
}