#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool visited[105][105];
int level[105][105];
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
    level[si][sj] = 0;

    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();

        int pi = par.first;
        int pj = par.second;
        cout << pi << ' ' << pj << endl;

        for(int i=0; i<4; i++){
            int ni = pi + dir[i].first;
            int nj = pj + dir[i].second;
            
            if(valid(ni, nj) && !visited[ni][nj] && grid[ni][nj] != '.'){
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[pi][pj] + 1;
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

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    bfs(si, sj);
    cout << level[di][dj] << endl;

    return 0;
}