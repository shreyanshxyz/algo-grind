class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<int>d1(row, -1);
        vector<int>c1(col, -1);
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    d1[i] = 0;
                    c1[j] = 0;
                }
            }
        }
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(d1[i] == 0 || c1[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};