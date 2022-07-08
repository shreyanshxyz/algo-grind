class Solution {
public:
int row;
int col;
    void dfs(int rows, int cols, vector<vector<char>>& board) {
        board[rows][cols] = 'T';
        if (rows > 0 && board[rows - 1][cols] == 'O') {
            dfs(rows - 1, cols, board);
        }
        if (rows < row - 1 && board[rows + 1][cols] == 'O') {
            dfs(rows + 1, cols, board);
        }
        if (cols > 0 && board[rows][cols - 1] == 'O') {
            dfs(rows, cols - 1, board);
        }
        if (cols < col - 1 && board[rows][cols + 1] == 'O') {
            dfs(rows, cols + 1, board);
        }
    }
    
    void solve(vector<vector<char>>& board) {
        row=board.size();
        if(row == 0)
        	return;
        col=board[0].size();
        
        // we check left and right borders of the board
        for (int i = 0; i < row; i++) {
            if (board[i][0] == 'O') {
                dfs(i, 0, board);
            }
            if (board[i][col - 1] == 'O') {
                dfs(i, col - 1, board);
            }
        }
        // we check up and down borders of the board
        // and corners (0,0) and (n - 1, m - 1) where checked in previous cycle, skip them in this one
        for (int j = 1; j < col - 1; j++) {
            if (board[0][j] == 'O') {
                dfs(0, j, board);
            }
            if (board[row - 1][j] == 'O') {
                dfs(row - 1, j, board);
            }
        }
        
        // iterate the whole board and flip all 'T' cells back into 'O' and all 'O' cell to 'X'
        for (auto i = 0; i < row; i++) {
            for (auto j = 0; j < col; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                else if (board[i][j] == 'T') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};