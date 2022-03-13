// Brute
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here          
        vector<int> sorto;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                sorto.push_back(matrix[i][j]);
            }
        }
        
        sort(sorto.begin(), sorto.end());
        
        return sorto[sorto.size()/2];
    }
};

// Optimal ?(If Any)