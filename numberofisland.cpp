#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
public:
    void bfs(int row, int col, vector<vector<char>>& grid,
             vector<vector<int>>& vis) {
        
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;
        q.push({row, col});
        vis[row][col] = 1;

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int r = it.first;
            int c = it.second;

            for (int k = 0; k < 4; k++) {
                int nr = r + delRow[k];
                int nc = c + delCol[k];

                if (nr >= 0 && nr < n &&
                    nc >= 0 && nc < m &&
                    grid[nr][nc] == '1' &&
                    !vis[nr][nc]) {

                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == '1' && !vis[i][j]) {
                    cnt++;
                    bfs(i, j, grid, vis);
                }
            }
        }

        return cnt;
    }
};