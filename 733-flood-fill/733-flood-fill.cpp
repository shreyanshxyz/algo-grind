class Solution {
public:
    void solve(vector<vector<int>>& image, int sr, int sc, int old, int color, int row, int col){
        if(sr<0 || sr>=image.size() || sc<0 || sc>= image[0].size() || image[sr][sc] == col || image[sr][sc] != old)
        {
            return;
        }
        image[sr][sc] = color;
        
        if(sr > 0 && image[sr-1][sc] == old) solve(image, sr-1, sc, old, color, row, col);
        if(sr < row-1 && image[sr+1][sc] == old) solve(image, sr+1, sc, old, color, row, col);
        if(sc > 0 && image[sr][sc-1] == old) solve(image, sr, sc-1, old, color, row, col);
        if(sc < col-1 && image[sr][sc+1] == old) solve(image, sr, sc+1, old, color, row, col);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old = image[sr][sc];
        if(old == color) return image;
        if(image.size() == 0) return image;
        
        int row = image.size();
        int col = image[0].size();
        
        solve(image, sr, sc, old, color, row, col);
        return image;
    }
};