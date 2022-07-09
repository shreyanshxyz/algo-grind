// This question is similar to LC: 130 - Surrounded regions so we follow a similar approach
class Solution {
public:
    int row;
    int col;
    void dfs(int rows, int cols, vector<vector<int>> &board)
    {
//         now if we find a piece of land connected to the border we change that 1 into 0, because its not of any use
        board[rows][cols] = 0;
        
//         this is a simple dfs call that checks the left-right-top-bottom cells of that piece and sees if that is also a 1, if it is then the same process gets conducted with it as well because it is connected to the cell touching the boundary.
        if (rows > 0 && board[rows - 1][cols] == 1)
        {
            dfs(rows - 1, cols, board);
        }
        if (rows < row - 1 && board[rows + 1][cols] == 1)
        {
            dfs(rows + 1, cols, board);
        }
        if (cols > 0 && board[rows][cols - 1] == 1)
        {
            dfs(rows, cols - 1, board);
        }
        if (cols < col - 1 && board[rows][cols + 1] == 1)
        {
            dfs(rows, cols + 1, board);
        }
    }
    
    int numEnclaves(vector<vector<int>>& board) {
        if (board.size() == 0) return 0;
        
//         We get our rows and columns of the matrix & a count variable to count the movalble enclaves
        row = board.size();
        col = board[0].size();
        int cnt = 0;
        
        
//         We check for the left column and right column to see if a piece of land exists with connections to the boundary
        for (int i = 0; i < row; i++)
        {
            if (board[i][0] == 1)
            {
                dfs(i, 0, board);
            }
            if (board[i][col - 1] == 1)
            {
                dfs(i, col - 1, board);
            }
        }
        
        
//         We check for the left column and right column to see if a piece of land exists with connections to the boundary
//         Since corners (0,0) and (n - 1, m - 1) where checked in previous cycle, skip them in this one
        for (int j = 1; j < col - 1; j++)
        {
            if (board[0][j] == 1)
            {
                dfs(0, j, board);
            }
            if (board[row - 1][j] == 1)
            {
                dfs(row - 1, j, board);
            }
        }
        
        
// After all our dfs calls are done for the boundary cells and the ones connected to them, we simply iterate through the grid and
        for (auto i = 0; i < row; i++)
        {
            for (auto j = 0; j < col; j++)
            {
// if we still have a valid piece of land not touching a boundary or a boundary related cell, we add it to our count
                if (board[i][j] == 1)
                {
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};