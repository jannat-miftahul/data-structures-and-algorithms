// https://codeforces.com/problemset/problem/25/D
// D. Roads not only in Berland - Codeforces Beta Round 25 (Div. 2)
// Method: DSU (Disjoint Set Union)

#include<bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

int find(int node){    // O(logN)
    if(par[node] == -1) 
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2){
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(leader1 == leader2) return;

    if(group_size[leader1] >= group_size[leader2]){
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else{
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        par[i] = -1;
        group_size[i] = 1;
    }

    vector<pair<int, int>> rmv; // to store the removed edges
    vector<pair<int, int>> add; // to store the added edges

    for(int i=0; i<n-1; i++){
        int a, b;
        cin >> a >> b;
        int leader_a = find(a);
        int leader_b = find(b);

        if(leader_a == leader_b){
            rmv.push_back({a, b});
        }
        else 
            dsu_union(a, b);
    }

    for(int i=2; i<=n; i++){
        int leader1 = find(1);
        int leaderi = find(i);
        if(leader1 != leaderi){
            add.push_back({1, i});
            dsu_union(1, i);
        }
    }

    cout << rmv.size() << "\n";
    for(int i=0; i<rmv.size(); i++){
        cout << rmv[i].first << " " << rmv[i].second << " " << add[i].first << " " << add[i].second << "\n";
    }

    return 0;
}