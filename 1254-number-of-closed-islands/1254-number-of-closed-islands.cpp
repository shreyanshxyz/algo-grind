class Solution {
public:
int row;
int col;
    void dfs(int rows, int cols, vector<vector<int>> &grid)
    {
//         now if we find a piece of land connected to the border we change that 1 into 0, because its not of any use
        grid[rows][cols] = 2;
        
//         this is a simple dfs call that checks the left-right-top-bottom cells of that piece and sees if that is also a 1, if it is then the same process gets conducted with it as well because it is connected to the cell touching the boundary.
        if (rows > 0 && grid[rows - 1][cols] == 0)
        {
            dfs(rows - 1, cols, grid);
        }
        if (rows < row - 1 && grid[rows + 1][cols] == 0)
        {
            dfs(rows + 1, cols, grid);
        }
        if (cols > 0 && grid[rows][cols - 1] == 0)
        {
            dfs(rows, cols - 1, grid);
        }
        if (cols < col - 1 && grid[rows][cols + 1] == 0)
        {
            dfs(rows, cols + 1, grid);
        }
    }
    
    void solve(int i, int j, int row, int col, vector<vector<int>>& grid){
        if(i < 0 || i > row || j < 0 || j > col) return;
        if(grid[i][j] == 1 || grid[i][j] == 2) return;
        grid[i][j] = 2;
        
        solve(i+1, j, row, col, grid);
        solve(i, j+1, row, col, grid);
        solve(i-1, j, row, col, grid);
        solve(i, j-1, row, col, grid);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        
        row = grid.size();
        col = grid[0].size();
        int ans = 0;
//         Traverse top and bottom rows for corner islands & set them to 1 since they are not closed off
        for (int i = 0; i < row; i++)
        {
            if (grid[i][0] == 0)
            {
                dfs(i, 0, grid);
            }
            if (grid[i][col - 1] == 0)
            {
                dfs(i, col - 1, grid);
            }
        }
        
        
//         We check for the left column and right column to see if a piece of land exists with connections to the boundary
//         Since corners (0,0) and (n - 1, m - 1) where checked in previous cycle, skip them in this one
        for (int j = 1; j < col - 1; j++)
        {
            if (grid[0][j] == 0)
            {
                dfs(0, j, grid);
            }
            if (grid[row - 1][j] == 0)
            {
                dfs(row - 1, j, grid);
            }
        }
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 0){
                    solve(i, j, row, col, grid);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};