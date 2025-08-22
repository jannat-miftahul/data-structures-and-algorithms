#include <bits/stdc++.h>
using namespace std;

char grid[100][100];
bool visited[100][100];
vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;

bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m) 
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();

        int pi = par.first;
        int pj = par.second;
        cout << pi << ' ' << pj << endl;

        for(int i=0; i<4; i++){
            int ni = pi + dir[i].first;
            int nj = pj + dir[i].second;
            if(valid(ni, nj) && !visited[ni][nj]){
                visited[ni][nj] = true;
                q.push({ni, nj});
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;
    memset(visited, false, sizeof(visited));
    bfs(si, sj);

    return 0;
}