class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), area = 0;
        
// (2)         We iterate through the matrix and if an element is 1, we then call a dfs function for it
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    int a = 0;
                    solve(grid, i, j, a);
// (3)                     then the max area is calculated
                    area = max(area, a);
                }
            }
        }
        return area;
    }

    void solve(vector<vector<int>>& grid, int i, int j, int& a) {
        int m = grid.size(), n = grid[0].size();
        if (i >= 0 && i < m && j >= 0 && j < n && grid[i][j]) {
// (1)             we increment our a for every connected cell to our first element
            a++;
            grid[i][j] = 0;            
            solve(grid, i - 1, j, a);
            solve(grid, i + 1, j, a);
            solve(grid, i, j - 1, a);
            solve(grid, i, j + 1, a);
        }
    }
};