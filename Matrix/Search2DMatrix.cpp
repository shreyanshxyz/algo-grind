// Brute Force

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        for(int i = 0; i < r; i++){
            for(int j = i; j < c; j++){
                if (matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};

// TC === o(n x m)
// SC === O(1)

// ---------------------------------------------------------------------------------------------------------------------------------

// Better

    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i = 0, j = matrix.size() - 1;
        while(i >= 0 && j >= 0 && j < m && i < n){
            if(matrix[i][j] == x){
                return 1;
            }
            if(matrix[i][j] > x){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
    }

//  Optimal (Binary Search)