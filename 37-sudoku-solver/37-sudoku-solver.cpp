class Solution {
public:
    bool isValid(vector<vector<char>>& board, int& row, int& col, char& c){
        for(int i = 0; i < 9; i++){
// checking for the repeating element in the row
            if(board[i][col] == c)
                return false;

// checking for the repeating element in the column
            if(board[row][i] == c)
                return false;
            
// check for repeating character diagonally using a formula
            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == c)
                return false;
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
//      We traverse through the board
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                
//           We check if the character is empty
                if(board[i][j] == '.')
                {
//                if empty then we try out 1 - 9 characters and see if they are valid or not
                    for(char c = '1'; c <= '9'; c++){
                        if(isValid(board, i, j, c)){
                            board[i][j] = c; // if valid we set them in the board
                            
                            if(solve(board) == true){
                                return true; // and after setting we do a new recursive call
                            }
                            else {
                                board[i][j] = '.'; // else if not set, we set the position back to an empty space
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};