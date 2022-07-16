class Solution {
public:
int row;
int col;
    void dfs(int i, int j, vector<vector<int>> &grid)
    {
        if(i < 0 || j < 0 || j >= col || i >= row || grid[i][j] != 0) return;
// (3)        now if we find a piece of land connected to the border we change that 1 into 2, because its not of any use
        grid[i][j] = 2;
        
// (4)       this is a simple dfs call that checks the left-right-top-bottom cells of that piece and sees if that is also a 1, if it is then the same process gets conducted with it as well because it is connected to the cell touching the boundary.
//         this way we eliminate all the cells connected to the boundary
            dfs(i - 1, j, grid);
            dfs(i + 1, j, grid);
            dfs(i, j - 1, grid);
            dfs(i, j + 1, grid);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        
        row = grid.size();
        col = grid[0].size();
        int ans = 0;
        
// (1)         Traverse top and bottom i for corner islands & set them to 1 since they are not closed off
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
        
        
// (2)        We check for the left column and right column to see if a piece of land exists with connections to the boundary
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
        
// (5)   Now we start iterating through our matrix, as soon as we find a 0, it wont be in the borders so its obviously closed, so we increment our answer by 1 for that piece of island and then iterate through it with the help of our dfs function created above. we do this for all the central/non border connected cells and we eventually get our answer.
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 0){
                    dfs(i, j, grid);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};