class Solution {
public:
    void solve(int i, int j, int row, int col, vector<vector<bool>>&visited, vector<vector<char>>&grid){
        if (i < 0 || i >= row || j < 0 || j >= col) return; //boundary check base cases
        if (grid[i][j] == '0' || visited[i][j] == true) return; // checking if it is a 0 or it has already been visited
//         mark it as visited
        visited[i][j] = true;
//         run the dfs on all 4 directions
        solve(i+1, j, row, col, visited, grid);
 		solve(i, j+1, row, col, visited, grid);
 		solve(i-1, j, row, col, visited, grid);
 		solve(i, j-1, row, col, visited, grid);

    }
    
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int isl = 0;
        
        int row = grid.size();
        int col = grid[0].size();
//         we create a visited array
        vector<vector<bool>>visited(row, vector<bool>(col, false));
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '1' && !visited[i][j]){
//                     as soon as we find a 1, we iterate around it using DFS to get the whole island
                    solve(i, j, row, col, visited, grid);
//                     we add an island if we return from the dfs
                    isl++;
                }
            }
        }
        
        return isl;
    }
};