class Solution {
public:
    void solve(vector<vector<int>>& image, int sr, int sc, int old, int color, int row, int col){
        if(sr < 0 || sc < 0 || sr > row || sc > col || image[sr][sc] != old) return;
        
        image[sr][sc] = color;
        solve(image, sr-1, sc, old, color, row, col);
        solve(image, sr+1, sc, old, color, row, col);
        solve(image, sr, sc-1, old, color, row, col);
        solve(image, sr, sc+1, old, color, row, col);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image.size() == 0) return image;
        int old = image[sr][sc];
        if(old == color) return image;
        int row = image.size()-1;
        int col = image[0].size()-1;
        // if (old = color) return image;
        solve(image, sr, sc, old, color, row, col);
        return image;
    }
};