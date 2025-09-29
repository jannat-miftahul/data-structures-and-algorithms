#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m) 
        return false;
    if(visited[i][j] || grid[i][j] == '#')
        return false;
    return true;
}

bool bfs(int si, int sj, int di, int dj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    parent[si][sj] = {-1, -1};

    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();

        int pi = par.first;
        int pj = par.second;        
        if(pi == di && pj == dj){
            return true;
        }

        for(int i = 0; i < 4; i++){
            int ni = pi + dir[i].first;
            int nj = pj + dir[i].second;

            if(valid(ni, nj)){
                q.push({ni, nj});
                visited[ni][nj] = true;
                parent[ni][nj] = {pi, pj};
            }
        }
    }
    
    return false;
}

int main() {
    cin >> n >> m;

    int si, sj, di, dj;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'R') {
                si = i; sj = j;
            }
            if(grid[i][j] == 'D') {
                di = i; dj = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    if(bfs(si, sj, di, dj)){
        int x = di, y = dj;
    
        while(parent[x][y].first != -1){
            int px = parent[x][y].first;
            int py = parent[x][y].second;
            
            if(px != si || py != sj){
                grid[px][py] = 'X';
            }
            x = px;
            y = py;
        } 
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}



// Sample Input 0
// 5 6
// ...D.#
// .##..#
// ....#.
// .R#...
// .#.##.

// Sample Output 0
// ...D.#
// .##X.#
// .XXX#.
// .R#...
// .#.##.


// Sample Input 1
// 5 6
// ...D.#
// .R...#
// ....#.
// ..#...
// .#.##.

// Sample Output 1
// ...D.#
// .RXX.#
// ....#.
// ..#...
// .#.##.


// Sample Input 2
// 5 6
// ...D.#
// .....#
// .##.#.
// .R#...
// .#.##.

// Sample Output 2
// ...D.#
// XXXX.#
// X##.#.
// XR#...
// .#.##.


// Sample Input 3
// 5 6
// ...D.#
// .....#
// ###.#.
// .R#...
// .#.##.

// Sample Output 3
// ...D.#
// .....#
// ###.#.
// .R#...
// .#.##.